// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Basic timers
#ifndef TIM6_HPP
#define TIM6_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t TIM6_BASE = 0x40001000;
struct Tim6Regs {
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

static_assert(offsetof(Tim6Regs, cr1) == 0);
static_assert(offsetof(Tim6Regs, cr2) == 4);
static_assert(offsetof(Tim6Regs, dier) == 12);
static_assert(offsetof(Tim6Regs, sr) == 16);
static_assert(offsetof(Tim6Regs, egr) == 20);
static_assert(offsetof(Tim6Regs, cnt) == 36);
static_assert(offsetof(Tim6Regs, psc) == 40);
static_assert(offsetof(Tim6Regs, arr) == 44);

constexpr Field<Access::RW> tim6_cr1_arpe{0x40001000u, 0x00000080u, 7};
constexpr Field<Access::RW> tim6_cr1_opm{0x40001000u, 0x00000008u, 3};
constexpr Field<Access::RW> tim6_cr1_urs{0x40001000u, 0x00000004u, 2};
constexpr Field<Access::RW> tim6_cr1_udis{0x40001000u, 0x00000002u, 1};
constexpr Field<Access::RW> tim6_cr1_cen{0x40001000u, 0x00000001u, 0};
constexpr Field<Access::RW> tim6_cr2_mms{0x40001004u, 0x00000070u, 4};
constexpr Field<Access::RW> tim6_dier_ude{0x4000100Cu, 0x00000100u, 8};
constexpr Field<Access::RW> tim6_dier_uie{0x4000100Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim6_sr_uif{0x40001010u, 0x00000001u, 0};
constexpr Field<Access::WO> tim6_egr_ug{0x40001014u, 0x00000001u, 0};
constexpr Field<Access::RW> tim6_cnt_cnt{0x40001024u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim6_psc_psc{0x40001028u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim6_arr_arr{0x4000102Cu, 0x0000FFFFu, 0};

#endif // TIM6_HPP