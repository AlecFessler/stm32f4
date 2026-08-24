// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// SysTick timer
#ifndef STM32_STK_HPP
#define STM32_STK_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
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

constexpr Field<Access::RW> stk_ctrl_enable{0xE000E010u, 0x00000001u, 0};
constexpr Field<Access::RW> stk_ctrl_tickint{0xE000E010u, 0x00000002u, 1};
constexpr Field<Access::RW> stk_ctrl_clksource{0xE000E010u, 0x00000004u, 2};
constexpr Field<Access::RW> stk_ctrl_countflag{0xE000E010u, 0x00010000u, 16};
constexpr Field<Access::RW, uint32_t, false> stk_load_reload{0xE000E014u, 0x00FFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> stk_val_current{0xE000E018u, 0x00FFFFFFu, 0};
constexpr Field<Access::RW> stk_calib_tenms{0xE000E01Cu, 0x00FFFFFFu, 0};
constexpr Field<Access::RW> stk_calib_skew{0xE000E01Cu, 0x40000000u, 30};
constexpr Field<Access::RW> stk_calib_noref{0xE000E01Cu, 0x80000000u, 31};

#endif // STM32_STK_HPP
