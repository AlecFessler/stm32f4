import fnmatch
import os.path
import re
import shutil
import sys
import xml.etree.ElementTree as ET
from collections import defaultdict
from collections.abc import Iterable, Iterator, Mapping
from dataclasses import dataclass
from operator import itemgetter
from pathlib import Path
from typing import Any
from xml.etree.ElementTree import Element

import yaml

# One parsed yaml file, and every one of them keyed by its path relative to the
# vendored enums directory, which is how the device file and _include spell them
Document = dict[str, Any]
YamlStore = dict[str, Document]

# A correction table, read straight out of yaml and matched by glob
OverrideTable = dict[str, Any]

# enum name -> member name -> encoding
EnumValues = dict[str, dict[str, int]]
# (register glob, field glob, enum name), which is what lets a Field be typed:
# at emit time each field's real register and field name is matched against these
EnumGlob = tuple[str, str, str]
# (register glob, merged name, member globs)
Merge = tuple[str, str, list[str]]
# (register glob, field glob, {attribute: value})
Modification = tuple[str, str, dict[str, Any]]
# What a modification was keyed to, so a miss can be reported. A register-level
# modification has no field glob and carries None in its place.
ModificationTarget = tuple[str | None, str]
# A peripheral's registers and their fields, reduced to what two peripherals
# have to agree on to count as the same layout
RegisterLayout = tuple

SVD_DIR = "svd"
SVD_FILE = "STM32F429.svd"
ENUM_DIR = "enums"
DEVICE_YAML = "stm32f429.yaml"
ACCESS_OVERRIDES_YAML = "access_overrides.yaml"
SVD_OVERRIDES_YAML = "svd_overrides.yaml"
OUTPUT_DIR = Path("src") / "do-not-edit"

ACCESS_ENUMERATORS = {
    "read-write": "Access::RW",
    "read-only": "Access::RO",
    "write-only": "Access::WO",
    "rs": "Access::RS",
    "ro": "Access::RO",
    "rc_w1": "Access::RC_W1",
    "rc_w0": "Access::RC_W0",
}

# A field name that is a stem plus a trailing index, the shape an array is
# grouped out of
INDEXED_FIELD_RE = re.compile(r"([A-Za-z_]+?)(\d+)")

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


# ----------------------------------------------------------------------------
# input: everything svdgen reads off disk
# ----------------------------------------------------------------------------


def read_svd(path: Path) -> Element:
    return ET.parse(path).getroot()


def read_yaml(path: Path) -> Document:
    with open(path) as f:
        return yaml.safe_load(f) or {}


def read_yaml_tree(enum_dir: Path) -> YamlStore:
    """Every vendored yaml, keyed the way the device file and _include spell it."""
    return {
        str(path.relative_to(enum_dir)): read_yaml(path)
        for path in sorted(enum_dir.rglob("*.yaml"))
    }


def warn(message: str) -> None:
    """A disagreement svdgen resolves for itself but will not do silently."""
    print(message, file=sys.stderr)


# ----------------------------------------------------------------------------
# the SVD: the names and numbers every other section reads out of it
# ----------------------------------------------------------------------------


def find_name(element: Element) -> str:
    """MISSING keeps a nameless element identifiable instead of crashing here."""
    return element.findtext("name", "MISSING")


def find_description(element: Element) -> str:
    """Collapse the hard-wrapped whitespace the SVD uses in descriptions."""
    return " ".join(element.findtext("description", "").split())


def parse_address_offset(register: Element) -> int:
    return int(register.findtext("addressOffset", "0"), 0)


def parse_register_size(register: Element) -> int:
    """The register's width in bits."""
    return int(register.findtext("size", "0"), 0)


def parse_bit_offset(field: Element) -> int:
    return int(field.findtext("bitOffset", "0"), 0)


def parse_bit_width(field: Element) -> int:
    return int(field.findtext("bitWidth", "0"), 0)


def parse_reset_value(register: Element) -> int:
    """The SVD writes reset values both as 0x... and as bare hex digits."""
    raw = (register.findtext("resetValue") or "0").strip()
    return int(raw, 0) if raw.lower().startswith("0x") else int(raw, 16)


def compute_field_mask(field: Element) -> int:
    return ((1 << parse_bit_width(field)) - 1) << parse_bit_offset(field)


def sort_registers_by_address(peripheral: Element) -> list[Element]:
    """The SVD does not list registers in address order."""
    return sorted(peripheral.findall("registers/register"), key=parse_address_offset)


def list_register_fields(peripheral: Element) -> Iterator[tuple[str, Element]]:
    """(register name, field) for every field of every register."""
    for register in peripheral.findall("registers/register"):
        register_name = find_name(register)
        for field in register.findall("fields/field"):
            yield register_name, field


def index_peripherals_by_name(peripherals: list[Element]) -> dict[str, Element]:
    """For resolving derivedFrom."""
    return {find_name(peripheral): peripheral for peripheral in peripherals}


def find_defining_peripheral(
    peripheral: Element, peripherals_by_name: dict[str, Element]
) -> Element:
    """A derived peripheral carries only name and baseAddress; everything else
    lives on the peripheral it derives from."""
    derived_from = peripheral.get("derivedFrom")
    return peripherals_by_name[derived_from] if derived_from else peripheral


def group_peripheral_names(
    peripherals: list[Element], peripherals_by_name: dict[str, Element]
) -> dict[str, list[str]]:
    """SVD groupName -> [peripheral names]. Groups with more than one member get
    a subdirectory and an aggregate header."""
    names_by_group: dict[str, list[str]] = defaultdict(list)
    for peripheral in peripherals:
        definition = find_defining_peripheral(peripheral, peripherals_by_name)
        names_by_group[definition.findtext("groupName")].append(find_name(peripheral))
    return names_by_group


def compute_register_layout(
    peripheral: Element, peripherals_by_name: dict[str, Element]
) -> RegisterLayout:
    """Register layout, for deciding which peripherals share an enum set."""
    definition = find_defining_peripheral(peripheral, peripherals_by_name)
    return tuple(
        (
            find_name(register),
            register.findtext("addressOffset"),
            tuple(
                (
                    find_name(field),
                    field.findtext("bitOffset"),
                    field.findtext("bitWidth"),
                )
                for field in register.findall("fields/field")
            ),
        )
        for register in definition.findall("registers/register")
    )


# ----------------------------------------------------------------------------
# globs: how every table in this program names what it applies to
# ----------------------------------------------------------------------------


def split_globs(glob_list: str) -> list[str]:
    """One key can name several globs (BKP,BK2P), and mark a glob that is
    allowed to match nothing with svdtools' leading ?~."""
    return [glob.strip().lstrip("?~") for glob in glob_list.split(",")]


def matches_any_glob(name: str, globs: Iterable[str]) -> bool:
    return any(fnmatch.fnmatchcase(name, glob) for glob in globs)


def allows_no_match(glob_list: str) -> bool:
    """svdtools writes ?~ on the globs that are meant to miss, so TIM9 can be
    handed the same yaml as TIM1 without owning a CR2."""
    return any(glob.strip().startswith("?~") for glob in glob_list.split(","))


# ----------------------------------------------------------------------------
# the vendored yaml: which files describe which peripheral
# ----------------------------------------------------------------------------


def list_includes(document: Document) -> list[str]:
    """_include is one path or a list of them."""
    includes = document.get("_include", [])
    return [includes] if isinstance(includes, str) else includes


def resolve_includes(document: Document, path: str) -> list[str]:
    """The _include paths of one document, spelled the way the store keys them.

    A yaml includes a sibling by bare name and a parent directory through ..,
    which normpath spells the way the store keys it.
    """
    return [
        os.path.normpath(str(Path(path).parent / include))
        for include in list_includes(document)
    ]


def collect_peripheral_renames(device_yaml: Document) -> dict[str, str]:
    """SVD name -> yaml key, because _modify can rename a peripheral and a yaml
    key may then not be an SVD name."""
    return {
        modification["name"]: yaml_key
        for yaml_key, modification in (device_yaml.get("_modify") or {}).items()
        if isinstance(modification, dict) and "name" in modification
    }


def collect_field_yaml_paths(peripheral_spec: Document) -> set[str]:
    """patches/ and collect/ do fixups and array grouping, not enum values."""
    return {
        include
        for include in list_includes(peripheral_spec)
        if include.startswith("fields/")
    }


