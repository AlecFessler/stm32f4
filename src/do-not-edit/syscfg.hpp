// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// System configuration controller
#ifndef SYSCFG_HPP
#define SYSCFG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t SYSCFG_BASE = 0x40013800;

struct SyscfgRegs {
    volatile uint32_t memrm; // memory remap register
    volatile uint32_t pmc; // peripheral mode configuration register
    volatile uint32_t exticr1; // external interrupt configuration register 1
    volatile uint32_t exticr2; // external interrupt configuration register 2
    volatile uint32_t exticr3; // external interrupt configuration register 3
    volatile uint32_t exticr4; // external interrupt configuration register 4
    uint32_t _reserved0[2];
    volatile uint32_t cmpcr; // Compensation cell control register
};

static_assert(offsetof(SyscfgRegs, memrm) == 0);
static_assert(offsetof(SyscfgRegs, pmc) == 4);
static_assert(offsetof(SyscfgRegs, exticr1) == 8);
static_assert(offsetof(SyscfgRegs, exticr2) == 12);
static_assert(offsetof(SyscfgRegs, exticr3) == 16);
static_assert(offsetof(SyscfgRegs, exticr4) == 20);
static_assert(offsetof(SyscfgRegs, cmpcr) == 32);

inline SyscfgRegs& syscfg() { return *reinterpret_cast<SyscfgRegs*>(SYSCFG_BASE); }

constexpr RegField syscfg_memrm_mem_mode{0x00000007u, 0};
constexpr RegField syscfg_memrm_fb_mode{0x00000100u, 8};
constexpr RegField syscfg_memrm_swp_fmc{0x00000C00u, 10};
constexpr RegField syscfg_pmc_mii_rmii_sel{0x00800000u, 23};
constexpr RegField syscfg_pmc_adc1dc2{0x00010000u, 16};
constexpr RegField syscfg_pmc_adc2dc2{0x00020000u, 17};
constexpr RegField syscfg_pmc_adc3dc2{0x00040000u, 18};
constexpr RegField syscfg_exticr1_exti3{0x0000F000u, 12};
constexpr RegField syscfg_exticr1_exti2{0x00000F00u, 8};
constexpr RegField syscfg_exticr1_exti1{0x000000F0u, 4};
constexpr RegField syscfg_exticr1_exti0{0x0000000Fu, 0};
constexpr RegField syscfg_exticr2_exti7{0x0000F000u, 12};
constexpr RegField syscfg_exticr2_exti6{0x00000F00u, 8};
constexpr RegField syscfg_exticr2_exti5{0x000000F0u, 4};
constexpr RegField syscfg_exticr2_exti4{0x0000000Fu, 0};
constexpr RegField syscfg_exticr3_exti11{0x0000F000u, 12};
constexpr RegField syscfg_exticr3_exti10{0x00000F00u, 8};
constexpr RegField syscfg_exticr3_exti9{0x000000F0u, 4};
constexpr RegField syscfg_exticr3_exti8{0x0000000Fu, 0};
constexpr RegField syscfg_exticr4_exti15{0x0000F000u, 12};
constexpr RegField syscfg_exticr4_exti14{0x00000F00u, 8};
constexpr RegField syscfg_exticr4_exti13{0x000000F0u, 4};
constexpr RegField syscfg_exticr4_exti12{0x0000000Fu, 0};
constexpr RegField syscfg_cmpcr_ready{0x00000100u, 8};
constexpr RegField syscfg_cmpcr_cmp_pd{0x00000001u, 0};

#endif // SYSCFG_HPP