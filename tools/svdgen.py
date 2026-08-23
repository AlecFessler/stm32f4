import fnmatch
import re
import shutil
import xml.etree.ElementTree as ET
from collections import defaultdict
from pathlib import Path

import yaml

access_str_map = {
    "read-write": "Access::RW",
    "read-only": "Access::RO",
    "write-only": "Access::WO",
}

FIELD_RE = re.compile(r"([A-Za-z_]+?)(\d+)")

# Enum member names come from the vendor patch files and can collide with C++
# keywords and alternative operator tokens (break, long, short, protected, xor).
CPP_KEYWORDS = frozenset(
    [
        "alignas",
        "alignof",
        "and",
        "and_eq",
        "asm",
        "auto",
        "bitand",
        "bitor",
        "bool",
        "break",
        "case",
        "catch",
        "char",
        "char8_t",
        "char16_t",
        "char32_t",
        "class",
        "compl",
        "concept",
        "const",
        "consteval",
        "constexpr",
        "constinit",
        "const_cast",
        "continue",
        "co_await",
        "co_return",
        "co_yield",
        "decltype",
        "default",
        "delete",
        "do",
        "double",
        "dynamic_cast",
        "else",
        "enum",
        "explicit",
        "export",
        "extern",
        "false",
        "float",
        "for",
        "friend",
        "goto",
        "if",
        "inline",
        "int",
        "long",
        "mutable",
        "namespace",
        "new",
        "noexcept",
        "not",
        "not_eq",
        "nullptr",
        "operator",
        "or",
        "or_eq",
        "private",
        "protected",
        "public",
        "register",
        "reinterpret_cast",
        "requires",
        "return",
        "short",
        "signed",
        "sizeof",
        "static",
        "static_assert",
        "static_cast",
        "struct",
        "switch",
        "template",
        "this",
        "thread_local",
        "throw",
        "true",
        "try",
        "typedef",
        "typeid",
        "typename",
        "union",
        "unsigned",
        "using",
        "virtual",
        "void",
        "volatile",
        "wchar_t",
        "while",
        "xor",
        "xor_eq",
    ]
)


def cpp_identifier(name):
    """Trailing underscore on anything that would otherwise be a keyword."""
    return f"{name}_" if name in CPP_KEYWORDS else name


def load_yaml(path):
    with open(path) as f:
        return yaml.safe_load(f) or {}


def peripheral_signature(peripheral, derivation_map):
    """Register layout, for deciding which peripherals share an enum set."""
    src = resolve(peripheral, derivation_map)
    return tuple(
        (
            register.findtext("name"),
            register.findtext("addressOffset"),
            tuple(
                (f.findtext("name"), f.findtext("bitOffset"), f.findtext("bitWidth"))
                for f in register.findall("fields/field")
            ),
        )
        for register in src.findall("registers/register")
    )


def load_enum_files(enumdir, peripherals, derivation_map):
    """peripheral -> frozenset(fields/*.yaml paths) from the device yaml"""
    device = load_yaml(enumdir / "stm32f429.yaml")
    names = [p.findtext("name", "MISSING") for p in peripherals]

    # _modify can rename a peripheral, so a yaml key may not be an SVD name
    renames = {
        v["name"]: k
        for k, v in (device.get("_modify") or {}).items()
        if isinstance(v, dict) and "name" in v
    }

    files = defaultdict(set)
    for key, value in device.items():
        if key.startswith("_") or not isinstance(value, dict):
            continue
        includes = value.get("_include", [])
        includes = [includes] if isinstance(includes, str) else includes
        # patches/ and collect/ do fixups and array grouping, not enum values
        paths = {i for i in includes if i.startswith("fields/")}
        if not paths:
            continue
        pattern = renames.get(key, key)
        # keys are shell globs (OTG_FS_*, GPIO[ABK]), not regexes
        for name in names:
            if fnmatch.fnmatchcase(name, pattern):
                files[name] |= paths

    # The yaml names only what stm32-rs treats as base types, and its derivation
    # model is not the SVD's (it rebases I2C1/USART1). Propagate by identical
    # register layout instead: GPIO[ABK] names three ports, eleven share a layout.
    by_signature = defaultdict(set)
    for peripheral in peripherals:
        by_signature[peripheral_signature(peripheral, derivation_map)] |= files[
            peripheral.findtext("name", "MISSING")
        ]
    return {
        peripheral.findtext("name", "MISSING"): frozenset(
            by_signature[peripheral_signature(peripheral, derivation_map)]
        )
        for peripheral in peripherals
    }


