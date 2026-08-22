// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// SysTick timer
#ifndef STK_HPP
#define STK_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t STK_BASE = 0xE000E010;

struct StkRegs {
    volatile uint32_t ctrl; // SysTick control and status register
    volatile uint32_t load; // SysTick reload value register
    volatile uint32_t val; // SysTick current value register
    volatile uint32_t calib; // SysTick calibration value register
};

static_assert(offsetof(StkRegs, ctrl) == 0);
static_assert(offsetof(StkRegs, load) == 4);
static_assert(offsetof(StkRegs, val) == 8);
static_assert(offsetof(StkRegs, calib) == 12);

inline StkRegs& stk() { return *reinterpret_cast<StkRegs*>(STK_BASE); }

constexpr RegField stk_ctrl_enable{0x00000001u, 0};
constexpr RegField stk_ctrl_tickint{0x00000002u, 1};
constexpr RegField stk_ctrl_clksource{0x00000004u, 2};
constexpr RegField stk_ctrl_countflag{0x00010000u, 16};
constexpr RegField stk_load_reload{0x00FFFFFFu, 0};
constexpr RegField stk_val_current{0x00FFFFFFu, 0};
constexpr RegField stk_calib_tenms{0x00FFFFFFu, 0};
constexpr RegField stk_calib_skew{0x40000000u, 30};
constexpr RegField stk_calib_noref{0x80000000u, 31};

#endif // STK_HPP