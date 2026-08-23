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

namespace tim14::arpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::cc1s {
    constexpr uint32_t ti1 = 1;
}
namespace tim14::ccde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::cce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ccg {
    constexpr uint32_t trigger = 1;
}
namespace tim14::ccie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ccif {
    constexpr uint32_t nomatch = 0;
    constexpr uint32_t match = 1;
}
namespace tim14::ccne {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ccof {
    constexpr uint32_t noovercapture = 0;
    constexpr uint32_t overcapture = 1;
}
namespace tim14::ccp {
    constexpr uint32_t risingedge = 0;
    constexpr uint32_t fallingedge = 1;
}
namespace tim14::ccs {
    constexpr uint32_t output = 0;
}
namespace tim14::cen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ckd {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
}
namespace tim14::icfilter {
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
namespace tim14::icprescaler {
    constexpr uint32_t noprescaler = 0;
    constexpr uint32_t twoevents = 1;
    constexpr uint32_t fourevents = 2;
    constexpr uint32_t eightevents = 3;
}
namespace tim14::ocfe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ocm {
    constexpr uint32_t frozen = 0;
    constexpr uint32_t activeonmatch = 1;
    constexpr uint32_t inactiveonmatch = 2;
    constexpr uint32_t toggle = 3;
    constexpr uint32_t forceinactive = 4;
    constexpr uint32_t forceactive = 5;
    constexpr uint32_t pwmmode1 = 6;
    constexpr uint32_t pwmmode2 = 7;
}
namespace tim14::ocpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::ois {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim14::oisn {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim14::opm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::udis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace tim14::ug {
    constexpr uint32_t update = 1;
}
namespace tim14::uie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim14::uif {
    constexpr uint32_t noupdateoccurred = 0;
    constexpr uint32_t updatepending = 1;
}
namespace tim14::urs {
    constexpr uint32_t anyevent = 0;
    constexpr uint32_t counteronly = 1;
}

#endif // STM32_TIM14_HPP