def match_enum_files_to_peripherals(
    device_yaml: Document, peripheral_names: list[str]
) -> dict[str, set[str]]:
    """peripheral -> the fields/*.yaml the device file names for it."""
    renames = collect_peripheral_renames(device_yaml)
    files: dict[str, set[str]] = defaultdict(set)
    for yaml_key, peripheral_spec in device_yaml.items():
        if yaml_key.startswith("_") or not isinstance(peripheral_spec, dict):
            continue
        paths = collect_field_yaml_paths(peripheral_spec)
        if not paths:
            continue
        # keys are shell globs (OTG_FS_*, GPIO[ABK]), not regexes
        glob = renames.get(yaml_key, yaml_key)
        for name in peripheral_names:
            if fnmatch.fnmatchcase(name, glob):
                files[name] |= paths
    return files


def share_enum_files_across_layouts(
    files_by_peripheral: dict[str, set[str]],
    peripherals: list[Element],
    peripherals_by_name: dict[str, Element],
) -> dict[str, frozenset[str]]:
    """The device yaml names only what stm32-rs treats as base types, and its
    derivation model is not the SVD's (it rebases I2C1/USART1). Propagate by
    identical register layout instead: GPIO[ABK] names three ports, eleven
    share a layout."""
    layout_by_peripheral = {
        find_name(peripheral): compute_register_layout(peripheral, peripherals_by_name)
        for peripheral in peripherals
    }
    files_by_layout: dict[RegisterLayout, set[str]] = defaultdict(set)
    for name, layout in layout_by_peripheral.items():
        files_by_layout[layout] |= files_by_peripheral[name]
    return {
        name: frozenset(files_by_layout[layout])
        for name, layout in layout_by_peripheral.items()
    }


def collect_enum_files(
    device_yaml: Document,
    peripherals: list[Element],
    peripherals_by_name: dict[str, Element],
) -> dict[str, frozenset[str]]:
    """peripheral -> the vendored yaml files that describe it."""
    files_by_peripheral = match_enum_files_to_peripherals(
        device_yaml, [find_name(peripheral) for peripheral in peripherals]
    )
    return share_enum_files_across_layouts(
        files_by_peripheral, peripherals, peripherals_by_name
    )


def find_groups_sharing_enums(
    peripheral_names_by_group: dict[str, list[str]],
    enum_files_by_peripheral: dict[str, frozenset[str]],
) -> set[str]:
    """Group names whose members all share one enum file set, so the values can
    live once in the aggregate instead of being repeated per member."""
    return {
        group_name
        for group_name, member_names in peripheral_names_by_group.items()
        if len(member_names) > 1
        and len({enum_files_by_peripheral[name] for name in member_names}) == 1
    }


# ----------------------------------------------------------------------------
# the vendored yaml: what one peripheral's files say
# ----------------------------------------------------------------------------


def collect_document_and_includes(
    vendored_yaml: YamlStore, path: str, visited: set[str]
) -> list[Document]:
    """One document, preceded by everything it includes, depth first."""
    if path in visited:
        return []
    visited.add(path)
    document = vendored_yaml[path]
    documents: list[Document] = []
    for include in resolve_includes(document, path):
        documents += collect_document_and_includes(vendored_yaml, include, visited)
    documents.append(document)
    return documents


def collect_documents(
    vendored_yaml: YamlStore, paths: Iterable[str]
) -> list[Document]:
    """Every yaml reachable from paths, an include before whatever includes it,
    each one visited once."""
    visited: set[str] = set()
    documents: list[Document] = []
    for path in sorted(paths):
        documents += collect_document_and_includes(vendored_yaml, path, visited)
    return documents


def list_register_specs(document: Document) -> list[tuple[str, Document]]:
    """The (register glob, spec) pairs of a yaml, skipping its directives."""
    return [
        (glob, spec)
        for glob, spec in document.items()
        if not glob.startswith("_") and isinstance(spec, dict)
    ]


def list_field_specs(document: Document) -> list[tuple[str, str, Any]]:
    """The (register glob, field glob, spec) triples of a yaml."""
    return [
        (register_glob, field_glob, field_spec)
        for register_glob, register_spec in list_register_specs(document)
        for field_glob, field_spec in register_spec.items()
        if not field_glob.startswith("_")
    ]


def escape_cpp_keyword(name: str) -> str:
    """Trailing underscore on anything that would otherwise be a keyword."""
    return f"{name}_" if name in CPP_KEYWORDS else name


def name_enum_types(field_glob: str, field_spec: Any) -> list[str]:
    """The enum types one value set defines.

    _name wins when the yaml gives one. Otherwise the key is a glob, and it may
    be a comma-separated list of them (BKP,BK2P) naming several fields that
    share the same values, so each becomes its own type.
    """
    if isinstance(field_spec, dict) and "_name" in field_spec:
        return [str(field_spec["_name"]).lower()]
    names: list[str] = []
    for glob in field_glob.split(","):
        # globs use * ? [ ] and a leading ?~ for optional-match
        name = re.sub(r"[^A-Za-z0-9_]", "", glob).lower()
        if name and name not in names:
            names.append(name)
    return names


def collect_enum_members(field_spec: Any) -> dict[str, int]:
    """{ValueName: [value, description]} -> {name: encoding}, unwrapping the
    _read / _write variants and skipping directives."""
    if not isinstance(field_spec, dict):
        return {}
    if "_read" in field_spec or "_write" in field_spec:
        merged: dict[str, int] = {}
        for variant in ("_read", "_write"):
            merged.update(collect_enum_members(field_spec.get(variant, {})))
        return merged
    members: dict[str, int] = {}
    for member_name, member_spec in field_spec.items():
        if member_name.startswith("_"):
            continue
        value = (
            member_spec[0]
            if isinstance(member_spec, list) and member_spec
            else member_spec
        )
        # a negative value is svdtools' "any other encoding"; it survives as a
        # marker until the field's width is known, see resolve_open_encodings
        if isinstance(value, int):
            members[escape_cpp_keyword(str(member_name).lower())] = value
    return members


def collect_enum_values(
    documents: Iterable[Document],
) -> tuple[EnumValues, list[EnumGlob]]:
    """The value sets these documents define, and what each one types."""
    enum_values: EnumValues = {}
    enum_globs: list[EnumGlob] = []
    for document in documents:
        for register_glob, field_glob, field_spec in list_field_specs(document):
            # a list here is a bit-range spec, not a set of values
            members = collect_enum_members(field_spec)
            if not members:
                continue
            for enum_name in name_enum_types(field_glob, field_spec):
                if enum_name in enum_values and enum_values[enum_name] != members:
                    continue
                enum_values[enum_name] = members
                enum_globs.append((register_glob, field_glob, enum_name))
    return enum_values, enum_globs


def name_merged_field(glob: str) -> str:
    """PLLM* -> PLLM, the same shaping name_enum_types does to name a type."""
    return re.sub(r"[^A-Za-z0-9_]", "", glob)


def list_merge_specs(merge_spec: Any) -> list[tuple[str, str | list[str]]]:
    """enums/README.md documents three shapes: a bare glob, a list of them, or a
    mapping from the merged name to a comma-separated list of them."""
    if merge_spec is None:
        return []
    if isinstance(merge_spec, dict):
        return list(merge_spec.items())
    globs = [merge_spec] if isinstance(merge_spec, str) else merge_spec
    return [(name_merged_field(glob), glob) for glob in globs]


def split_merge_members(globs: str | list[str]) -> list[str]:
    listed = globs.split(",") if isinstance(globs, str) else globs
    return [str(glob).strip() for glob in listed]


def collect_merges(documents: Iterable[Document]) -> list[Merge]:
    """_merge marks a field the SVD split into one entry per bit."""
    merges: list[Merge] = []
    for document in documents:
        for register_glob, register_spec in list_register_specs(document):
            for name, globs in list_merge_specs(register_spec.get("_merge")):
                merges.append((register_glob, name, split_merge_members(globs)))
    return merges


def collect_modifications(documents: Iterable[Document]) -> list[Modification]:
    """A fields/*.yaml corrects the fields of the registers it describes, the
    way crc_idr_8bit.yaml narrows IDR to the 8 bits RM0090 gives it."""
    modifications: list[Modification] = []
    for document in documents:
        for register_glob, register_spec in list_register_specs(document):
            for field_glob, attributes in (register_spec.get("_modify") or {}).items():
                modifications.append((register_glob, field_glob, attributes))
    return modifications


