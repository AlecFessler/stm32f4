// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Analog-to-digital converter
#ifndef ADC1_HPP
#define ADC1_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t ADC1_BASE = 0x40012000;
struct Adc1Regs {
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
static_assert(offsetof(Adc1Regs, sr) == 0);
static_assert(offsetof(Adc1Regs, cr1) == 4);
static_assert(offsetof(Adc1Regs, cr2) == 8);
static_assert(offsetof(Adc1Regs, smpr1) == 12);
static_assert(offsetof(Adc1Regs, smpr2) == 16);
static_assert(offsetof(Adc1Regs, jofr1) == 20);
static_assert(offsetof(Adc1Regs, jofr2) == 24);
static_assert(offsetof(Adc1Regs, jofr3) == 28);
static_assert(offsetof(Adc1Regs, jofr4) == 32);
static_assert(offsetof(Adc1Regs, htr) == 36);
static_assert(offsetof(Adc1Regs, ltr) == 40);
static_assert(offsetof(Adc1Regs, sqr1) == 44);
static_assert(offsetof(Adc1Regs, sqr2) == 48);
static_assert(offsetof(Adc1Regs, sqr3) == 52);
static_assert(offsetof(Adc1Regs, jsqr) == 56);
static_assert(offsetof(Adc1Regs, jdr1) == 60);
static_assert(offsetof(Adc1Regs, jdr2) == 64);
static_assert(offsetof(Adc1Regs, jdr3) == 68);
static_assert(offsetof(Adc1Regs, jdr4) == 72);
static_assert(offsetof(Adc1Regs, dr) == 76);

constexpr Field<Access::RW> adc1_sr_ovr{0x40012000u, 0x00000020u, 5};
constexpr Field<Access::RW> adc1_sr_strt{0x40012000u, 0x00000010u, 4};
constexpr Field<Access::RW> adc1_sr_jstrt{0x40012000u, 0x00000008u, 3};
constexpr Field<Access::RW> adc1_sr_jeoc{0x40012000u, 0x00000004u, 2};
constexpr Field<Access::RW> adc1_sr_eoc{0x40012000u, 0x00000002u, 1};
constexpr Field<Access::RW> adc1_sr_awd{0x40012000u, 0x00000001u, 0};
constexpr Field<Access::RW> adc1_cr1_ovrie{0x40012004u, 0x04000000u, 26};
constexpr Field<Access::RW> adc1_cr1_res{0x40012004u, 0x03000000u, 24};
constexpr Field<Access::RW> adc1_cr1_awden{0x40012004u, 0x00800000u, 23};
constexpr Field<Access::RW> adc1_cr1_jawden{0x40012004u, 0x00400000u, 22};
constexpr Field<Access::RW> adc1_cr1_discnum{0x40012004u, 0x0000E000u, 13};
constexpr Field<Access::RW> adc1_cr1_jdiscen{0x40012004u, 0x00001000u, 12};
constexpr Field<Access::RW> adc1_cr1_discen{0x40012004u, 0x00000800u, 11};
constexpr Field<Access::RW> adc1_cr1_jauto{0x40012004u, 0x00000400u, 10};
constexpr Field<Access::RW> adc1_cr1_awdsgl{0x40012004u, 0x00000200u, 9};
constexpr Field<Access::RW> adc1_cr1_scan{0x40012004u, 0x00000100u, 8};
constexpr Field<Access::RW> adc1_cr1_jeocie{0x40012004u, 0x00000080u, 7};
constexpr Field<Access::RW> adc1_cr1_awdie{0x40012004u, 0x00000040u, 6};
constexpr Field<Access::RW> adc1_cr1_eocie{0x40012004u, 0x00000020u, 5};
constexpr Field<Access::RW> adc1_cr1_awdch{0x40012004u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc1_cr2_swstart{0x40012008u, 0x40000000u, 30};
constexpr Field<Access::RW> adc1_cr2_exten{0x40012008u, 0x30000000u, 28};
constexpr Field<Access::RW> adc1_cr2_extsel{0x40012008u, 0x0F000000u, 24};
constexpr Field<Access::RW> adc1_cr2_jswstart{0x40012008u, 0x00400000u, 22};
constexpr Field<Access::RW> adc1_cr2_jexten{0x40012008u, 0x00300000u, 20};
constexpr Field<Access::RW> adc1_cr2_jextsel{0x40012008u, 0x000F0000u, 16};
constexpr Field<Access::RW> adc1_cr2_align{0x40012008u, 0x00000800u, 11};
constexpr Field<Access::RW> adc1_cr2_eocs{0x40012008u, 0x00000400u, 10};
constexpr Field<Access::RW> adc1_cr2_dds{0x40012008u, 0x00000200u, 9};
constexpr Field<Access::RW> adc1_cr2_dma{0x40012008u, 0x00000100u, 8};
constexpr Field<Access::RW> adc1_cr2_cont{0x40012008u, 0x00000002u, 1};
constexpr Field<Access::RW> adc1_cr2_adon{0x40012008u, 0x00000001u, 0};
constexpr Field<Access::RW> adc1_smpr1_smpx_x{0x4001200Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> adc1_smpr2_smpx_x{0x40012010u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> adc1_jofr1_joffset1{0x40012014u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_jofr2_joffset2{0x40012018u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_jofr3_joffset3{0x4001201Cu, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_jofr4_joffset4{0x40012020u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_htr_ht{0x40012024u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_ltr_lt{0x40012028u, 0x00000FFFu, 0};
constexpr Field<Access::RW> adc1_sqr1_l{0x4001202Cu, 0x00F00000u, 20};
constexpr Field<Access::RW> adc1_sqr1_sq16{0x4001202Cu, 0x000F8000u, 15};
constexpr Field<Access::RW> adc1_sqr1_sq15{0x4001202Cu, 0x00007C00u, 10};
constexpr Field<Access::RW> adc1_sqr1_sq14{0x4001202Cu, 0x000003E0u, 5};
constexpr Field<Access::RW> adc1_sqr1_sq13{0x4001202Cu, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc1_sqr2_sq12{0x40012030u, 0x3E000000u, 25};
constexpr Field<Access::RW> adc1_sqr2_sq11{0x40012030u, 0x01F00000u, 20};
constexpr Field<Access::RW> adc1_sqr2_sq10{0x40012030u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc1_sqr2_sq9{0x40012030u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc1_sqr2_sq8{0x40012030u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc1_sqr2_sq7{0x40012030u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc1_sqr3_sq6{0x40012034u, 0x3E000000u, 25};
constexpr Field<Access::RW> adc1_sqr3_sq5{0x40012034u, 0x01F00000u, 20};
constexpr Field<Access::RW> adc1_sqr3_sq4{0x40012034u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc1_sqr3_sq3{0x40012034u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc1_sqr3_sq2{0x40012034u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc1_sqr3_sq1{0x40012034u, 0x0000001Fu, 0};
constexpr Field<Access::RW> adc1_jsqr_jl{0x40012038u, 0x00300000u, 20};
constexpr Field<Access::RW> adc1_jsqr_jsq4{0x40012038u, 0x000F8000u, 15};
constexpr Field<Access::RW> adc1_jsqr_jsq3{0x40012038u, 0x00007C00u, 10};
constexpr Field<Access::RW> adc1_jsqr_jsq2{0x40012038u, 0x000003E0u, 5};
constexpr Field<Access::RW> adc1_jsqr_jsq1{0x40012038u, 0x0000001Fu, 0};
constexpr Field<Access::RO> adc1_jdr1_jdata{0x4001203Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc1_jdr2_jdata{0x40012040u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc1_jdr3_jdata{0x40012044u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc1_jdr4_jdata{0x40012048u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> adc1_dr_data{0x4001204Cu, 0x0000FFFFu, 0};

#endif // ADC1_HPP