def enum_namespaces(field_glob, spec):
    """Namespaces for one value set.

    _name wins when the yaml gives one. Otherwise the key is a glob, and it may
    be a comma-separated list of them (BKP,BK2P) naming several fields that
    share the same values, so each becomes its own namespace.
    """
    if isinstance(spec, dict) and "_name" in spec:
        return [str(spec["_name"]).lower()]
    names = []
    for glob in field_glob.split(","):
        # globs use * ? [ ] and a leading ?~ for optional-match
        name = re.sub(r"[^A-Za-z0-9_]", "", glob).lower()
        if name and name not in names:
            names.append(name)
    return names


def collect_enum_values(spec):
    """{ValueName: [value, description]} -> {name: value}, unwrapping the
    _read / _write variants and skipping directives."""
    if not isinstance(spec, dict):
        return {}
    if "_read" in spec or "_write" in spec:
        merged = {}
        for variant in ("_read", "_write"):
            merged.update(collect_enum_values(spec.get(variant, {})))
        return merged
    values = {}
    for name, entry in spec.items():
        if name.startswith("_"):
            continue
        value = entry[0] if isinstance(entry, list) and entry else entry
        if isinstance(value, int):
            values[cpp_identifier(str(name).lower())] = value
    return values


def load_enum_values(enumdir, paths):
    """-> {namespace: {member: value}}"""
    out = {}
    seen = set()

    def visit(rel):
        if rel in seen:
            return
        seen.add(rel)
        document = load_yaml(enumdir / rel)
        includes = document.get("_include", [])
        includes = [includes] if isinstance(includes, str) else includes
        for include in includes:
            visit(str(Path(rel).parent / include))

        for register_glob, register_spec in document.items():
            if register_glob.startswith("_") or not isinstance(register_spec, dict):
                continue
            for field_glob, spec in register_spec.items():
                if field_glob.startswith("_"):
                    continue
                # a list here is a bit-range spec, not a set of values
                values = collect_enum_values(spec)
                if not values:
                    continue
                for namespace in enum_namespaces(field_glob, spec):
                    if namespace in out and out[namespace] != values:
                        continue
                    out[namespace] = values

    for path in sorted(paths):
        visit(path)

    return out


def text(element, tag):
    """Collapse the hard-wrapped whitespace the SVD uses in descriptions."""
    return " ".join(element.findtext(tag, "").split())


def build_derivation_map(peripherals):
    """name -> peripheral element, for resolving derivedFrom."""
    return {p.findtext("name", "MISSING"): p for p in peripherals}


def resolve(peripheral, derivation_map):
    """A derived peripheral carries only name and baseAddress; everything else
    lives on the peripheral it derives from."""
    derived_from = peripheral.get("derivedFrom")
    return derivation_map[derived_from] if derived_from else peripheral


def build_groups(peripherals, derivation_map):
    """SVD groupName -> [peripheral names]. Groups with more than one member
    get a subdirectory and an aggregate header."""
    groups = defaultdict(list)
    for peripheral in peripherals:
        src = resolve(peripheral, derivation_map)
        groups[src.findtext("groupName")].append(peripheral.findtext("name", "MISSING"))
    return groups


def uniform_groups(groups, enum_files):
    """Group names whose members all share one enum file set, so the values can
    live once in the aggregate instead of being repeated per member."""
    return {
        group_name
        for group_name, members in groups.items()
        if len(members) > 1 and len({enum_files[m] for m in members}) == 1
    }


def sorted_registers(peripheral):
    """The SVD does not list registers in address order."""
    registers = peripheral.findall("registers/register")
    registers.sort(key=lambda reg: int(reg.findtext("addressOffset", "0"), 0))
    return registers


