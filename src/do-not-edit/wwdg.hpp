// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Window watchdog
#ifndef STM32_WWDG_HPP
#define STM32_WWDG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace wwdg {
enum class Ewi : uint32_t {
    enable = 1,
};
enum class Ewif : uint32_t {
    finished = 0,
    pending = 1,
};
enum class Wdga : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wdgtb : uint32_t {
    div1 = 0,
    div2 = 1,
    div4 = 2,
    div8 = 3,
};
} // namespace wwdg

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t WWDG_BASE = 0x40002C00;
struct WwdgRegs {
    volatile uint32_t cr; // Control register
    volatile uint32_t cfr; // Configuration register
    volatile uint32_t sr; // Status register
};
static_assert(offsetof(WwdgRegs, cr) == 0);
static_assert(offsetof(WwdgRegs, cfr) == 4);
static_assert(offsetof(WwdgRegs, sr) == 8);

constexpr Field<Access::RS, wwdg::Wdga, true, true> wwdg_cr_wdga{0x40002C00u, 0x00000080u, 7, 0x00000080u, 0x00000000u};
constexpr Field<Access::RW, uint32_t, false> wwdg_cr_t{0x40002C00u, 0x0000007Fu, 0, 0x00000080u, 0x00000000u};
constexpr Field<Access::RS, wwdg::Ewi, true, true> wwdg_cfr_ewi{0x40002C04u, 0x00000200u, 9, 0x00000200u, 0x00000000u};
constexpr Field<Access::RW> wwdg_cfr_w{0x40002C04u, 0x0000007Fu, 0, 0x00000200u, 0x00000000u};
constexpr Field<Access::RW, uint32_t, true, true> wwdg_cfr_wdgtb1{0x40002C04u, 0x00000100u, 8, 0x00000200u, 0x00000000u};
constexpr Field<Access::RW, uint32_t, true, true> wwdg_cfr_wdgtb0{0x40002C04u, 0x00000080u, 7, 0x00000200u, 0x00000000u};
constexpr Field<Access::RC_W0, wwdg::Ewif, false> wwdg_sr_ewif{0x40002C08u, 0x00000001u, 0, 0x00000000u, 0x00000001u};

#endif // STM32_WWDG_HPP
