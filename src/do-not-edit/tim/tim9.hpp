// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef STM32_TIM9_HPP
#define STM32_TIM9_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim9Regs omitted: overlapping registers
constexpr Field<Access::RW> tim9_cr1_ckd{0x40014000u, 0x00000300u, 8};
constexpr Field<Access::RW> tim9_cr1_arpe{0x40014000u, 0x00000080u, 7};
constexpr Field<Access::RW> tim9_cr1_opm{0x40014000u, 0x00000008u, 3};
constexpr Field<Access::RW> tim9_cr1_urs{0x40014000u, 0x00000004u, 2};
constexpr Field<Access::RW> tim9_cr1_udis{0x40014000u, 0x00000002u, 1};
constexpr Field<Access::RW> tim9_cr1_cen{0x40014000u, 0x00000001u, 0};
constexpr Field<Access::RW> tim9_cr2_mms{0x40014004u, 0x00000070u, 4};
constexpr Field<Access::RW> tim9_smcr_msm{0x40014008u, 0x00000080u, 7};
constexpr Field<Access::RW> tim9_smcr_ts{0x40014008u, 0x00000070u, 4};
constexpr Field<Access::RW> tim9_smcr_sms{0x40014008u, 0x00000007u, 0};
constexpr Field<Access::RW> tim9_dier_tie{0x4001400Cu, 0x00000040u, 6};
constexpr Field<Access::RW> tim9_dier_cc2ie{0x4001400Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim9_dier_cc1ie{0x4001400Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim9_dier_uie{0x4001400Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim9_sr_cc2of{0x40014010u, 0x00000400u, 10};
constexpr Field<Access::RW> tim9_sr_cc1of{0x40014010u, 0x00000200u, 9};
constexpr Field<Access::RW> tim9_sr_tif{0x40014010u, 0x00000040u, 6};
constexpr Field<Access::RW> tim9_sr_cc2if{0x40014010u, 0x00000004u, 2};
constexpr Field<Access::RW> tim9_sr_cc1if{0x40014010u, 0x00000002u, 1};
constexpr Field<Access::RW> tim9_sr_uif{0x40014010u, 0x00000001u, 0};
constexpr Field<Access::WO> tim9_egr_tg{0x40014014u, 0x00000040u, 6};
constexpr Field<Access::WO> tim9_egr_cc2g{0x40014014u, 0x00000004u, 2};
constexpr Field<Access::WO> tim9_egr_cc1g{0x40014014u, 0x00000002u, 1};
constexpr Field<Access::WO> tim9_egr_ug{0x40014014u, 0x00000001u, 0};
constexpr Field<Access::RW> tim9_ccmr1_output_oc2m{0x40014018u, 0x00007000u, 12};
constexpr Field<Access::RW> tim9_ccmr1_output_oc2pe{0x40014018u, 0x00000800u, 11};
constexpr Field<Access::RW> tim9_ccmr1_output_oc2fe{0x40014018u, 0x00000400u, 10};
constexpr Field<Access::RW> tim9_ccmr1_output_cc2s{0x40014018u, 0x00000300u, 8};
constexpr Field<Access::RW> tim9_ccmr1_output_oc1m{0x40014018u, 0x00000070u, 4};
constexpr Field<Access::RW> tim9_ccmr1_output_oc1pe{0x40014018u, 0x00000008u, 3};
constexpr Field<Access::RW> tim9_ccmr1_output_oc1fe{0x40014018u, 0x00000004u, 2};
constexpr Field<Access::RW> tim9_ccmr1_output_cc1s{0x40014018u, 0x00000003u, 0};
constexpr Field<Access::RW> tim9_ccmr1_input_ic2f{0x40014018u, 0x00007000u, 12};
constexpr Field<Access::RW> tim9_ccmr1_input_ic2pcs{0x40014018u, 0x00000C00u, 10};
constexpr Field<Access::RW> tim9_ccmr1_input_cc2s{0x40014018u, 0x00000300u, 8};
constexpr Field<Access::RW> tim9_ccmr1_input_ic1f{0x40014018u, 0x00000070u, 4};
constexpr Field<Access::RW> tim9_ccmr1_input_icpcs{0x40014018u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim9_ccmr1_input_cc1s{0x40014018u, 0x00000003u, 0};
constexpr Field<Access::RW> tim9_ccer_cc2np{0x40014020u, 0x00000080u, 7};
constexpr Field<Access::RW> tim9_ccer_cc2p{0x40014020u, 0x00000020u, 5};
constexpr Field<Access::RW> tim9_ccer_cc2e{0x40014020u, 0x00000010u, 4};
constexpr Field<Access::RW> tim9_ccer_cc1np{0x40014020u, 0x00000008u, 3};
constexpr Field<Access::RW> tim9_ccer_cc1p{0x40014020u, 0x00000002u, 1};
constexpr Field<Access::RW> tim9_ccer_cc1e{0x40014020u, 0x00000001u, 0};
constexpr Field<Access::RW> tim9_cnt_cnt{0x40014024u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim9_psc_psc{0x40014028u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim9_arr_arr{0x4001402Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim9_ccr1_ccr1{0x40014034u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim9_ccr2_ccr2{0x40014038u, 0x0000FFFFu, 0};

#endif // STM32_TIM9_HPP
