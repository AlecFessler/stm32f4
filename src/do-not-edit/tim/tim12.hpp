// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef STM32_TIM12_HPP
#define STM32_TIM12_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace tim12 {
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
enum class Msm : uint32_t {
    nosync = 0,
    sync = 1,
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
    reset_mode = 4,
    gated_mode = 5,
    trigger_mode = 6,
    ext_clock_mode = 7,
};
enum class Tg : uint32_t {
    trigger = 1,
};
enum class Tie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tif : uint32_t {
    notrigger = 0,
    trigger = 1,
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
} // namespace tim12

// Tim12Regs omitted: overlapping registers
constexpr Field<Access::RW, tim12::Ckd> tim12_cr1_ckd{0x40001800u, 0x00000300u, 8};
constexpr Field<Access::RW, tim12::Arpe> tim12_cr1_arpe{0x40001800u, 0x00000080u, 7};
constexpr Field<Access::RW, tim12::Opm> tim12_cr1_opm{0x40001800u, 0x00000008u, 3};
constexpr Field<Access::RW, tim12::Urs> tim12_cr1_urs{0x40001800u, 0x00000004u, 2};
constexpr Field<Access::RW, tim12::Udis> tim12_cr1_udis{0x40001800u, 0x00000002u, 1};
constexpr Field<Access::RW, tim12::Cen> tim12_cr1_cen{0x40001800u, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_cr2_mms{0x40001804u, 0x00000070u, 4};
constexpr Field<Access::RW, tim12::Msm> tim12_smcr_msm{0x40001808u, 0x00000080u, 7};
constexpr Field<Access::RW> tim12_smcr_ts{0x40001808u, 0x00000070u, 4};
constexpr Field<Access::RW, tim12::Sms> tim12_smcr_sms{0x40001808u, 0x00000007u, 0};
constexpr Field<Access::RW, tim12::Tie> tim12_dier_tie{0x4000180Cu, 0x00000040u, 6};
constexpr Field<Access::RW, tim12::Ccie> tim12_dier_cc2ie{0x4000180Cu, 0x00000004u, 2};
constexpr Field<Access::RW, tim12::Ccie> tim12_dier_cc1ie{0x4000180Cu, 0x00000002u, 1};
constexpr Field<Access::RW, tim12::Uie> tim12_dier_uie{0x4000180Cu, 0x00000001u, 0};
constexpr Field<Access::RW, tim12::Ccof> tim12_sr_cc2of{0x40001810u, 0x00000400u, 10};
constexpr Field<Access::RW, tim12::Ccof> tim12_sr_cc1of{0x40001810u, 0x00000200u, 9};
constexpr Field<Access::RW, tim12::Tif> tim12_sr_tif{0x40001810u, 0x00000040u, 6};
constexpr Field<Access::RW, tim12::Ccif> tim12_sr_cc2if{0x40001810u, 0x00000004u, 2};
constexpr Field<Access::RW, tim12::Ccif> tim12_sr_cc1if{0x40001810u, 0x00000002u, 1};
constexpr Field<Access::RW, tim12::Uif> tim12_sr_uif{0x40001810u, 0x00000001u, 0};
constexpr Field<Access::WO, tim12::Tg> tim12_egr_tg{0x40001814u, 0x00000040u, 6};
constexpr Field<Access::WO, tim12::Ccg> tim12_egr_cc2g{0x40001814u, 0x00000004u, 2};
constexpr Field<Access::WO, tim12::Ccg> tim12_egr_cc1g{0x40001814u, 0x00000002u, 1};
constexpr Field<Access::WO, tim12::Ug> tim12_egr_ug{0x40001814u, 0x00000001u, 0};
constexpr Field<Access::RW, tim12::Ocm> tim12_ccmr1_output_oc2m{0x40001818u, 0x00007000u, 12};
constexpr Field<Access::RW, tim12::Ocpe> tim12_ccmr1_output_oc2pe{0x40001818u, 0x00000800u, 11};
constexpr Field<Access::RW, tim12::Ocfe> tim12_ccmr1_output_oc2fe{0x40001818u, 0x00000400u, 10};
constexpr Field<Access::RW, tim12::Ccs> tim12_ccmr1_output_cc2s{0x40001818u, 0x00000300u, 8};
constexpr Field<Access::RW, tim12::Ocm> tim12_ccmr1_output_oc1m{0x40001818u, 0x00000070u, 4};
constexpr Field<Access::RW, tim12::Ocpe> tim12_ccmr1_output_oc1pe{0x40001818u, 0x00000008u, 3};
constexpr Field<Access::RW, tim12::Ocfe> tim12_ccmr1_output_oc1fe{0x40001818u, 0x00000004u, 2};
constexpr Field<Access::RW, tim12::Ccs> tim12_ccmr1_output_cc1s{0x40001818u, 0x00000003u, 0};
constexpr Field<Access::RW, tim12::Icfilter> tim12_ccmr1_input_ic2f{0x40001818u, 0x00007000u, 12};
constexpr Field<Access::RW> tim12_ccmr1_input_ic2pcs{0x40001818u, 0x00000C00u, 10};
constexpr Field<Access::RW, tim12::Cc2s> tim12_ccmr1_input_cc2s{0x40001818u, 0x00000300u, 8};
constexpr Field<Access::RW, tim12::Icfilter> tim12_ccmr1_input_ic1f{0x40001818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim12_ccmr1_input_icpcs{0x40001818u, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim12::Cc1s> tim12_ccmr1_input_cc1s{0x40001818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim12_ccer_cc2np{0x40001820u, 0x00000080u, 7};
constexpr Field<Access::RW, tim12::Ccp> tim12_ccer_cc2p{0x40001820u, 0x00000020u, 5};
constexpr Field<Access::RW, tim12::Cce> tim12_ccer_cc2e{0x40001820u, 0x00000010u, 4};
constexpr Field<Access::RW> tim12_ccer_cc1np{0x40001820u, 0x00000008u, 3};
constexpr Field<Access::RW, tim12::Ccp> tim12_ccer_cc1p{0x40001820u, 0x00000002u, 1};
constexpr Field<Access::RW, tim12::Cce> tim12_ccer_cc1e{0x40001820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_cnt_cnt{0x40001824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_psc_psc{0x40001828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_arr_arr{0x4000182Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_ccr1_ccr1{0x40001834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_ccr2_ccr2{0x40001838u, 0x0000FFFFu, 0};

#endif // STM32_TIM12_HPP
