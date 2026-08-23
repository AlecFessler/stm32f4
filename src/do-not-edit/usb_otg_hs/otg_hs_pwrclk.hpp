// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go high speed
#ifndef STM32_OTG_HS_PWRCLK_HPP
#define STM32_OTG_HS_PWRCLK_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t OTG_HS_PWRCLK_BASE = 0x40040E00;
struct Otg_hs_pwrclkRegs {
    volatile uint32_t otg_hs_pcgcr; // Power and clock gating control register
};
static_assert(offsetof(Otg_hs_pwrclkRegs, otg_hs_pcgcr) == 0);

constexpr Field<Access::RW> otg_hs_pwrclk_otg_hs_pcgcr_stppclk{0x40040E00u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_pwrclk_otg_hs_pcgcr_gatehclk{0x40040E00u, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_pwrclk_otg_hs_pcgcr_physusp{0x40040E00u, 0x00000010u, 4};

#endif // STM32_OTG_HS_PWRCLK_HPP
