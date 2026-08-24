// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Analog-to-digital converter
#ifndef STM32_ADC3_HPP
#define STM32_ADC3_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace adc3 {
enum class Adon : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Align : uint32_t {
    right = 0,
    left = 1,
};
enum class Awd : uint32_t {
    noevent = 0,
    event = 1,
};
enum class Awden : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Awdie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Awdsgl : uint32_t {
    allchannels = 0,
    singlechannel = 1,
};
enum class Cont : uint32_t {
    single = 0,
    continuous = 1,
};
enum class Dds : uint32_t {
    single = 0,
    continuous = 1,
};
enum class Discen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dma : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Eoc : uint32_t {
    notcomplete = 0,
    complete = 1,
};
enum class Eocie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Eocs : uint32_t {
    eachsequence = 0,
    eachconversion = 1,
};
enum class Exten : uint32_t {
    disabled = 0,
    risingedge = 1,
    fallingedge = 2,
    bothedges = 3,
};
enum class Extsel : uint32_t {
    tim1cc1 = 0,
    tim1cc2 = 1,
    tim1cc3 = 2,
    tim2cc2 = 3,
    tim2cc3 = 4,
    tim2cc4 = 5,
    tim2trgo = 6,
    tim3cc1 = 7,
    tim3trgo = 8,
    tim4cc4 = 9,
    tim5cc1 = 10,
    tim5cc2 = 11,
    tim5cc3 = 12,
    tim8cc1 = 13,
    tim8trgo = 14,
    exti11 = 15,
};
enum class Jauto : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Jawden : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Jdiscen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Jeoc : uint32_t {
    notcomplete = 0,
    complete = 1,
};
enum class Jeocie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Jexten : uint32_t {
    disabled = 0,
    risingedge = 1,
    fallingedge = 2,
    bothedges = 3,
};
enum class Jextsel : uint32_t {
    tim1cc4 = 0,
    tim1trgo = 1,
    tim2cc1 = 2,
    tim2trgo = 3,
    tim3cc2 = 4,
    tim3cc4 = 5,
    tim4cc1 = 6,
    tim4cc2 = 7,
    tim4cc3 = 8,
    tim4trgo = 9,
    tim5cc4 = 10,
    tim5trgo = 11,
    tim8cc2 = 12,
    tim8cc3 = 13,
    tim8cc4 = 14,
    exti15 = 15,
};
enum class Jstrt : uint32_t {
    notstarted = 0,
    started = 1,
};
enum class Jswstart : uint32_t {
    start = 1,
};
enum class Ovr : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Ovrie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Res : uint32_t {
    twelvebit = 0,
    tenbit = 1,
    eightbit = 2,
    sixbit = 3,
};
enum class Scan : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Smp : uint32_t {
    cycles3 = 0,
    cycles15 = 1,
    cycles28 = 2,
    cycles56 = 3,
    cycles84 = 4,
    cycles112 = 5,
    cycles144 = 6,
    cycles480 = 7,
};
enum class Strt : uint32_t {
    notstarted = 0,
    started = 1,
};
enum class Swstart : uint32_t {
    start = 1,
};
} // namespace adc3

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t ADC3_BASE = 0x40012200;
struct Adc3Regs {
    volatile uint32_t sr; // status register
    volatile uint32_t cr1; // control register 1
    volatile uint32_t cr2; // control register 2
    volatile uint32_t smpr1; // sample time register 1
    volatile uint32_t smpr2; // sample time register 2
    volatile uint32_t jofr1; // injected channel data offset register x
    volatile uint32_t jofr2; // injected channel data offset register x
    volatile uint32_t jofr3; // injected channel data offset register x
    volatile uint32_t jofr4; // injected channel data offset register x
    volatile uint32_t htr; // watchdog higher threshold register
    volatile uint32_t ltr; // watchdog lower threshold register
    volatile uint32_t sqr1; // regular sequence register 1
    volatile uint32_t sqr2; // regular sequence register 2
    volatile uint32_t sqr3; // regular sequence register 3
    volatile uint32_t jsqr; // injected sequence register
    volatile uint32_t jdr1; // injected data register x
    volatile uint32_t jdr2; // injected data register x
    volatile uint32_t jdr3; // injected data register x
    volatile uint32_t jdr4; // injected data register x
    volatile uint32_t dr; // regular data register
};
static_assert(offsetof(Adc3Regs, sr) == 0);
static_assert(offsetof(Adc3Regs, cr1) == 4);
static_assert(offsetof(Adc3Regs, cr2) == 8);
static_assert(offsetof(Adc3Regs, smpr1) == 12);
static_assert(offsetof(Adc3Regs, smpr2) == 16);
static_assert(offsetof(Adc3Regs, jofr1) == 20);
static_assert(offsetof(Adc3Regs, jofr2) == 24);
static_assert(offsetof(Adc3Regs, jofr3) == 28);
static_assert(offsetof(Adc3Regs, jofr4) == 32);
static_assert(offsetof(Adc3Regs, htr) == 36);
static_assert(offsetof(Adc3Regs, ltr) == 40);
static_assert(offsetof(Adc3Regs, sqr1) == 44);
static_assert(offsetof(Adc3Regs, sqr2) == 48);
static_assert(offsetof(Adc3Regs, sqr3) == 52);
static_assert(offsetof(Adc3Regs, jsqr) == 56);
static_assert(offsetof(Adc3Regs, jdr1) == 60);
static_assert(offsetof(Adc3Regs, jdr2) == 64);
static_assert(offsetof(Adc3Regs, jdr3) == 68);
static_assert(offsetof(Adc3Regs, jdr4) == 72);
static_assert(offsetof(Adc3Regs, dr) == 76);

