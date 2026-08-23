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

111 files for 92 peripherals, grouped by SVD `groupName`:

| | |
|---|---|
| `do-not-edit/rcc.hpp` | 22 single-member groups, flat |
| `do-not-edit/gpio.hpp` | 14 aggregates, include-only |
| `do-not-edit/gpio/gpiob.hpp` | 70 group members |
| `do-not-edit/gpio/values.hpp` | 5 shared enum headers |

Include the aggregate, not the member. Single-member groups keep the peripheral
name, so a subdirectory would collide with the file.

### Per-peripheral contents

- `constexpr uintptr_t <PERIPHERAL>_BASE`
- `struct <Peripheral>Regs` plus `static_assert(offsetof(...))` per register
- `constexpr Field<Access::X[, Enum]> <per>_<reg>_<field>{addr, mask, shift}`
- `constexpr Field<Access::X[, Enum]> <per>_<reg>_<stem>[N]` for numeric families
- `enum class <Field> : uint32_t` for fields with known values

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

### Enum values

Symbolic field values, so `rmw(0b01)` reads `rmw(gpio::Mode::output)`. Not from
the SVD, which has no `<enumeratedValues>`. Parsed from the stm32-rs patch files
vendored in `tools/enums/`, which have their own README and license.

Emitted as `enum class <Name> : uint32_t` inside a namespace named for the
peripheral or group. `Field` carries the type as its second template parameter,
so a value cannot cross fields:

```cpp
gpiob_moder_moder[0].rmw(gpio::Mode::output);   // ok
gpiob_moder_moder[0].rmw(gpio::Bs::set);        // error: cannot convert
gpiob_moder_moder[0].rmw(1);                    // error: cannot convert
```

3086 of 6901 field declarations are typed. The rest have no patch data and keep
`Value = uint32_t`, so plain numbers still work: `rcc_pllcfgr_plln.rmw(336)`.

Placement depends on whether a group's members share one set of patch files:

| | |
|---|---|
| `<group>/values.hpp` | GPIO, SPI, I2C, CAN, DMA, Ethernet, USB_OTG_*, NVIC, SCB, FPU |
| member header | TIM (6 file sets), USART (2), ADC (2), and singletons |

Shared values get their own header rather than going in the aggregate: the
aggregate includes its members first, so anything it defined would arrive after
the fields naming it, and a member included on its own would never see it.
Every header compiles standalone.

Which patch files apply to which peripheral comes from `stm32f429.yaml`, whose
keys are shell globs. Assignment then propagates by identical register layout,
**not** by `derivedFrom`: the yaml names only the peripherals stm32-rs treats as
base types (`GPIO[ABK]` for eleven ports), and it rebases `I2C1` and `USART1`,
so the SVD's derivation direction is wrong for this purpose.

Enum names come from `_name` when the yaml gives one, otherwise from the field
glob with its metacharacters stripped. Enumerators that collide with C++
keywords (`break`, `long`, `short`, `protected`, `xor`) get a trailing
underscore.

Seven enumerators are dropped because their value is `-1`, which svdtools uses
for "any other value" rather than an encoding: `FLASH.RDP.Level1`,
`RCC.CFGR.HPRE.Div1`, `RCC.CFGR.PPRE*.Div1`, `RCC.CFGR.MCO?PRE.Div1`,
`DAC.CR.WAVE?.Triangle`, `DAC.CR.MAMP?.Amp4095`, `IWDG.PR.DivideBy256`. Those
enums are therefore incomplete.

### Field arrays

A field family becomes an array when the names share a stem with a trailing
integer, there are >= 4 of them, and the indices run contiguously from 0.
`arr[i]` is then the field with suffix `i`. Families starting elsewhere
(CRYP's key bits run 224..255) stay as named constants.

Elements are emitted in index order, not document order: the SVD lists fields
high-to-low.

## mmio.hpp

Hand-written, not generated. Holds `Access`, `Field<Access, Value>`, and the
`read` / `write` / `rmw` accessors.

Two template parameters, both enforced at compile time and neither costing
anything at runtime:

- `Access` — `static_assert` rejects illegal access: no `rmw` on write-only, no
  `read` on write-only, no `write` on read-only.
- `Value` — the enum type this field accepts, defaulting to `uint32_t`. `read`
  returns it; `write` and `rmw` take it.

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
`readAction`, `dim`. All registers are 32-bit. Enum values are sourced
separately, see Enum values below.

## TODO

- Emit `resetValue` as power-on assertions. Parsed, unused.
