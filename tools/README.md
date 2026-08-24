# tools/

## svdgen.py

Generates `src/do-not-edit/` from three inputs:

| | |
|---|---|
| `svd/STM32F429.svd` | registers, fields, offsets, access |
| `enums/` | symbolic field values, vendored from stm32-rs |
| `access_overrides.yaml` | the access the SVD cannot express |

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
- `constexpr Field<Access::X, ...> <per>_<reg>_<field>{addr, mask, shift}`
- `constexpr Field<...> <per>_<reg>_<stem>[N]` for numeric families
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

3114 of 6901 field declarations are typed. The rest have no patch data and keep
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

Seven enumerators carry `-1`, which svdtools uses for "any encoding the other
members do not claim" rather than for a value. The generator resolves each to
the smallest unclaimed encoding, which is what the manual means:

| | width | claimed | emitted | RM0090 |
|---|---|---|---|---|
| `RCC.CFGR.HPRE.Div1` | 4 | 8..15 | 0 | `0xxx` = /1 |
| `RCC.CFGR.PPRE*.Div1` | 3 | 4..7 | 0 | `0xx` = /1 |
| `RCC.CFGR.MCO?PRE.Div1` | 3 | 4..7 | 0 | `0xx` = /1 |
| `IWDG.PR.DivideBy256` | 3 | 0..5 | 6 | `110` = /256 |
| `DAC.CR.WAVE?.Triangle` | 2 | 0,1 | 2 | `1x` = triangle |
| `DAC.CR.MAMP?.Amp4095` | 4 | 0..10 | 11 | `1011`+ = 4095 |
| `FLASH.OPTCR.RDP.Level1` | 8 | 0xAA, 0xCC | 0 | anything else |

Dropping them instead would have made `HPRE` unable to express the one setting
a 180 MHz clock tree needs. The width comes from the SVD field the enum types,
so the resolution needs no hand-written data; an enumerator is only dropped if
every encoding in the field's width is already claimed.

### Field arrays

