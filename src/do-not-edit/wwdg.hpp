// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Window watchdog
#ifndef WWDG_HPP
#define WWDG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t WWDG_BASE = 0x40002C00;

struct WwdgRegs {
    volatile uint32_t cr; // Control register
    volatile uint32_t cfr; // Configuration register
    volatile uint32_t sr; // Status register
};

static_assert(offsetof(WwdgRegs, cr) == 0);
static_assert(offsetof(WwdgRegs, cfr) == 4);
static_assert(offsetof(WwdgRegs, sr) == 8);

inline WwdgRegs& wwdg() { return *reinterpret_cast<WwdgRegs*>(WWDG_BASE); }

constexpr RegField wwdg_cr_wdga{0x00000080u, 7};
constexpr RegField wwdg_cr_t{0x0000007Fu, 0};
constexpr RegField wwdg_cfr_ewi{0x00000200u, 9};
constexpr RegField wwdg_cfr_wdgtb1{0x00000100u, 8};
constexpr RegField wwdg_cfr_wdgtb0{0x00000080u, 7};
constexpr RegField wwdg_cfr_w{0x0000007Fu, 0};
constexpr RegField wwdg_sr_ewif{0x00000001u, 0};

#endif // WWDG_HPP