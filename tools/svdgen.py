import fnmatch
import re
import shutil
import sys
import xml.etree.ElementTree as ET
from collections import defaultdict
from pathlib import Path

import yaml

access_str_map = {
    "read-write": "Access::RW",
    "read-only": "Access::RO",
    "write-only": "Access::WO",
    "rs": "Access::RS",
    "ro": "Access::RO",
    "rc_w1": "Access::RC_W1",
    "rc_w0": "Access::RC_W0",
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
        # a negative value is svdtools' "any other encoding"; it survives as a
        # marker until the field's width is known, see resolve_open_encodings
        if isinstance(value, int):
            values[cpp_identifier(str(name).lower())] = value
    return values


def yaml_documents(enumdir, paths):
    """Every yaml reachable from paths, an include before whatever includes it,
    each one visited once."""
    seen = set()

    def visit(rel):
        if rel in seen:
            return
        seen.add(rel)
        document = load_yaml(enumdir / rel)
        includes = document.get("_include", [])
        includes = [includes] if isinstance(includes, str) else includes
        for include in includes:
            yield from visit(str(Path(rel).parent / include))
        yield document

    for path in sorted(paths):
        yield from visit(path)


def registers_in(document):
    """The (register glob, spec) pairs of a yaml, skipping its directives."""
    return [
        (glob, spec)
        for glob, spec in document.items()
        if not glob.startswith("_") and isinstance(spec, dict)
    ]


def load_enum_values(enumdir, paths):
    """-> ({enum_name: {member: value}}, [(register_glob, field_glob, enum_name)])

    The second list is what lets a Field be typed: at emit time each field's
    real register and field name is matched against these globs.
    """
    out = {}
    globs = []
    for document in yaml_documents(enumdir, paths):
        for register_glob, register_spec in registers_in(document):
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
                    globs.append((register_glob, field_glob, namespace))
    return out, globs


def merge_name(glob):
    """PLLM* -> PLLM, the same shaping enum_namespaces does to name a type."""
    return re.sub(r"[^A-Za-z0-9_]", "", glob)


def load_merges(enumdir, paths):
    """-> [(register_glob, merged_name, [field globs])] from the vendored yaml.

    _merge marks a field the SVD split into one entry per bit. enums/README.md
    documents three shapes: a bare glob, a list of them, or a mapping from the
    merged name to a comma-separated list of them.
    """
    merges = []
    for document in yaml_documents(enumdir, paths):
        for register_glob, register_spec in registers_in(document):
            spec = register_spec.get("_merge")
            if spec is None:
                continue
            if isinstance(spec, str):
                spec = [spec]
            if isinstance(spec, dict):
                named = list(spec.items())
            else:
                named = [(merge_name(glob), glob) for glob in spec]
            for name, globs in named:
                if isinstance(globs, str):
                    globs = globs.split(",")
                merges.append((register_glob, name, [str(g).strip() for g in globs]))
    return merges


def load_modifications(enumdir, paths):
    """-> [(register_glob, field_glob, {attr: value})] from the vendored yaml.

    A fields/*.yaml corrects the fields of the registers it describes, the way
    crc_idr_8bit.yaml narrows IDR to the 8 bits RM0090 gives it.
    """
    modifications = []
    for document in yaml_documents(enumdir, paths):
        for register_glob, register_spec in registers_in(document):
            for field_glob, attrs in (register_spec.get("_modify") or {}).items():
                modifications.append((register_glob, field_glob, attrs))
    return modifications


LOCAL_KINDS = ("merge", "modify")


def load_svd_overrides(path):
    """peripheral glob -> `modify`, or -> register glob -> {kind: payload}

    The local corrections, for what the vendored enums do not carry. Rejects
    an unknown kind rather than ignoring it, the same reason
    load_access_overrides does: a misspelling would leave the correction
    silently unapplied with the table still looking right.
    """
    table = load_yaml(path)
    for peripheral_glob, entry in table.items():
        for key, value in entry.items():
            if key == "modify":
                continue
            for kind, payload in value.items():
                if kind not in LOCAL_KINDS:
                    raise ValueError(
                        f"{path.name}: {peripheral_glob}.{key} lists '{kind}', "
                        f"which is not one of {', '.join(LOCAL_KINDS)}"
                    )
                if kind == "merge":
                    for name, globs in payload.items():
                        if not isinstance(globs, list):
                            raise ValueError(
                                f"{path.name}: {peripheral_glob}.{key}.merge."
                                f"{name} is {type(globs).__name__}, expected a "
                                f"list of globs"
                            )
    return table


def peripheral_merges(vendored, local, peripheral_name):
    """One flat merge list for a peripheral, from both tables."""
    merges = list(vendored)
    for peripheral_glob, entry in local.items():
        if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
            continue
        for register_glob, kinds in entry.items():
            if register_glob == "modify":
                continue
            for name, globs in (kinds.get("merge") or {}).items():
                merges.append((register_glob, name, list(globs)))
    return merges


def peripheral_modifications(vendored, local, peripheral_name):
    """-> ({register glob: {attr: value}}, [(register glob, field glob, attrs)])

    Register-level changes first, then field-level ones, from both tables. The
    vendored yaml spells the key _modify and the local one spells it modify,
    which is the only difference between them.
    """
    registers, fields = {}, []
    for table, key in ((vendored, "_modify"), (local, "modify")):
        for peripheral_glob, entry in table.items():
            if peripheral_glob.startswith("_") or not isinstance(entry, dict):
                continue
            if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
                continue
            registers.update(entry.get(key) or {})
            for register_glob, spec in entry.items():
                if register_glob == key or not isinstance(spec, dict):
                    continue
                for field_glob, attrs in (spec.get(key) or {}).items():
                    fields.append((register_glob, field_glob, attrs))
    return registers, fields


# What an SVD element will accept a correction for. Anything else is a typo,
# or a directive shape svdgen has not been taught.
REGISTER_ATTRS = (
    "name",
    "displayName",
    "description",
    "addressOffset",
    "alternateRegister",
    "access",
    "resetValue",
    "size",
)
FIELD_ATTRS = ("name", "description", "bitOffset", "bitWidth", "access")


def apply_attributes(element, attrs, allowed, where):
    """Set or drop the child elements a _modify entry names.

    An empty value removes the child: alternateRegister: "" is how the
    vendored yaml unlinks a register whose address was wrong in the first
    place. Numbers go back as hex, because reset_value reads a bare decimal
    string as hex and would misread `276`.
    """
    for attr, value in attrs.items():
        if attr not in allowed:
            raise ValueError(f"{where}: cannot modify '{attr}'")
        child = element.find(attr)
        if value == "" or value is None:
            if child is not None:
                element.remove(child)
            continue
        if child is None:
            child = ET.SubElement(element, attr)
        child.text = f"0x{value:X}" if isinstance(value, int) else str(value)


# A _modify whose target this SVD does not have. The two RCC ones rename a
# field an unvendored patches/rcc/ file would have added first, so the rename
# lands on nothing and RCC_APB1ENR has no UART7EN or UART8EN at all. The FMC
# one is already applied: this revision spells the field SDCLK to begin with.
UNMATCHED_MODIFICATIONS = {
    ("APB1ENR", "UART7ENR"): "the field is added by an unvendored rcc patch",
    ("APB1ENR", "UART8ENR"): "the field is added by an unvendored rcc patch",
    ("SDCR2", "CLK"): "this SVD revision already names the field SDCLK",
}


def apply_modifications(peripheral, registers, fields):
    """Correct the SVD before anything reads it, and report what it corrected.

    The vendored yaml carries these because the vendor file is wrong: FMC
    gives BWTR3 and BWTR4 the addresses of BWTR1 and BWTR2, and nine fields
    keep a name their enum was written against. Dropping them silently is
    what left rcc::Pllon and spi::Tifrfe attached to nothing.
    """
    matched = set()
    for register in peripheral.findall("registers/register"):
        register_name = register.findtext("name", "MISSING")
        for register_glob, attrs in registers.items():
            if fnmatch.fnmatchcase(register_name, register_glob):
                apply_attributes(
                    register, attrs, REGISTER_ATTRS, f"register {register_name}"
                )
                matched.add((None, register_glob))
        # a rename above is what the field globs below are matched against
        register_name = register.findtext("name", "MISSING")
        for register_glob, field_glob, attrs in fields:
            if not fnmatch.fnmatchcase(register_name, register_glob):
                continue
            for field in register.findall("fields/field"):
                field_name = field.findtext("name", "MISSING")
                if any(
                    fnmatch.fnmatchcase(field_name, g.strip().lstrip("?~"))
                    for g in field_glob.split(",")
                ):
                    apply_attributes(
                        field,
                        attrs,
                        FIELD_ATTRS,
                        f"field {register_name}.{field_name}",
                    )
                    matched.add((register_glob, field_glob))
    return matched


def check_modifications_landed(requested, matched):
    """A correction that matches nothing is the failure it was written to fix.

    Nine of the eleven in the vendored yaml rename a field whose enum is
    already written against the new name, so a miss here is what leaves that
    enum typing nothing.
    """
    for register_glob, field_glob in sorted(requested - matched, key=str):
        target = (register_glob, field_glob)
        if target in UNMATCHED_MODIFICATIONS:
            continue
        where = field_glob if register_glob is None else f"{register_glob}.{field_glob}"
        raise ValueError(
            f"modify '{where}' matches nothing. Correct the glob, or name it "
            f"in UNMATCHED_MODIFICATIONS with why the target is absent."
        )


def merge_register_fields(register, merges):
    """Replace each split family with the one field it really is.

    The SVD gives PLLM as PLLM0..PLLM5, six one-bit fields, where RM0090
    documents one 6-bit PLLM. Rewriting the lowest member to span the whole
    range and dropping the rest happens before anything reads the register, so
    the array grouping, the masks and the enum matching all see one field.

    A merge that is not contiguous, overlaps itself, or spans two accesses is
    a mistake in the table rather than something to paper over.
    """
    container = register.find("fields")
    if container is None:
        return
    register_name = register.findtext("name", "MISSING")
    for register_glob, name, field_globs in merges:
        if not fnmatch.fnmatchcase(register_name, register_glob):
            continue
        members = [
            field
            for field in container.findall("field")
            if any(
                fnmatch.fnmatchcase(field.findtext("name", ""), glob)
                for glob in field_globs
            )
        ]
        # a merge already applied leaves one field behind, and every table is
        # consulted for every peripheral sharing the registers
        if len(members) < 2:
            continue

        mask = 0
        for field in members:
            member_mask = field_mask(field)[0]
            if member_mask & mask:
                raise ValueError(f"{register_name}.{name}: members overlap")
            mask |= member_mask
        shift = (mask & -mask).bit_length() - 1
        width = mask.bit_length() - shift
        if mask != ((1 << width) - 1) << shift:
            raise ValueError(f"{register_name}.{name}: bits are not contiguous")

        accesses = {field.findtext("access") for field in members}
        if len(accesses) > 1:
            raise ValueError(f"{register_name}.{name}: members disagree on access")

        merged = min(members, key=lambda field: field_mask(field)[1])
        merged.find("name").text = name
        merged.find("bitOffset").text = str(shift)
        merged.find("bitWidth").text = str(width)
        for field in members:
            if field is not merged:
                container.remove(field)


# Directives svdgen acts on, and the ones it knowingly leaves alone. A
# directive in neither set stops the run: _merge and _modify both sat in this
# yaml being silently dropped, and the point of the split is that a third one
# cannot arrive the same way.
HANDLED_DIRECTIVES = {
    "_include",  # yaml_documents, load_enum_files
    "_modify",   # apply_modifications, and peripheral renames in load_enum_files
    "_merge",    # merge_register_fields
    "_name",     # enum_namespaces
    "_read",     # collect_enum_values
    "_write",    # collect_enum_values
    "_svd",      # names the file already being parsed
}
SKIPPED_DIRECTIVES = {
    "_W1C": "clear-on-write access, carried by hand in access_overrides.yaml",
    "_W0C": "clear-on-write access, carried by hand in access_overrides.yaml",
    "_add": "PWR_CR.ADCDC1, a field the SVD leaves out",
    "_delete": "TIM9_CR2, a register this part does not have",
    "_derive": "EXTICR field derivation, and UART7/UART8 from UART4",
    "_rebase": "which peripheral of a family the others derive from",
    "_strip": "the FS_ and OTG_HS_ prefixes on OTG register names",
}


def validate_directives(document, name):
    """Refuse a directive that is neither implemented nor knowingly skipped."""
    def visit(node):
        if not isinstance(node, dict):
            return
        for key, value in node.items():
            if isinstance(key, str) and key.startswith("_"):
                if key not in HANDLED_DIRECTIVES and key not in SKIPPED_DIRECTIVES:
                    raise ValueError(
                        f"{name}: '{key}' is a directive svdgen does not "
                        f"implement. Add it to HANDLED_DIRECTIVES once it is, "
                        f"or to SKIPPED_DIRECTIVES with what honouring it "
                        f"would change."
                    )
            visit(value)

    visit(document)


def check_enum_fits(values, widths, where):
    """Every member of an enum has to survive the store into its field.

    write() masks with field_mask, so a member wider than the field loses its
    high bits and silently means something else. FLASH_ACR.LATENCY is the one
    that matters: 3 bits in the SVD, and flash::Latency names ws8 through ws15.
    """
    for enum_name, members in values.items():
        width = widths.get(enum_name)
        if width is None:
            continue
        for member, value in members.items():
            if value >= 0 and value >= (1 << width):
                raise ValueError(
                    f"{where}: {enum_name}::{member} = {value} does not fit "
                    f"the {width} bit field it types"
                )


def check_address_collisions(peripheral_name, registers):
    """Two registers at one address have to say so.

    The SVD marks the real cases, TIM's CCMR in output and input mode, with
    alternateRegister. Where it does not, the address is usually the thing
    that is wrong: FMC gave BWTR3 the address of BWTR1 and called that an
    alternate view.
    """
    by_offset = defaultdict(list)
    for register in registers:
        by_offset[int(register.findtext("addressOffset", "0"), 0)].append(register)
    for offset, sharing in by_offset.items():
        if len(sharing) < 2:
            continue
        if not any(r.findtext("alternateRegister") for r in sharing):
            names = ", ".join(r.findtext("name", "MISSING") for r in sharing)
            raise ValueError(
                f"{peripheral_name} 0x{offset:03X}: {names} share an address "
                f"and none names the other as an alternateRegister"
            )


def check_register_globs(peripheral_name, registers, enum_globs):
    """A register glob that matches nothing means an enum reaches no field.

    svdtools writes ?~ on the ones that are meant to miss, so TIM9 can be
    handed the same yaml as TIM1 without owning a CR2. Anything else is a name
    the SVD spells differently, which is how SYSCFG_MEMRMP hid.
    """
    names = [register.findtext("name", "MISSING") for register in registers]
    for register_glob, _, enum_name in enum_globs:
        globs = [g.strip() for g in register_glob.split(",")]
        if any(g.startswith("?~") for g in globs):
            continue
        if not any(
            fnmatch.fnmatchcase(name, g) for g in globs for name in names
        ):
            raise ValueError(
                f"{peripheral_name}: enum {enum_name} is keyed to register "
                f"'{register_glob}', which matches no register here"
            )


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


def field_access(field, register_access=None, directions=None):
    """Field access is usually absent; the SVD default is read-write.

    The override table wins over both. The SVD carries no modifiedWriteValues
    and no way to say rs, so it calls these bits read-write and nothing would
    stop an rmw() that acknowledges every flag the register happened to hold.
    """
    if directions:
        direction = directions.get(field.findtext("name", "MISSING"))
        if direction:
            return direction
    return field.findtext("access") or register_access or "read-write"


def override_entry(table, peripheral_name, register_name):
    """The access_overrides entry covering one register, or None."""
    for peripheral_glob, registers in table.items():
        if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
            continue
        for register_glob, entry in registers.items():
            if fnmatch.fnmatchcase(register_name, register_glob):
                return entry
    return None


KINDS = ("rc_w1", "rc_w0", "rs", "ro")


def load_access_overrides(path):
    """peripheral glob -> register glob -> {kind: [field globs]}

    Rejects an unknown kind rather than ignoring it: a misspelled one would
    otherwise leave a mask silently empty and the generated code silently
    wrong, with the table still looking right.
    """
    table = load_yaml(path)
    for peripheral_glob, registers in table.items():
        for register_glob, entry in registers.items():
            for kind in entry:
                if kind not in KINDS:
                    raise ValueError(
                        f"{path.name}: {peripheral_glob}.{register_glob} lists "
                        f"'{kind}', which is not one of {', '.join(KINDS)}"
                    )
    return table


def reset_value(register):
    """The SVD writes reset values both as 0x... and as bare hex digits."""
    raw = (register.findtext("resetValue") or "0").strip()
    return int(raw, 0) if raw.lower().startswith("0x") else int(raw, 16)


def reserved_set_bits(register):
    """Bits the register resets to 1 that no field covers.

    RM0090 asks reserved bits be kept at their reset value, and 31 registers
    reset some of theirs to 1. A bare store would zero them.
    """
    covered = 0
    for field in register.findall("fields/field"):
        covered |= field_mask(field)[0]
    return reset_value(register) & ~covered


def register_overrides(table, peripheral_name, register):
    """-> ({field name: overridden access}, force_zero_mask, force_one_mask,
    rw_mask)

    Every field in the register carries the masks, not just the flags: the
    hazard is that writing any field also writes the bits beside it, so it is
    the neighbors that need naming.

    rw_mask is every bit still read-write once the table has had its say. A
    field's rw_neighbors is that mask minus its own bits, which is how both
    "clear() must read first" and "write() would zero something" get answered
    from one number, on every register rather than only the listed ones.
    """
    register_name = register.findtext("name", "MISSING")
    entry = override_entry(table, peripheral_name, register_name) or {}

    directions = {}
    masks = dict.fromkeys(KINDS, 0)
    rw_mask = 0
    for field in register.findall("fields/field"):
        field_name = field.findtext("name", "MISSING")
        mask = field_mask(field)[0]
        kind = next(
            (
                k
                for k in KINDS
                if any(fnmatch.fnmatchcase(field_name, g) for g in entry.get(k, ()))
            ),
            None,
        )
        if kind:
            directions[field_name] = kind
            masks[kind] |= mask
        elif field_access(field, register.findtext("access")) == "read-write":
            rw_mask |= mask

    # rs and rc_w1 are both "a written 1 is a command", so both want a 0
    force_zero = masks["rc_w1"] | masks["rs"]
    # rc_w0 wants a 1 to stay quiet; a reserved bit wants its reset value back
    force_one = masks["rc_w0"] | reserved_set_bits(register)
    return directions, force_zero, force_one, rw_mask, masks["rc_w1"]


# PM0214 2.2.5: the peripheral bit-band region, whose alias starts at 0x42000000
BIT_BAND_REGION = range(0x40000000, 0x40100000)


def bit_band_ok(register_base, field, access, rw_neighbors, rc_w1_mask):
    """Whether a store to this field's alias word is both legal and worth it.

    The first two conditions decide whether an alias word exists at all. The
    rest are about storing through it: the hardware writes back what it read
    for every other bit, which is safe beside rw, rc_w0 and reserved bits and
    unsafe beside another rc_w1 flag, whose echoed 1 would acknowledge it.

    A read-only field returns before any of that, because read() is the only
    accessor it has and a read triggers no write-back. Nothing has to trust
    that: every storing accessor already static_asserts its way out of an RO
    field, so those paths cannot be instantiated to begin with.
    """
    mask, bit = field_mask(field)
    if mask != 1 << bit or register_base not in BIT_BAND_REGION:
        return False
    if access in ("read-only", "ro"):
        return True
    return (
        access in ("read-write", "rs", "rc_w1", "rc_w0")
        # a write-only field, or one owning its register, stores in one bus
        # cycle already; the alias would make the hardware read first
        and rw_neighbors
        and not (rc_w1_mask & ~mask)
    )


def matching_enum(enum_globs, register_name, field_name):
    """The enum one field uses, or None. Globs may be comma-separated lists,
    and a register glob can be one too."""
    for register_glob, field_glob, enum_name in enum_globs:
        if not any(
            fnmatch.fnmatchcase(register_name, g.strip().lstrip("?~"))
            for g in register_glob.split(",")
        ):
            continue
        if not any(
            fnmatch.fnmatchcase(field_name, g.strip().lstrip("?~"))
            for g in field_glob.split(",")
        ):
            continue
        return enum_name
    return None


def enum_type(enum_globs, namespace, register_name, field_name):
    """The C++ enum class for one field, or None."""
    enum_name = matching_enum(enum_globs, register_name, field_name)
    if not enum_name:
        return None
    return f"{namespace}::{enum_name[:1].upper()}{enum_name[1:]}"


def enum_widths(src, enum_globs):
    """enum name -> bit width of the fields it types.

    An enum is emitted once but can type several fields. They agree
    everywhere here; a disagreement is reported rather than guessed at.
    """
    widths = {}
    for register in src.findall("registers/register"):
        register_name = register.findtext("name", "MISSING")
        for field in register.findall("fields/field"):
            field_name = field.findtext("name", "MISSING")
            enum_name = matching_enum(enum_globs, register_name, field_name)
            if not enum_name:
                continue
            width = int(field.findtext("bitWidth", "0"), 0)
            if widths.setdefault(enum_name, width) != width:
                print(
                    f"enum {enum_name}: {register_name}.{field_name} is "
                    f"{width} bits, others are {widths[enum_name]}",
                    file=sys.stderr,
                )
    return widths


def resolve_open_encodings(values, widths):
    """Replace svdtools' negative marker with a real encoding.

    It means "any value the listed members do not claim", so the smallest
    unclaimed one is a faithful representative: HPRE lists 8..15 for Div2
    through Div512, which makes Div1 anything below 8, and 0 will do. Without
    this the one setting you actually want is the one you cannot name.
    """
    resolved = {}
    for enum_name, members in values.items():
        open_names = sorted(name for name, value in members.items() if value < 0)
        if not open_names:
            resolved[enum_name] = members
            continue

        width = widths.get(enum_name)
        claimed = {value for value in members.values() if value >= 0}
        out = {name: value for name, value in members.items() if value >= 0}
        for name in open_names:
            encoding = (
                None
                if width is None
                else next(
                    (v for v in range(1 << width) if v not in claimed), None
                )
            )
            if encoding is None:
                print(
                    f"enum {enum_name}.{name}: no encoding left unclaimed, dropped",
                    file=sys.stderr,
                )
                continue
            out[name] = encoding
            claimed.add(encoding)
        resolved[enum_name] = out
    return resolved


def field_type(access, enum, rw_neighbors, bit_band):
    """Field<Access::X>, Field<Access::X, gpio::Mode>, and the two flags only
    when they differ from their defaults. They are positional, so an untyped
    field has to name uint32_t to reach them. bit_band comes first because it
    is the commoner of the two and because an RO field has no meaningful
    rw_neighbors to spell out on the way past."""
    arguments = [access_str_map[access]]
    if bit_band:
        arguments += [enum or "uint32_t", "true"]
    elif rw_neighbors is False:
        arguments += [enum or "uint32_t", "false", "false"]
    elif enum:
        arguments.append(enum)
    return f"Field<{', '.join(arguments)}>"


def initializer(register_base, field, force_zero, force_one):
    """{addr, field_mask, shift}, plus the masks when either is set.

    Aggregate initialization value-initializes what is left out, so the great
    majority of fields stay three numbers wide.
    """
    mask, bit_offset = field_mask(field)
    parts = [f"0x{register_base:08X}u", f"0x{mask:08X}u", str(bit_offset)]
    if force_zero or force_one:
        parts += [f"0x{force_zero:08X}u", f"0x{force_one:08X}u"]
    return "{" + ", ".join(parts) + "}"


def field_lines(
    peripheral_name,
    register_name,
    register_base,
    register_access,
    arrays,
    singles,
    enum_globs=(),
    enum_namespace="",
    overrides=None,
):
    """constexpr Field definitions: arrays for families, scalars for the rest."""
    directions, force_zero, force_one, rw_mask, rc_w1_mask = overrides or (
        {},
        0,
        0,
        0,
        0,
    )
    lines = []

    # write() consults rw_neighbors, and so do set() and clear(); read() and a
    # write-only write() never do, so naming it there would split the type for
    # nothing
    CONSULTS = ("read-write", "rs", "rc_w1", "rc_w0")

    def declaration(field):
        field_name = field.findtext("name", "MISSING")
        access = field_access(field, register_access, directions)
        enum = enum_type(enum_globs, enum_namespace, register_name, field_name)
        mask = field_mask(field)[0]
        # a read-only field never stores, so the masks would be dead weight
        stores = access != "read-only"
        rw_neighbors = bool(rw_mask & ~mask) if access in CONSULTS else None
        bit_band = bit_band_ok(
            register_base, field, access, rw_neighbors, rc_w1_mask
        )
        return (
            field_type(access, enum, rw_neighbors, bit_band),
            initializer(
                register_base,
                field,
                force_zero if stores else 0,
                force_one if stores else 0,
            ),
        )

    for name_prefix, members in arrays.items():
        type_name, _ = declaration(members[0])
        lines.append(
            f"constexpr {type_name} "
            f"{peripheral_name.lower()}_{register_name.lower()}_{name_prefix.lower()}"
            f"[{len(members)}] = {{"
        )
        for group_idx in range(len(members)):
            lines.append(f"    {declaration(members[group_idx])[1]},")
        lines.append("};")

    for field in singles:
        field_name = field.findtext("name", "MISSING")
        type_name, init = declaration(field)
        lines.append(
            f"constexpr {type_name} "
            f"{peripheral_name.lower()}_{register_name.lower()}_{field_name.lower()}"
            f"{init};"
        )

    return lines


def enum_lines(namespace, values):
    """namespace gpio::mode {constexpr uint32_t input = 0b00, ...}"""
    lines = [f"namespace {namespace} {{"]
    for name in sorted(values):
        members = values[name]
        enum = f"{name[:1].upper()}{name[1:]}"
        lines.append(f"enum class {enum} : uint32_t {{")
        for member in sorted(members, key=lambda m: members[m]):
            lines.append(f"    {member} = {members[member]},")
        lines.append("};")
    lines.append(f"}} // namespace {namespace}")
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


def peripheral_header(
    peripheral_name,
    base,
    src,
    enums=None,
    enum_globs=(),
    enum_namespace="",
    values_include="",
    clear_table=None,
):
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

    if values_include:
        lines.append(f'#include "{values_include}"\n')

    registers = sorted_registers(src)
    check_register_globs(peripheral_name, registers, enum_globs)

    # must precede the Field definitions, which name these types
    if enums:
        widths = enum_widths(src, enum_globs)
        resolved = resolve_open_encodings(enums, widths)
        check_enum_fits(resolved, widths, peripheral_name)
        lines.extend(enum_lines(peripheral_name.lower(), resolved))
        lines.append("")

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
                enum_globs,
                enum_namespace,
                register_overrides(clear_table or {}, peripheral_name, register),
            )
        )
    lines.append("")

    lines.append(f"#endif // {guard}")
    return lines


