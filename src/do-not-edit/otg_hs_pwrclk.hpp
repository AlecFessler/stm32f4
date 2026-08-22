// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go high speed
#ifndef OTG_HS_PWRCLK_HPP
#define OTG_HS_PWRCLK_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t OTG_HS_PWRCLK_BASE = 0x40040E00;

struct Otg_hs_pwrclkRegs {
    volatile uint32_t otg_hs_pcgcr; // Power and clock gating control register
};

static_assert(offsetof(Otg_hs_pwrclkRegs, otg_hs_pcgcr) == 0);

inline Otg_hs_pwrclkRegs& otg_hs_pwrclk() { return *reinterpret_cast<Otg_hs_pwrclkRegs*>(OTG_HS_PWRCLK_BASE); }

constexpr RegField otg_hs_pwrclk_otg_hs_pcgcr_stppclk{0x00000001u, 0};
constexpr RegField otg_hs_pwrclk_otg_hs_pcgcr_gatehclk{0x00000002u, 1};
constexpr RegField otg_hs_pwrclk_otg_hs_pcgcr_physusp{0x00000010u, 4};

#endif // OTG_HS_PWRCLK_HPP