// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Floating point unit CPACR
#ifndef FPU_CPACR_HPP
#define FPU_CPACR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t FPU_CPACR_BASE = 0xE000ED88;

struct Fpu_cpacrRegs {
    volatile uint32_t cpacr; // Coprocessor access control register
};

static_assert(offsetof(Fpu_cpacrRegs, cpacr) == 0);

inline Fpu_cpacrRegs& fpu_cpacr() { return *reinterpret_cast<Fpu_cpacrRegs*>(FPU_CPACR_BASE); }

constexpr RegField fpu_cpacr_cpacr_cp{0x00F00000u, 20};

#endif // FPU_CPACR_HPP