def values_header(group_name, enums):
    """Shared enum classes for a group, included by every member so each header
    stands alone."""
    guard = f"STM32_{group_name.upper()}_VALUES_HPP"
    lines = [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {group_name} field values, shared by every {group_name} peripheral",
        f"#ifndef {guard}",
        f"#define {guard}\n",
        "#include <cstdint>\n",
    ]
    lines.extend(enum_lines(group_name.lower(), enums))
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
    clear_table = load_access_overrides(
        Path(__file__).resolve().parent / "access_overrides.yaml"
    )
    overrides = load_svd_overrides(
        Path(__file__).resolve().parent / "svd_overrides.yaml"
    )
    device = load_yaml(enumdir / "stm32f429.yaml")

    derivation_map = build_derivation_map(peripherals)
    groups = build_groups(peripherals, derivation_map)

    enum_files = load_enum_files(enumdir, peripherals, derivation_map)
    uniform = uniform_groups(groups, enum_files)
    enum_cache = {}
    merge_cache = {}
    modification_cache = {}

    def enums_for(paths):
        if paths not in enum_cache:
            enum_cache[paths] = load_enum_values(enumdir, paths)
        return enum_cache[paths]

    def merges_for(paths):
        if paths not in merge_cache:
            merge_cache[paths] = load_merges(enumdir, paths)
        return merge_cache[paths]

    def modifications_for(paths):
        if paths not in modification_cache:
            modification_cache[paths] = load_modifications(enumdir, paths)
        return modification_cache[paths]

    validate_directives(device, "stm32f429.yaml")
    for rel in sorted({path for paths in enum_files.values() for path in paths}):
        validate_directives(load_yaml(enumdir / rel), rel)

    # The SVD is corrected before anything reads it: attributes first, since a
    # rename decides what the merge globs below match. resolve() hands every
    # peripheral of a derived family the same element, so group by it and
    # mutate once, letting each name in the family contribute its entries.
    by_source = defaultdict(list)
    for peripheral in peripherals:
        by_source[id(resolve(peripheral, derivation_map))].append(peripheral)

    requested, landed = set(), set()
    for family in by_source.values():
        src = resolve(family[0], derivation_map)
        registers, fields, merges = {}, [], []
        for peripheral in family:
            name = peripheral.findtext("name", "MISSING")
            peripheral_registers, peripheral_fields = peripheral_modifications(
                device, overrides, name
            )
            registers.update(peripheral_registers)
            fields += peripheral_fields + modifications_for(enum_files[name])
            merges += peripheral_merges(merges_for(enum_files[name]), overrides, name)
        requested |= {(None, glob) for glob in registers}
        requested |= {(reg, field) for reg, field, _ in fields}
        landed |= apply_modifications(src, registers, fields)
        for register in src.findall("registers/register"):
            merge_register_fields(register, merges)
        check_address_collisions(family[0].findtext("name", "MISSING"),
                                 src.findall("registers/register"))
    check_modifications_landed(requested, landed)

    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        base = int(peripheral.findtext("baseAddress", "0"), 0)
        src = resolve(peripheral, derivation_map)

        group_name = src.findtext("groupName")
        values, enum_globs = enums_for(enum_files[peripheral_name])
        shared = group_name in uniform
        # shared values go in <group>/values.hpp, which each member includes so
        # every header still compiles on its own
        enums = None if shared else values
        enum_namespace = (group_name if shared else peripheral_name).lower()
        values_include = "values.hpp" if shared and values else ""
        lines = peripheral_header(
            peripheral_name,
            base,
            src,
            enums,
            enum_globs,
            enum_namespace,
            values_include,
            clear_table,
        )

        path = output_path(outdir, groups, group_name, peripheral_name)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n")

    for group_name, members in groups.items():
        if len(members) <= 1:
            continue
        values, globs = enums_for(enum_files[members[0]])
        if group_name in uniform and values:
            member_src = resolve(derivation_map[members[0]], derivation_map)
            widths = enum_widths(member_src, globs)
            resolved = resolve_open_encodings(values, widths)
            check_enum_fits(resolved, widths, group_name)
            lines = values_header(group_name, resolved)
            (outdir / group_name.lower() / "values.hpp").write_text(
                "\n".join(lines) + "\n"
            )
        lines = aggregate_header(group_name, members)
        (outdir / f"{group_name.lower()}.hpp").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
