// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Independent watchdog
#ifndef IWDG_HPP
#define IWDG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t IWDG_BASE = 0x40003000;

struct IwdgRegs {
    volatile uint32_t kr; // Key register
    volatile uint32_t pr; // Prescaler register
    volatile uint32_t rlr; // Reload register
    volatile uint32_t sr; // Status register
};

static_assert(offsetof(IwdgRegs, kr) == 0);
static_assert(offsetof(IwdgRegs, pr) == 4);
static_assert(offsetof(IwdgRegs, rlr) == 8);
static_assert(offsetof(IwdgRegs, sr) == 12);

inline IwdgRegs& iwdg() { return *reinterpret_cast<IwdgRegs*>(IWDG_BASE); }

constexpr RegField iwdg_kr_key{0x0000FFFFu, 0};
constexpr RegField iwdg_pr_pr{0x00000007u, 0};
constexpr RegField iwdg_rlr_rl{0x00000FFFu, 0};
constexpr RegField iwdg_sr_rvu{0x00000002u, 1};
constexpr RegField iwdg_sr_pvu{0x00000001u, 0};

#endif // IWDG_HPP