@dataclass(frozen=True)
class VendoredPatches:
    """Everything one peripheral's vendored yaml files ask svdgen to do."""

    enum_values: EnumValues
    enum_globs: list[EnumGlob]
    merges: list[Merge]
    modifications: list[Modification]


def collect_vendored_patches(
    vendored_yaml: YamlStore, paths: frozenset[str]
) -> VendoredPatches:
    documents = collect_documents(vendored_yaml, paths)
    enum_values, enum_globs = collect_enum_values(documents)
    return VendoredPatches(
        enum_values=enum_values,
        enum_globs=enum_globs,
        merges=collect_merges(documents),
        modifications=collect_modifications(documents),
    )


def collect_patches_by_peripheral(
    vendored_yaml: YamlStore, enum_files_by_peripheral: dict[str, frozenset[str]]
) -> dict[str, VendoredPatches]:
    """Read each distinct file set once: the eleven GPIO ports share one."""
    patches_by_file_set = {
        paths: collect_vendored_patches(vendored_yaml, paths)
        for paths in set(enum_files_by_peripheral.values())
    }
    return {
        name: patches_by_file_set[paths]
        for name, paths in enum_files_by_peripheral.items()
    }


# ----------------------------------------------------------------------------
# the local tables: what the vendored yaml does not carry
# ----------------------------------------------------------------------------


def collect_local_merges(
    svd_overrides: OverrideTable, peripheral_name: str
) -> list[Merge]:
    """The merges svd_overrides.yaml adds to one peripheral."""
    merges: list[Merge] = []
    for peripheral_glob, peripheral_entry in svd_overrides.items():
        if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
            continue
        for register_glob, kinds in peripheral_entry.items():
            if register_glob == "modify":
                continue
            for name, globs in (kinds.get("merge") or {}).items():
                merges.append((register_glob, name, list(globs)))
    return merges


def collect_peripheral_merges(
    vendored_merges: list[Merge], svd_overrides: OverrideTable, peripheral_name: str
) -> list[Merge]:
    """One flat merge list for a peripheral, from both tables."""
    return list(vendored_merges) + collect_local_merges(svd_overrides, peripheral_name)


def collect_table_modifications(
    table: OverrideTable, key: str, peripheral_name: str
) -> tuple[dict[str, dict[str, Any]], list[Modification]]:
    """The register-level and field-level changes one table makes to one
    peripheral. The vendored yaml spells the key _modify and the local one
    spells it modify, which is the only difference between them."""
    registers: dict[str, dict[str, Any]] = {}
    fields: list[Modification] = []
    for peripheral_glob, peripheral_entry in table.items():
        if peripheral_glob.startswith("_") or not isinstance(peripheral_entry, dict):
            continue
        if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
            continue
        registers.update(peripheral_entry.get(key) or {})
        for register_glob, register_spec in peripheral_entry.items():
            if register_glob == key or not isinstance(register_spec, dict):
                continue
            for field_glob, attributes in (register_spec.get(key) or {}).items():
                fields.append((register_glob, field_glob, attributes))
    return registers, fields


def collect_peripheral_modifications(
    device_yaml: Document, svd_overrides: OverrideTable, peripheral_name: str
) -> tuple[dict[str, dict[str, Any]], list[Modification]]:
    """Register-level changes first, then field-level ones, from both tables."""
    registers: dict[str, dict[str, Any]] = {}
    fields: list[Modification] = []
    for table, key in ((device_yaml, "_modify"), (svd_overrides, "modify")):
        table_registers, table_fields = collect_table_modifications(
            table, key, peripheral_name
        )
        registers.update(table_registers)
        fields += table_fields
    return registers, fields


# ----------------------------------------------------------------------------
# checking the tables, before anything is trusted to them
# ----------------------------------------------------------------------------