def classify_fields(register):
    """Split a register's fields into indexable families and everything else.

    A family becomes an array when its names share a stem with a trailing
    integer, there are >= 4 of them, and the indices run contiguously from 0.
    Anything else falls back to a named constant.
    """
    families = defaultdict(dict)
    singles = []
    for field in register.findall("fields/field"):
        match = FIELD_RE.fullmatch(field.findtext("name", "MISSING"))
        if match:
            families[match.group(1)][int(match.group(2))] = field
        else:
            singles.append(field)

    arrays = {}
    for name_prefix, members in families.items():
        if len(members) >= 4 and set(members) == set(range(len(members))):
            arrays[name_prefix] = members
        else:
            singles.extend(members.values())

    return arrays, singles


def field_mask(field):
    bit_offset = int(field.findtext("bitOffset", "0"), 0)
    bit_width = int(field.findtext("bitWidth", "0"), 0)
    return ((1 << bit_width) - 1) << bit_offset, bit_offset


def field_access(field, register_access):
    """Field access is usually absent; the SVD default is read-write."""
    return field.findtext("access") or register_access or "read-write"


def field_lines(
    peripheral_name, register_name, register_base, register_access, arrays, singles
):
    """constexpr Field definitions: arrays for families, scalars for the rest."""
    lines = []

    for name_prefix, members in arrays.items():
        access = field_access(members[0], register_access)
        lines.append(
            f"constexpr Field<{access_str_map[access]}> "
            f"{peripheral_name.lower()}_{register_name.lower()}_{name_prefix.lower()}"
            f"[{len(members)}] = {{"
        )
        for group_idx in range(len(members)):
            mask, bit_offset = field_mask(members[group_idx])
            lines.append(
                f"    {{0x{register_base:08X}u, 0x{mask:08X}u, {bit_offset}}},"
            )
        lines.append("};")

    for field in singles:
        field_name = field.findtext("name", "MISSING")
        access = field_access(field, register_access)
        mask, bit_offset = field_mask(field)
        lines.append(
            f"constexpr Field<{access_str_map[access]}> "
            f"{peripheral_name.lower()}_{register_name.lower()}_{field_name.lower()}"
            f"{{0x{register_base:08X}u, "
            f"0x{mask:08X}u, "
            f"{bit_offset}}};"
        )

    return lines


def enum_lines(namespace, values):
    """namespace gpio::mode {constexpr uint32_t input = 0b00, ...}"""
    lines = []
    for name in sorted(values):
        members = values[name]
        lines.append(f"namespace {namespace}::{name} {{")
        for member in sorted(members, key=lambda m: members[m]):
            lines.append(f"    constexpr uint32_t {member} = {members[member]};")
        lines.append("}")
    return lines


def struct_lines(peripheral_name, base, registers):
    """Debug-only register overlay, plus offsetof assertions.

    Returns (lines, asserts, ok). ok is False when two registers share an
    address, which one struct cannot express; the caller omits the struct.
    """
    lines = [
        "// The BASE and Regs struct are defined entirely for debug utility.",
        f"constexpr uintptr_t {peripheral_name.upper()}_BASE = 0x{base:08X};",
        f"struct {peripheral_name.capitalize()}Regs {{",
    ]
    asserts = []
    ok = True
    prev_offset = 0x0
    prev_size_bytes = 0
    reserved_fields = 0

    for register in registers:
        register_name = register.findtext("name", "MISSING")
        offset = int(register.findtext("addressOffset", "0"), 0)
        size = int(register.findtext("size", "0"), 0)

        gap_bytes = offset - prev_offset - prev_size_bytes
        assert gap_bytes % 4 == 0
        if gap_bytes > 0:
            lines.append(f"    uint32_t _reserved{reserved_fields}[{gap_bytes // 4}];")
            reserved_fields += 1
        elif gap_bytes < 0:
            ok = False

        lines.append(
            f"    volatile uint{size}_t {register_name.lower()};"
            f" // {text(register, 'description')}"
        )
        asserts.append(
            f"static_assert("
            f"offsetof({peripheral_name.capitalize()}Regs, {register_name.lower()})"
            f" == {offset});"
        )

        prev_offset = offset
        prev_size_bytes = size // 8

    lines.append("};")
    return lines, asserts, ok


