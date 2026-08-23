// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef STM32_TIM12_HPP
#define STM32_TIM12_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim12Regs omitted: overlapping registers
constexpr Field<Access::RW> tim12_cr1_ckd{0x40001800u, 0x00000300u, 8};
constexpr Field<Access::RW> tim12_cr1_arpe{0x40001800u, 0x00000080u, 7};
constexpr Field<Access::RW> tim12_cr1_opm{0x40001800u, 0x00000008u, 3};
constexpr Field<Access::RW> tim12_cr1_urs{0x40001800u, 0x00000004u, 2};
constexpr Field<Access::RW> tim12_cr1_udis{0x40001800u, 0x00000002u, 1};
constexpr Field<Access::RW> tim12_cr1_cen{0x40001800u, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_cr2_mms{0x40001804u, 0x00000070u, 4};
constexpr Field<Access::RW> tim12_smcr_msm{0x40001808u, 0x00000080u, 7};
constexpr Field<Access::RW> tim12_smcr_ts{0x40001808u, 0x00000070u, 4};
constexpr Field<Access::RW> tim12_smcr_sms{0x40001808u, 0x00000007u, 0};
constexpr Field<Access::RW> tim12_dier_tie{0x4000180Cu, 0x00000040u, 6};
constexpr Field<Access::RW> tim12_dier_cc2ie{0x4000180Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim12_dier_cc1ie{0x4000180Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim12_dier_uie{0x4000180Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_sr_cc2of{0x40001810u, 0x00000400u, 10};
constexpr Field<Access::RW> tim12_sr_cc1of{0x40001810u, 0x00000200u, 9};
constexpr Field<Access::RW> tim12_sr_tif{0x40001810u, 0x00000040u, 6};
constexpr Field<Access::RW> tim12_sr_cc2if{0x40001810u, 0x00000004u, 2};
constexpr Field<Access::RW> tim12_sr_cc1if{0x40001810u, 0x00000002u, 1};
constexpr Field<Access::RW> tim12_sr_uif{0x40001810u, 0x00000001u, 0};
constexpr Field<Access::WO> tim12_egr_tg{0x40001814u, 0x00000040u, 6};
constexpr Field<Access::WO> tim12_egr_cc2g{0x40001814u, 0x00000004u, 2};
constexpr Field<Access::WO> tim12_egr_cc1g{0x40001814u, 0x00000002u, 1};
constexpr Field<Access::WO> tim12_egr_ug{0x40001814u, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_ccmr1_output_oc2m{0x40001818u, 0x00007000u, 12};
constexpr Field<Access::RW> tim12_ccmr1_output_oc2pe{0x40001818u, 0x00000800u, 11};
constexpr Field<Access::RW> tim12_ccmr1_output_oc2fe{0x40001818u, 0x00000400u, 10};
constexpr Field<Access::RW> tim12_ccmr1_output_cc2s{0x40001818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim12_ccmr1_output_oc1m{0x40001818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim12_ccmr1_output_oc1pe{0x40001818u, 0x00000008u, 3};
constexpr Field<Access::RW> tim12_ccmr1_output_oc1fe{0x40001818u, 0x00000004u, 2};
constexpr Field<Access::RW> tim12_ccmr1_output_cc1s{0x40001818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim12_ccmr1_input_ic2f{0x40001818u, 0x00007000u, 12};
constexpr Field<Access::RW> tim12_ccmr1_input_ic2pcs{0x40001818u, 0x00000C00u, 10};
constexpr Field<Access::RW> tim12_ccmr1_input_cc2s{0x40001818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim12_ccmr1_input_ic1f{0x40001818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim12_ccmr1_input_icpcs{0x40001818u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim12_ccmr1_input_cc1s{0x40001818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim12_ccer_cc2np{0x40001820u, 0x00000080u, 7};
constexpr Field<Access::RW> tim12_ccer_cc2p{0x40001820u, 0x00000020u, 5};
constexpr Field<Access::RW> tim12_ccer_cc2e{0x40001820u, 0x00000010u, 4};
constexpr Field<Access::RW> tim12_ccer_cc1np{0x40001820u, 0x00000008u, 3};
constexpr Field<Access::RW> tim12_ccer_cc1p{0x40001820u, 0x00000002u, 1};
constexpr Field<Access::RW> tim12_ccer_cc1e{0x40001820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim12_cnt_cnt{0x40001824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_psc_psc{0x40001828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_arr_arr{0x4000182Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_ccr1_ccr1{0x40001834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim12_ccr2_ccr2{0x40001838u, 0x0000FFFFu, 0};

namespace tim12::arpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::cc1s {
    constexpr uint32_t ti1 = 1;
    constexpr uint32_t ti2 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim12::cc2s {
    constexpr uint32_t ti2 = 1;
    constexpr uint32_t ti1 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim12::cc3s {
    constexpr uint32_t ti3 = 1;
    constexpr uint32_t ti4 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim12::cc4s {
    constexpr uint32_t ti4 = 1;
    constexpr uint32_t ti3 = 2;
    constexpr uint32_t trc = 3;
}
namespace tim12::ccde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::cce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ccg {
    constexpr uint32_t trigger = 1;
}
namespace tim12::ccie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ccif {
    constexpr uint32_t nomatch = 0;
    constexpr uint32_t match = 1;
}
namespace tim12::ccne {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ccof {
    constexpr uint32_t noovercapture = 0;
    constexpr uint32_t overcapture = 1;
}
namespace tim12::ccp {
    constexpr uint32_t risingedge = 0;
    constexpr uint32_t fallingedge = 1;
}
namespace tim12::ccs {
    constexpr uint32_t output = 0;
}
namespace tim12::cen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ckd {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
}
namespace tim12::icfilter {
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
namespace tim12::icprescaler {
    constexpr uint32_t noprescaler = 0;
    constexpr uint32_t twoevents = 1;
    constexpr uint32_t fourevents = 2;
    constexpr uint32_t eightevents = 3;
}
namespace tim12::msm {
    constexpr uint32_t nosync = 0;
    constexpr uint32_t sync = 1;
}
namespace tim12::ocfe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ocm {
    constexpr uint32_t frozen = 0;
    constexpr uint32_t activeonmatch = 1;
    constexpr uint32_t inactiveonmatch = 2;
    constexpr uint32_t toggle = 3;
    constexpr uint32_t forceinactive = 4;
    constexpr uint32_t forceactive = 5;
    constexpr uint32_t pwmmode1 = 6;
    constexpr uint32_t pwmmode2 = 7;
}
namespace tim12::ocpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::ois {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim12::oisn {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim12::opm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::sms {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t reset_mode = 4;
    constexpr uint32_t gated_mode = 5;
    constexpr uint32_t trigger_mode = 6;
    constexpr uint32_t ext_clock_mode = 7;
}
namespace tim12::tg {
    constexpr uint32_t trigger = 1;
}
namespace tim12::tie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::tif {
    constexpr uint32_t notrigger = 0;
    constexpr uint32_t trigger = 1;
}
namespace tim12::udis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace tim12::ug {
    constexpr uint32_t update = 1;
}
namespace tim12::uie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim12::uif {
    constexpr uint32_t noupdateoccurred = 0;
    constexpr uint32_t updatepending = 1;
}
namespace tim12::urs {
    constexpr uint32_t anyevent = 0;
    constexpr uint32_t counteronly = 1;
}

#endif // STM32_TIM12_HPP
