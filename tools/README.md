# tools/

## svdgen.py

Generates `src/do-not-edit/` from `tools/svd/STM32F429.svd`.

```
make regen         # run the generator
make regen-check   # regen, then fail if the output differs from the index
```

Wipes and rewrites the whole output directory each run. Paths resolve against
`__file__`, so the working directory does not matter.

### Layout

106 files for 92 peripherals, grouped by SVD `groupName`:

| | |
|---|---|
| `do-not-edit/rcc.hpp` | 22 single-member groups, flat |
| `do-not-edit/gpio.hpp` | 14 aggregates, include-only |
| `do-not-edit/gpio/gpiob.hpp` | 70 group members |

Include the aggregate, not the member. Single-member groups keep the peripheral
name, so a subdirectory would collide with the file.

### Per-peripheral contents

- `constexpr uintptr_t <PERIPHERAL>_BASE`
- `struct <Peripheral>Regs` plus `static_assert(offsetof(...))` per register
- `constexpr Field<Access::X> <per>_<reg>_<field>{addr, mask, shift}`
- `constexpr Field<Access::X> <per>_<reg>_<stem>[N]` for numeric field families

`addr` is the register's absolute address (peripheral base + register offset),
so nothing needs the struct at runtime.

The struct and `_BASE` exist only for the debugger: `p *(GpiobRegs*)GPIOB_BASE`
dumps a whole peripheral. Nothing in the firmware references them. Requires
`-fno-eliminate-unused-debug-types`, or the types are dropped from DWARF.

15 peripherals get no struct: FMC, TIM1-5, TIM8-14, OTG_FS_GLOBAL,
OTG_HS_GLOBAL. They contain overlapping registers (`TIMx_CCMR1` is documented
twice, as `CCMR1_Output` and `CCMR1_Input`, because field meanings change with
channel mode). One register cannot be two struct members. Their fields are
emitted normally, since each carries its own absolute address.

### Field arrays

A field family becomes an array when the names share a stem with a trailing
integer, there are >= 4 of them, and the indices run contiguously from 0.
`arr[i]` is then the field with suffix `i`. Families starting elsewhere
(CRYP's key bits run 224..255) stay as named constants.

Elements are emitted in index order, not document order: the SVD lists fields
high-to-low.

## mmio.hpp

Hand-written, not generated. Holds `Access`, `Field<Access>`, and the
`read` / `write` / `rmw` accessors.

`static_assert` on the template parameter rejects illegal access at compile
time: no `rmw` on write-only, no `read` on write-only, no `write` on read-only.

The accessors are `__attribute__((always_inline))`. Without it, `-Os` declines
to inline `rmw` when the `Field` comes from an array subscript, which forces
the arrays into flash and adds a call per access. Measured 1212 -> 1424 bytes.

## SVD provenance

| | |
|---|---|
| Source | `raw.githubusercontent.com/cmsis-svd/cmsis-svd-data/main/data/STMicro/STM32F429.svd` |
| Fetched | 2026-08-22 |
| `<version>` | 1.2, schemaVersion 1.1 |
| md5 | `17877e7b66943401e045fe6bbfbad18a` |
| Counts | 92 peripherals, 1107 registers, 7670 fields |

Named F429 but contains `CRYP` and `HASH`, which are F439-only, so it covers
this part. Renode's copy omits the ARM core blocks (`STK`, `SCB`, `MPU`,
`NVIC_STIR`, `FPU`).

Absent from the file, count 0: `enumeratedValues`, `modifiedWriteValues`,
`readAction`, `dim`. All registers are 32-bit.

## TODO

- Enum values for fields, to replace `rmw(0b01)` with `rmw(moder::output)`.
  Not in the SVD, but stm32-rs has them under `devices/fields/*.yaml` in its
  own patch format, covering every peripheral this roadmap needs. Values are
  family-wide, so they belong in the aggregate headers, not the members.
- Emit `resetValue` as power-on assertions. Parsed, unused.
- `regen-check` uses `git diff`, which ignores untracked files. Switch to
  `git status --porcelain`.