constexpr Field<Access::RC_W0, adc3::Ovr, false> adc3_sr_ovr{0x40012200u, 0x00000020u, 5, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RC_W0, adc3::Strt, false> adc3_sr_strt{0x40012200u, 0x00000010u, 4, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RC_W0, adc3::Jstrt, false> adc3_sr_jstrt{0x40012200u, 0x00000008u, 3, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RC_W0, adc3::Jeoc, false> adc3_sr_jeoc{0x40012200u, 0x00000004u, 2, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RC_W0, adc3::Eoc, false> adc3_sr_eoc{0x40012200u, 0x00000002u, 1, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RC_W0, adc3::Awd, false> adc3_sr_awd{0x40012200u, 0x00000001u, 0, 0x00000000u, 0x0000003Fu};
constexpr Field<Access::RW, adc3::Ovrie> adc3_cr1_ovrie{0x40012204u, 0x04000000u, 26};
constexpr Field<Access::RW, adc3::Res> adc3_cr1_res{0x40012204u, 0x03000000u, 24};
constexpr Field<Access::RW, adc3::Awden> adc3_cr1_awden{0x40012204u, 0x00800000u, 23};
constexpr Field<Access::RW, adc3::Jawden> adc3_cr1_jawden{0x40012204u, 0x00400000u, 22};
constexpr Field<Access::RW> adc3_cr1_discnum{0x40012204u, 0x0000E000u, 13};
constexpr Field<Access::RW, adc3::Jdiscen> adc3_cr1_jdiscen{0x40012204u, 0x00001000u, 12};
constexpr Field<Access::RW, adc3::Discen> adc3_cr1_discen{0x40012204u, 0x00000800u, 11};
constexpr Field<Access::RW, adc3::Jauto> adc3_cr1_jauto{0x40012204u, 0x00000400u, 10};
constexpr Field<Access::RW, adc3::Awdsgl> adc3_cr1_awdsgl{0x40012204u, 0x00000200u, 9};
constexpr Field<Access::RW, adc3::Scan> adc3_cr1_scan{0x40012204u, 0x00000100u, 8};
constexpr Field<Access::RW, adc3::Jeocie> adc3_cr1_jeocie{0x40012204u, 0x00000080u, 7};
constexpr Field<Access::RW, adc3::Awdie> adc3_cr1_awdie{0x40012204u, 0x00000040u, 6};
constexpr Field<Access::RW, adc3::Eocie> adc3_cr1_eocie{0x40012204u, 0x00000020u, 5};
constexpr Field<Access::RW> adc3_cr1_awdch{0x40012204u, 0x0000001Fu, 0};
constexpr Field<Access::RW, adc3::Swstart> adc3_cr2_swstart{0x40012208u, 0x40000000u, 30};
constexpr Field<Access::RW, adc3::Exten> adc3_cr2_exten{0x40012208u, 0x30000000u, 28};
constexpr Field<Access::RW, adc3::Extsel> adc3_cr2_extsel{0x40012208u, 0x0F000000u, 24};
constexpr Field<Access::RW, adc3::Jswstart> adc3_cr2_jswstart{0x40012208u, 0x00400000u, 22};
constexpr Field<Access::RW, adc3::Jexten> adc3_cr2_jexten{0x40012208u, 0x00300000u, 20};
constexpr Field<Access::RW, adc3::Jextsel> adc3_cr2_jextsel{0x40012208u, 0x000F0000u, 16};
constexpr Field<Access::RW, adc3::Align> adc3_cr2_align{0x40012208u, 0x00000800u, 11};
constexpr Field<Access::RW, adc3::Eocs> adc3_cr2_eocs{0x40012208u, 0x00000400u, 10};
constexpr Field<Access::RW, adc3::Dds> adc3_cr2_dds{0x40012208u, 0x00000200u, 9};
constexpr Field<Access::RW, adc3::Dma> adc3_cr2_dma{0x40012208u, 0x00000100u, 8};
constexpr Field<Access::RW, adc3::Cont> adc3_cr2_cont{0x40012208u, 0x00000002u, 1};
constexpr Field<Access::RW, adc3::Adon> adc3_cr2_adon{0x40012208u, 0x00000001u, 0};
constexpr Field<Access::RW, adc3::Smp, false> adc3_smpr1_smpx_x{0x4001220Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, adc3::Smp, false> adc3_smpr2_smpx_x{0x40012210u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_jofr1_joffset1{0x40012214u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_jofr2_joffset2{0x40012218u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_jofr3_joffset3{0x4001221Cu, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_jofr4_joffset4{0x40012220u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_htr_ht{0x40012224u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> adc3_ltr_lt{0x40012228u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_sqr1_l{0x4001222Cu, 0x00F00000u, 20};
constexpr Field<Access::RW> adc3_sqr1_sq16{0x4001222Cu, 0x000F8000u, 15};
constexpr Field<Access::RW> adc3_sqr1_sq15{0x4001222Cu, 0x00007C00u, 10};
constexpr Field<Access::RW> adc3_sqr1_sq14{0x4001222Cu, 0x000003E0u, 5};
constexpr Field<Access::RW> adc3_sqr1_sq13{0x4001222Cu, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc3_sqr2_sq12{0x40012230u, 0x3E000000u, 25};
constexpr Field<Access::RW> adc3_sqr2_sq11{0x40012230u, 0x01F00000u, 20};
constexpr Field<Access::RW> adc3_sqr2_sq10{0x40012230u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc3_sqr2_sq9{0x40012230u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc3_sqr2_sq8{0x40012230u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc3_sqr2_sq7{0x40012230u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc3_sqr3_sq6{0x40012234u, 0x3E000000u, 25};
constexpr Field<Access::RW> adc3_sqr3_sq5{0x40012234u, 0x01F00000u, 20};
constexpr Field<Access::RW> adc3_sqr3_sq4{0x40012234u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc3_sqr3_sq3{0x40012234u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc3_sqr3_sq2{0x40012234u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc3_sqr3_sq1{0x40012234u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc3_jsqr_jl{0x40012238u, 0x00300000u, 20};
constexpr Field<Access::RW> adc3_jsqr_jsq4{0x40012238u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc3_jsqr_jsq3{0x40012238u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc3_jsqr_jsq2{0x40012238u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc3_jsqr_jsq1{0x40012238u, 0x0000001Fu, 0};
constexpr Field<Access::RO> adc3_jdr1_jdata{0x4001223Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc3_jdr2_jdata{0x40012240u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc3_jdr3_jdata{0x40012244u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc3_jdr4_jdata{0x40012248u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc3_dr_data{0x4001224Cu, 0x0000FFFFu, 0};

#endif // STM32_ADC3_HPP
