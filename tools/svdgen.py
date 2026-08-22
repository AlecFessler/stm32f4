import xml.etree.ElementTree as ET
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


class Overlap(Exception):
    pass


def main():
    outdir = Path(__file__).resolve().parent.parent / "src" / "do-not-edit"
    outdir.mkdir(parents=True, exist_ok=True)

    svddir = Path(__file__).resolve().parent.parent / "tools" / "svd"
    root = ET.parse(svddir / "STM32F429.svd").getroot()
    peripherals = root.findall("peripherals/peripheral")

    derivation_map = {}
    for peripheral in peripherals:
        peripheral_name = peripheral.findtext("name", "MISSING")
        derivation_map[peripheral_name] = peripheral

    skipped = []
    for peripheral in peripherals:
        try:
            file_lines = []

            peripheral_name = str.upper(peripheral.findtext("name", "MISSING"))
            base = peripheral.findtext("baseAddress")

            derives_from = peripheral.get("derivedFrom")
            if derives_from is not None:
                peripheral = derivation_map[derives_from]

            peripheral_name_lower = str.lower(peripheral_name)
            peripheral_name_capped = str.capitalize(peripheral_name_lower)
            peripheral_description = " ".join(
                peripheral.findtext("description", "").split()
            )

            file_lines.append("// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n")

            file_lines.append(f"// {peripheral_description}")
            file_lines.append(f"#ifndef {peripheral_name}_HPP")
            file_lines.append(f"#define {peripheral_name}_HPP\n")

            file_lines.append("#include <cstddef>")
            file_lines.append("#include <cstdint>\n")

            file_lines.append('#include "mmio.hpp"\n')

            file_lines.append(f"constexpr uintptr_t {peripheral_name}_BASE = {base};\n")

            file_lines.append(f"struct {peripheral_name_capped}Regs {{")

            registers = peripheral.findall("registers/register")
            registers.sort(key=lambda reg: int(reg.findtext("addressOffset", "0"), 0))

            regfield_defs = []
            static_asserts = []
            prev_offset = 0x0
            prev_size_bytes = 0
            reserved_fields = 0

            for register in registers:
                register_name = str.upper(register.findtext("name", "MISSING"))
                register_name_lower = str.lower(register_name)
                register_description = " ".join(
                    register.findtext("description", "").split()
                )
                offset = int(register.findtext("addressOffset", "0"), 0)
                size = int(register.findtext("size", "0"), 0)
                register_access = register.findtext("access")
                reset_value = register.findtext("resetValue")

                gap_bytes = offset - prev_offset - prev_size_bytes
                assert gap_bytes % 4 == 0
                gap_words = gap_bytes // 4
                if gap_bytes > 0:
                    file_lines.append(
                        f"    uint32_t _reserved{reserved_fields}[{gap_words}];"
                    )
                    reserved_fields += 1
                elif gap_bytes < 0:
                    raise Overlap("skipping", peripheral_name)

                file_lines.append(
                    f"    volatile uint{size}_t {register_name_lower}; // {register_description}"
                )
                static_asserts.append(
                    f"static_assert(offsetof({peripheral_name_capped}Regs, {register_name_lower}) == {offset});"
                )

                prev_offset = offset
                prev_size_bytes = size // 8

                fields = register.findall("fields/field")
                for field in fields:
                    field_name = str.upper(field.findtext("name", "MISSING"))
                    field_name_lower = str.lower(field_name)
                    bit_offset = int(field.findtext("bitOffset", "0"), 0)
                    bit_width = int(field.findtext("bitWidth", "0"), 0)
                    field_access = field.findtext("access") or register_access
                    mask = ((1 << bit_width) - 1) << bit_offset

                    regfield_defs.append(
                        f"constexpr RegField {peripheral_name_lower}_{register_name_lower}_{field_name_lower}{{0x{mask:08X}u, {bit_offset}}};"
                    )

            file_lines.append("};\n")
            file_lines.extend(static_asserts)
            file_lines.append("")
            file_lines.append(
                f"inline {peripheral_name_capped}Regs& {peripheral_name_lower}() {{ return *reinterpret_cast<{peripheral_name_capped}Regs*>({peripheral_name}_BASE); }}\n"
            )
            file_lines.extend(regfield_defs)
            file_lines.append("")

            end_include_guard_line = f"#endif // {peripheral_name}_HPP"
            file_lines.append(end_include_guard_line)

            (outdir / f"{peripheral_name_lower}.hpp").write_text("\n".join(file_lines))

        except Overlap:
            skipped.append(peripheral_name)
            continue

    print("SKIPPED:")
    for name in skipped:
        print(name)


if __name__ == "__main__":
    main()
