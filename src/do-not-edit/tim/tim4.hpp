// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef STM32_TIM4_HPP
#define STM32_TIM4_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace tim4 {
enum class Arpe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cc1s : uint32_t {
    ti1 = 1,
    ti2 = 2,
    trc = 3,
};
enum class Cc2s : uint32_t {
    ti2 = 1,
    ti1 = 2,
    trc = 3,
};
enum class Cc3s : uint32_t {
    ti3 = 1,
    ti4 = 2,
    trc = 3,
};
enum class Cc4s : uint32_t {
    ti4 = 1,
    ti3 = 2,
    trc = 3,
};
enum class Ccde : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ccds : uint32_t {
    oncompare = 0,
    onupdate = 1,
};
enum class Cce : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ccg : uint32_t {
    trigger = 1,
};
enum class Ccie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ccif : uint32_t {
    nomatch = 0,
    match = 1,
};
enum class Ccne : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ccof : uint32_t {
    noovercapture = 0,
    overcapture = 1,
};
enum class Ccp : uint32_t {
    risingedge = 0,
    fallingedge = 1,
};
enum class Ccs : uint32_t {
    output = 0,
};
enum class Cen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ckd : uint32_t {
    div1 = 0,
    div2 = 1,
    div4 = 2,
};
enum class Cms : uint32_t {
    edgealigned = 0,
    centeraligned1 = 1,
    centeraligned2 = 2,
    centeraligned3 = 3,
};
enum class Dir : uint32_t {
    up = 0,
    down = 1,
};
enum class Ece : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Etf : uint32_t {
    nofilter = 0,
    fck_int_n2 = 1,
    fck_int_n4 = 2,
    fck_int_n8 = 3,
    fdts_div2_n6 = 4,
    fdts_div2_n8 = 5,
    fdts_div4_n6 = 6,
    fdts_div4_n8 = 7,
    fdts_div8_n6 = 8,
    fdts_div8_n8 = 9,
    fdts_div16_n5 = 10,
    fdts_div16_n6 = 11,
    fdts_div16_n8 = 12,
    fdts_div32_n5 = 13,
    fdts_div32_n6 = 14,
    fdts_div32_n8 = 15,
};
enum class Etp : uint32_t {
    notinverted = 0,
    inverted = 1,
};
enum class Etps : uint32_t {
    div1 = 0,
    div2 = 1,
    div4 = 2,
    div8 = 3,
};
enum class Icfilter : uint32_t {
    nofilter = 0,
    fck_int_n2 = 1,
    fck_int_n4 = 2,
    fck_int_n8 = 3,
    fdts_div2_n6 = 4,
    fdts_div2_n8 = 5,
    fdts_div4_n6 = 6,
    fdts_div4_n8 = 7,
    fdts_div8_n6 = 8,
    fdts_div8_n8 = 9,
    fdts_div16_n5 = 10,
    fdts_div16_n6 = 11,
    fdts_div16_n8 = 12,
    fdts_div32_n5 = 13,
    fdts_div32_n6 = 14,
    fdts_div32_n8 = 15,
};
enum class Icprescaler : uint32_t {
    noprescaler = 0,
    twoevents = 1,
    fourevents = 2,
    eightevents = 3,
};
enum class Mms : uint32_t {
    reset = 0,
    enable = 1,
    update = 2,
    comparepulse = 3,
    compareoc1 = 4,
    compareoc2 = 5,
    compareoc3 = 6,
    compareoc4 = 7,
};
enum class Msm : uint32_t {
    nosync = 0,
    sync = 1,
};
enum class Occe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ocfe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ocm : uint32_t {
    frozen = 0,
    activeonmatch = 1,
    inactiveonmatch = 2,
    toggle = 3,
    forceinactive = 4,
    forceactive = 5,
    pwmmode1 = 6,
    pwmmode2 = 7,
};
enum class Ocpe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ois : uint32_t {
    reset = 0,
    set = 1,
};
enum class Oisn : uint32_t {
    reset = 0,
    set = 1,
};
enum class Opm : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Sms : uint32_t {
    disabled = 0,
    encoder_mode_1 = 1,
    encoder_mode_2 = 2,
    encoder_mode_3 = 3,
    reset_mode = 4,
    gated_mode = 5,
    trigger_mode = 6,
    ext_clock_mode = 7,
};
enum class Tde : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tg : uint32_t {
    trigger = 1,
};
enum class Ti1s : uint32_t {
    normal = 0,
    xor_ = 1,
};
enum class Tie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tif : uint32_t {
    notrigger = 0,
    trigger = 1,
};
enum class Ts : uint32_t {
    itr0 = 0,
    itr1 = 1,
    itr2 = 2,
    ti1f_ed = 4,
    ti1fp1 = 5,
    ti2fp2 = 6,
    etrf = 7,
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
} // namespace tim4

