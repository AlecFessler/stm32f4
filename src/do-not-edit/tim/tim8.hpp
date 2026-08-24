// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Advanced-timers
#ifndef STM32_TIM8_HPP
#define STM32_TIM8_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace tim8 {
enum class Aoe : uint32_t {
    manual = 0,
    automatic = 1,
};
enum class Arpe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class B2g : uint32_t {
    trigger = 1,
};
enum class B2if : uint32_t {
    notrigger = 0,
    trigger = 1,
};
enum class Bg : uint32_t {
    trigger = 1,
};
enum class Bie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Bif : uint32_t {
    notrigger = 0,
    trigger = 1,
};
enum class Bk2e : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Bk2p : uint32_t {
    activelow = 0,
    activehigh = 1,
};
enum class Bke : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Bkp : uint32_t {
    activelow = 0,
    activehigh = 1,
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
enum class Ccnp : uint32_t {
    activehigh = 0,
    activelow = 1,
};
enum class Ccof : uint32_t {
    noovercapture = 0,
    overcapture = 1,
};
enum class Ccp : uint32_t {
    risingedge = 0,
    fallingedge = 1,
};
enum class Ccpc : uint32_t {
    notpreloaded = 0,
    preloaded = 1,
};
enum class Ccs : uint32_t {
    output = 0,
};
enum class Ccus : uint32_t {
    sw = 0,
    sworedge = 1,
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
enum class Comde : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Comg : uint32_t {
    trigger = 1,
};
enum class Comie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Comif : uint32_t {
    nocom = 0,
    com = 1,
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
enum class Lock : uint32_t {
    off = 0,
    level1 = 1,
    level2 = 2,
    level3 = 3,
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
enum class Moe : uint32_t {
    disabledidle = 0,
    enabled = 1,
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
enum class Ossi : uint32_t {
    hiz = 0,
    idlelevel = 1,
};
enum class Ossr : uint32_t {
    hiz = 0,
    idlelevel = 1,
};
enum class Sbif : uint32_t {
    notrigger = 0,
    trigger = 1,
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
} // namespace tim8

// Tim8Regs omitted: overlapping registers
constexpr Field<Access::RW, tim8::Ckd> tim8_cr1_ckd{0x40010400u, 0x00000300u, 8};
constexpr Field<Access::RW, tim8::Arpe, true> tim8_cr1_arpe{0x40010400u, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Cms> tim8_cr1_cms{0x40010400u, 0x00000060u, 5};
constexpr Field<Access::RW, tim8::Dir, true> tim8_cr1_dir{0x40010400u, 0x00000010u, 4};
constexpr Field<Access::RW, tim8::Opm, true> tim8_cr1_opm{0x40010400u, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Urs, true> tim8_cr1_urs{0x40010400u, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Udis, true> tim8_cr1_udis{0x40010400u, 0x00000002u, 1};
constexpr Field<Access::RW, tim8::Cen, true> tim8_cr1_cen{0x40010400u, 0x00000001u, 0};
constexpr Field<Access::RW, tim8::Oisn, true> tim8_cr2_ois3n{0x40010404u, 0x00002000u, 13};
constexpr Field<Access::RW, tim8::Oisn, true> tim8_cr2_ois2n{0x40010404u, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Oisn, true> tim8_cr2_ois1n{0x40010404u, 0x00000200u, 9};
constexpr Field<Access::RW, tim8::Ti1s, true> tim8_cr2_ti1s{0x40010404u, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Mms> tim8_cr2_mms{0x40010404u, 0x00000070u, 4};
constexpr Field<Access::RW, tim8::Ccds, true> tim8_cr2_ccds{0x40010404u, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Ccus, true> tim8_cr2_ccus{0x40010404u, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Ccpc, true> tim8_cr2_ccpc{0x40010404u, 0x00000001u, 0};
constexpr Field<Access::RW, tim8::Ois, true> tim8_cr2_ois4{0x40010404u, 0x00004000u, 14};
constexpr Field<Access::RW, tim8::Ois, true> tim8_cr2_ois3{0x40010404u, 0x00001000u, 12};
constexpr Field<Access::RW, tim8::Ois, true> tim8_cr2_ois2{0x40010404u, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Ois, true> tim8_cr2_ois1{0x40010404u, 0x00000100u, 8};
constexpr Field<Access::RW, tim8::Etp, true> tim8_smcr_etp{0x40010408u, 0x00008000u, 15};
constexpr Field<Access::RW, tim8::Ece, true> tim8_smcr_ece{0x40010408u, 0x00004000u, 14};
constexpr Field<Access::RW, tim8::Etps> tim8_smcr_etps{0x40010408u, 0x00003000u, 12};
constexpr Field<Access::RW, tim8::Etf> tim8_smcr_etf{0x40010408u, 0x00000F00u, 8};
constexpr Field<Access::RW, tim8::Msm, true> tim8_smcr_msm{0x40010408u, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Ts> tim8_smcr_ts{0x40010408u, 0x00000070u, 4};
constexpr Field<Access::RW, tim8::Sms> tim8_smcr_sms{0x40010408u, 0x00000007u, 0};
constexpr Field<Access::RW, tim8::Tde, true> tim8_dier_tde{0x4001040Cu, 0x00004000u, 14};
constexpr Field<Access::RW, tim8::Comde, true> tim8_dier_comde{0x4001040Cu, 0x00002000u, 13};
constexpr Field<Access::RW, tim8::Ccde, true> tim8_dier_cc4de{0x4001040Cu, 0x00001000u, 12};
constexpr Field<Access::RW, tim8::Ccde, true> tim8_dier_cc3de{0x4001040Cu, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Ccde, true> tim8_dier_cc2de{0x4001040Cu, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Ccde, true> tim8_dier_cc1de{0x4001040Cu, 0x00000200u, 9};
constexpr Field<Access::RW, tim8::Ude, true> tim8_dier_ude{0x4001040Cu, 0x00000100u, 8};
constexpr Field<Access::RW, tim8::Tie, true> tim8_dier_tie{0x4001040Cu, 0x00000040u, 6};
constexpr Field<Access::RW, tim8::Ccie, true> tim8_dier_cc4ie{0x4001040Cu, 0x00000010u, 4};
constexpr Field<Access::RW, tim8::Ccie, true> tim8_dier_cc3ie{0x4001040Cu, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Ccie, true> tim8_dier_cc2ie{0x4001040Cu, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Ccie, true> tim8_dier_cc1ie{0x4001040Cu, 0x00000002u, 1};
constexpr Field<Access::RW, tim8::Uie, true> tim8_dier_uie{0x4001040Cu, 0x00000001u, 0};
constexpr Field<Access::RW, tim8::Bie, true> tim8_dier_bie{0x4001040Cu, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Comie, true> tim8_dier_comie{0x4001040Cu, 0x00000020u, 5};
constexpr Field<Access::RC_W0, tim8::Ccof, false, false> tim8_sr_cc4of{0x40010410u, 0x00001000u, 12, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccof, false, false> tim8_sr_cc3of{0x40010410u, 0x00000800u, 11, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccof, false, false> tim8_sr_cc2of{0x40010410u, 0x00000400u, 10, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccof, false, false> tim8_sr_cc1of{0x40010410u, 0x00000200u, 9, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Bif, false, false> tim8_sr_bif{0x40010410u, 0x00000080u, 7, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Tif, false, false> tim8_sr_tif{0x40010410u, 0x00000040u, 6, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Comif, false, false> tim8_sr_comif{0x40010410u, 0x00000020u, 5, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccif, false, false> tim8_sr_cc4if{0x40010410u, 0x00000010u, 4, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccif, false, false> tim8_sr_cc3if{0x40010410u, 0x00000008u, 3, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccif, false, false> tim8_sr_cc2if{0x40010410u, 0x00000004u, 2, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Ccif, false, false> tim8_sr_cc1if{0x40010410u, 0x00000002u, 1, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::RC_W0, tim8::Uif, false, false> tim8_sr_uif{0x40010410u, 0x00000001u, 0, 0x00000000u, 0x00001EFFu};
constexpr Field<Access::WO, tim8::Bg> tim8_egr_bg{0x40010414u, 0x00000080u, 7};
constexpr Field<Access::WO, tim8::Tg> tim8_egr_tg{0x40010414u, 0x00000040u, 6};
constexpr Field<Access::WO, tim8::Comg> tim8_egr_comg{0x40010414u, 0x00000020u, 5};
constexpr Field<Access::WO, tim8::Ccg> tim8_egr_cc4g{0x40010414u, 0x00000010u, 4};
constexpr Field<Access::WO, tim8::Ccg> tim8_egr_cc3g{0x40010414u, 0x00000008u, 3};
constexpr Field<Access::WO, tim8::Ccg> tim8_egr_cc2g{0x40010414u, 0x00000004u, 2};
constexpr Field<Access::WO, tim8::Ccg> tim8_egr_cc1g{0x40010414u, 0x00000002u, 1};
constexpr Field<Access::WO, tim8::Ug> tim8_egr_ug{0x40010414u, 0x00000001u, 0};
constexpr Field<Access::RW, tim8::Occe, true> tim8_ccmr1_output_oc2ce{0x40010418u, 0x00008000u, 15};
constexpr Field<Access::RW, tim8::Ocm> tim8_ccmr1_output_oc2m{0x40010418u, 0x00007000u, 12};
constexpr Field<Access::RW, tim8::Ocpe, true> tim8_ccmr1_output_oc2pe{0x40010418u, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Ocfe, true> tim8_ccmr1_output_oc2fe{0x40010418u, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Ccs> tim8_ccmr1_output_cc2s{0x40010418u, 0x00000300u, 8};
constexpr Field<Access::RW, tim8::Occe, true> tim8_ccmr1_output_oc1ce{0x40010418u, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Ocm> tim8_ccmr1_output_oc1m{0x40010418u, 0x00000070u, 4};
constexpr Field<Access::RW, tim8::Ocpe, true> tim8_ccmr1_output_oc1pe{0x40010418u, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Ocfe, true> tim8_ccmr1_output_oc1fe{0x40010418u, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Ccs> tim8_ccmr1_output_cc1s{0x40010418u, 0x00000003u, 0};
constexpr Field<Access::RW, tim8::Icfilter> tim8_ccmr1_input_ic2f{0x40010418u, 0x0000F000u, 12};
constexpr Field<Access::RW> tim8_ccmr1_input_ic2pcs{0x40010418u, 0x00000C00u, 10};
constexpr Field<Access::RW, tim8::Cc2s> tim8_ccmr1_input_cc2s{0x40010418u, 0x00000300u, 8};
constexpr Field<Access::RW, tim8::Icfilter> tim8_ccmr1_input_ic1f{0x40010418u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim8_ccmr1_input_icpcs{0x40010418u, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim8::Cc1s> tim8_ccmr1_input_cc1s{0x40010418u, 0x00000003u, 0};
constexpr Field<Access::RW, tim8::Occe, true> tim8_ccmr2_output_oc4ce{0x4001041Cu, 0x00008000u, 15};
constexpr Field<Access::RW, tim8::Ocm> tim8_ccmr2_output_oc4m{0x4001041Cu, 0x00007000u, 12};
constexpr Field<Access::RW, tim8::Ocpe, true> tim8_ccmr2_output_oc4pe{0x4001041Cu, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Ocfe, true> tim8_ccmr2_output_oc4fe{0x4001041Cu, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Ccs> tim8_ccmr2_output_cc4s{0x4001041Cu, 0x00000300u, 8};
constexpr Field<Access::RW, tim8::Occe, true> tim8_ccmr2_output_oc3ce{0x4001041Cu, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Ocm> tim8_ccmr2_output_oc3m{0x4001041Cu, 0x00000070u, 4};
constexpr Field<Access::RW, tim8::Ocpe, true> tim8_ccmr2_output_oc3pe{0x4001041Cu, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Ocfe, true> tim8_ccmr2_output_oc3fe{0x4001041Cu, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Ccs> tim8_ccmr2_output_cc3s{0x4001041Cu, 0x00000003u, 0};
constexpr Field<Access::RW, tim8::Icfilter> tim8_ccmr2_input_ic4f{0x4001041Cu, 0x0000F000u, 12};
constexpr Field<Access::RW, tim8::Icprescaler> tim8_ccmr2_input_ic4psc{0x4001041Cu, 0x00000C00u, 10};
constexpr Field<Access::RW, tim8::Cc4s> tim8_ccmr2_input_cc4s{0x4001041Cu, 0x00000300u, 8};
constexpr Field<Access::RW, tim8::Icfilter> tim8_ccmr2_input_ic3f{0x4001041Cu, 0x000000F0u, 4};
constexpr Field<Access::RW, tim8::Icprescaler> tim8_ccmr2_input_ic3psc{0x4001041Cu, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim8::Cc3s> tim8_ccmr2_input_cc3s{0x4001041Cu, 0x00000003u, 0};
constexpr Field<Access::RW, tim8::Ccp, true> tim8_ccer_cc4p{0x40010420u, 0x00002000u, 13};
constexpr Field<Access::RW, tim8::Cce, true> tim8_ccer_cc4e{0x40010420u, 0x00001000u, 12};
constexpr Field<Access::RW, tim8::Ccnp, true> tim8_ccer_cc3np{0x40010420u, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Ccne, true> tim8_ccer_cc3ne{0x40010420u, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Ccp, true> tim8_ccer_cc3p{0x40010420u, 0x00000200u, 9};
constexpr Field<Access::RW, tim8::Cce, true> tim8_ccer_cc3e{0x40010420u, 0x00000100u, 8};
constexpr Field<Access::RW, tim8::Ccnp, true> tim8_ccer_cc2np{0x40010420u, 0x00000080u, 7};
constexpr Field<Access::RW, tim8::Ccne, true> tim8_ccer_cc2ne{0x40010420u, 0x00000040u, 6};
constexpr Field<Access::RW, tim8::Ccp, true> tim8_ccer_cc2p{0x40010420u, 0x00000020u, 5};
constexpr Field<Access::RW, tim8::Cce, true> tim8_ccer_cc2e{0x40010420u, 0x00000010u, 4};
constexpr Field<Access::RW, tim8::Ccnp, true> tim8_ccer_cc1np{0x40010420u, 0x00000008u, 3};
constexpr Field<Access::RW, tim8::Ccne, true> tim8_ccer_cc1ne{0x40010420u, 0x00000004u, 2};
constexpr Field<Access::RW, tim8::Ccp, true> tim8_ccer_cc1p{0x40010420u, 0x00000002u, 1};
constexpr Field<Access::RW, tim8::Cce, true> tim8_ccer_cc1e{0x40010420u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_cnt_cnt{0x40010424u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_psc_psc{0x40010428u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_arr_arr{0x4001042Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_rcr_rep{0x40010430u, 0x000000FFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_ccr1_ccr1{0x40010434u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_ccr2_ccr2{0x40010438u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_ccr3_ccr3{0x4001043Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_ccr4_ccr4{0x40010440u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, tim8::Moe, true> tim8_bdtr_moe{0x40010444u, 0x00008000u, 15};
constexpr Field<Access::RW, tim8::Aoe, true> tim8_bdtr_aoe{0x40010444u, 0x00004000u, 14};
constexpr Field<Access::RW, tim8::Bkp, true> tim8_bdtr_bkp{0x40010444u, 0x00002000u, 13};
constexpr Field<Access::RW, tim8::Bke, true> tim8_bdtr_bke{0x40010444u, 0x00001000u, 12};
constexpr Field<Access::RW, tim8::Ossr, true> tim8_bdtr_ossr{0x40010444u, 0x00000800u, 11};
constexpr Field<Access::RW, tim8::Ossi, true> tim8_bdtr_ossi{0x40010444u, 0x00000400u, 10};
constexpr Field<Access::RW, tim8::Lock> tim8_bdtr_lock{0x40010444u, 0x00000300u, 8};
constexpr Field<Access::RW> tim8_bdtr_dtg{0x40010444u, 0x000000FFu, 0};
constexpr Field<Access::RW> tim8_dcr_dbl{0x40010448u, 0x00001F00u, 8};
constexpr Field<Access::RW> tim8_dcr_dba{0x40010448u, 0x0000001Fu, 0};
constexpr Field<Access::RW, uint32_t, false, false> tim8_dmar_dmab{0x4001044Cu, 0x0000FFFFu, 0};

#endif // STM32_TIM8_HPP
