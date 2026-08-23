// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Common ADC registers
#ifndef STM32_C_ADC_HPP
#define STM32_C_ADC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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

constexpr Field<Access::RO> c_adc_csr_ovr3{0x40012300u, 0x00200000u, 21};
constexpr Field<Access::RO> c_adc_csr_ovr2{0x40012300u, 0x00002000u, 13};
constexpr Field<Access::RO> c_adc_csr_ovr1{0x40012300u, 0x00000020u, 5};
constexpr Field<Access::RO> c_adc_csr_strt3{0x40012300u, 0x00100000u, 20};
constexpr Field<Access::RO> c_adc_csr_strt2{0x40012300u, 0x00001000u, 12};
constexpr Field<Access::RO> c_adc_csr_strt1{0x40012300u, 0x00000010u, 4};
constexpr Field<Access::RO> c_adc_csr_jstrt3{0x40012300u, 0x00080000u, 19};
constexpr Field<Access::RO> c_adc_csr_jstrt2{0x40012300u, 0x00000800u, 11};
constexpr Field<Access::RO> c_adc_csr_jstrt1{0x40012300u, 0x00000008u, 3};
constexpr Field<Access::RO> c_adc_csr_jeoc3{0x40012300u, 0x00040000u, 18};
constexpr Field<Access::RO> c_adc_csr_jeoc2{0x40012300u, 0x00000400u, 10};
constexpr Field<Access::RO> c_adc_csr_jeoc1{0x40012300u, 0x00000004u, 2};
constexpr Field<Access::RO> c_adc_csr_eoc3{0x40012300u, 0x00020000u, 17};
constexpr Field<Access::RO> c_adc_csr_eoc2{0x40012300u, 0x00000200u, 9};
constexpr Field<Access::RO> c_adc_csr_eoc1{0x40012300u, 0x00000002u, 1};
constexpr Field<Access::RO> c_adc_csr_awd3{0x40012300u, 0x00010000u, 16};
constexpr Field<Access::RO> c_adc_csr_awd2{0x40012300u, 0x00000100u, 8};
constexpr Field<Access::RO> c_adc_csr_awd1{0x40012300u, 0x00000001u, 0};
constexpr Field<Access::RW> c_adc_ccr_tsvrefe{0x40012304u, 0x00800000u, 23};
constexpr Field<Access::RW> c_adc_ccr_vbate{0x40012304u, 0x00400000u, 22};
constexpr Field<Access::RW> c_adc_ccr_adcpre{0x40012304u, 0x00030000u, 16};
constexpr Field<Access::RW> c_adc_ccr_dma{0x40012304u, 0x0000C000u, 14};
constexpr Field<Access::RW> c_adc_ccr_dds{0x40012304u, 0x00002000u, 13};
constexpr Field<Access::RW> c_adc_ccr_delay{0x40012304u, 0x00000F00u, 8};
constexpr Field<Access::RW> c_adc_ccr_mult{0x40012304u, 0x0000001Fu, 0};
constexpr Field<Access::RO> c_adc_cdr_data2{0x40012308u, 0xFFFF0000u, 16};
constexpr Field<Access::RO> c_adc_cdr_data1{0x40012308u, 0x0000FFFFu, 0};

namespace c_adc::adcpre {
    constexpr uint32_t div2 = 0;
    constexpr uint32_t div4 = 1;
    constexpr uint32_t div6 = 2;
    constexpr uint32_t div8 = 3;
}
namespace c_adc::awd {
    constexpr uint32_t noevent = 0;
    constexpr uint32_t event = 1;
}
namespace c_adc::dds {
    constexpr uint32_t single = 0;
    constexpr uint32_t continuous = 1;
}
namespace c_adc::dma {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t mode1 = 1;
    constexpr uint32_t mode2 = 2;
    constexpr uint32_t mode3 = 3;
}
namespace c_adc::eoc {
    constexpr uint32_t notcomplete = 0;
    constexpr uint32_t complete = 1;
}
namespace c_adc::jeoc {
    constexpr uint32_t notcomplete = 0;
    constexpr uint32_t complete = 1;
}
namespace c_adc::jstrt {
    constexpr uint32_t notstarted = 0;
    constexpr uint32_t started = 1;
}
namespace c_adc::multi {
    constexpr uint32_t independent = 0;
    constexpr uint32_t dualrj = 1;
    constexpr uint32_t dualra = 2;
    constexpr uint32_t dualj = 5;
    constexpr uint32_t dualr = 6;
    constexpr uint32_t duali = 7;
    constexpr uint32_t duala = 9;
    constexpr uint32_t triplerj = 17;
    constexpr uint32_t triplera = 18;
    constexpr uint32_t triplej = 21;
    constexpr uint32_t tripler = 22;
    constexpr uint32_t triplei = 23;
    constexpr uint32_t triplea = 24;
}
namespace c_adc::ovr {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
}
namespace c_adc::strt {
    constexpr uint32_t notstarted = 0;
    constexpr uint32_t started = 1;
}
namespace c_adc::tsvrefe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace c_adc::vbate {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}

#endif // STM32_C_ADC_HPP
