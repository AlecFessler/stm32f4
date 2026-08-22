// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Digital-to-analog converter
#ifndef DAC_HPP
#define DAC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t DAC_BASE = 0x40007400;

struct DacRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t swtrigr; // software trigger register
    volatile uint32_t dhr12r1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t dhr12l1; // channel1 12-bit left aligned data holding register
    volatile uint32_t dhr8r1; // channel1 8-bit right aligned data holding register
    volatile uint32_t dhr12r2; // channel2 12-bit right aligned data holding register
    volatile uint32_t dhr12l2; // channel2 12-bit left aligned data holding register
    volatile uint32_t dhr8r2; // channel2 8-bit right-aligned data holding register
    volatile uint32_t dhr12rd; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t dhr12ld; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t dhr8rd; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t dor1; // channel1 data output register
    volatile uint32_t dor2; // channel2 data output register
    volatile uint32_t sr; // status register
};

static_assert(offsetof(DacRegs, cr) == 0);
static_assert(offsetof(DacRegs, swtrigr) == 4);
static_assert(offsetof(DacRegs, dhr12r1) == 8);
static_assert(offsetof(DacRegs, dhr12l1) == 12);
static_assert(offsetof(DacRegs, dhr8r1) == 16);
static_assert(offsetof(DacRegs, dhr12r2) == 20);
static_assert(offsetof(DacRegs, dhr12l2) == 24);
static_assert(offsetof(DacRegs, dhr8r2) == 28);
static_assert(offsetof(DacRegs, dhr12rd) == 32);
static_assert(offsetof(DacRegs, dhr12ld) == 36);
static_assert(offsetof(DacRegs, dhr8rd) == 40);
static_assert(offsetof(DacRegs, dor1) == 44);
static_assert(offsetof(DacRegs, dor2) == 48);
static_assert(offsetof(DacRegs, sr) == 52);

inline DacRegs& dac() { return *reinterpret_cast<DacRegs*>(DAC_BASE); }

constexpr RegField dac_cr_dmaudrie2{0x20000000u, 29};
constexpr RegField dac_cr_dmaen2{0x10000000u, 28};
constexpr RegField dac_cr_mamp2{0x0F000000u, 24};
constexpr RegField dac_cr_wave2{0x00C00000u, 22};
constexpr RegField dac_cr_tsel2{0x00380000u, 19};
constexpr RegField dac_cr_ten2{0x00040000u, 18};
constexpr RegField dac_cr_boff2{0x00020000u, 17};
constexpr RegField dac_cr_en2{0x00010000u, 16};
constexpr RegField dac_cr_dmaudrie1{0x00002000u, 13};
constexpr RegField dac_cr_dmaen1{0x00001000u, 12};
constexpr RegField dac_cr_mamp1{0x00000F00u, 8};
constexpr RegField dac_cr_wave1{0x000000C0u, 6};
constexpr RegField dac_cr_tsel1{0x00000038u, 3};
constexpr RegField dac_cr_ten1{0x00000004u, 2};
constexpr RegField dac_cr_boff1{0x00000002u, 1};
constexpr RegField dac_cr_en1{0x00000001u, 0};
constexpr RegField dac_swtrigr_swtrig2{0x00000002u, 1};
constexpr RegField dac_swtrigr_swtrig1{0x00000001u, 0};
constexpr RegField dac_dhr12r1_dacc1dhr{0x00000FFFu, 0};
constexpr RegField dac_dhr12l1_dacc1dhr{0x0000FFF0u, 4};
constexpr RegField dac_dhr8r1_dacc1dhr{0x000000FFu, 0};
constexpr RegField dac_dhr12r2_dacc2dhr{0x00000FFFu, 0};
constexpr RegField dac_dhr12l2_dacc2dhr{0x0000FFF0u, 4};
constexpr RegField dac_dhr8r2_dacc2dhr{0x000000FFu, 0};
constexpr RegField dac_dhr12rd_dacc2dhr{0x0FFF0000u, 16};
constexpr RegField dac_dhr12rd_dacc1dhr{0x00000FFFu, 0};
constexpr RegField dac_dhr12ld_dacc2dhr{0xFFF00000u, 20};
constexpr RegField dac_dhr12ld_dacc1dhr{0x0000FFF0u, 4};
constexpr RegField dac_dhr8rd_dacc2dhr{0x0000FF00u, 8};
constexpr RegField dac_dhr8rd_dacc1dhr{0x000000FFu, 0};
constexpr RegField dac_dor1_dacc1dor{0x00000FFFu, 0};
constexpr RegField dac_dor2_dacc2dor{0x00000FFFu, 0};
constexpr RegField dac_sr_dmaudr2{0x20000000u, 29};
constexpr RegField dac_sr_dmaudr1{0x00002000u, 13};

#endif // DAC_HPP