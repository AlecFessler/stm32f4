// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Floating point unit CPACR
#ifndef STM32_FPU_CPACR_HPP
#define STM32_FPU_CPACR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t FPU_CPACR_BASE = 0xE000ED88;
struct Fpu_cpacrRegs {
    volatile uint32_t cpacr; // Coprocessor access control register
};
static_assert(offsetof(Fpu_cpacrRegs, cpacr) == 0);

constexpr Field<Access::RW> fpu_cpacr_cpacr_cp{0xE000ED88u, 0x00F00000u, 20};

#endif // STM32_FPU_CPACR_HPP