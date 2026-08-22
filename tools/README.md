# tools/

## svdgen.py

Generates `src/do-not-edit/*.hpp` from `tools/svd/STM32F429.svd`.
One header per peripheral, containing:

- `constexpr uintptr_t <PERIPHERAL>_BASE`
- `struct <Peripheral>Regs` with `volatile uint32_t` members and reserved padding
- `static_assert(offsetof(...))` per register
- `inline <Peripheral>Regs& <peripheral>()`
- `constexpr RegField <peripheral>_<register>_<field>{mask, shift}` per bitfield

```
make regen         # run the generator
make regen-check   # regen, then fail if the output differs from the index
```

Paths resolve against `__file__`, so the working directory does not matter.

`src/mmio.hpp` is hand-written and is not generated. It holds `RegField`,
`read_reg`, `write_reg`, `modify_reg`.

## TODO

- Union handling for overlapping registers. 15 of 92 peripherals are
  currently skipped: FMC, TIM1-5, TIM8-14, OTG_FS_GLOBAL, OTG_HS_GLOBAL.
  `TIMx_CCMR1` is one register documented twice (`CCMR1_Output`,
  `CCMR1_Input`); emitting both shifts every later register.
- Group aggregate headers. `groupName` gives 35 groups; emit only for the 14
  with >1 member (for the other 21 the group name equals the peripheral name).
- GPIO dedup. `GPIOA`/`GPIOB`/`GPIOK` are structurally identical; 11 ports
  could share one struct plus 11 base addresses. Reset values stay per-instance.
- Emit `resetValue` as power-on assertions. Parsed, unused.
- Enum classes for field values. Needs an overlay file, not more parsing.
- `write_reg` overload taking `RegField`, to drop `.mask` at call sites.
- `regen-check` uses `git diff`, which ignores untracked files. Switch to
  `git status --porcelain` once `src/do-not-edit` is tracked.