def peripheral_header(peripheral_name, base, src, enums=None):
    """One header: guard, debug struct, Field definitions."""
    guard = f"STM32_{peripheral_name.upper()}_HPP"
    lines = [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {text(src, 'description')}",
        f"#ifndef {guard}",
        f"#define {guard}\n",
        "#include <cstddef>",
        "#include <cstdint>\n",
        '#include "mmio.hpp"\n',
    ]

    registers = sorted_registers(src)

    overlay, asserts, ok = struct_lines(peripheral_name, base, registers)
    if ok:
        lines.extend(overlay)
        lines.extend(asserts)
        lines.append("")
    else:
        lines.append(
            f"// {peripheral_name.capitalize()}Regs omitted: overlapping registers"
        )

    for register in registers:
        arrays, singles = classify_fields(register)
        lines.extend(
            field_lines(
                peripheral_name,
                register.findtext("name", "MISSING"),
                base + int(register.findtext("addressOffset", "0"), 0),
                register.findtext("access"),
                arrays,
                singles,
            )
        )
    lines.append("")

    if enums:
        lines.extend(enum_lines(peripheral_name.lower(), enums))
        lines.append("")

    lines.append(f"#endif // {guard}")
    return lines


def aggregate_header(group_name, members, enums=None):
    """Top-level header for a multi-member group: includes its members."""
    guard = f"STM32_{group_name.upper()}_HPP"
    lines = [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {group_name} peripherals",
        f"#ifndef {guard}",
        f"#define {guard}\n",
    ]
    for member_name in sorted(members):
        lines.append(f'#include "{group_name.lower()}/{member_name.lower()}.hpp"')
    lines.append("")
    if enums:
        lines.extend(enum_lines(group_name.lower(), enums))
        lines.append("")
    lines.append(f"#endif // {guard}")
    return lines


def output_path(outdir, groups, group_name, peripheral_name):
    """Multi-member groups get a subdirectory; singletons stay flat, because
    their group name is the peripheral name and would collide."""
    if len(groups[group_name]) > 1:
        return outdir / group_name.lower() / f"{peripheral_name.lower()}.hpp"
    return outdir / f"{peripheral_name.lower()}.hpp"


def main():
    outdir = Path(__file__).resolve().parent.parent / "src" / "do-not-edit"
    shutil.rmtree(outdir, ignore_errors=True)
    outdir.mkdir(parents=True, exist_ok=True)

    svddir = Path(__file__).resolve().parent.parent / "tools" / "svd"
    root = ET.parse(svddir / "STM32F429.svd").getroot()
    peripherals = root.findall("peripherals/peripheral")

    enumdir = Path(__file__).resolve().parent.parent / "tools" / "enums"

    derivation_map = build_derivation_map(peripherals)
    groups = build_groups(peripherals, derivation_map)

    enum_files = load_enum_files(enumdir, peripherals, derivation_map)
    uniform = uniform_groups(groups, enum_files)
    enum_cache = {}

    def enums_for(paths):
        if paths not in enum_cache:
            enum_cache[paths] = load_enum_values(enumdir, paths)
        return enum_cache[paths]

    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        base = int(peripheral.findtext("baseAddress", "0"), 0)
        src = resolve(peripheral, derivation_map)

        group_name = src.findtext("groupName")
        # values shared by the whole group live in the aggregate instead
        enums = (
            None if group_name in uniform else enums_for(enum_files[peripheral_name])
        )
        lines = peripheral_header(peripheral_name, base, src, enums)

        path = output_path(outdir, groups, group_name, peripheral_name)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n")

    for group_name, members in groups.items():
        if len(members) <= 1:
            continue
        enums = enums_for(enum_files[members[0]]) if group_name in uniform else None
        lines = aggregate_header(group_name, members, enums)
        (outdir / f"{group_name.lower()}.hpp").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
