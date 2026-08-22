// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go full speed
#ifndef OTG_FS_PWRCLK_HPP
#define OTG_FS_PWRCLK_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t OTG_FS_PWRCLK_BASE = 0x50000E00;

struct Otg_fs_pwrclkRegs {
    volatile uint32_t fs_pcgcctl; // OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
};

static_assert(offsetof(Otg_fs_pwrclkRegs, fs_pcgcctl) == 0);

inline Otg_fs_pwrclkRegs& otg_fs_pwrclk() { return *reinterpret_cast<Otg_fs_pwrclkRegs*>(OTG_FS_PWRCLK_BASE); }

constexpr RegField otg_fs_pwrclk_fs_pcgcctl_stppclk{0x00000001u, 0};
constexpr RegField otg_fs_pwrclk_fs_pcgcctl_gatehclk{0x00000002u, 1};
constexpr RegField otg_fs_pwrclk_fs_pcgcctl_physusp{0x00000010u, 4};

#endif // OTG_FS_PWRCLK_HPP