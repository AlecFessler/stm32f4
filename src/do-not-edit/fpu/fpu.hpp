// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Floting point unit
#ifndef STM32_FPU_HPP
#define STM32_FPU_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t FPU_BASE = 0xE000EF34;
struct FpuRegs {
    volatile uint32_t fpccr; // Floating-point context control register
    volatile uint32_t fpcar; // Floating-point context address register
    volatile uint32_t fpscr; // Floating-point status control register
};
static_assert(offsetof(FpuRegs, fpccr) == 0);
static_assert(offsetof(FpuRegs, fpcar) == 4);
static_assert(offsetof(FpuRegs, fpscr) == 8);

constexpr Field<Access::RW> fpu_fpccr_lspact{0xE000EF34u, 0x00000001u, 0};
constexpr Field<Access::RW> fpu_fpccr_user{0xE000EF34u, 0x00000002u, 1};
constexpr Field<Access::RW> fpu_fpccr_thread{0xE000EF34u, 0x00000008u, 3};
constexpr Field<Access::RW> fpu_fpccr_hfrdy{0xE000EF34u, 0x00000010u, 4};
constexpr Field<Access::RW> fpu_fpccr_mmrdy{0xE000EF34u, 0x00000020u, 5};
constexpr Field<Access::RW> fpu_fpccr_bfrdy{0xE000EF34u, 0x00000040u, 6};
constexpr Field<Access::RW> fpu_fpccr_monrdy{0xE000EF34u, 0x00000100u, 8};
constexpr Field<Access::RW> fpu_fpccr_lspen{0xE000EF34u, 0x40000000u, 30};
constexpr Field<Access::RW> fpu_fpccr_aspen{0xE000EF34u, 0x80000000u, 31};
constexpr Field<Access::RW, uint32_t, false, false> fpu_fpcar_address{0xE000EF38u, 0xFFFFFFF8u, 3};
constexpr Field<Access::RW> fpu_fpscr_ioc{0xE000EF3Cu, 0x00000001u, 0};
constexpr Field<Access::RW> fpu_fpscr_dzc{0xE000EF3Cu, 0x00000002u, 1};
constexpr Field<Access::RW> fpu_fpscr_ofc{0xE000EF3Cu, 0x00000004u, 2};
constexpr Field<Access::RW> fpu_fpscr_ufc{0xE000EF3Cu, 0x00000008u, 3};
constexpr Field<Access::RW> fpu_fpscr_ixc{0xE000EF3Cu, 0x00000010u, 4};
constexpr Field<Access::RW> fpu_fpscr_idc{0xE000EF3Cu, 0x00000080u, 7};
constexpr Field<Access::RW> fpu_fpscr_rmode{0xE000EF3Cu, 0x00C00000u, 22};
constexpr Field<Access::RW> fpu_fpscr_fz{0xE000EF3Cu, 0x01000000u, 24};
constexpr Field<Access::RW> fpu_fpscr_dn{0xE000EF3Cu, 0x02000000u, 25};
constexpr Field<Access::RW> fpu_fpscr_ahp{0xE000EF3Cu, 0x04000000u, 26};
constexpr Field<Access::RW> fpu_fpscr_v{0xE000EF3Cu, 0x10000000u, 28};
constexpr Field<Access::RW> fpu_fpscr_c{0xE000EF3Cu, 0x20000000u, 29};
constexpr Field<Access::RW> fpu_fpscr_z{0xE000EF3Cu, 0x40000000u, 30};
constexpr Field<Access::RW> fpu_fpscr_n{0xE000EF3Cu, 0x80000000u, 31};

#endif // STM32_FPU_HPP
