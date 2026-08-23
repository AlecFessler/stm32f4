# tools/enums/

Field value definitions, used by `svdgen.py` to emit enum namespaces
(`gpio::mode::output` instead of `0b01`).

ST's SVD contains no `<enumeratedValues>`, so symbolic field values are not
derivable from it. These come from stm32-rs, whose patch files record what each
field encoding means.

## Provenance

| | |
|---|---|
| Source | `github.com/stm32-rs/stm32-rs`, `devices/` |
| Fetched | 2026-08-23 |
| Files | `stm32f429.yaml` plus 105 `fields/*.yaml` reached through `_include` |
| License | MIT or Apache-2.0, see `LICENSE-MIT` / `LICENSE-APACHE` |

Copyright (c) 2017 Adam Greig and stm32-rs contributors.

The directory layout mirrors `stm32-rs/devices/` so the `_include` paths inside
the field files resolve unmodified. Do not flatten it.

`patches/` and `collect/` files are deliberately not vendored: they do SVD
fixups and array grouping, which `svdgen.py` handles itself. If an `_include`
ever points at one, the parser should skip it rather than fail.

## Format

```yaml
REGISTER_GLOB:
  FIELD_GLOB:
    _name: Mode                       # optional, present on ~16 entries
    Input:  [0, 'Input mode']         # [value, description]
    Output: [1, 'General purpose output mode']
  OTHER_FIELD:
    _read:  {...}                     # read/write variants
  PLLQ: [2, 15]                       # a list is a bit range, not values
  _merge: [PLLM*, PLLN*]              # directive
```

Keys are shell globs (`OTG_FS_*`, `GPIO[ABK]`, `FOVR?`), not regexes, and a
field key may be a comma-separated list of them.
