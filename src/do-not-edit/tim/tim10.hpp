// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef STM32_TIM10_HPP
#define STM32_TIM10_HPP

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

namespace tim10::arpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::cc1s {
    constexpr uint32_t ti1 = 1;
}
namespace tim10::ccde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::cce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ccg {
    constexpr uint32_t trigger = 1;
}
namespace tim10::ccie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ccif {
    constexpr uint32_t nomatch = 0;
    constexpr uint32_t match = 1;
}
namespace tim10::ccne {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ccof {
    constexpr uint32_t noovercapture = 0;
    constexpr uint32_t overcapture = 1;
}
namespace tim10::ccp {
    constexpr uint32_t risingedge = 0;
    constexpr uint32_t fallingedge = 1;
}
namespace tim10::ccs {
    constexpr uint32_t output = 0;
}
namespace tim10::cen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ckd {
    constexpr uint32_t div1 = 0;
    constexpr uint32_t div2 = 1;
    constexpr uint32_t div4 = 2;
}
namespace tim10::icfilter {
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
namespace tim10::icprescaler {
    constexpr uint32_t noprescaler = 0;
    constexpr uint32_t twoevents = 1;
    constexpr uint32_t fourevents = 2;
    constexpr uint32_t eightevents = 3;
}
namespace tim10::ocfe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ocm {
    constexpr uint32_t frozen = 0;
    constexpr uint32_t activeonmatch = 1;
    constexpr uint32_t inactiveonmatch = 2;
    constexpr uint32_t toggle = 3;
    constexpr uint32_t forceinactive = 4;
    constexpr uint32_t forceactive = 5;
    constexpr uint32_t pwmmode1 = 6;
    constexpr uint32_t pwmmode2 = 7;
}
namespace tim10::ocpe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::ois {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim10::oisn {
    constexpr uint32_t reset = 0;
    constexpr uint32_t set = 1;
}
namespace tim10::opm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::udis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace tim10::ug {
    constexpr uint32_t update = 1;
}
namespace tim10::uie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace tim10::uif {
    constexpr uint32_t noupdateoccurred = 0;
    constexpr uint32_t updatepending = 1;
}
namespace tim10::urs {
    constexpr uint32_t anyevent = 0;
    constexpr uint32_t counteronly = 1;
}

#endif // STM32_TIM10_HPP
