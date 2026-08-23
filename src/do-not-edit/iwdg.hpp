// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Independent watchdog
#ifndef STM32_IWDG_HPP
#define STM32_IWDG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace iwdg {
enum class Key : uint32_t {
    unlock = 21845,
    feed = 43690,
    start = 52428,
};
enum class Pr : uint32_t {
    divideby4 = 0,
    divideby8 = 1,
    divideby16 = 2,
    divideby32 = 3,
    divideby64 = 4,
    divideby128 = 5,
};
} // namespace iwdg

// The BASE and Regs struct are defined entirely for debug utility.
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

constexpr Field<Access::WO, iwdg::Key> iwdg_kr_key{0x40003000u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, iwdg::Pr> iwdg_pr_pr{0x40003004u, 0x00000007u, 0};
constexpr Field<Access::RW> iwdg_rlr_rl{0x40003008u, 0x00000FFFu, 0};
constexpr Field<Access::RO> iwdg_sr_rvu{0x4000300Cu, 0x00000002u, 1};
constexpr Field<Access::RO> iwdg_sr_pvu{0x4000300Cu, 0x00000001u, 0};

#endif // STM32_IWDG_HPP
