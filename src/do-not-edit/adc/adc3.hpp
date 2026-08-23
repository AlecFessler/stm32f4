// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Analog-to-digital converter
#ifndef STM32_ADC3_HPP
#define STM32_ADC3_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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

constexpr Field<Access::RW> adc3_sr_ovr{0x40012200u, 0x00000020u, 5};
constexpr Field<Access::RW> adc3_sr_strt{0x40012200u, 0x00000010u, 4};
constexpr Field<Access::RW> adc3_sr_jstrt{0x40012200u, 0x00000008u, 3};
constexpr Field<Access::RW> adc3_sr_jeoc{0x40012200u, 0x00000004u, 2};
constexpr Field<Access::RW> adc3_sr_eoc{0x40012200u, 0x00000002u, 1};
constexpr Field<Access::RW> adc3_sr_awd{0x40012200u, 0x00000001u, 0};
constexpr Field<Access::RW> adc3_cr1_ovrie{0x40012204u, 0x04000000u, 26};
constexpr Field<Access::RW> adc3_cr1_res{0x40012204u, 0x03000000u, 24};
constexpr Field<Access::RW> adc3_cr1_awden{0x40012204u, 0x00800000u, 23};
constexpr Field<Access::RW> adc3_cr1_jawden{0x40012204u, 0x00400000u, 22};
constexpr Field<Access::RW> adc3_cr1_discnum{0x40012204u, 0x0000E000u, 13};
constexpr Field<Access::RW> adc3_cr1_jdiscen{0x40012204u, 0x00001000u, 12};
constexpr Field<Access::RW> adc3_cr1_discen{0x40012204u, 0x00000800u, 11};
constexpr Field<Access::RW> adc3_cr1_jauto{0x40012204u, 0x00000400u, 10};
constexpr Field<Access::RW> adc3_cr1_awdsgl{0x40012204u, 0x00000200u, 9};
constexpr Field<Access::RW> adc3_cr1_scan{0x40012204u, 0x00000100u, 8};
constexpr Field<Access::RW> adc3_cr1_jeocie{0x40012204u, 0x00000080u, 7};
constexpr Field<Access::RW> adc3_cr1_awdie{0x40012204u, 0x00000040u, 6};
constexpr Field<Access::RW> adc3_cr1_eocie{0x40012204u, 0x00000020u, 5};
constexpr Field<Access::RW> adc3_cr1_awdch{0x40012204u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc3_cr2_swstart{0x40012208u, 0x40000000u, 30};
constexpr Field<Access::RW> adc3_cr2_exten{0x40012208u, 0x30000000u, 28};
constexpr Field<Access::RW> adc3_cr2_extsel{0x40012208u, 0x0F000000u, 24};
constexpr Field<Access::RW> adc3_cr2_jswstart{0x40012208u, 0x00400000u, 22};
constexpr Field<Access::RW> adc3_cr2_jexten{0x40012208u, 0x00300000u, 20};
constexpr Field<Access::RW> adc3_cr2_jextsel{0x40012208u, 0x000F0000u, 16};
constexpr Field<Access::RW> adc3_cr2_align{0x40012208u, 0x00000800u, 11};
constexpr Field<Access::RW> adc3_cr2_eocs{0x40012208u, 0x00000400u, 10};
constexpr Field<Access::RW> adc3_cr2_dds{0x40012208u, 0x00000200u, 9};
constexpr Field<Access::RW> adc3_cr2_dma{0x40012208u, 0x00000100u, 8};
constexpr Field<Access::RW> adc3_cr2_cont{0x40012208u, 0x00000002u, 1};
constexpr Field<Access::RW> adc3_cr2_adon{0x40012208u, 0x00000001u, 0};
constexpr Field<Access::RW> adc3_smpr1_smpx_x{0x4001220Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> adc3_smpr2_smpx_x{0x40012210u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> adc3_jofr1_joffset1{0x40012214u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_jofr2_joffset2{0x40012218u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_jofr3_joffset3{0x4001221Cu, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_jofr4_joffset4{0x40012220u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_htr_ht{0x40012224u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc3_ltr_lt{0x40012228u, 0x00000FFFu, 0};
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

namespace adc3::adon {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::align {
    constexpr uint32_t right = 0;
    constexpr uint32_t left = 1;
}
namespace adc3::awd {
    constexpr uint32_t noevent = 0;
    constexpr uint32_t event = 1;
}
namespace adc3::awden {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::awdie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::awdsgl {
    constexpr uint32_t allchannels = 0;
    constexpr uint32_t singlechannel = 1;
}
namespace adc3::cont {
    constexpr uint32_t single = 0;
    constexpr uint32_t continuous = 1;
}
namespace adc3::dds {
    constexpr uint32_t single = 0;
    constexpr uint32_t continuous = 1;
}
namespace adc3::discen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::dma {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::eoc {
    constexpr uint32_t notcomplete = 0;
    constexpr uint32_t complete = 1;
}
namespace adc3::eocie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::eocs {
    constexpr uint32_t eachsequence = 0;
    constexpr uint32_t eachconversion = 1;
}
namespace adc3::exten {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t risingedge = 1;
    constexpr uint32_t fallingedge = 2;
    constexpr uint32_t bothedges = 3;
}
namespace adc3::extsel {
    constexpr uint32_t tim1cc1 = 0;
    constexpr uint32_t tim1cc2 = 1;
    constexpr uint32_t tim1cc3 = 2;
    constexpr uint32_t tim2cc2 = 3;
    constexpr uint32_t tim2cc3 = 4;
    constexpr uint32_t tim2cc4 = 5;
    constexpr uint32_t tim2trgo = 6;
    constexpr uint32_t tim3cc1 = 7;
    constexpr uint32_t tim3trgo = 8;
    constexpr uint32_t tim4cc4 = 9;
    constexpr uint32_t tim5cc1 = 10;
    constexpr uint32_t tim5cc2 = 11;
    constexpr uint32_t tim5cc3 = 12;
    constexpr uint32_t tim8cc1 = 13;
    constexpr uint32_t tim8trgo = 14;
    constexpr uint32_t exti11 = 15;
}
namespace adc3::jauto {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::jawden {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::jdiscen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::jeoc {
    constexpr uint32_t notcomplete = 0;
    constexpr uint32_t complete = 1;
}
namespace adc3::jeocie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::jexten {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t risingedge = 1;
    constexpr uint32_t fallingedge = 2;
    constexpr uint32_t bothedges = 3;
}
namespace adc3::jextsel {
    constexpr uint32_t tim1cc4 = 0;
    constexpr uint32_t tim1trgo = 1;
    constexpr uint32_t tim2cc1 = 2;
    constexpr uint32_t tim2trgo = 3;
    constexpr uint32_t tim3cc2 = 4;
    constexpr uint32_t tim3cc4 = 5;
    constexpr uint32_t tim4cc1 = 6;
    constexpr uint32_t tim4cc2 = 7;
    constexpr uint32_t tim4cc3 = 8;
    constexpr uint32_t tim4trgo = 9;
    constexpr uint32_t tim5cc4 = 10;
    constexpr uint32_t tim5trgo = 11;
    constexpr uint32_t tim8cc2 = 12;
    constexpr uint32_t tim8cc3 = 13;
    constexpr uint32_t tim8cc4 = 14;
    constexpr uint32_t exti15 = 15;
}
namespace adc3::jstrt {
    constexpr uint32_t notstarted = 0;
    constexpr uint32_t started = 1;
}
namespace adc3::jswstart {
    constexpr uint32_t start = 1;
}
namespace adc3::ovr {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
}
namespace adc3::ovrie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::res {
    constexpr uint32_t twelvebit = 0;
    constexpr uint32_t tenbit = 1;
    constexpr uint32_t eightbit = 2;
    constexpr uint32_t sixbit = 3;
}
namespace adc3::scan {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace adc3::smp {
    constexpr uint32_t cycles3 = 0;
    constexpr uint32_t cycles15 = 1;
    constexpr uint32_t cycles28 = 2;
    constexpr uint32_t cycles56 = 3;
    constexpr uint32_t cycles84 = 4;
    constexpr uint32_t cycles112 = 5;
    constexpr uint32_t cycles144 = 6;
    constexpr uint32_t cycles480 = 7;
}
namespace adc3::strt {
    constexpr uint32_t notstarted = 0;
    constexpr uint32_t started = 1;
}
namespace adc3::swstart {
    constexpr uint32_t start = 1;
}

#endif // STM32_ADC3_HPP