// Tim4Regs omitted: overlapping registers
constexpr Field<Access::RW, tim4::Ckd> tim4_cr1_ckd{0x40000800u, 0x00000300u, 8};
constexpr Field<Access::RW, tim4::Arpe> tim4_cr1_arpe{0x40000800u, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Cms> tim4_cr1_cms{0x40000800u, 0x00000060u, 5};
constexpr Field<Access::RW, tim4::Dir> tim4_cr1_dir{0x40000800u, 0x00000010u, 4};
constexpr Field<Access::RW, tim4::Opm> tim4_cr1_opm{0x40000800u, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Urs> tim4_cr1_urs{0x40000800u, 0x00000004u, 2};
constexpr Field<Access::RW, tim4::Udis> tim4_cr1_udis{0x40000800u, 0x00000002u, 1};
constexpr Field<Access::RW, tim4::Cen> tim4_cr1_cen{0x40000800u, 0x00000001u, 0};
constexpr Field<Access::RW, tim4::Ti1s> tim4_cr2_ti1s{0x40000804u, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Mms> tim4_cr2_mms{0x40000804u, 0x00000070u, 4};
constexpr Field<Access::RW, tim4::Ccds> tim4_cr2_ccds{0x40000804u, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Etp> tim4_smcr_etp{0x40000808u, 0x00008000u, 15};
constexpr Field<Access::RW, tim4::Ece> tim4_smcr_ece{0x40000808u, 0x00004000u, 14};
constexpr Field<Access::RW, tim4::Etps> tim4_smcr_etps{0x40000808u, 0x00003000u, 12};
constexpr Field<Access::RW, tim4::Etf> tim4_smcr_etf{0x40000808u, 0x00000F00u, 8};
constexpr Field<Access::RW, tim4::Msm> tim4_smcr_msm{0x40000808u, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Ts> tim4_smcr_ts{0x40000808u, 0x00000070u, 4};
constexpr Field<Access::RW, tim4::Sms> tim4_smcr_sms{0x40000808u, 0x00000007u, 0};
constexpr Field<Access::RW, tim4::Tde> tim4_dier_tde{0x4000080Cu, 0x00004000u, 14};
constexpr Field<Access::RW, tim4::Ccde> tim4_dier_cc4de{0x4000080Cu, 0x00001000u, 12};
constexpr Field<Access::RW, tim4::Ccde> tim4_dier_cc3de{0x4000080Cu, 0x00000800u, 11};
constexpr Field<Access::RW, tim4::Ccde> tim4_dier_cc2de{0x4000080Cu, 0x00000400u, 10};
constexpr Field<Access::RW, tim4::Ccde> tim4_dier_cc1de{0x4000080Cu, 0x00000200u, 9};
constexpr Field<Access::RW, tim4::Ude> tim4_dier_ude{0x4000080Cu, 0x00000100u, 8};
constexpr Field<Access::RW, tim4::Tie> tim4_dier_tie{0x4000080Cu, 0x00000040u, 6};
constexpr Field<Access::RW, tim4::Ccie> tim4_dier_cc4ie{0x4000080Cu, 0x00000010u, 4};
constexpr Field<Access::RW, tim4::Ccie> tim4_dier_cc3ie{0x4000080Cu, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Ccie> tim4_dier_cc2ie{0x4000080Cu, 0x00000004u, 2};
constexpr Field<Access::RW, tim4::Ccie> tim4_dier_cc1ie{0x4000080Cu, 0x00000002u, 1};
constexpr Field<Access::RW, tim4::Uie> tim4_dier_uie{0x4000080Cu, 0x00000001u, 0};
constexpr Field<Access::RC_W0, tim4::Ccof, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc4of{0x40000810u, 0x00001000u, 12};
constexpr Field<Access::RC_W0, tim4::Ccof, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc3of{0x40000810u, 0x00000800u, 11};
constexpr Field<Access::RC_W0, tim4::Ccof, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc2of{0x40000810u, 0x00000400u, 10};
constexpr Field<Access::RC_W0, tim4::Ccof, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc1of{0x40000810u, 0x00000200u, 9};
constexpr Field<Access::RC_W0, tim4::Tif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_tif{0x40000810u, 0x00000040u, 6};
constexpr Field<Access::RC_W0, tim4::Ccif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc4if{0x40000810u, 0x00000010u, 4};
constexpr Field<Access::RC_W0, tim4::Ccif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc3if{0x40000810u, 0x00000008u, 3};
constexpr Field<Access::RC_W0, tim4::Ccif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc2if{0x40000810u, 0x00000004u, 2};
constexpr Field<Access::RC_W0, tim4::Ccif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_cc1if{0x40000810u, 0x00000002u, 1};
constexpr Field<Access::RC_W0, tim4::Uif, 0x00000000u, 0x00001E5Fu, false> tim4_sr_uif{0x40000810u, 0x00000001u, 0};
constexpr Field<Access::WO, tim4::Tg> tim4_egr_tg{0x40000814u, 0x00000040u, 6};
constexpr Field<Access::WO, tim4::Ccg> tim4_egr_cc4g{0x40000814u, 0x00000010u, 4};
constexpr Field<Access::WO, tim4::Ccg> tim4_egr_cc3g{0x40000814u, 0x00000008u, 3};
constexpr Field<Access::WO, tim4::Ccg> tim4_egr_cc2g{0x40000814u, 0x00000004u, 2};
constexpr Field<Access::WO, tim4::Ccg> tim4_egr_cc1g{0x40000814u, 0x00000002u, 1};
constexpr Field<Access::WO, tim4::Ug> tim4_egr_ug{0x40000814u, 0x00000001u, 0};
constexpr Field<Access::RW, tim4::Occe> tim4_ccmr1_output_oc2ce{0x40000818u, 0x00008000u, 15};
constexpr Field<Access::RW, tim4::Ocm> tim4_ccmr1_output_oc2m{0x40000818u, 0x00007000u, 12};
constexpr Field<Access::RW, tim4::Ocpe> tim4_ccmr1_output_oc2pe{0x40000818u, 0x00000800u, 11};
constexpr Field<Access::RW, tim4::Ocfe> tim4_ccmr1_output_oc2fe{0x40000818u, 0x00000400u, 10};
constexpr Field<Access::RW, tim4::Ccs> tim4_ccmr1_output_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW, tim4::Occe> tim4_ccmr1_output_oc1ce{0x40000818u, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Ocm> tim4_ccmr1_output_oc1m{0x40000818u, 0x00000070u, 4};
constexpr Field<Access::RW, tim4::Ocpe> tim4_ccmr1_output_oc1pe{0x40000818u, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Ocfe> tim4_ccmr1_output_oc1fe{0x40000818u, 0x00000004u, 2};
constexpr Field<Access::RW, tim4::Ccs> tim4_ccmr1_output_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW, tim4::Icfilter> tim4_ccmr1_input_ic2f{0x40000818u, 0x0000F000u, 12};
constexpr Field<Access::RW> tim4_ccmr1_input_ic2pcs{0x40000818u, 0x00000C00u, 10};
constexpr Field<Access::RW, tim4::Cc2s> tim4_ccmr1_input_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW, tim4::Icfilter> tim4_ccmr1_input_ic1f{0x40000818u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim4_ccmr1_input_icpcs{0x40000818u, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim4::Cc1s> tim4_ccmr1_input_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr2_output_o24ce{0x4000081Cu, 0x00008000u, 15};
constexpr Field<Access::RW, tim4::Ocm> tim4_ccmr2_output_oc4m{0x4000081Cu, 0x00007000u, 12};
constexpr Field<Access::RW, tim4::Ocpe> tim4_ccmr2_output_oc4pe{0x4000081Cu, 0x00000800u, 11};
constexpr Field<Access::RW, tim4::Ocfe> tim4_ccmr2_output_oc4fe{0x4000081Cu, 0x00000400u, 10};
constexpr Field<Access::RW, tim4::Ccs> tim4_ccmr2_output_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW, tim4::Occe> tim4_ccmr2_output_oc3ce{0x4000081Cu, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Ocm> tim4_ccmr2_output_oc3m{0x4000081Cu, 0x00000070u, 4};
constexpr Field<Access::RW, tim4::Ocpe> tim4_ccmr2_output_oc3pe{0x4000081Cu, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Ocfe> tim4_ccmr2_output_oc3fe{0x4000081Cu, 0x00000004u, 2};
constexpr Field<Access::RW, tim4::Ccs> tim4_ccmr2_output_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW, tim4::Icfilter> tim4_ccmr2_input_ic4f{0x4000081Cu, 0x0000F000u, 12};
constexpr Field<Access::RW, tim4::Icprescaler> tim4_ccmr2_input_ic4psc{0x4000081Cu, 0x00000C00u, 10};
constexpr Field<Access::RW, tim4::Cc4s> tim4_ccmr2_input_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW, tim4::Icfilter> tim4_ccmr2_input_ic3f{0x4000081Cu, 0x000000F0u, 4};
constexpr Field<Access::RW, tim4::Icprescaler> tim4_ccmr2_input_ic3psc{0x4000081Cu, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim4::Cc3s> tim4_ccmr2_input_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccer_cc4np{0x40000820u, 0x00008000u, 15};
constexpr Field<Access::RW, tim4::Ccp> tim4_ccer_cc4p{0x40000820u, 0x00002000u, 13};
constexpr Field<Access::RW, tim4::Cce> tim4_ccer_cc4e{0x40000820u, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_ccer_cc3np{0x40000820u, 0x00000800u, 11};
constexpr Field<Access::RW, tim4::Ccp> tim4_ccer_cc3p{0x40000820u, 0x00000200u, 9};
constexpr Field<Access::RW, tim4::Cce> tim4_ccer_cc3e{0x40000820u, 0x00000100u, 8};
constexpr Field<Access::RW> tim4_ccer_cc2np{0x40000820u, 0x00000080u, 7};
constexpr Field<Access::RW, tim4::Ccp> tim4_ccer_cc2p{0x40000820u, 0x00000020u, 5};
constexpr Field<Access::RW, tim4::Cce> tim4_ccer_cc2e{0x40000820u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_ccer_cc1np{0x40000820u, 0x00000008u, 3};
constexpr Field<Access::RW, tim4::Ccp> tim4_ccer_cc1p{0x40000820u, 0x00000002u, 1};
constexpr Field<Access::RW, tim4::Cce> tim4_ccer_cc1e{0x40000820u, 0x00000001u, 0};
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

#endif // STM32_TIM4_HPP
