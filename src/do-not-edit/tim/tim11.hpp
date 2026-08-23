// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef STM32_TIM11_HPP
#define STM32_TIM11_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim11Regs omitted: overlapping registers
constexpr Field<Access::RW> tim11_cr1_ckd{0x40014800u, 0x00000300u, 8};
constexpr Field<Access::RW> tim11_cr1_arpe{0x40014800u, 0x00000080u, 7};
constexpr Field<Access::RW> tim11_cr1_urs{0x40014800u, 0x00000004u, 2};
constexpr Field<Access::RW> tim11_cr1_udis{0x40014800u, 0x00000002u, 1};
constexpr Field<Access::RW> tim11_cr1_cen{0x40014800u, 0x00000001u, 0};
constexpr Field<Access::RW> tim11_dier_cc1ie{0x4001480Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim11_dier_uie{0x4001480Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim11_sr_cc1of{0x40014810u, 0x00000200u, 9};
constexpr Field<Access::RW> tim11_sr_cc1if{0x40014810u, 0x00000002u, 1};
constexpr Field<Access::RW> tim11_sr_uif{0x40014810u, 0x00000001u, 0};
constexpr Field<Access::WO> tim11_egr_cc1g{0x40014814u, 0x00000002u, 1};
constexpr Field<Access::WO> tim11_egr_ug{0x40014814u, 0x00000001u, 0};
constexpr Field<Access::RW> tim11_ccmr1_output_oc1m{0x40014818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim11_ccmr1_output_oc1pe{0x40014818u, 0x00000008u, 3};
constexpr Field<Access::RW> tim11_ccmr1_output_oc1fe{0x40014818u, 0x00000004u, 2};
constexpr Field<Access::RW> tim11_ccmr1_output_cc1s{0x40014818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim11_ccmr1_input_ic1f{0x40014818u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim11_ccmr1_input_icpcs{0x40014818u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim11_ccmr1_input_cc1s{0x40014818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim11_ccer_cc1np{0x40014820u, 0x00000008u, 3};
constexpr Field<Access::RW> tim11_ccer_cc1p{0x40014820u, 0x00000002u, 1};
constexpr Field<Access::RW> tim11_ccer_cc1e{0x40014820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim11_cnt_cnt{0x40014824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_psc_psc{0x40014828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_arr_arr{0x4001482Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_ccr1_ccr1{0x40014834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_or_rmp{0x40014850u, 0x00000003u, 0};

#endif // STM32_TIM11_HPP