# Directives svdgen acts on, and the ones it knowingly leaves alone. A
# directive in neither set stops the run: _merge and _modify both sat in this
# yaml being silently dropped, and the point of the split is that a third one
# cannot arrive the same way.
HANDLED_DIRECTIVES = {
    "_include",  # collect_documents, collect_enum_files
    "_modify",   # apply_modifications, and renames in collect_peripheral_renames
    "_merge",    # merge_split_fields
    "_name",     # name_enum_types
    "_read",     # collect_enum_members
    "_write",    # collect_enum_members
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

# The kinds each local table will accept. Anything else is a typo, or a shape
# svdgen has not been taught.
ACCESS_OVERRIDE_KINDS = ("rc_w1", "rc_w0", "rs", "ro")
SVD_OVERRIDE_KINDS = ("merge", "modify")


def is_unknown_directive(key: Any) -> bool:
    return (
        isinstance(key, str)
        and key.startswith("_")
        and key not in HANDLED_DIRECTIVES
        and key not in SKIPPED_DIRECTIVES
    )


def check_directives(node: Any, filename: str) -> None:
    """Refuse a directive that is neither implemented nor knowingly skipped."""
    if not isinstance(node, dict):
        return
    for key, value in node.items():
        if is_unknown_directive(key):
            raise ValueError(
                f"{filename}: '{key}' is a directive svdgen does not "
                f"implement. Add it to HANDLED_DIRECTIVES once it is, "
                f"or to SKIPPED_DIRECTIVES with what honouring it "
                f"would change."
            )
        check_directives(value, filename)


def check_vendored_directives(
    vendored_yaml: YamlStore, enum_files_by_peripheral: dict[str, frozenset[str]]
) -> None:
    """The device file, and every field file it names."""
    check_directives(vendored_yaml[DEVICE_YAML], DEVICE_YAML)
    field_files = {
        path for paths in enum_files_by_peripheral.values() for path in paths
    }
    for path in sorted(field_files):
        check_directives(vendored_yaml[path], path)


def check_access_overrides(access_overrides: OverrideTable, filename: str) -> None:
    """peripheral glob -> register glob -> {kind: [field globs]}

    Rejects an unknown kind rather than ignoring it: a misspelled one would
    otherwise leave a mask silently empty and the generated code silently
    wrong, with the table still looking right.
    """
    for peripheral_glob, registers_by_glob in access_overrides.items():
        for register_glob, kinds in registers_by_glob.items():
            for kind in kinds:
                if kind not in ACCESS_OVERRIDE_KINDS:
                    raise ValueError(
                        f"{filename}: {peripheral_glob}.{register_glob} lists "
                        f"'{kind}', which is not one of "
                        f"{', '.join(ACCESS_OVERRIDE_KINDS)}"
                    )


def check_merge_globs(payload: Any, where: str, filename: str) -> None:
    """A merge names its members as a list, one glob per split bit."""
    for name, globs in payload.items():
        if not isinstance(globs, list):
            raise ValueError(
                f"{filename}: {where}.merge.{name} is "
                f"{type(globs).__name__}, expected a list of globs"
            )


def check_svd_overrides(svd_overrides: OverrideTable, filename: str) -> None:
    """peripheral glob -> `modify`, or -> register glob -> {kind: payload}

    Rejects an unknown kind for the same reason check_access_overrides does: a
    misspelling would leave the correction silently unapplied with the table
    still looking right.
    """
    for peripheral_glob, peripheral_entry in svd_overrides.items():
        for key, register_entry in peripheral_entry.items():
            if key == "modify":
                continue
            for kind, payload in register_entry.items():
                if kind not in SVD_OVERRIDE_KINDS:
                    raise ValueError(
                        f"{filename}: {peripheral_glob}.{key} lists '{kind}', "
                        f"which is not one of {', '.join(SVD_OVERRIDE_KINDS)}"
                    )
                if kind == "merge":
                    check_merge_globs(payload, f"{peripheral_glob}.{key}", filename)


# ----------------------------------------------------------------------------
# correcting the SVD, before anything reads it
# ----------------------------------------------------------------------------


# What an SVD element will accept a correction for. Anything else is a typo,
# or a directive shape svdgen has not been taught.
REGISTER_ATTRIBUTES = (
    "name",
    "displayName",
    "description",
    "addressOffset",
    "alternateRegister",
    "access",
    "resetValue",
    "size",
)
FIELD_ATTRIBUTES = ("name", "description", "bitOffset", "bitWidth", "access")

# A _modify whose target this SVD does not have. The two RCC ones rename a
# field an unvendored patches/rcc/ file would have added first, so the rename
# lands on nothing and RCC_APB1ENR has no UART7EN or UART8EN at all. The FMC
# one is already applied: this revision spells the field SDCLK to begin with.
UNMATCHED_MODIFICATIONS = {
    ("APB1ENR", "UART7ENR"): "the field is added by an unvendored rcc patch",
    ("APB1ENR", "UART8ENR"): "the field is added by an unvendored rcc patch",
    ("SDCR2", "CLK"): "this SVD revision already names the field SDCLK",
}


def set_or_remove_child(element: Element, tag: str, value: Any) -> None:
    """An empty value removes the child: alternateRegister: "" is how the
    vendored yaml unlinks a register whose address was wrong in the first
    place. Numbers go back as hex, because parse_reset_value reads a bare
    decimal string as hex and would misread `276`.
    """
    child = element.find(tag)
    if value == "" or value is None:
        if child is not None:
            element.remove(child)
        return
    if child is None:
        child = ET.SubElement(element, tag)
    child.text = f"0x{value:X}" if isinstance(value, int) else str(value)


def apply_attributes(
    element: Element, attributes: dict[str, Any], allowed: tuple[str, ...], where: str
) -> None:
    """Set or drop the child elements a _modify entry names."""
    for attribute, value in attributes.items():
        if attribute not in allowed:
            raise ValueError(f"{where}: cannot modify '{attribute}'")
        set_or_remove_child(element, attribute, value)


def apply_register_modifications(
    register: Element, modifications: dict[str, dict[str, Any]]
) -> set[ModificationTarget]:
    """-> the globs that matched, so a miss can be reported."""
    matched: set[ModificationTarget] = set()
    register_name = find_name(register)
    for register_glob, attributes in modifications.items():
        if fnmatch.fnmatchcase(register_name, register_glob):
            apply_attributes(
                register, attributes, REGISTER_ATTRIBUTES, f"register {register_name}"
            )
            matched.add((None, register_glob))
    return matched


def apply_field_modifications(
    register: Element, modifications: list[Modification]
) -> set[ModificationTarget]:
    """-> the globs that matched, so a miss can be reported."""
    matched: set[ModificationTarget] = set()
    # a register rename is already applied, and is what these globs match
    register_name = find_name(register)
    for register_glob, field_glob, attributes in modifications:
        if not fnmatch.fnmatchcase(register_name, register_glob):
            continue
        for field in register.findall("fields/field"):
            field_name = find_name(field)
            if matches_any_glob(field_name, split_globs(field_glob)):
                apply_attributes(
                    field,
                    attributes,
                    FIELD_ATTRIBUTES,
                    f"field {register_name}.{field_name}",
                )
                matched.add((register_glob, field_glob))
    return matched


def apply_modifications(
    peripheral: Element,
    register_modifications: dict[str, dict[str, Any]],
    field_modifications: list[Modification],
) -> set[ModificationTarget]:
    """Correct the SVD before anything reads it, and report what it corrected.

    The vendored yaml carries these because the vendor file is wrong: FMC
    gives BWTR3 and BWTR4 the addresses of BWTR1 and BWTR2, and nine fields
    keep a name their enum was written against. Dropping them silently is
    what left rcc::Pllon and spi::Tifrfe attached to nothing.
    """
    matched: set[ModificationTarget] = set()
    for register in peripheral.findall("registers/register"):
        matched |= apply_register_modifications(register, register_modifications)
        matched |= apply_field_modifications(register, field_modifications)
    return matched


def check_modifications_landed(
    requested: set[ModificationTarget], landed: set[ModificationTarget]
) -> None:
    """A correction that matches nothing is the failure it was written to fix.

    Nine of the eleven in the vendored yaml rename a field whose enum is
    already written against the new name, so a miss here is what leaves that
    enum typing nothing.
    """
    for register_glob, field_glob in sorted(requested - landed, key=str):
        if (register_glob, field_glob) in UNMATCHED_MODIFICATIONS:
            continue
        where = field_glob if register_glob is None else f"{register_glob}.{field_glob}"
        raise ValueError(
            f"modify '{where}' matches nothing. Correct the glob, or name it "
            f"in UNMATCHED_MODIFICATIONS with why the target is absent."
        )


def find_merge_members(container: Element, field_globs: list[str]) -> list[Element]:
    """The one-bit fields a merge entry names."""
    return [
        field
        for field in container.findall("field")
        if matches_any_glob(find_name(field), field_globs)
    ]


def compute_merged_mask(members: list[Element], where: str) -> int:
    """A merge that overlaps itself is a mistake in the table rather than
    something to paper over."""
    mask = 0
    for field in members:
        member_mask = compute_field_mask(field)
        if member_mask & mask:
            raise ValueError(f"{where}: members overlap")
        mask |= member_mask
    return mask


def compute_bit_span(mask: int) -> tuple[int, int]:
    """(offset, width) of the bits a mask covers, holes included."""
    offset = (mask & -mask).bit_length() - 1
    return offset, mask.bit_length() - offset


def is_contiguous(mask: int, offset: int, width: int) -> bool:
    return mask == ((1 << width) - 1) << offset


def check_members_agree_on_access(members: list[Element], where: str) -> None:
    if len({field.findtext("access") for field in members}) > 1:
        raise ValueError(f"{where}: members disagree on access")


def merge_members(
    container: Element, members: list[Element], name: str, where: str
) -> None:
    """Rewrite the lowest member to span the whole range, and drop the rest."""
    mask = compute_merged_mask(members, where)
    offset, width = compute_bit_span(mask)
    if not is_contiguous(mask, offset, width):
        raise ValueError(f"{where}: bits are not contiguous")
    check_members_agree_on_access(members, where)

    merged = min(members, key=parse_bit_offset)
    merged.find("name").text = name
    merged.find("bitOffset").text = str(offset)
    merged.find("bitWidth").text = str(width)
    for field in members:
        if field is not merged:
            container.remove(field)


def merge_split_fields(register: Element, merges: list[Merge]) -> None:
    """Replace each split family with the one field it really is.

    The SVD gives PLLM as PLLM0..PLLM5, six one-bit fields, where RM0090
    documents one 6-bit PLLM. Merging happens before anything reads the
    register, so the array grouping, the masks and the enum matching all see
    one field.
    """
    container = register.find("fields")
    if container is None:
        return
    register_name = find_name(register)
    for register_glob, name, field_globs in merges:
        if not fnmatch.fnmatchcase(register_name, register_glob):
            continue
        members = find_merge_members(container, field_globs)
        # a merge already applied leaves one field behind, and every table is
        # consulted for every peripheral sharing the registers
        if len(members) < 2:
            continue
        merge_members(container, members, name, f"{register_name}.{name}")


def merge_split_fields_in_peripheral(peripheral: Element, merges: list[Merge]) -> None:
    for register in peripheral.findall("registers/register"):
        merge_split_fields(register, merges)


def group_registers_by_address(registers: list[Element]) -> dict[int, list[Element]]:
    by_offset: dict[int, list[Element]] = defaultdict(list)
    for register in registers:
        by_offset[parse_address_offset(register)].append(register)
    return by_offset


def check_address_collisions(peripheral_name: str, registers: list[Element]) -> None:
    """Two registers at one address have to say so.

    The SVD marks the real cases, TIM's CCMR in output and input mode, with
    alternateRegister. Where it does not, the address is usually the thing
    that is wrong: FMC gave BWTR3 the address of BWTR1 and called that an
    alternate view.
    """
    for offset, at_offset in group_registers_by_address(registers).items():
        if len(at_offset) < 2:
            continue
        if not any(register.findtext("alternateRegister") for register in at_offset):
            names = ", ".join(find_name(register) for register in at_offset)
            raise ValueError(
                f"{peripheral_name} 0x{offset:03X}: {names} share an address "
                f"and none names the other as an alternateRegister"
            )


@dataclass(frozen=True)
class Corrections:
    """Everything one family of peripherals asks be corrected in its SVD."""

    register_modifications: dict[str, dict[str, Any]]
    field_modifications: list[Modification]
    merges: list[Merge]


def group_peripherals_by_definition(
    peripherals: list[Element], peripherals_by_name: dict[str, Element]
) -> list[list[Element]]:
    """find_defining_peripheral hands every peripheral of a derived family the
    same element, so group by it and mutate once."""
    families: dict[int, list[Element]] = defaultdict(list)
    for peripheral in peripherals:
        definition = find_defining_peripheral(peripheral, peripherals_by_name)
        families[id(definition)].append(peripheral)
    return list(families.values())


def collect_corrections(
    family: list[Element],
    device_yaml: Document,
    svd_overrides: OverrideTable,
    patches_by_peripheral: dict[str, VendoredPatches],
) -> Corrections:
    """One family shares one definition, so every name in it contributes."""
    registers: dict[str, dict[str, Any]] = {}
    fields: list[Modification] = []
    merges: list[Merge] = []
    for peripheral in family:
        name = find_name(peripheral)
        patches = patches_by_peripheral[name]
        peripheral_registers, peripheral_fields = collect_peripheral_modifications(
            device_yaml, svd_overrides, name
        )
        registers.update(peripheral_registers)
        fields += peripheral_fields + patches.modifications
        merges += collect_peripheral_merges(patches.merges, svd_overrides, name)
    return Corrections(registers, fields, merges)


def collect_correction_targets(corrections: Corrections) -> set[ModificationTarget]:
    """What the corrections were keyed to, so a miss can be reported."""
    return {(None, glob) for glob in corrections.register_modifications} | {
        (register_glob, field_glob)
        for register_glob, field_glob, _ in corrections.field_modifications
    }


# ----------------------------------------------------------------------------
# enum values as emitted
# ----------------------------------------------------------------------------


def capitalize_first(name: str) -> str:
    """A type name keeps the rest of its spelling, which .capitalize() lowers."""
    return f"{name[:1].upper()}{name[1:]}"


def find_matching_enum(
    enum_globs: list[EnumGlob], register_name: str, field_name: str
) -> str | None:
    """The enum one field uses, or None."""
    for register_glob, field_glob, enum_name in enum_globs:
        if not matches_any_glob(register_name, split_globs(register_glob)):
            continue
        if not matches_any_glob(field_name, split_globs(field_glob)):
            continue
        return enum_name
    return None


def find_enum_type(
    enum_globs: list[EnumGlob], namespace: str, register_name: str, field_name: str
) -> str | None:
    """The C++ enum class for one field, or None."""
    enum_name = find_matching_enum(enum_globs, register_name, field_name)
    if not enum_name:
        return None
    return f"{namespace}::{capitalize_first(enum_name)}"


def collect_enum_widths(
    definition: Element, enum_globs: list[EnumGlob]
) -> dict[str, int]:
    """enum name -> bit width of the fields it types.

    An enum is emitted once but can type several fields. They agree
    everywhere here; a disagreement is reported rather than guessed at.
    """
    widths: dict[str, int] = {}
    for register_name, field in list_register_fields(definition):
        field_name = find_name(field)
        enum_name = find_matching_enum(enum_globs, register_name, field_name)
        if not enum_name:
            continue
        width = parse_bit_width(field)
        if widths.setdefault(enum_name, width) != width:
            warn(
                f"enum {enum_name}: {register_name}.{field_name} is "
                f"{width} bits, others are {widths[enum_name]}"
            )
    return widths


def find_unclaimed_encoding(claimed: set[int], width: int | None) -> int | None:
    """The smallest encoding the listed members do not use."""
    if width is None:
        return None
    return next((value for value in range(1 << width) if value not in claimed), None)


def resolve_open_members(
    enum_name: str, members: dict[str, int], width: int | None
) -> dict[str, int]:
    """Replace svdtools' negative marker with a real encoding.

    It means "any value the listed members do not claim", so the smallest
    unclaimed one is a faithful representative: HPRE lists 8..15 for Div2
    through Div512, which makes Div1 anything below 8, and 0 will do. Without
    this the one setting you actually want is the one you cannot name.
    """
    open_names = sorted(name for name, value in members.items() if value < 0)
    claimed = {value for value in members.values() if value >= 0}
    resolved = {name: value for name, value in members.items() if value >= 0}
    for name in open_names:
        encoding = find_unclaimed_encoding(claimed, width)
        if encoding is None:
            warn(f"enum {enum_name}.{name}: no encoding left unclaimed, dropped")
            continue
        resolved[name] = encoding
        claimed.add(encoding)
    return resolved


def resolve_open_encodings(
    enum_values: EnumValues, enum_widths: dict[str, int]
) -> EnumValues:
    return {
        enum_name: resolve_open_members(enum_name, members, enum_widths.get(enum_name))
        for enum_name, members in enum_values.items()
    }


def check_enum_fits(
    enum_values: EnumValues, enum_widths: dict[str, int], where: str
) -> None:
    """Every member of an enum has to survive the store into its field.

    write() masks with the field mask, so a member wider than the field loses
    its high bits and silently means something else. FLASH_ACR.LATENCY is the
    one that matters: 3 bits in the SVD, and flash::Latency names ws8 to ws15.
    """
    for enum_name, members in enum_values.items():
        width = enum_widths.get(enum_name)
        if width is None:
            continue
        for member, value in members.items():
            if value >= 0 and value >= (1 << width):
                raise ValueError(
                    f"{where}: {enum_name}::{member} = {value} does not fit "
                    f"the {width} bit field it types"
                )


def check_register_globs(
    peripheral_name: str, registers: list[Element], enum_globs: list[EnumGlob]
) -> None:
    """A register glob that matches nothing means an enum reaches no field.

    Anything without svdtools' ?~ is a name the SVD spells differently, which
    is how SYSCFG_MEMRMP hid.
    """
    names = [find_name(register) for register in registers]
    for register_glob, _, enum_name in enum_globs:
        if allows_no_match(register_glob):
            continue
        globs = split_globs(register_glob)
        if not any(matches_any_glob(name, globs) for name in names):
            raise ValueError(
                f"{peripheral_name}: enum {enum_name} is keyed to register "
                f"'{register_glob}', which matches no register here"
            )


def resolve_enums(
    definition: Element, enum_values: EnumValues, enum_globs: list[EnumGlob], where: str
) -> EnumValues:
    """The values as emitted: open encodings filled in, every member checked
    against the width of the field it types."""
    enum_widths = collect_enum_widths(definition, enum_globs)
    resolved = resolve_open_encodings(enum_values, enum_widths)
    check_enum_fits(resolved, enum_widths, where)
    return resolved


# ----------------------------------------------------------------------------
# access, the masks that come with it, and the bit-band alias
# ----------------------------------------------------------------------------


# PM0214 2.2.5: the peripheral bit-band region, whose alias starts at 0x42000000
BIT_BAND_REGION = range(0x40000000, 0x40100000)

# write() consults rw_neighbors, and so do set() and clear(); read() and a
# write-only write() never do, so naming it there would split the type for
# nothing
ACCESSES_CONSULTING_NEIGHBORS = ("read-write", "rs", "rc_w1", "rc_w0")

# Storing through an alias makes the hardware write back what it read for every
# other bit, which is safe beside rw, rc_w0 and reserved bits
ACCESSES_SAFE_TO_ALIAS = ("read-write", "rs", "rc_w1", "rc_w0")

# the SVD spelling, and the one the override table uses
READ_ONLY_ACCESSES = ("read-only", "ro")


def resolve_field_access(
    field: Element, register_access: str | None, overridden: dict[str, str]
) -> str:
    """Field access is usually absent; the SVD default is read-write.

    The override table wins over both. The SVD carries no modifiedWriteValues
    and no way to say rs, so it calls these bits read-write and nothing would
    stop an rmw() that acknowledges every flag the register happened to hold.
    """
    override = overridden.get(find_name(field))
    if override:
        return override
    return field.findtext("access") or register_access or "read-write"


def find_access_override_entry(
    access_overrides: OverrideTable, peripheral_name: str, register_name: str
) -> dict[str, list[str]] | None:
    """The access_overrides entry covering one register, or None."""
    for peripheral_glob, registers_by_glob in access_overrides.items():
        if not fnmatch.fnmatchcase(peripheral_name, peripheral_glob):
            continue
        for register_glob, register_entry in registers_by_glob.items():
            if fnmatch.fnmatchcase(register_name, register_glob):
                return register_entry
    return None


def find_override_kind(
    field_name: str, register_entry: dict[str, list[str]]
) -> str | None:
    """The access the table gives one field, or None."""
    return next(
        (
            kind
            for kind in ACCESS_OVERRIDE_KINDS
            if matches_any_glob(field_name, register_entry.get(kind, ()))
        ),
        None,
    )


def collect_overridden_accesses(
    register: Element, register_entry: dict[str, list[str]]
) -> dict[str, str]:
    """field name -> the access the table gives it, for the fields it names."""
    accesses: dict[str, str] = {}
    for field in register.findall("fields/field"):
        field_name = find_name(field)
        kind = find_override_kind(field_name, register_entry)
        if kind:
            accesses[field_name] = kind
    return accesses


def collect_access_masks(
    register: Element, overridden: dict[str, str]
) -> dict[str, int]:
    """access kind -> the bits the table gave it."""
    masks_by_kind = dict.fromkeys(ACCESS_OVERRIDE_KINDS, 0)
    for field in register.findall("fields/field"):
        kind = overridden.get(find_name(field))
        if kind:
            masks_by_kind[kind] |= compute_field_mask(field)
    return masks_by_kind


def compute_read_write_mask(register: Element, overridden: dict[str, str]) -> int:
    """Every bit still read-write once the table has had its say.

    A field's rw_neighbors is this mask minus its own bits, which is how both
    "clear() must read first" and "write() would zero something" get answered
    from one number, on every register rather than only the listed ones.
    """
    register_access = register.findtext("access")
    mask = 0
    for field in register.findall("fields/field"):
        if find_name(field) in overridden:
            continue
        if resolve_field_access(field, register_access, {}) == "read-write":
            mask |= compute_field_mask(field)
    return mask


def compute_reserved_set_bits(register: Element) -> int:
    """Bits the register resets to 1 that no field covers.

    RM0090 asks reserved bits be kept at their reset value, and 31 registers
    reset some of theirs to 1. A bare store would zero them.
    """
    covered = 0
    for field in register.findall("fields/field"):
        covered |= compute_field_mask(field)
    return parse_reset_value(register) & ~covered


def compute_force_zero_mask(masks_by_kind: dict[str, int]) -> int:
    """rs and rc_w1 are both "a written 1 is a command", so both want a 0."""
    return masks_by_kind["rc_w1"] | masks_by_kind["rs"]


def compute_force_one_mask(masks_by_kind: dict[str, int], register: Element) -> int:
    """rc_w0 wants a 1 to stay quiet; a reserved bit wants its reset value."""
    return masks_by_kind["rc_w0"] | compute_reserved_set_bits(register)


@dataclass(frozen=True)
class RegisterOverrides:
    """What the access table says about one register.

    Every field of the register carries the masks, not just the flags: the
    hazard is that writing any field also writes the bits beside it, so it is
    the neighbors that need naming.
    """

    accesses: dict[str, str]
    force_zero: int
    force_one: int
    rw_mask: int
    rc_w1_mask: int


def compute_register_overrides(
    access_overrides: OverrideTable, peripheral_name: str, register: Element
) -> RegisterOverrides:
    register_entry = (
        find_access_override_entry(
            access_overrides, peripheral_name, find_name(register)
        )
        or {}
    )
    accesses = collect_overridden_accesses(register, register_entry)
    masks_by_kind = collect_access_masks(register, accesses)
    return RegisterOverrides(
        accesses=accesses,
        force_zero=compute_force_zero_mask(masks_by_kind),
        force_one=compute_force_one_mask(masks_by_kind, register),
        rw_mask=compute_read_write_mask(register, accesses),
        rc_w1_mask=masks_by_kind["rc_w1"],
    )


def has_bit_band_alias(register_base: int, field: Element) -> bool:
    """An alias word exists for one bit of a register in the bit-band region."""
    mask = compute_field_mask(field)
    return mask == 1 << parse_bit_offset(field) and register_base in BIT_BAND_REGION


def can_use_bit_band(
    register_base: int,
    field: Element,
    access: str,
    rw_neighbors: bool | None,
    rc_w1_mask: int,
) -> bool:
    """Whether a store to this field's alias word is both legal and worth it.

    The write-back is unsafe beside another rc_w1 flag, whose echoed 1 would
    acknowledge it.

    A read-only field returns before any of that, because read() is the only
    accessor it has and a read triggers no write-back. Nothing has to trust
    that: every storing accessor already static_asserts its way out of an RO
    field, so those paths cannot be instantiated to begin with.
    """
    if not has_bit_band_alias(register_base, field):
        return False
    if access in READ_ONLY_ACCESSES:
        return True
    return bool(
        access in ACCESSES_SAFE_TO_ALIAS
        # a write-only field, or one owning its register, stores in one bus
        # cycle already; the alias would make the hardware read first
        and rw_neighbors
        and not (rc_w1_mask & ~compute_field_mask(field))
    )


# ----------------------------------------------------------------------------
# the C++ a peripheral turns into
# ----------------------------------------------------------------------------


@dataclass(frozen=True)
class RegisterContext:
    """What a Field definition needs to know about the register it lives in."""

    peripheral_name: str
    name: str
    base: int
    access: str | None
    enum_globs: list[EnumGlob]
    enum_namespace: str
    overrides: RegisterOverrides


def group_fields_by_stem(
    register: Element,
) -> tuple[dict[str, dict[int, Element]], list[Element]]:
    """The fields whose name is a stem plus an index, and everything else."""
    families: dict[str, dict[int, Element]] = defaultdict(dict)
    unindexed: list[Element] = []
    for field in register.findall("fields/field"):
        match = INDEXED_FIELD_RE.fullmatch(find_name(field))
        if match:
            families[match.group(1)][int(match.group(2))] = field
        else:
            unindexed.append(field)
    return families, unindexed


def is_array_family(members: dict[int, Element]) -> bool:
    """>= 4 members, with their indices running contiguously from 0."""
    return len(members) >= 4 and set(members) == set(range(len(members)))


def classify_fields(
    register: Element,
) -> tuple[dict[str, dict[int, Element]], list[Element]]:
    """Split a register's fields into indexable families and everything else.

    A family becomes an array; anything else falls back to a named constant.
    """
    families, singles = group_fields_by_stem(register)
    arrays: dict[str, dict[int, Element]] = {}
    for name_prefix, members in families.items():
        if is_array_family(members):
            arrays[name_prefix] = members
        else:
            singles.extend(members.values())
    return arrays, singles


def has_read_write_neighbors(
    context: RegisterContext, field: Element, access: str
) -> bool | None:
    """Whether anything read-write sits beside this field, or None where the
    accessors the field has would never ask."""
    if access not in ACCESSES_CONSULTING_NEIGHBORS:
        return None
    return bool(context.overrides.rw_mask & ~compute_field_mask(field))


def render_field_type(
    access: str, enum_type: str | None, rw_neighbors: bool | None, bit_band: bool
) -> str:
    """Field<Access::X>, Field<Access::X, gpio::Mode>, and the two flags only
    when they differ from their defaults. They are positional, so an untyped
    field has to name uint32_t to reach them. bit_band comes first because it
    is the commoner of the two and because an RO field has no meaningful
    rw_neighbors to spell out on the way past."""
    arguments = [ACCESS_ENUMERATORS[access]]
    if bit_band:
        arguments += [enum_type or "uint32_t", "true"]
    elif rw_neighbors is False:
        arguments += [enum_type or "uint32_t", "false", "false"]
    elif enum_type:
        arguments.append(enum_type)
    return f"Field<{', '.join(arguments)}>"


def render_field_initializer(
    register_base: int, field: Element, force_zero: int, force_one: int
) -> str:
    """{addr, field_mask, shift}, plus the masks when either is set.

    Aggregate initialization value-initializes what is left out, so the great
    majority of fields stay three numbers wide.
    """
    parts = [
        f"0x{register_base:08X}u",
        f"0x{compute_field_mask(field):08X}u",
        str(parse_bit_offset(field)),
    ]
    if force_zero or force_one:
        parts += [f"0x{force_zero:08X}u", f"0x{force_one:08X}u"]
    return "{" + ", ".join(parts) + "}"


def render_field_declaration(
    context: RegisterContext, field: Element
) -> tuple[str, str]:
    """The (type, initializer) one field is declared with."""
    field_name = find_name(field)
    access = resolve_field_access(field, context.access, context.overrides.accesses)
    enum_type = find_enum_type(
        context.enum_globs, context.enum_namespace, context.name, field_name
    )
    rw_neighbors = has_read_write_neighbors(context, field, access)
    bit_band = can_use_bit_band(
        context.base, field, access, rw_neighbors, context.overrides.rc_w1_mask
    )
    # a read-only field never stores, so the masks would be dead weight
    stores = access != "read-only"
    return (
        render_field_type(access, enum_type, rw_neighbors, bit_band),
        render_field_initializer(
            context.base,
            field,
            context.overrides.force_zero if stores else 0,
            context.overrides.force_one if stores else 0,
        ),
    )


def name_field_definition(context: RegisterContext, field_name: str) -> str:
    """peripheral_register_field, the name the header exposes. An array is
    named for the stem its members share."""
    return (
        f"{context.peripheral_name.lower()}_{context.name.lower()}_"
        f"{field_name.lower()}"
    )


def render_field_array(
    context: RegisterContext, name_prefix: str, members: dict[int, Element]
) -> list[str]:
    """One constexpr array, indexed the way the family is."""
    type_name, _ = render_field_declaration(context, members[0])
    lines = [
        f"constexpr {type_name} "
        f"{name_field_definition(context, name_prefix)}"
        f"[{len(members)}] = {{"
    ]
    for index in range(len(members)):
        _, initializer = render_field_declaration(context, members[index])
        lines.append(f"    {initializer},")
    lines.append("};")
    return lines


def render_field_scalar(context: RegisterContext, field: Element) -> str:
    type_name, initializer = render_field_declaration(context, field)
    return (
        f"constexpr {type_name} "
        f"{name_field_definition(context, find_name(field))}"
        f"{initializer};"
    )


def render_field_definitions(
    context: RegisterContext,
    arrays: dict[str, dict[int, Element]],
    singles: list[Element],
) -> list[str]:
    """constexpr Field definitions: arrays for families, scalars for the rest."""
    lines: list[str] = []
    for name_prefix, members in arrays.items():
        lines += render_field_array(context, name_prefix, members)
    for field in singles:
        lines.append(render_field_scalar(context, field))
    return lines


def render_enum_class(enum_name: str, members: dict[str, int]) -> list[str]:
    lines = [f"enum class {capitalize_first(enum_name)} : uint32_t {{"]
    # by encoding, so the members read in the order the reference manual gives
    for member, encoding in sorted(members.items(), key=itemgetter(1)):
        lines.append(f"    {member} = {encoding},")
    lines.append("};")
    return lines


def render_enums(namespace: str, enum_values: EnumValues) -> list[str]:
    """namespace gpio { enum class Mode : uint32_t { input = 0b00, ... }; }"""
    lines = [f"namespace {namespace} {{"]
    for enum_name in sorted(enum_values):
        lines += render_enum_class(enum_name, enum_values[enum_name])
    lines.append(f"}} // namespace {namespace}")
    return lines


def compute_gap_words(previous: Element | None, register: Element) -> int:
    """Words between the end of the previous register and the start of this
    one, negative where the two overlap."""
    end = (
        0
        if previous is None
        else parse_address_offset(previous) + parse_register_size(previous) // 8
    )
    gap_bytes = parse_address_offset(register) - end
    assert gap_bytes % 4 == 0
    return gap_bytes // 4


def render_reserved_member(index: int, words: int) -> str:
    return f"    uint32_t _reserved{index}[{words}];"


def render_overlay_member(register: Element) -> str:
    return (
        f"    volatile uint{parse_register_size(register)}_t "
        f"{find_name(register).lower()};"
        f" // {find_description(register)}"
    )


def render_offset_assert(peripheral_name: str, register: Element) -> str:
    return (
        f"static_assert("
        f"offsetof({peripheral_name.capitalize()}Regs, {find_name(register).lower()})"
        f" == {parse_address_offset(register)});"
    )


def render_register_overlay(
    peripheral_name: str, base: int, registers: list[Element]
) -> list[str] | None:
    """Debug-only register overlay, plus offsetof assertions.

    None where two registers share an address, which one struct cannot
    express; the caller says so in a comment instead.
    """
    members: list[str] = []
    asserts: list[str] = []
    reserved_count = 0
    overlapping = False
    previous: Element | None = None

    for register in registers:
        gap_words = compute_gap_words(previous, register)
        if gap_words > 0:
            members.append(render_reserved_member(reserved_count, gap_words))
            reserved_count += 1
        elif gap_words < 0:
            overlapping = True
        members.append(render_overlay_member(register))
        asserts.append(render_offset_assert(peripheral_name, register))
        previous = register

    if overlapping:
        return None
    return [
        "// The BASE and Regs struct are defined entirely for debug utility.",
        f"constexpr uintptr_t {peripheral_name.upper()}_BASE = 0x{base:08X};",
        f"struct {peripheral_name.capitalize()}Regs {{",
        *members,
        "};",
        *asserts,
    ]


# ----------------------------------------------------------------------------
# the headers themselves
# ----------------------------------------------------------------------------


@dataclass(frozen=True)
class EnumPlacement:
    """Where a peripheral's enum values live: in its own header, or in the
    group's values.hpp, which it includes instead."""

    enum_values: EnumValues | None
    namespace: str
    values_include: str


@dataclass(frozen=True)
class Peripheral:
    """One peripheral as the emitter sees it: where it lives, what defines it,
    what types its fields, and which tables its accesses answer to."""

    name: str
    base: int
    definition: Element
    enum_globs: list[EnumGlob]
    enum_placement: EnumPlacement
    access_overrides: OverrideTable


def place_enums(
    group_name: str,
    peripheral_name: str,
    enum_values: EnumValues,
    groups_sharing_enums: set[str],
) -> EnumPlacement:
    """Shared values go in <group>/values.hpp, which each member includes so
    every header still compiles on its own."""
    shared = group_name in groups_sharing_enums
    return EnumPlacement(
        enum_values=None if shared else enum_values,
        namespace=(group_name if shared else peripheral_name).lower(),
        values_include="values.hpp" if shared and enum_values else "",
    )


def build_register_context(
    peripheral: Peripheral, register: Element
) -> RegisterContext:
    return RegisterContext(
        peripheral_name=peripheral.name,
        name=find_name(register),
        base=peripheral.base + parse_address_offset(register),
        access=register.findtext("access"),
        enum_globs=peripheral.enum_globs,
        enum_namespace=peripheral.enum_placement.namespace,
        overrides=compute_register_overrides(
            peripheral.access_overrides, peripheral.name, register
        ),
    )


def render_header_opening(
    guard: str, description: str, values_include: str
) -> list[str]:
    lines = [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {description}",
        f"#ifndef {guard}",
        f"#define {guard}\n",
        "#include <cstddef>",
        "#include <cstdint>\n",
        '#include "mmio.hpp"\n',
    ]
    if values_include:
        lines.append(f'#include "{values_include}"\n')
    return lines


def render_enum_section(peripheral: Peripheral) -> list[str]:
    """Empty where the values live in the group's values.hpp instead."""
    if not peripheral.enum_placement.enum_values:
        return []
    resolved = resolve_enums(
        peripheral.definition,
        peripheral.enum_placement.enum_values,
        peripheral.enum_globs,
        peripheral.name,
    )
    return render_enums(peripheral.name.lower(), resolved) + [""]


def render_overlay_section(
    peripheral: Peripheral, registers: list[Element]
) -> list[str]:
    overlay = render_register_overlay(peripheral.name, peripheral.base, registers)
    if overlay is None:
        return [f"// {peripheral.name.capitalize()}Regs omitted: overlapping registers"]
    return overlay + [""]


def render_field_section(
    peripheral: Peripheral, registers: list[Element]
) -> list[str]:
    lines: list[str] = []
    for register in registers:
        context = build_register_context(peripheral, register)
        arrays, singles = classify_fields(register)
        lines += render_field_definitions(context, arrays, singles)
    return lines


def render_peripheral_header(peripheral: Peripheral) -> list[str]:
    """One header: guard, enum classes, debug struct, Field definitions."""
    guard = f"STM32_{peripheral.name.upper()}_HPP"
    registers = sort_registers_by_address(peripheral.definition)
    check_register_globs(peripheral.name, registers, peripheral.enum_globs)

    return [
        *render_header_opening(
            guard,
            find_description(peripheral.definition),
            peripheral.enum_placement.values_include,
        ),
        # the enum classes must precede the Field definitions, which name them
        *render_enum_section(peripheral),
        *render_overlay_section(peripheral, registers),
        *render_field_section(peripheral, registers),
        "",
        f"#endif // {guard}",
    ]


def render_values_header(group_name: str, enum_values: EnumValues) -> list[str]:
    """Shared enum classes for a group, included by every member so each header
    stands alone."""
    guard = f"STM32_{group_name.upper()}_VALUES_HPP"
    return [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {group_name} field values, shared by every {group_name} peripheral",
        f"#ifndef {guard}",
        f"#define {guard}\n",
        "#include <cstdint>\n",
        *render_enums(group_name.lower(), enum_values),
        "",
        f"#endif // {guard}",
    ]


def render_group_header(group_name: str, member_names: list[str]) -> list[str]:
    """Top-level header for a multi-member group: includes its members."""
    guard = f"STM32_{group_name.upper()}_HPP"
    return [
        "// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE\n",
        f"// {group_name} peripherals",
        f"#ifndef {guard}",
        f"#define {guard}\n",
        *[
            f'#include "{group_name.lower()}/{member_name.lower()}.hpp"'
            for member_name in sorted(member_names)
        ],
        "",
        f"#endif // {guard}",
    ]


def build_header_path(
    peripheral_names_by_group: dict[str, list[str]],
    group_name: str,
    peripheral_name: str,
) -> Path:
    """Multi-member groups get a subdirectory; singletons stay flat, because
    their group name is the peripheral name and would collide."""
    if len(peripheral_names_by_group[group_name]) > 1:
        return Path(group_name.lower()) / f"{peripheral_name.lower()}.hpp"
    return Path(f"{peripheral_name.lower()}.hpp")


# ----------------------------------------------------------------------------
# the device: the SVD and the vendored yaml, resolved into what emitting needs
# ----------------------------------------------------------------------------


@dataclass(frozen=True)
class Device:
    """The SVD and the vendored yaml, resolved into what emitting reads."""

    peripherals: list[Element]
    peripherals_by_name: dict[str, Element]
    peripheral_names_by_group: dict[str, list[str]]
    groups_sharing_enums: set[str]
    enum_files_by_peripheral: dict[str, frozenset[str]]
    patches_by_peripheral: dict[str, VendoredPatches]
    access_overrides: OverrideTable


def build_device(
    svd_root: Element, vendored_yaml: YamlStore, access_overrides: OverrideTable
) -> Device:
    peripherals = svd_root.findall("peripherals/peripheral")
    peripherals_by_name = index_peripherals_by_name(peripherals)
    enum_files = collect_enum_files(
        vendored_yaml[DEVICE_YAML], peripherals, peripherals_by_name
    )
    names_by_group = group_peripheral_names(peripherals, peripherals_by_name)
    return Device(
        peripherals=peripherals,
        peripherals_by_name=peripherals_by_name,
        peripheral_names_by_group=names_by_group,
        groups_sharing_enums=find_groups_sharing_enums(names_by_group, enum_files),
        enum_files_by_peripheral=enum_files,
        patches_by_peripheral=collect_patches_by_peripheral(vendored_yaml, enum_files),
        access_overrides=access_overrides,
    )


def build_peripheral(device: Device, peripheral_element: Element) -> Peripheral:
    definition = find_defining_peripheral(
        peripheral_element, device.peripherals_by_name
    )
    name = find_name(peripheral_element)
    patches = device.patches_by_peripheral[name]
    return Peripheral(
        name=name,
        base=int(peripheral_element.findtext("baseAddress", "0"), 0),
        definition=definition,
        enum_globs=patches.enum_globs,
        enum_placement=place_enums(
            definition.findtext("groupName"),
            name,
            patches.enum_values,
            device.groups_sharing_enums,
        ),
        access_overrides=device.access_overrides,
    )


def check_inputs(
    device: Device, vendored_yaml: YamlStore, svd_overrides: OverrideTable
) -> None:
    """Refuse a table svdgen would otherwise misread in silence."""
    check_vendored_directives(vendored_yaml, device.enum_files_by_peripheral)
    check_access_overrides(device.access_overrides, ACCESS_OVERRIDES_YAML)
    check_svd_overrides(svd_overrides, SVD_OVERRIDES_YAML)


def correct_svd(
    device: Device, device_yaml: Document, svd_overrides: OverrideTable
) -> None:
    """Correct the SVD before anything reads it: attributes first, since a
    rename decides what the merge globs match."""
    requested: set[ModificationTarget] = set()
    landed: set[ModificationTarget] = set()
    for family in group_peripherals_by_definition(
        device.peripherals, device.peripherals_by_name
    ):
        definition = find_defining_peripheral(family[0], device.peripherals_by_name)
        corrections = collect_corrections(
            family, device_yaml, svd_overrides, device.patches_by_peripheral
        )
        requested |= collect_correction_targets(corrections)
        landed |= apply_modifications(
            definition,
            corrections.register_modifications,
            corrections.field_modifications,
        )
        merge_split_fields_in_peripheral(definition, corrections.merges)
        check_address_collisions(
            find_name(family[0]), definition.findall("registers/register")
        )
    check_modifications_landed(requested, landed)


def generate_peripheral_headers(device: Device) -> dict[Path, list[str]]:
    headers: dict[Path, list[str]] = {}
    for peripheral_element in device.peripherals:
        peripheral = build_peripheral(device, peripheral_element)
        group_name = peripheral.definition.findtext("groupName")
        path = build_header_path(
            device.peripheral_names_by_group, group_name, peripheral.name
        )
        headers[path] = render_peripheral_header(peripheral)
    return headers


def generate_shared_values_header(
    device: Device, group_name: str, member_names: list[str]
) -> list[str] | None:
    """None where the group's members do not share one set of values."""
    patches = device.patches_by_peripheral[member_names[0]]
    if group_name not in device.groups_sharing_enums or not patches.enum_values:
        return None
    definition = find_defining_peripheral(
        device.peripherals_by_name[member_names[0]], device.peripherals_by_name
    )
    resolved = resolve_enums(
        definition, patches.enum_values, patches.enum_globs, group_name
    )
    return render_values_header(group_name, resolved)


def generate_group_headers(device: Device) -> dict[Path, list[str]]:
    headers: dict[Path, list[str]] = {}
    for group_name, member_names in device.peripheral_names_by_group.items():
        if len(member_names) <= 1:
            continue
        values_header = generate_shared_values_header(device, group_name, member_names)
        if values_header is not None:
            headers[Path(group_name.lower()) / "values.hpp"] = values_header
        headers[Path(f"{group_name.lower()}.hpp")] = render_group_header(
            group_name, member_names
        )
    return headers


def generate_headers(
    svd_root: Element,
    vendored_yaml: YamlStore,
    access_overrides: OverrideTable,
    svd_overrides: OverrideTable,
) -> dict[Path, list[str]]:
    """The files svdgen was given in, one header's lines per path out."""
    device = build_device(svd_root, vendored_yaml, access_overrides)
    check_inputs(device, vendored_yaml, svd_overrides)
    correct_svd(device, vendored_yaml[DEVICE_YAML], svd_overrides)
    return generate_peripheral_headers(device) | generate_group_headers(device)


# ----------------------------------------------------------------------------
# output: everything svdgen writes to disk
# ----------------------------------------------------------------------------


def write_headers(output_dir: Path, headers: Mapping[Path, list[str]]) -> None:
    """Replace the generated tree, so a header whose peripheral is gone goes
    with it."""
    shutil.rmtree(output_dir, ignore_errors=True)
    output_dir.mkdir(parents=True, exist_ok=True)
    for relative_path, lines in headers.items():
        path = output_dir / relative_path
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n")


def main() -> None:
    tools_dir = Path(__file__).resolve().parent
    output_dir = tools_dir.parent / OUTPUT_DIR

    svd_root = read_svd(tools_dir / SVD_DIR / SVD_FILE)
    vendored_yaml = read_yaml_tree(tools_dir / ENUM_DIR)
    access_overrides = read_yaml(tools_dir / ACCESS_OVERRIDES_YAML)
    svd_overrides = read_yaml(tools_dir / SVD_OVERRIDES_YAML)

    headers = generate_headers(svd_root, vendored_yaml, access_overrides, svd_overrides)

    write_headers(output_dir, headers)


if __name__ == "__main__":
    main()
