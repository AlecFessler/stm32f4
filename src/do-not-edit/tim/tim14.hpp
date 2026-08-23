// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef STM32_TIM14_HPP
#define STM32_TIM14_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim14Regs omitted: overlapping registers
constexpr Field<Access::RW> tim14_cr1_ckd{0x40002000u, 0x00000300u, 8};
constexpr Field<Access::RW> tim14_cr1_arpe{0x40002000u, 0x00000080u, 7};
constexpr Field<Access::RW> tim14_cr1_urs{0x40002000u, 0x00000004u, 2};
constexpr Field<Access::RW> tim14_cr1_udis{0x40002000u, 0x00000002u, 1};
constexpr Field<Access::RW> tim14_cr1_cen{0x40002000u, 0x00000001u, 0};
constexpr Field<Access::RW> tim14_dier_cc1ie{0x4000200Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim14_dier_uie{0x4000200Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim14_sr_cc1of{0x40002010u, 0x00000200u, 9};
constexpr Field<Access::RW> tim14_sr_cc1if{0x40002010u, 0x00000002u, 1};
constexpr Field<Access::RW> tim14_sr_uif{0x40002010u, 0x00000001u, 0};
constexpr Field<Access::WO> tim14_egr_cc1g{0x40002014u, 0x00000002u, 1};
constexpr Field<Access::WO> tim14_egr_ug{0x40002014u, 0x00000001u, 0};
constexpr Field<Access::RW> tim14_ccmr1_output_oc1m{0x40002018u, 0x00000070u, 4};
constexpr Field<Access::RW> tim14_ccmr1_output_oc1pe{0x40002018u, 0x00000008u, 3};
constexpr Field<Access::RW> tim14_ccmr1_output_oc1fe{0x40002018u, 0x00000004u, 2};
constexpr Field<Access::RW> tim14_ccmr1_output_cc1s{0x40002018u, 0x00000003u, 0};
constexpr Field<Access::RW> tim14_ccmr1_input_ic1f{0x40002018u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim14_ccmr1_input_icpcs{0x40002018u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim14_ccmr1_input_cc1s{0x40002018u, 0x00000003u, 0};
constexpr Field<Access::RW> tim14_ccer_cc1np{0x40002020u, 0x00000008u, 3};
constexpr Field<Access::RW> tim14_ccer_cc1p{0x40002020u, 0x00000002u, 1};
constexpr Field<Access::RW> tim14_ccer_cc1e{0x40002020u, 0x00000001u, 0};
constexpr Field<Access::RW> tim14_cnt_cnt{0x40002024u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim14_psc_psc{0x40002028u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim14_arr_arr{0x4000202Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim14_ccr1_ccr1{0x40002034u, 0x0000FFFFu, 0};

#endif // STM32_TIM14_HPP
