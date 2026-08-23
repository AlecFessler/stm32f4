// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef STM32_TIM4_HPP
#define STM32_TIM4_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim4Regs omitted: overlapping registers
constexpr Field<Access::RW> tim4_cr1_ckd{0x40000800u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_cr1_arpe{0x40000800u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_cr1_cms{0x40000800u, 0x00000060u, 5};
constexpr Field<Access::RW> tim4_cr1_dir{0x40000800u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_cr1_opm{0x40000800u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_cr1_urs{0x40000800u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_cr1_udis{0x40000800u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_cr1_cen{0x40000800u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_cr2_ti1s{0x40000804u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_cr2_mms{0x40000804u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_cr2_ccds{0x40000804u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_smcr_etp{0x40000808u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_smcr_ece{0x40000808u, 0x00004000u, 14};
constexpr Field<Access::RW> tim4_smcr_etps{0x40000808u, 0x00003000u, 12};
constexpr Field<Access::RW> tim4_smcr_etf{0x40000808u, 0x00000F00u, 8};
constexpr Field<Access::RW> tim4_smcr_msm{0x40000808u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_smcr_ts{0x40000808u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_smcr_sms{0x40000808u, 0x00000007u, 0};
constexpr Field<Access::RW> tim4_dier_tde{0x4000080Cu, 0x00004000u, 14};
constexpr Field<Access::RW> tim4_dier_cc4de{0x4000080Cu, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_dier_cc3de{0x4000080Cu, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_dier_cc2de{0x4000080Cu, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_dier_cc1de{0x4000080Cu, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_dier_ude{0x4000080Cu, 0x00000100u, 8};
constexpr Field<Access::RW> tim4_dier_tie{0x4000080Cu, 0x00000040u, 6};
constexpr Field<Access::RW> tim4_dier_cc4ie{0x4000080Cu, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_dier_cc3ie{0x4000080Cu, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_dier_cc2ie{0x4000080Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_dier_cc1ie{0x4000080Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_dier_uie{0x4000080Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_sr_cc4of{0x40000810u, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_sr_cc3of{0x40000810u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_sr_cc2of{0x40000810u, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_sr_cc1of{0x40000810u, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_sr_tif{0x40000810u, 0x00000040u, 6};
constexpr Field<Access::RW> tim4_sr_cc4if{0x40000810u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_sr_cc3if{0x40000810u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_sr_cc2if{0x40000810u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_sr_cc1if{0x40000810u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_sr_uif{0x40000810u, 0x00000001u, 0};
constexpr Field<Access::WO> tim4_egr_tg{0x40000814u, 0x00000040u, 6};
constexpr Field<Access::WO> tim4_egr_cc4g{0x40000814u, 0x00000010u, 4};
constexpr Field<Access::WO> tim4_egr_cc3g{0x40000814u, 0x00000008u, 3};
constexpr Field<Access::WO> tim4_egr_cc2g{0x40000814u, 0x00000004u, 2};
constexpr Field<Access::WO> tim4_egr_cc1g{0x40000814u, 0x00000002u, 1};
constexpr Field<Access::WO> tim4_egr_ug{0x40000814u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2ce{0x40000818u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2m{0x40000818u, 0x00007000u, 12};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2pe{0x40000818u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2fe{0x40000818u, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_ccmr1_output_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1ce{0x40000818u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1m{0x40000818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1pe{0x40000818u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1fe{0x40000818u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_ccmr1_output_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr1_input_ic2f{0x40000818u, 0x0000F000u, 12};
constexpr Field<Access::RW> tim4_ccmr1_input_ic2pcs{0x40000818u, 0x00000C00u, 10};
constexpr Field<Access::RW> tim4_ccmr1_input_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr1_input_ic1f{0x40000818u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim4_ccmr1_input_icpcs{0x40000818u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim4_ccmr1_input_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr2_output_o24ce{0x4000081Cu, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4m{0x4000081Cu, 0x00007000u, 12};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4pe{0x4000081Cu, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4fe{0x4000081Cu, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_ccmr2_output_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3ce{0x4000081Cu, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3m{0x4000081Cu, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3pe{0x4000081Cu, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3fe{0x4000081Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_ccmr2_output_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr2_input_ic4f{0x4000081Cu, 0x0000F000u, 12};
constexpr Field<Access::RW> tim4_ccmr2_input_ic4psc{0x4000081Cu, 0x00000C00u, 10};
constexpr Field<Access::RW> tim4_ccmr2_input_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr2_input_ic3f{0x4000081Cu, 0x000000F0u, 4};
constexpr Field<Access::RW> tim4_ccmr2_input_ic3psc{0x4000081Cu, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim4_ccmr2_input_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccer_cc4np{0x40000820u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccer_cc4p{0x40000820u, 0x00002000u, 13};
constexpr Field<Access::RW> tim4_ccer_cc4e{0x40000820u, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_ccer_cc3np{0x40000820u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccer_cc3p{0x40000820u, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_ccer_cc3e{0x40000820u, 0x00000100u, 8};
constexpr Field<Access::RW> tim4_ccer_cc2np{0x40000820u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccer_cc2p{0x40000820u, 0x00000020u, 5};
constexpr Field<Access::RW> tim4_ccer_cc2e{0x40000820u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_ccer_cc1np{0x40000820u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccer_cc1p{0x40000820u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_ccer_cc1e{0x40000820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_cnt_cnt_h{0x40000824u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_cnt_cnt_l{0x40000824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_psc_psc{0x40000828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_arr_arr_h{0x4000082Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_arr_arr_l{0x4000082Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr1_ccr1_h{0x40000834u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr1_ccr1_l{0x40000834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr2_ccr2_h{0x40000838u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr2_ccr2_l{0x40000838u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr3_ccr3_h{0x4000083Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr3_ccr3_l{0x4000083Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr4_ccr4_h{0x40000840u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr4_ccr4_l{0x40000840u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_dcr_dbl{0x40000848u, 0x00001F00u, 8};
constexpr Field<Access::RW> tim4_dcr_dba{0x40000848u, 0x0000001Fu, 0};
constexpr Field<Access::RW> tim4_dmar_dmab{0x4000084Cu, 0x0000FFFFu, 0};

namespace tim4::arpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::cc1s {
    constexpr uint32_t ti1 = 1;
    constexpr uint32_t ti2 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim4::cc2s {
    constexpr uint32_t ti2 = 1;
    constexpr uint32_t ti1 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim4::cc3s {
    constexpr uint32_t ti3 = 1;
    constexpr uint32_t ti4 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim4::cc4s {
    constexpr uint32_t ti4 = 1;
    constexpr uint32_t ti3 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim4::ccde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ccds {
    constexpr uint32_t oncompare = 0;
    constexpr uint32_t onupdate = 1;
}
namespace tim4::cce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ccg {
    constexpr uint32_t trigger = 1;
}
namespace tim4::ccie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ccif {
    constexpr uint32_t nomatch = 0;
    constexpr uint32_t match = 1;
}
namespace tim4::ccne {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ccof {
    constexpr uint32_t noovercapture = 0;
    constexpr uint32_t overcapture = 1;
}
namespace tim4::ccp {
    constexpr uint32_t risingedge = 0;
    constexpr uint32_t fallingedge = 1;
}
namespace tim4::ccs {
    constexpr uint32_t output = 0;
}
namespace tim4::cen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ckd {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
}
namespace tim4::cms {
    constexpr uint32_t edgealigned = 0;
    constexpr uint32_t centeraligned1 = 1;
    constexpr uint32_t centeraligned2 = 2;
    constexpr uint32_t centeraligned3 = 3;
}
namespace tim4::dir {
    constexpr uint32_t up = 0;
    constexpr uint32_t down = 1;
}
namespace tim4::ece {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::etf {
    constexpr uint32_t nofilter = 0;
    constexpr uint32_t fck_int_n2 = 1;
    constexpr uint32_t fck_int_n4 = 2;
    constexpr uint32_t fck_int_n8 = 3;
    constexpr uint32_t fdts_div2_n6 = 4;
    constexpr uint32_t fdts_div2_n8 = 5;
    constexpr uint32_t fdts_div4_n6 = 6;
    constexpr uint32_t fdts_div4_n8 = 7;
    constexpr uint32_t fdts_div8_n6 = 8;
    constexpr uint32_t fdts_div8_n8 = 9;
    constexpr uint32_t fdts_div16_n5 = 10;
    constexpr uint32_t fdts_div16_n6 = 11;
    constexpr uint32_t fdts_div16_n8 = 12;
    constexpr uint32_t fdts_div32_n5 = 13;
    constexpr uint32_t fdts_div32_n6 = 14;
    constexpr uint32_t fdts_div32_n8 = 15;
}
namespace tim4::etp {
    constexpr uint32_t notinverted = 0;
    constexpr uint32_t inverted = 1;
}
namespace tim4::etps {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
    constexpr uint32_t div8 = 3;
}
namespace tim4::icfilter {
    constexpr uint32_t nofilter = 0;
    constexpr uint32_t fck_int_n2 = 1;
    constexpr uint32_t fck_int_n4 = 2;
    constexpr uint32_t fck_int_n8 = 3;
    constexpr uint32_t fdts_div2_n6 = 4;
    constexpr uint32_t fdts_div2_n8 = 5;
    constexpr uint32_t fdts_div4_n6 = 6;
    constexpr uint32_t fdts_div4_n8 = 7;
    constexpr uint32_t fdts_div8_n6 = 8;
    constexpr uint32_t fdts_div8_n8 = 9;
    constexpr uint32_t fdts_div16_n5 = 10;
    constexpr uint32_t fdts_div16_n6 = 11;
    constexpr uint32_t fdts_div16_n8 = 12;
    constexpr uint32_t fdts_div32_n5 = 13;
    constexpr uint32_t fdts_div32_n6 = 14;
    constexpr uint32_t fdts_div32_n8 = 15;
}
namespace tim4::icprescaler {
    constexpr uint32_t noprescaler = 0;
    constexpr uint32_t twoevents = 1;
    constexpr uint32_t fourevents = 2;
    constexpr uint32_t eightevents = 3;
}
namespace tim4::mms {
    constexpr uint32_t reset = 0;
    constexpr uint32_t enable = 1;
    constexpr uint32_t update = 2;
    constexpr uint32_t comparepulse = 3;
    constexpr uint32_t compareoc1 = 4;
    constexpr uint32_t compareoc2 = 5;
    constexpr uint32_t compareoc3 = 6;
    constexpr uint32_t compareoc4 = 7;
}
namespace tim4::msm {
    constexpr uint32_t nosync = 0;
    constexpr uint32_t sync = 1;
}
namespace tim4::occe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ocfe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ocm {
    constexpr uint32_t frozen = 0;
    constexpr uint32_t activeonmatch = 1;
    constexpr uint32_t inactiveonmatch = 2;
    constexpr uint32_t toggle = 3;
    constexpr uint32_t forceinactive = 4;
    constexpr uint32_t forceactive = 5;
    constexpr uint32_t pwmmode1 = 6;
    constexpr uint32_t pwmmode2 = 7;
}
namespace tim4::ocpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::ois {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim4::oisn {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim4::opm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::sms {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t encoder_mode_1 = 1;
    constexpr uint32_t encoder_mode_2 = 2;
    constexpr uint32_t encoder_mode_3 = 3;
    constexpr uint32_t reset_mode = 4;
    constexpr uint32_t gated_mode = 5;
    constexpr uint32_t trigger_mode = 6;
    constexpr uint32_t ext_clock_mode = 7;
}
namespace tim4::tde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::tg {
    constexpr uint32_t trigger = 1;
}
namespace tim4::ti1s {
    constexpr uint32_t normal = 0;
    constexpr uint32_t xor_ = 1;
}
namespace tim4::tie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::tif {
    constexpr uint32_t notrigger = 0;
    constexpr uint32_t trigger = 1;
}
namespace tim4::ts {
    constexpr uint32_t itr0 = 0;
    constexpr uint32_t itr1 = 1;
    constexpr uint32_t itr2 = 2;
    constexpr uint32_t ti1f_ed = 4;
    constexpr uint32_t ti1fp1 = 5;
    constexpr uint32_t ti2fp2 = 6;
    constexpr uint32_t etrf = 7;
}
namespace tim4::ude {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::udis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace tim4::ug {
    constexpr uint32_t update = 1;
}
namespace tim4::uie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim4::uif {
    constexpr uint32_t noupdateoccurred = 0;
    constexpr uint32_t updatepending = 1;
}
namespace tim4::urs {
    constexpr uint32_t anyevent = 0;
    constexpr uint32_t counteronly = 1;
}

#endif // STM32_TIM4_HPP
