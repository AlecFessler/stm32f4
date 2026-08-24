// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Common ADC registers
#ifndef STM32_C_ADC_HPP
#define STM32_C_ADC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace c_adc {
enum class Adcpre : uint32_t {
    div2 = 0,
    div4 = 1,
    div6 = 2,
    div8 = 3,
};
enum class Awd : uint32_t {
    noevent = 0,
    event = 1,
};
enum class Dds : uint32_t {
    single = 0,
    continuous = 1,
};
enum class Dma : uint32_t {
    disabled = 0,
    mode1 = 1,
    mode2 = 2,
    mode3 = 3,
};
enum class Eoc : uint32_t {
    notcomplete = 0,
    complete = 1,
};
enum class Jeoc : uint32_t {
    notcomplete = 0,
    complete = 1,
};
enum class Jstrt : uint32_t {
    notstarted = 0,
    started = 1,
};
enum class Multi : uint32_t {
    independent = 0,
    dualrj = 1,
    dualra = 2,
    dualj = 5,
    dualr = 6,
    duali = 7,
    duala = 9,
    triplerj = 17,
    triplera = 18,
    triplej = 21,
    tripler = 22,
    triplei = 23,
    triplea = 24,
};
enum class Ovr : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Strt : uint32_t {
    notstarted = 0,
    started = 1,
};
enum class Tsvrefe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Vbate : uint32_t {
    disabled = 0,
    enabled = 1,
};
} // namespace c_adc

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t C_ADC_BASE = 0x40012300;
struct C_adcRegs {
    volatile uint32_t csr; // ADC Common status register
    volatile uint32_t ccr; // ADC common control register
    volatile uint32_t cdr; // ADC common regular data register for dual and triple modes
};
static_assert(offsetof(C_adcRegs, csr) == 0);
static_assert(offsetof(C_adcRegs, ccr) == 4);
static_assert(offsetof(C_adcRegs, cdr) == 8);

constexpr Field<Access::RO, c_adc::Ovr, true> c_adc_csr_ovr3{0x40012300u, 0x00200000u, 21};
constexpr Field<Access::RO, c_adc::Ovr, true> c_adc_csr_ovr2{0x40012300u, 0x00002000u, 13};
constexpr Field<Access::RO, c_adc::Ovr, true> c_adc_csr_ovr1{0x40012300u, 0x00000020u, 5};
constexpr Field<Access::RO, c_adc::Strt, true> c_adc_csr_strt3{0x40012300u, 0x00100000u, 20};
constexpr Field<Access::RO, c_adc::Strt, true> c_adc_csr_strt2{0x40012300u, 0x00001000u, 12};
constexpr Field<Access::RO, c_adc::Strt, true> c_adc_csr_strt1{0x40012300u, 0x00000010u, 4};
constexpr Field<Access::RO, c_adc::Jstrt, true> c_adc_csr_jstrt3{0x40012300u, 0x00080000u, 19};
constexpr Field<Access::RO, c_adc::Jstrt, true> c_adc_csr_jstrt2{0x40012300u, 0x00000800u, 11};
constexpr Field<Access::RO, c_adc::Jstrt, true> c_adc_csr_jstrt1{0x40012300u, 0x00000008u, 3};
constexpr Field<Access::RO, c_adc::Jeoc, true> c_adc_csr_jeoc3{0x40012300u, 0x00040000u, 18};
constexpr Field<Access::RO, c_adc::Jeoc, true> c_adc_csr_jeoc2{0x40012300u, 0x00000400u, 10};
constexpr Field<Access::RO, c_adc::Jeoc, true> c_adc_csr_jeoc1{0x40012300u, 0x00000004u, 2};
constexpr Field<Access::RO, c_adc::Eoc, true> c_adc_csr_eoc3{0x40012300u, 0x00020000u, 17};
constexpr Field<Access::RO, c_adc::Eoc, true> c_adc_csr_eoc2{0x40012300u, 0x00000200u, 9};
constexpr Field<Access::RO, c_adc::Eoc, true> c_adc_csr_eoc1{0x40012300u, 0x00000002u, 1};
constexpr Field<Access::RO, c_adc::Awd, true> c_adc_csr_awd3{0x40012300u, 0x00010000u, 16};
constexpr Field<Access::RO, c_adc::Awd, true> c_adc_csr_awd2{0x40012300u, 0x00000100u, 8};
constexpr Field<Access::RO, c_adc::Awd, true> c_adc_csr_awd1{0x40012300u, 0x00000001u, 0};
constexpr Field<Access::RW, c_adc::Tsvrefe, true> c_adc_ccr_tsvrefe{0x40012304u, 0x00800000u, 23};
constexpr Field<Access::RW, c_adc::Vbate, true> c_adc_ccr_vbate{0x40012304u, 0x00400000u, 22};
constexpr Field<Access::RW, c_adc::Adcpre> c_adc_ccr_adcpre{0x40012304u, 0x00030000u, 16};
constexpr Field<Access::RW, c_adc::Dma> c_adc_ccr_dma{0x40012304u, 0x0000C000u, 14};
constexpr Field<Access::RW, c_adc::Dds, true> c_adc_ccr_dds{0x40012304u, 0x00002000u, 13};
constexpr Field<Access::RW> c_adc_ccr_delay{0x40012304u, 0x00000F00u, 8};
constexpr Field<Access::RW> c_adc_ccr_mult{0x40012304u, 0x0000001Fu, 0};
constexpr Field<Access::RO> c_adc_cdr_data2{0x40012308u, 0xFFFF0000u, 16};
constexpr Field<Access::RO> c_adc_cdr_data1{0x40012308u, 0x0000FFFFu, 0};

#endif // STM32_C_ADC_HPP
