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


def main():
    outdir = Path(__file__).resolve().parent.parent / "src" / "do-not-edit"
    shutil.rmtree(outdir, ignore_errors=True)
    outdir.mkdir(parents=True, exist_ok=True)

    svddir = Path(__file__).resolve().parent.parent / "tools" / "svd"
    root = ET.parse(svddir / "STM32F429.svd").getroot()
    peripherals = root.findall("peripherals/peripheral")

    derivation_map = {}
    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        derivation_map[peripheral_name] = peripheral

    groups = defaultdict(list)
    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        derived_from = peripheral.get("derivedFrom")
        src = (
            derivation_map[derived_from]
            if peripheral.get("derivedFrom")
            else peripheral
        )
        group_name = src.findtext("groupName")
        groups[group_name].append(peripheral_name)

    for peripheral in peripherals:
        file_lines = []

        peripheral_name = peripheral.findtext("name", "MISSING")
        base = int(peripheral.findtext("baseAddress", "0"), 0)

        derives_from = peripheral.get("derivedFrom")
        if derives_from is not None:
            peripheral = derivation_map[derives_from]

        peripheral_description = " ".join(
            peripheral.findtext("description", "").split()
        )

        file_lines.append("// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n")

        file_lines.append(f"// {peripheral_description}")
        file_lines.append(f"#ifndef STM32_{peripheral_name.upper()}_HPP")
        file_lines.append(f"#define STM32_{peripheral_name.upper()}_HPP\n")

        file_lines.append("#include <cstddef>")
        file_lines.append("#include <cstdint>\n")

        file_lines.append('#include "mmio.hpp"\n')

        struct_lines = []
        struct_ok = True
        field_defs = []
        static_asserts = []
        prev_offset = 0x0
        prev_size_bytes = 0
        reserved_fields = 0

        struct_lines.append(
            "// The BASE and Regs struct are defined entirely for debug utility."
        )
        struct_lines.append(
            f"constexpr uintptr_t {peripheral_name.upper()}_BASE = 0x{base:08X};"
        )
        struct_lines.append(f"struct {peripheral_name.capitalize()}Regs {{")

        registers = peripheral.findall("registers/register")
        registers.sort(key=lambda reg: int(reg.findtext("addressOffset", "0"), 0))

        for register in registers:
            register_name = register.findtext("name", "MISSING")
            register_description = " ".join(
                register.findtext("description", "").split()
            )
            offset = int(register.findtext("addressOffset", "0"), 0)
            register_base = base + offset
            size = int(register.findtext("size", "0"), 0)
            register_access = register.findtext("access")
            reset_value = register.findtext("resetValue")

            gap_bytes = offset - prev_offset - prev_size_bytes
            assert gap_bytes % 4 == 0
            gap_words = gap_bytes // 4
            if gap_bytes > 0:
                struct_lines.append(
                    f"    uint32_t _reserved{reserved_fields}[{gap_words}];"
                )
                reserved_fields += 1
            elif gap_bytes < 0:
                struct_ok = False

            struct_lines.append(
                f"    volatile uint{size}_t {register_name.lower()};"
                f" // {register_description}"
            )
            static_asserts.append(
                f"static_assert("
                f"offsetof({peripheral_name.capitalize()}Regs, {register_name.lower()})"
                f" == {offset});"
            )

            prev_offset = offset
            prev_size_bytes = size // 8

            fields = register.findall("fields/field")

            # first pass: collect fields with trailing digits into groups
            families = defaultdict(dict)
            singles = []
            for field in fields:
                field_name = field.findtext("name", "MISSING")
                match = FIELD_RE.fullmatch(field_name)
                if match:
                    name_prefix, group_idx = match.group(1), int(match.group(2))
                    families[name_prefix][group_idx] = field
                else:
                    singles.append(field)

            # second pass: reject groups that don't have >= 4 members
            # or groups that don't start at 0 and increment contiguously
            arrays = {}
            for name_prefix, members in families.items():
                if len(members) >= 4 and set(members) == set(range(len(members))):
                    arrays[name_prefix] = members
                else:
                    singles.extend(members.values())

            # third pass: emit arrays of Fields for groups
            for name_prefix, members in arrays.items():
                array_access = (
                    members[0].findtext("access") or register_access or "read-write"
                )
                field_defs.append(
                    f"constexpr Field<{access_str_map[array_access]}> "
                    f"{peripheral_name.lower()}_{register_name.lower()}_{name_prefix.lower()}"
                    f"[{len(members)}] = {{"
                )
                for group_idx in range(len(members)):
                    member = members[group_idx]
                    bit_offset = int(member.findtext("bitOffset", "0"), 0)
                    bit_width = int(member.findtext("bitWidth", "0"), 0)
                    mask = ((1 << bit_width) - 1) << bit_offset
                    field_defs.append(
                        f"    {{0x{register_base:08X}u, 0x{mask:08X}u, {bit_offset}}},"
                    )
                field_defs.append("};")

            # continued third pass: emit scalars for the rest
            for field in singles:
                field_name = field.findtext("name", "MISSING")
                bit_offset = int(field.findtext("bitOffset", "0"), 0)
                bit_width = int(field.findtext("bitWidth", "0"), 0)
                field_access = (
                    field.findtext("access") or register_access or "read-write"
                )
                mask = ((1 << bit_width) - 1) << bit_offset

                field_defs.append(
                    f"constexpr Field<{access_str_map[field_access]}> "
                    f"{peripheral_name.lower()}_{register_name.lower()}_{field_name.lower()}"
                    f"{{0x{register_base:08X}u, "
                    f"0x{mask:08X}u, "
                    f"{bit_offset}}};"
                )

        if struct_ok:
            struct_lines.append("};")
            file_lines.extend(struct_lines)
            file_lines.extend(static_asserts)
            file_lines.append("")
        else:
            file_lines.append(
                f"// {peripheral_name.capitalize()}Regs omitted: overlapping registers"
            )

        file_lines.extend(field_defs)
        file_lines.append("")

        end_include_guard_line = f"#endif // STM32_{peripheral_name.upper()}_HPP"
        file_lines.append(end_include_guard_line)

        group_name = peripheral.findtext("groupName") or peripheral_name
        if len(groups[group_name]) > 1:
            path = outdir / group_name.lower() / f"{peripheral_name.lower()}.hpp"
        else:
            path = outdir / f"{peripheral_name.lower()}.hpp"

        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(file_lines))

    for group_name, members in groups.items():
        if len(members) <= 1:
            continue

        file_lines = []

        file_lines.append("// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n")

        file_lines.append(f"// {group_name} peripherals")
        file_lines.append(f"#ifndef STM32_{group_name.upper()}_HPP")
        file_lines.append(f"#define STM32_{group_name.upper()}_HPP\n")

        for member_name in sorted(members):
            file_lines.append(
                f'#include "{group_name.lower()}/{member_name.lower()}.hpp"'
            )
        file_lines.append("")

        file_lines.append(f"#endif // STM32_{group_name.upper()}_HPP")

        path = outdir / f"{group_name.lower()}.hpp"
        path.write_text("\n".join(file_lines))


if __name__ == "__main__":
    main()
