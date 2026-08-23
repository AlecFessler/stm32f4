import re
import shutil
import xml.etree.ElementTree as ET
from collections import defaultdict
from pathlib import Path

# ---------------------------------------------------------------------------
# CMSIS-SVD structure  (STM32F429.svd, schemaVersion 1.1, <version> 1.2)
#
# <device>                                 attrs: schemaVersion
#   <name>                                 "STM32F429"
#   <version> <description>
#   <addressUnitBits>                      8
#   <width>                                32
#   <size> <resetValue> <resetMask>        defaults, inherited when a register omits them
#   <peripherals>
#     <peripheral derivedFrom="OTHER">     derivedFrom is an ATTRIBUTE, not a child
#       <name> <description> <groupName>
#       <baseAddress>                      hex, e.g. 0x40020400
#       <addressBlock>                     <offset> <size> <usage>
#       <registers>
#         <register>
#           <name> <displayName> <description>
#           <addressOffset>                hex, relative to peripheral baseAddress
#           <size>                         0x20 on this device
#           <access>                       read-write | read-only | write-only
#           <resetValue>                   per register, and per instance
#           <fields>
#             <field>
#               <name> <description>
#               <bitOffset>                DECIMAL
#               <bitWidth>                 DECIMAL
#               <access>                   usually ABSENT -> inherit from register
#
# Present in this file:  92 peripherals, 1107 registers, 7670 fields,
#                        1759 <access>, 970 <resetValue>, 33 derivedFrom
# ---------------------------------------------------------------------------


access_str_map = {
    "read-write": "Access::RW",
    "read-only": "Access::RO",
    "write-only": "Access::WO",
}

FIELD_RE = re.compile(r"([A-Za-z_]+?)(\d+)")


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


def peripheral_header(peripheral_name, base, src):
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

    lines.append(f"#endif // {guard}")
    return lines


def aggregate_header(group_name, members):
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

    derivation_map = build_derivation_map(peripherals)
    groups = build_groups(peripherals, derivation_map)

    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        base = int(peripheral.findtext("baseAddress", "0"), 0)
        src = resolve(peripheral, derivation_map)

        lines = peripheral_header(peripheral_name, base, src)

        path = output_path(outdir, groups, src.findtext("groupName"), peripheral_name)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n")

    for group_name, members in groups.items():
        if len(members) <= 1:
            continue
        lines = aggregate_header(group_name, members)
        (outdir / f"{group_name.lower()}.hpp").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
