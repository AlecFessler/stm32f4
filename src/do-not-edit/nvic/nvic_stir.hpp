// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Nested vectored interrupt controller
#ifndef STM32_NVIC_STIR_HPP
#define STM32_NVIC_STIR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t NVIC_STIR_BASE = 0xE000EF00;
struct Nvic_stirRegs {
    volatile uint32_t stir; // Software trigger interrupt register
};
static_assert(offsetof(Nvic_stirRegs, stir) == 0);

constexpr Field<Access::RW, uint32_t, false, false> nvic_stir_stir_intid{0xE000EF00u, 0x000001FFu, 0};

#endif // STM32_NVIC_STIR_HPP
