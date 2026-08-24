// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Basic timers
#ifndef STM32_TIM7_HPP
#define STM32_TIM7_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace tim7 {
enum class Arpe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Mms : uint32_t {
    reset = 0,
    enable = 1,
    update = 2,
};
enum class Opm : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ude : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Udis : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Ug : uint32_t {
    update = 1,
};
enum class Uie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Uif : uint32_t {
    noupdateoccurred = 0,
    updatepending = 1,
};
enum class Urs : uint32_t {
    anyevent = 0,
    counteronly = 1,
};
} // namespace tim7

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t TIM7_BASE = 0x40001400;
struct Tim7Regs {
    volatile uint32_t cr1; // control register 1
    volatile uint32_t cr2; // control register 2
    uint32_t _reserved0[1];
    volatile uint32_t dier; // DMA/Interrupt enable register
    volatile uint32_t sr; // status register
    volatile uint32_t egr; // event generation register
    uint32_t _reserved1[3];
    volatile uint32_t cnt; // counter
    volatile uint32_t psc; // prescaler
    volatile uint32_t arr; // auto-reload register
};
static_assert(offsetof(Tim7Regs, cr1) == 0);
static_assert(offsetof(Tim7Regs, cr2) == 4);
static_assert(offsetof(Tim7Regs, dier) == 12);
static_assert(offsetof(Tim7Regs, sr) == 16);
static_assert(offsetof(Tim7Regs, egr) == 20);
static_assert(offsetof(Tim7Regs, cnt) == 36);
static_assert(offsetof(Tim7Regs, psc) == 40);
static_assert(offsetof(Tim7Regs, arr) == 44);

constexpr Field<Access::RW, tim7::Arpe, true> tim7_cr1_arpe{0x40001400u, 0x00000080u, 7};
constexpr Field<Access::RW, tim7::Opm, true> tim7_cr1_opm{0x40001400u, 0x00000008u, 3};
constexpr Field<Access::RW, tim7::Urs, true> tim7_cr1_urs{0x40001400u, 0x00000004u, 2};
constexpr Field<Access::RW, tim7::Udis, true> tim7_cr1_udis{0x40001400u, 0x00000002u, 1};
constexpr Field<Access::RW, tim7::Cen, true> tim7_cr1_cen{0x40001400u, 0x00000001u, 0};
constexpr Field<Access::RW, tim7::Mms, false, false> tim7_cr2_mms{0x40001404u, 0x00000070u, 4};
constexpr Field<Access::RW, tim7::Ude, true> tim7_dier_ude{0x4000140Cu, 0x00000100u, 8};
constexpr Field<Access::RW, tim7::Uie, true> tim7_dier_uie{0x4000140Cu, 0x00000001u, 0};
constexpr Field<Access::RC_W0, tim7::Uif, false, false> tim7_sr_uif{0x40001410u, 0x00000001u, 0, 0x00000000u, 0x00000001u};
constexpr Field<Access::WO, tim7::Ug> tim7_egr_ug{0x40001414u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim7_cnt_cnt{0x40001424u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim7_psc_psc{0x40001428u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim7_arr_arr{0x4000142Cu, 0x0000FFFFu, 0};

#endif // STM32_TIM7_HPP