A field family becomes an array when the names share a stem with a trailing
integer, there are >= 4 of them, and the indices run contiguously from 0.
`arr[i]` is then the field with suffix `i`. Families starting elsewhere
(CRYP's key bits run 224..255) stay as named constants.

Elements are emitted in index order, not document order: the SVD lists fields
high-to-low.

### Access overrides

`EXTI_PR`, every status register: writing a bit acknowledges a flag rather than
storing a value. An `rmw` reads the word, catches whatever flags are set, and
writing them back is what acknowledges them, so one meant for a single field
eats all of them. The SVD has no `modifiedWriteValues` and no way to say `rs`,
so it calls all of these bits plain read-write. The real access comes from
`access_overrides.yaml`: 49 registers covering 159 instances, read from the
RM0090 Rev 19 diagrams. It nests peripheral, then register, then a list per
category, every key a shell glob matched against SVD names:

```yaml
FLASH:
  CR:
    rs: [LOCK, STRT]            # p.105
```

Categories are `rc_w1`, `rc_w0`, `rs`, and `ro` for the five fields the SVD
calls read-write in error. Globs starting with `*` need quoting, since YAML
reads a leading `*` as an alias. An unknown category name is an error rather
than a no-op: a misspelled one would otherwise leave a mask quietly empty with
the table still looking right.

The `rs` entries come from an exhaustive sweep of the manual: 52 `rs` marker
cells exist in RM0090, 48 of them on this part, across 7 of its 37 peripheral
chapters. Every entry carries the page it was read from, so any of it can be
checked against the diagram.

Listed fields get the access the manual gives them: `Access::RC_W1` or
`Access::RC_W0`, which allow only `read` and `clear` (641 declarations), or
`Access::RS`, which allows only `read` and `set` (116). `write` and `rmw` fail
to compile on all of them.

The hazard is not confined to those bits, though. A store is all-or-nothing, so
writing *any* field also writes everything beside it, and `pwr_cr_vos.rmw()`
would acknowledge CWUF and CSBF on its way past. Every field in a listed
register therefore carries two masks naming what a store has to state
explicitly rather than leave at 0:

| | `force_zero_mask` | `force_one_mask` |
|---|---|---|
| bits | `rc_w1`, `rs` | `rc_w0`, and reserved bits that reset to 1 |
| why | a 1 there is a command | a 0 acknowledges, or drops a reset value |
| `write` | already 0 | `\| force_one_mask` |
| `set`, `clear` | `& ~force_zero_mask` | `\| force_one_mask` |
| `rmw` | `& ~force_zero_mask` | `\| force_one_mask` |

The reserved half of `force_one_mask` is the one part that needs no table.
`resetValue & ~(union of field masks)` finds it, and it is not empty on 31
registers including `RCC_PLLCFGR` (bit 29), `CAN1_FMR` and all the FMC timing
registers. Without it `rcc_pllcfgr_pllsrc.write()` would zero a bit RM0090 asks
be kept.

`rw_neighbors` is the third thing a store cannot handle: `rw` bits elsewhere in
the register, whose value nothing can reconstruct. It is a `bool` rather than a
mask because the read recovers them wholesale, so only their presence matters,
and it answers two questions at once:

- `set` and `clear` need no read when it is false, so the stored word is a
  compile-time constant and they are a single instruction. That covers 621 of
  641 `clear` declarations and 10 of 116 `set` ones.
- `write` is barred when it is true, because it would zero those bits, unless
  the field has a bit-band alias. `pwr_cr_vos.write()` used to compile and take
  `DBP`, `PLS`, `PDDS` and the rest with it.

Nothing hand-writes it. It is whatever the SVD still calls read-write once the
lists above have had their say, which is why the `ro` entries earn their place:
without them the SVD's five mistakes would put registers on the slow path and
bar `write` on fields that deserve it. Checked against the `keep` list it
replaced, the derivation agrees on all 105 register instances that list covered.

The constant a single store writes leaves everything outside the two masks at
0, which is why it is safe: writes to read-only bits are ignored, and 0 is what
remains of a reserved bit once `force_one_mask` has claimed the ones that reset
to 1.

### Bit-banding

`0x40000000-0x400FFFFF` is mirrored at `0x42000000`, one alias word per bit, so
a store there reaches a single bit and the hardware does the read-modify-write
with no window an interrupt can land in. `bit_band` says a field has one, and
`read`, `write`, `set` and `clear` take that path when it does. 2966
declarations.

Two conditions decide whether an alias word exists:

- **One bit wide.** An alias word maps to one bit and nothing else, so a 5-bit
  field like `RCC_CR.HSITRIM` can never use one.
- **Register below `0x40100000`.** USB OTG at `0x5...`, FMC at `0xA...` and the
  core blocks at `0xE...` are outside the aliased region.

Two more decide whether *storing* through it is right, and a read-only field
skips both, since `read` is the only accessor it has and a read triggers no
write-back. Nothing has to trust that: every storing accessor already
`static_assert`s its way out of an `RO` field, so those paths cannot be
instantiated.

- **No other `rc_w1` bit in the register.** PM0214 2.2.5: *"A write operation
  is performed as read-modify-write."* The hardware writes back what it read,
  so a set `rc_w1` flag would get its 1 echoed and be acknowledged. `rw`,
  `rc_w0` and reserved bits all survive being echoed; that one does not, and
  `force_zero_mask` cannot reach inside a hardware RMW to stop it.
- **`rw_neighbors` is true.** A write-only field, or one owning its whole
  register, already stores in one bus cycle; the alias would make the hardware
  read first, which is two.

`RCC_CR` shows all of it in one register. `HSEON` (bit 16, `rw`) and `HSERDY`
(bit 17, `ro`) sit next to each other with alias words four bytes apart at
`0x42470040` and `0x42470044`, and both use them. `HSITRIM` is five bits wide
and cannot.

`rmw` is a compile error on these, because it is strictly worse there: four
instructions and a window, against one store that cannot be interrupted. That
makes the guarantees line up per accessor rather than per field — `write`,
`set` and `clear` are always a single store, and `rmw` never is.

The alias address is computed from `addr` and `shift`, not stored:
`0x42000000 + (addr - 0x40000000) * 32 + shift * 4`, which folds to an
immediate. Note the alias word is a different shape, not just a different
address: the value sits in bit 0 with no neighbors, so `field_mask` and `shift`
mean nothing against it and `read` skips its mask entirely.

Atomic here means against interrupts on this core, which is the race worth
closing. It is not a bus-locked transaction, so it is no guarantee against
another master such as DMA touching the same register.

### Gaps

Eight of the 167 globs match nothing, because the SVD omits fields RM0090
documents: `FLASH_SR.RDERR`, `DIEPINT.INEPNM` / `.AHBERR`, and `DOEPINT.NAK` /
`.BERR` / `.OUTPKTERR` / `.STSPHSRX` / `.AHBERR`. Harmless, and correct against
a fixed SVD.

## mmio.hpp

Hand-written, not generated. Holds `Access`, `Field`, and the `read` / `write`
/ `set` / `clear` / `rmw` accessors.

| | read | write | set | clear | rmw |
|---|---|---|---|---|---|
| `RW` | y | y | . | . | y* |
| `RO` | y | . | . | . | . |
| `WO` | . | y | . | . | . |
| `RS` | y | . | y | . | . |
| `RC_W1` | y | . | . | y | . |
| `RC_W0` | y | . | . | y | . |

Every `.` is a `static_assert`, and `y*` is barred when the field has a
bit-band alias. `RS`, `RC_W1` and `RC_W0` bits hold no value,
so `write` and `rmw` have nothing to store into them: a written 1 or 0 is a
command, which is why `set` and `clear` take no argument.

Four template parameters:

- `acc` — the row above.
- `Value` — the enum type this field accepts, defaulting to `uint32_t`. `read`
  returns it; `write` and `rmw` take it.
- `bit_band` — whether this field has a bit-band alias, per Bit-banding below.
  It precedes `rw_neighbors` because it is the commoner of the two, and because
  an `RO` field has no meaningful `rw_neighbors` to spell out on the way past.
- `rw_neighbors` — whether the register holds `rw` bits other than this field,
  which decides whether `set` and `clear` need a read and whether `write` is
  allowed at all. It defaults to `true`, so a hand-written `Field` is guarded
  rather than trusted. It is a template parameter rather than a member because
  it gates a volatile access, and a member would leave that read in the binary
  at `-O0`.

Five data members: `addr`, `field_mask`, `shift`, and the two masks from
Access overrides. Aggregate initialization value-initializes what is left out,
so the fields needing neither mask stay `{addr, field_mask, shift}`.

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
