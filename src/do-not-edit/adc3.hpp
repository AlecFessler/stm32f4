// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Analog-to-digital converter
#ifndef ADC3_HPP
#define ADC3_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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

inline Adc3Regs& adc3() { return *reinterpret_cast<Adc3Regs*>(ADC3_BASE); }

constexpr RegField adc3_sr_ovr{0x00000020u, 5};
constexpr RegField adc3_sr_strt{0x00000010u, 4};
constexpr RegField adc3_sr_jstrt{0x00000008u, 3};
constexpr RegField adc3_sr_jeoc{0x00000004u, 2};
constexpr RegField adc3_sr_eoc{0x00000002u, 1};
constexpr RegField adc3_sr_awd{0x00000001u, 0};
constexpr RegField adc3_cr1_ovrie{0x04000000u, 26};
constexpr RegField adc3_cr1_res{0x03000000u, 24};
constexpr RegField adc3_cr1_awden{0x00800000u, 23};
constexpr RegField adc3_cr1_jawden{0x00400000u, 22};
constexpr RegField adc3_cr1_discnum{0x0000E000u, 13};
constexpr RegField adc3_cr1_jdiscen{0x00001000u, 12};
constexpr RegField adc3_cr1_discen{0x00000800u, 11};
constexpr RegField adc3_cr1_jauto{0x00000400u, 10};
constexpr RegField adc3_cr1_awdsgl{0x00000200u, 9};
constexpr RegField adc3_cr1_scan{0x00000100u, 8};
constexpr RegField adc3_cr1_jeocie{0x00000080u, 7};
constexpr RegField adc3_cr1_awdie{0x00000040u, 6};
constexpr RegField adc3_cr1_eocie{0x00000020u, 5};
constexpr RegField adc3_cr1_awdch{0x0000001Fu, 0};
constexpr RegField adc3_cr2_swstart{0x40000000u, 30};
constexpr RegField adc3_cr2_exten{0x30000000u, 28};
constexpr RegField adc3_cr2_extsel{0x0F000000u, 24};
constexpr RegField adc3_cr2_jswstart{0x00400000u, 22};
constexpr RegField adc3_cr2_jexten{0x00300000u, 20};
constexpr RegField adc3_cr2_jextsel{0x000F0000u, 16};
constexpr RegField adc3_cr2_align{0x00000800u, 11};
constexpr RegField adc3_cr2_eocs{0x00000400u, 10};
constexpr RegField adc3_cr2_dds{0x00000200u, 9};
constexpr RegField adc3_cr2_dma{0x00000100u, 8};
constexpr RegField adc3_cr2_cont{0x00000002u, 1};
constexpr RegField adc3_cr2_adon{0x00000001u, 0};
constexpr RegField adc3_smpr1_smpx_x{0xFFFFFFFFu, 0};
constexpr RegField adc3_smpr2_smpx_x{0xFFFFFFFFu, 0};
constexpr RegField adc3_jofr1_joffset1{0x00000FFFu, 0};
constexpr RegField adc3_jofr2_joffset2{0x00000FFFu, 0};
constexpr RegField adc3_jofr3_joffset3{0x00000FFFu, 0};
constexpr RegField adc3_jofr4_joffset4{0x00000FFFu, 0};
constexpr RegField adc3_htr_ht{0x00000FFFu, 0};
constexpr RegField adc3_ltr_lt{0x00000FFFu, 0};
constexpr RegField adc3_sqr1_l{0x00F00000u, 20};
constexpr RegField adc3_sqr1_sq16{0x000F8000u, 15};
constexpr RegField adc3_sqr1_sq15{0x00007C00u, 10};
constexpr RegField adc3_sqr1_sq14{0x000003E0u, 5};
constexpr RegField adc3_sqr1_sq13{0x0000001Fu, 0};
constexpr RegField adc3_sqr2_sq12{0x3E000000u, 25};
constexpr RegField adc3_sqr2_sq11{0x01F00000u, 20};
constexpr RegField adc3_sqr2_sq10{0x000F8000u, 15};
constexpr RegField adc3_sqr2_sq9{0x00007C00u, 10};
constexpr RegField adc3_sqr2_sq8{0x000003E0u, 5};
constexpr RegField adc3_sqr2_sq7{0x0000001Fu, 0};
constexpr RegField adc3_sqr3_sq6{0x3E000000u, 25};
constexpr RegField adc3_sqr3_sq5{0x01F00000u, 20};
constexpr RegField adc3_sqr3_sq4{0x000F8000u, 15};
constexpr RegField adc3_sqr3_sq3{0x00007C00u, 10};
constexpr RegField adc3_sqr3_sq2{0x000003E0u, 5};
constexpr RegField adc3_sqr3_sq1{0x0000001Fu, 0};
constexpr RegField adc3_jsqr_jl{0x00300000u, 20};
constexpr RegField adc3_jsqr_jsq4{0x000F8000u, 15};
constexpr RegField adc3_jsqr_jsq3{0x00007C00u, 10};
constexpr RegField adc3_jsqr_jsq2{0x000003E0u, 5};
constexpr RegField adc3_jsqr_jsq1{0x0000001Fu, 0};
constexpr RegField adc3_jdr1_jdata{0x0000FFFFu, 0};
constexpr RegField adc3_jdr2_jdata{0x0000FFFFu, 0};
constexpr RegField adc3_jdr3_jdata{0x0000FFFFu, 0};
constexpr RegField adc3_jdr4_jdata{0x0000FFFFu, 0};
constexpr RegField adc3_dr_data{0x0000FFFFu, 0};

#endif // ADC3_HPP