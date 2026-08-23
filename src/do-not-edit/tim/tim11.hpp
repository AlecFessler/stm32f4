// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose-timers
#ifndef STM32_TIM11_HPP
#define STM32_TIM11_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace tim11 {
enum class Arpe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cc1s : uint32_t {
    ti1 = 1,
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
} // namespace tim11

// Tim11Regs omitted: overlapping registers
constexpr Field<Access::RW, tim11::Ckd> tim11_cr1_ckd{0x40014800u, 0x00000300u, 8};
constexpr Field<Access::RW, tim11::Arpe> tim11_cr1_arpe{0x40014800u, 0x00000080u, 7};
constexpr Field<Access::RW, tim11::Urs> tim11_cr1_urs{0x40014800u, 0x00000004u, 2};
constexpr Field<Access::RW, tim11::Udis> tim11_cr1_udis{0x40014800u, 0x00000002u, 1};
constexpr Field<Access::RW, tim11::Cen> tim11_cr1_cen{0x40014800u, 0x00000001u, 0};
constexpr Field<Access::RW, tim11::Ccie> tim11_dier_cc1ie{0x4001480Cu, 0x00000002u, 1};
constexpr Field<Access::RW, tim11::Uie> tim11_dier_uie{0x4001480Cu, 0x00000001u, 0};
constexpr Field<Access::RC_W0, tim11::Ccof, 0x00000000u, 0x00000203u, false> tim11_sr_cc1of{0x40014810u, 0x00000200u, 9};
constexpr Field<Access::RC_W0, tim11::Ccif, 0x00000000u, 0x00000203u, false> tim11_sr_cc1if{0x40014810u, 0x00000002u, 1};
constexpr Field<Access::RC_W0, tim11::Uif, 0x00000000u, 0x00000203u, false> tim11_sr_uif{0x40014810u, 0x00000001u, 0};
constexpr Field<Access::WO, tim11::Ccg> tim11_egr_cc1g{0x40014814u, 0x00000002u, 1};
constexpr Field<Access::WO, tim11::Ug> tim11_egr_ug{0x40014814u, 0x00000001u, 0};
constexpr Field<Access::RW, tim11::Ocm> tim11_ccmr1_output_oc1m{0x40014818u, 0x00000070u, 4};
constexpr Field<Access::RW, tim11::Ocpe> tim11_ccmr1_output_oc1pe{0x40014818u, 0x00000008u, 3};
constexpr Field<Access::RW, tim11::Ocfe> tim11_ccmr1_output_oc1fe{0x40014818u, 0x00000004u, 2};
constexpr Field<Access::RW, tim11::Ccs> tim11_ccmr1_output_cc1s{0x40014818u, 0x00000003u, 0};
constexpr Field<Access::RW, tim11::Icfilter> tim11_ccmr1_input_ic1f{0x40014818u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim11_ccmr1_input_icpcs{0x40014818u, 0x0000000Cu, 2};
constexpr Field<Access::RW, tim11::Cc1s> tim11_ccmr1_input_cc1s{0x40014818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim11_ccer_cc1np{0x40014820u, 0x00000008u, 3};
constexpr Field<Access::RW, tim11::Ccp> tim11_ccer_cc1p{0x40014820u, 0x00000002u, 1};
constexpr Field<Access::RW, tim11::Cce> tim11_ccer_cc1e{0x40014820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim11_cnt_cnt{0x40014824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_psc_psc{0x40014828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_arr_arr{0x4001482Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_ccr1_ccr1{0x40014834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim11_or_rmp{0x40014850u, 0x00000003u, 0};

#endif // STM32_TIM11_HPP
