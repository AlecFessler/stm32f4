// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// System control block ACTLR
#ifndef STM32_SCB_ACTRL_HPP
#define STM32_SCB_ACTRL_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SCB_ACTRL_BASE = 0xE000E008;
struct Scb_actrlRegs {
    volatile uint32_t actrl; // Auxiliary control register
};
static_assert(offsetof(Scb_actrlRegs, actrl) == 0);

constexpr Field<Access::RW> scb_actrl_actrl_dismcycint{0xE000E008u, 0x00000001u, 0};
constexpr Field<Access::RW> scb_actrl_actrl_disdefwbuf{0xE000E008u, 0x00000002u, 1};
constexpr Field<Access::RW> scb_actrl_actrl_disfold{0xE000E008u, 0x00000004u, 2};
constexpr Field<Access::RW> scb_actrl_actrl_disfpca{0xE000E008u, 0x00000100u, 8};
constexpr Field<Access::RW> scb_actrl_actrl_disoofp{0xE000E008u, 0x00000200u, 9};

#endif // STM32_SCB_ACTRL_HPP