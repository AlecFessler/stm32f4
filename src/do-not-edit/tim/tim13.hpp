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

namespace tim13::arpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::cc1s {
    constexpr uint32_t ti1 = 1;
}
namespace tim13::ccde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::cce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ccg {
    constexpr uint32_t trigger = 1;
}
namespace tim13::ccie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ccif {
    constexpr uint32_t nomatch = 0;
    constexpr uint32_t match = 1;
}
namespace tim13::ccne {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ccof {
    constexpr uint32_t noovercapture = 0;
    constexpr uint32_t overcapture = 1;
}
namespace tim13::ccp {
    constexpr uint32_t risingedge = 0;
    constexpr uint32_t fallingedge = 1;
}
namespace tim13::ccs {
    constexpr uint32_t output = 0;
}
namespace tim13::cen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ckd {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
}
namespace tim13::icfilter {
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
namespace tim13::icprescaler {
    constexpr uint32_t noprescaler = 0;
    constexpr uint32_t twoevents = 1;
    constexpr uint32_t fourevents = 2;
    constexpr uint32_t eightevents = 3;
}
namespace tim13::ocfe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ocm {
    constexpr uint32_t frozen = 0;
    constexpr uint32_t activeonmatch = 1;
    constexpr uint32_t inactiveonmatch = 2;
    constexpr uint32_t toggle = 3;
    constexpr uint32_t forceinactive = 4;
    constexpr uint32_t forceactive = 5;
    constexpr uint32_t pwmmode1 = 6;
    constexpr uint32_t pwmmode2 = 7;
}
namespace tim13::ocpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::ois {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim13::oisn {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim13::opm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::udis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace tim13::ug {
    constexpr uint32_t update = 1;
}
namespace tim13::uie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim13::uif {
    constexpr uint32_t noupdateoccurred = 0;
    constexpr uint32_t updatepending = 1;
}
namespace tim13::urs {
    constexpr uint32_t anyevent = 0;
    constexpr uint32_t counteronly = 1;
}

#endif // STM32_TIM13_HPP
