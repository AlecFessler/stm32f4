// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Floting point unit
#ifndef FPU_HPP
#define FPU_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t FPU_BASE = 0xE000EF34;

struct FpuRegs {
    volatile uint32_t fpccr; // Floating-point context control register
    volatile uint32_t fpcar; // Floating-point context address register
    volatile uint32_t fpscr; // Floating-point status control register
};

static_assert(offsetof(FpuRegs, fpccr) == 0);
static_assert(offsetof(FpuRegs, fpcar) == 4);
static_assert(offsetof(FpuRegs, fpscr) == 8);

inline FpuRegs& fpu() { return *reinterpret_cast<FpuRegs*>(FPU_BASE); }

constexpr RegField fpu_fpccr_lspact{0x00000001u, 0};
constexpr RegField fpu_fpccr_user{0x00000002u, 1};
constexpr RegField fpu_fpccr_thread{0x00000008u, 3};
constexpr RegField fpu_fpccr_hfrdy{0x00000010u, 4};
constexpr RegField fpu_fpccr_mmrdy{0x00000020u, 5};
constexpr RegField fpu_fpccr_bfrdy{0x00000040u, 6};
constexpr RegField fpu_fpccr_monrdy{0x00000100u, 8};
constexpr RegField fpu_fpccr_lspen{0x40000000u, 30};
constexpr RegField fpu_fpccr_aspen{0x80000000u, 31};
constexpr RegField fpu_fpcar_address{0xFFFFFFF8u, 3};
constexpr RegField fpu_fpscr_ioc{0x00000001u, 0};
constexpr RegField fpu_fpscr_dzc{0x00000002u, 1};
constexpr RegField fpu_fpscr_ofc{0x00000004u, 2};
constexpr RegField fpu_fpscr_ufc{0x00000008u, 3};
constexpr RegField fpu_fpscr_ixc{0x00000010u, 4};
constexpr RegField fpu_fpscr_idc{0x00000080u, 7};
constexpr RegField fpu_fpscr_rmode{0x00C00000u, 22};
constexpr RegField fpu_fpscr_fz{0x01000000u, 24};
constexpr RegField fpu_fpscr_dn{0x02000000u, 25};
constexpr RegField fpu_fpscr_ahp{0x04000000u, 26};
constexpr RegField fpu_fpscr_v{0x10000000u, 28};
constexpr RegField fpu_fpscr_c{0x20000000u, 29};
constexpr RegField fpu_fpscr_z{0x40000000u, 30};
constexpr RegField fpu_fpscr_n{0x80000000u, 31};

#endif // FPU_HPP