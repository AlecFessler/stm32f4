// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Digital-to-analog converter
#ifndef STM32_DAC_HPP
#define STM32_DAC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace dac {
enum class Boff : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Dmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dmaudr : uint32_t {
    nounderrun = 0,
    underrun = 1,
};
enum class Dmaudrie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class En : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Mamp : uint32_t {
    amp1 = 0,
    amp3 = 1,
    amp7 = 2,
    amp15 = 3,
    amp31 = 4,
    amp63 = 5,
    amp127 = 6,
    amp255 = 7,
    amp511 = 8,
    amp1023 = 9,
    amp2047 = 10,
    amp4095 = 11,
};
enum class Swtrig : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tsel : uint32_t {
    tim6trgo = 0,
    tim8trgo = 1,
    tim7trgo = 2,
    tim5trgo = 3,
    tim2trgo = 4,
    tim4trgo = 5,
    exti9 = 6,
    swtrig = 7,
};
enum class Wave : uint32_t {
    disabled = 0,
    noise = 1,
    triangle = 2,
};
} // namespace dac

// The BASE and Regs struct are defined entirely for debug utility.
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

constexpr Field<Access::RW, dac::Dmaudrie, true, true> dac_cr_dmaudrie2{0x40007400u, 0x20000000u, 29};
constexpr Field<Access::RW, dac::Dmaudrie, true, true> dac_cr_dmaudrie1{0x40007400u, 0x00002000u, 13};
constexpr Field<Access::RW, dac::Dmaen, true, true> dac_cr_dmaen2{0x40007400u, 0x10000000u, 28};
constexpr Field<Access::RW, dac::Dmaen, true, true> dac_cr_dmaen1{0x40007400u, 0x00001000u, 12};
constexpr Field<Access::RW, dac::Mamp> dac_cr_mamp2{0x40007400u, 0x0F000000u, 24};
constexpr Field<Access::RW, dac::Mamp> dac_cr_mamp1{0x40007400u, 0x00000F00u, 8};
constexpr Field<Access::RW, dac::Wave> dac_cr_wave2{0x40007400u, 0x00C00000u, 22};
constexpr Field<Access::RW, dac::Wave> dac_cr_wave1{0x40007400u, 0x000000C0u, 6};
constexpr Field<Access::RW, dac::Tsel> dac_cr_tsel2{0x40007400u, 0x00380000u, 19};
constexpr Field<Access::RW, dac::Tsel> dac_cr_tsel1{0x40007400u, 0x00000038u, 3};
constexpr Field<Access::RW, dac::Ten, true, true> dac_cr_ten2{0x40007400u, 0x00040000u, 18};
constexpr Field<Access::RW, dac::Ten, true, true> dac_cr_ten1{0x40007400u, 0x00000004u, 2};
constexpr Field<Access::RW, dac::Boff, true, true> dac_cr_boff2{0x40007400u, 0x00020000u, 17};
constexpr Field<Access::RW, dac::Boff, true, true> dac_cr_boff1{0x40007400u, 0x00000002u, 1};
constexpr Field<Access::RW, dac::En, true, true> dac_cr_en2{0x40007400u, 0x00010000u, 16};
constexpr Field<Access::RW, dac::En, true, true> dac_cr_en1{0x40007400u, 0x00000001u, 0};
constexpr Field<Access::WO, dac::Swtrig> dac_swtrigr_swtrig2{0x40007404u, 0x00000002u, 1};
constexpr Field<Access::WO, dac::Swtrig> dac_swtrigr_swtrig1{0x40007404u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dac_dhr12r1_dacc1dhr{0x40007408u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dac_dhr12l1_dacc1dhr{0x4000740Cu, 0x0000FFF0u, 4};
constexpr Field<Access::RW, uint32_t, false> dac_dhr8r1_dacc1dhr{0x40007410u, 0x000000FFu, 0};
constexpr Field<Access::RW, uint32_t, false> dac_dhr12r2_dacc2dhr{0x40007414u, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dac_dhr12l2_dacc2dhr{0x40007418u, 0x0000FFF0u, 4};
constexpr Field<Access::RW, uint32_t, false> dac_dhr8r2_dacc2dhr{0x4000741Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> dac_dhr12rd_dacc2dhr{0x40007420u, 0x0FFF0000u, 16};
constexpr Field<Access::RW> dac_dhr12rd_dacc1dhr{0x40007420u, 0x00000FFFu, 0};
constexpr Field<Access::RW> dac_dhr12ld_dacc2dhr{0x40007424u, 0xFFF00000u, 20};
constexpr Field<Access::RW> dac_dhr12ld_dacc1dhr{0x40007424u, 0x0000FFF0u, 4};
constexpr Field<Access::RW> dac_dhr8rd_dacc2dhr{0x40007428u, 0x0000FF00u, 8};
constexpr Field<Access::RW> dac_dhr8rd_dacc1dhr{0x40007428u, 0x000000FFu, 0};
constexpr Field<Access::RO> dac_dor1_dacc1dor{0x4000742Cu, 0x00000FFFu, 0};
constexpr Field<Access::RO> dac_dor2_dacc2dor{0x40007430u, 0x00000FFFu, 0};
constexpr Field<Access::RC_W1, dac::Dmaudr, false> dac_sr_dmaudr2{0x40007434u, 0x20000000u, 29, 0x20002000u, 0x00000000u};
constexpr Field<Access::RC_W1, dac::Dmaudr, false> dac_sr_dmaudr1{0x40007434u, 0x00002000u, 13, 0x20002000u, 0x00000000u};

#endif // STM32_DAC_HPP
