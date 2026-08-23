// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef STM32_TIM13_HPP
#define STM32_TIM13_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim13Regs omitted: overlapping registers
constexpr Field<Access::RW> tim13_cr1_ckd{0x40001C00u, 0x00000300u, 8};
constexpr Field<Access::RW> tim13_cr1_arpe{0x40001C00u, 0x00000080u, 7};
constexpr Field<Access::RW> tim13_cr1_urs{0x40001C00u, 0x00000004u, 2};
constexpr Field<Access::RW> tim13_cr1_udis{0x40001C00u, 0x00000002u, 1};
constexpr Field<Access::RW> tim13_cr1_cen{0x40001C00u, 0x00000001u, 0};
constexpr Field<Access::RW> tim13_dier_cc1ie{0x40001C0Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim13_dier_uie{0x40001C0Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim13_sr_cc1of{0x40001C10u, 0x00000200u, 9};
constexpr Field<Access::RW> tim13_sr_cc1if{0x40001C10u, 0x00000002u, 1};
constexpr Field<Access::RW> tim13_sr_uif{0x40001C10u, 0x00000001u, 0};
constexpr Field<Access::WO> tim13_egr_cc1g{0x40001C14u, 0x00000002u, 1};
constexpr Field<Access::WO> tim13_egr_ug{0x40001C14u, 0x00000001u, 0};
constexpr Field<Access::RW> tim13_ccmr1_output_oc1m{0x40001C18u, 0x00000070u, 4};
constexpr Field<Access::RW> tim13_ccmr1_output_oc1pe{0x40001C18u, 0x00000008u, 3};
constexpr Field<Access::RW> tim13_ccmr1_output_oc1fe{0x40001C18u, 0x00000004u, 2};
constexpr Field<Access::RW> tim13_ccmr1_output_cc1s{0x40001C18u, 0x00000003u, 0};
constexpr Field<Access::RW> tim13_ccmr1_input_ic1f{0x40001C18u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim13_ccmr1_input_icpcs{0x40001C18u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim13_ccmr1_input_cc1s{0x40001C18u, 0x00000003u, 0};
constexpr Field<Access::RW> tim13_ccer_cc1np{0x40001C20u, 0x00000008u, 3};
constexpr Field<Access::RW> tim13_ccer_cc1p{0x40001C20u, 0x00000002u, 1};
constexpr Field<Access::RW> tim13_ccer_cc1e{0x40001C20u, 0x00000001u, 0};
constexpr Field<Access::RW> tim13_cnt_cnt{0x40001C24u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim13_psc_psc{0x40001C28u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim13_arr_arr{0x40001C2Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim13_ccr1_ccr1{0x40001C34u, 0x0000FFFFu, 0};

#endif // STM32_TIM13_HPP