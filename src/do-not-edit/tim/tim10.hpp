// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef TIM10_HPP
#define TIM10_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim10Regs omitted: overlapping registers
constexpr Field<Access::RW> tim10_cr1_ckd{0x40014400u, 0x00000300u, 8};
constexpr Field<Access::RW> tim10_cr1_arpe{0x40014400u, 0x00000080u, 7};
constexpr Field<Access::RW> tim10_cr1_urs{0x40014400u, 0x00000004u, 2};
constexpr Field<Access::RW> tim10_cr1_udis{0x40014400u, 0x00000002u, 1};
constexpr Field<Access::RW> tim10_cr1_cen{0x40014400u, 0x00000001u, 0};
constexpr Field<Access::RW> tim10_dier_cc1ie{0x4001440Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim10_dier_uie{0x4001440Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim10_sr_cc1of{0x40014410u, 0x00000200u, 9};
constexpr Field<Access::RW> tim10_sr_cc1if{0x40014410u, 0x00000002u, 1};
constexpr Field<Access::RW> tim10_sr_uif{0x40014410u, 0x00000001u, 0};
constexpr Field<Access::WO> tim10_egr_cc1g{0x40014414u, 0x00000002u, 1};
constexpr Field<Access::WO> tim10_egr_ug{0x40014414u, 0x00000001u, 0};
constexpr Field<Access::RW> tim10_ccmr1_output_oc1m{0x40014418u, 0x00000070u, 4};
constexpr Field<Access::RW> tim10_ccmr1_output_oc1pe{0x40014418u, 0x00000008u, 3};
constexpr Field<Access::RW> tim10_ccmr1_output_oc1fe{0x40014418u, 0x00000004u, 2};
constexpr Field<Access::RW> tim10_ccmr1_output_cc1s{0x40014418u, 0x00000003u, 0};
constexpr Field<Access::RW> tim10_ccmr1_input_ic1f{0x40014418u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim10_ccmr1_input_icpcs{0x40014418u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim10_ccmr1_input_cc1s{0x40014418u, 0x00000003u, 0};
constexpr Field<Access::RW> tim10_ccer_cc1np{0x40014420u, 0x00000008u, 3};
constexpr Field<Access::RW> tim10_ccer_cc1p{0x40014420u, 0x00000002u, 1};
constexpr Field<Access::RW> tim10_ccer_cc1e{0x40014420u, 0x00000001u, 0};
constexpr Field<Access::RW> tim10_cnt_cnt{0x40014424u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim10_psc_psc{0x40014428u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim10_arr_arr{0x4001442Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim10_ccr1_ccr1{0x40014434u, 0x0000FFFFu, 0};

#endif // TIM10_HPP