// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Reset and clock control
#ifndef STM32_RCC_HPP
#define STM32_RCC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace rcc {
enum class Bdrst : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cssc : uint32_t {
    clear = 1,
};
enum class Cssf : uint32_t {
    notinterrupted = 0,
    interrupted = 1,
};
enum class Csson : uint32_t {
    off = 0,
    on = 1,
};
enum class En : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Hpre : uint32_t {
    div1 = 0,
    div2 = 8,
    div4 = 9,
    div8 = 10,
    div16 = 11,
    div64 = 12,
    div128 = 13,
    div256 = 14,
    div512 = 15,
};
enum class Hsebyp : uint32_t {
    notbypassed = 0,
    bypassed = 1,
};
enum class Hseon : uint32_t {
    off = 0,
    on = 1,
};
enum class Hsion : uint32_t {
    off = 0,
    on = 1,
};
enum class I2ssrc : uint32_t {
    plli2s = 0,
    ckin = 1,
};
enum class Lpen : uint32_t {
    disabledinsleep = 0,
    enabledinsleep = 1,
};
enum class Lsebyp : uint32_t {
    notbypassed = 0,
    bypassed = 1,
};
enum class Lseon : uint32_t {
    off = 0,
    on = 1,
};
enum class Lserdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Lsion : uint32_t {
    off = 0,
    on = 1,
};
enum class Lsirdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Mco1 : uint32_t {
    hsi = 0,
    lse = 1,
    hse = 2,
    pll = 3,
};
enum class Mco2 : uint32_t {
    sysclk = 0,
    plli2s = 1,
    hse = 2,
    pll = 3,
};
enum class Mcopre : uint32_t {
    div1 = 0,
    div2 = 4,
    div3 = 5,
    div4 = 6,
    div5 = 7,
};
enum class Plldivr : uint32_t {
    div1 = 0,
    div2 = 1,
    div3 = 2,
    div4 = 3,
    div5 = 4,
    div6 = 5,
    div7 = 6,
    div8 = 7,
    div9 = 8,
    div10 = 9,
    div11 = 10,
    div12 = 11,
    div13 = 12,
    div14 = 13,
    div15 = 14,
    div16 = 15,
    div17 = 16,
    div18 = 17,
    div19 = 18,
    div20 = 19,
    div21 = 20,
    div22 = 21,
    div23 = 22,
    div24 = 23,
    div25 = 24,
    div26 = 25,
    div27 = 26,
    div28 = 27,
    div29 = 28,
    div30 = 29,
    div31 = 30,
    div32 = 31,
};
enum class Plli2sdivq : uint32_t {
    div1 = 0,
    div2 = 1,
    div3 = 2,
    div4 = 3,
    div5 = 4,
    div6 = 5,
    div7 = 6,
    div8 = 7,
    div9 = 8,
    div10 = 9,
    div11 = 10,
    div12 = 11,
    div13 = 12,
    div14 = 13,
    div15 = 14,
    div16 = 15,
    div17 = 16,
    div18 = 17,
    div19 = 18,
    div20 = 19,
    div21 = 20,
    div22 = 21,
    div23 = 22,
    div24 = 23,
    div25 = 24,
    div26 = 25,
    div27 = 26,
    div28 = 27,
    div29 = 28,
    div30 = 29,
    div31 = 30,
    div32 = 31,
};
enum class Plli2sdivr : uint32_t {
    div1 = 0,
    div2 = 1,
    div3 = 2,
    div4 = 3,
    div5 = 4,
    div6 = 5,
    div7 = 6,
    div8 = 7,
    div9 = 8,
    div10 = 9,
    div11 = 10,
    div12 = 11,
    div13 = 12,
    div14 = 13,
    div15 = 14,
    div16 = 15,
    div17 = 16,
    div18 = 17,
    div19 = 18,
    div20 = 19,
    div21 = 20,
    div22 = 21,
    div23 = 22,
    div24 = 23,
    div25 = 24,
    div26 = 25,
    div27 = 26,
    div28 = 27,
    div29 = 28,
    div30 = 29,
    div31 = 30,
    div32 = 31,
};
enum class Plli2son : uint32_t {
    off = 0,
    on = 1,
};
enum class Pllon : uint32_t {
    off = 0,
    on = 1,
};
enum class Pllp : uint32_t {
    div2 = 0,
    div4 = 1,
    div6 = 2,
    div8 = 3,
};
enum class Pllsaidivq : uint32_t {
    div1 = 0,
    div2 = 1,
    div3 = 2,
    div4 = 3,
    div5 = 4,
    div6 = 5,
    div7 = 6,
    div8 = 7,
    div9 = 8,
    div10 = 9,
    div11 = 10,
    div12 = 11,
    div13 = 12,
    div14 = 13,
    div15 = 14,
    div16 = 15,
    div17 = 16,
    div18 = 17,
    div19 = 18,
    div20 = 19,
    div21 = 20,
    div22 = 21,
    div23 = 22,
    div24 = 23,
    div25 = 24,
    div26 = 25,
    div27 = 26,
    div28 = 27,
    div29 = 28,
    div30 = 29,
    div31 = 30,
    div32 = 31,
};
enum class Pllsaidivr : uint32_t {
    div2 = 0,
    div4 = 1,
    div8 = 2,
    div16 = 3,
};
enum class Pllsaion : uint32_t {
    off = 0,
    on = 1,
};
enum class Pllsrc : uint32_t {
    hsi = 0,
    hse = 1,
};
enum class Ppre : uint32_t {
    div1 = 0,
    div2 = 4,
    div4 = 5,
    div8 = 6,
    div16 = 7,
};
enum class Rdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Rdyc : uint32_t {
    clear = 1,
};
enum class Rdyf : uint32_t {
    notinterrupted = 0,
    interrupted = 1,
};
enum class Rdyie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rmvf : uint32_t {
    clear = 1,
};
enum class Rst : uint32_t {
    reset = 1,
};
enum class Rstf : uint32_t {
    noreset = 0,
    reset = 1,
};
enum class Rtcen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rtcsel : uint32_t {
    noclock = 0,
    lse = 1,
    lsi = 2,
    hse = 3,
};
enum class Sai1asrc : uint32_t {
    pllsai = 0,
    plli2s = 1,
    i2s_ckin = 2,
};
enum class Sai1bsrc : uint32_t {
    pllsai = 0,
    plli2s = 1,
    i2s_ckin = 2,
};
enum class Spreadsel : uint32_t {
    center = 0,
    down = 1,
};
enum class Sscgen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Sw : uint32_t {
    hsi = 0,
    hse = 1,
    pll = 2,
};
enum class Sws : uint32_t {
    hsi = 0,
    hse = 1,
    pll = 2,
};
enum class Timpre : uint32_t {
    mul1or2 = 0,
    mul1or4 = 1,
};
} // namespace rcc

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t RCC_BASE = 0x40023800;
struct RccRegs {
    volatile uint32_t cr; // clock control register
    volatile uint32_t pllcfgr; // PLL configuration register
    volatile uint32_t cfgr; // clock configuration register
    volatile uint32_t cir; // clock interrupt register
    volatile uint32_t ahb1rstr; // AHB1 peripheral reset register
    volatile uint32_t ahb2rstr; // AHB2 peripheral reset register
    volatile uint32_t ahb3rstr; // AHB3 peripheral reset register
    uint32_t _reserved0[1];
    volatile uint32_t apb1rstr; // APB1 peripheral reset register
    volatile uint32_t apb2rstr; // APB2 peripheral reset register
    uint32_t _reserved1[2];
    volatile uint32_t ahb1enr; // AHB1 peripheral clock register
    volatile uint32_t ahb2enr; // AHB2 peripheral clock enable register
    volatile uint32_t ahb3enr; // AHB3 peripheral clock enable register
    uint32_t _reserved2[1];
    volatile uint32_t apb1enr; // APB1 peripheral clock enable register
    volatile uint32_t apb2enr; // APB2 peripheral clock enable register
    uint32_t _reserved3[2];
    volatile uint32_t ahb1lpenr; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t ahb2lpenr; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t ahb3lpenr; // AHB3 peripheral clock enable in low power mode register
    uint32_t _reserved4[1];
    volatile uint32_t apb1lpenr; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t apb2lpenr; // APB2 peripheral clock enabled in low power mode register
    uint32_t _reserved5[2];
    volatile uint32_t bdcr; // Backup domain control register
    volatile uint32_t csr; // clock control & status register
    uint32_t _reserved6[2];
    volatile uint32_t sscgr; // spread spectrum clock generation register
    volatile uint32_t plli2scfgr; // PLLI2S configuration register
    volatile uint32_t pllsaicfgr; // RCC PLL configuration register
    volatile uint32_t dckcfgr; // RCC Dedicated Clock Configuration Register
};
static_assert(offsetof(RccRegs, cr) == 0);
static_assert(offsetof(RccRegs, pllcfgr) == 4);
static_assert(offsetof(RccRegs, cfgr) == 8);
static_assert(offsetof(RccRegs, cir) == 12);
static_assert(offsetof(RccRegs, ahb1rstr) == 16);
static_assert(offsetof(RccRegs, ahb2rstr) == 20);
static_assert(offsetof(RccRegs, ahb3rstr) == 24);
static_assert(offsetof(RccRegs, apb1rstr) == 32);
static_assert(offsetof(RccRegs, apb2rstr) == 36);
static_assert(offsetof(RccRegs, ahb1enr) == 48);
static_assert(offsetof(RccRegs, ahb2enr) == 52);
static_assert(offsetof(RccRegs, ahb3enr) == 56);
static_assert(offsetof(RccRegs, apb1enr) == 64);
static_assert(offsetof(RccRegs, apb2enr) == 68);
static_assert(offsetof(RccRegs, ahb1lpenr) == 80);
static_assert(offsetof(RccRegs, ahb2lpenr) == 84);
static_assert(offsetof(RccRegs, ahb3lpenr) == 88);
static_assert(offsetof(RccRegs, apb1lpenr) == 96);
static_assert(offsetof(RccRegs, apb2lpenr) == 100);
static_assert(offsetof(RccRegs, bdcr) == 112);
static_assert(offsetof(RccRegs, csr) == 116);
static_assert(offsetof(RccRegs, sscgr) == 128);
static_assert(offsetof(RccRegs, plli2scfgr) == 132);
static_assert(offsetof(RccRegs, pllsaicfgr) == 136);
static_assert(offsetof(RccRegs, dckcfgr) == 140);

constexpr Field<Access::RO, rcc::Rdy, true> rcc_cr_plli2srdy{0x40023800u, 0x08000000u, 27};
constexpr Field<Access::RW, rcc::Hsion, true> rcc_cr_plli2son{0x40023800u, 0x04000000u, 26};
constexpr Field<Access::RO, rcc::Rdy, true> rcc_cr_pllrdy{0x40023800u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Hsion, true> rcc_cr_pllon{0x40023800u, 0x01000000u, 24};
constexpr Field<Access::RW, rcc::Csson, true> rcc_cr_csson{0x40023800u, 0x00080000u, 19};
constexpr Field<Access::RW, rcc::Hsebyp, true> rcc_cr_hsebyp{0x40023800u, 0x00040000u, 18};
constexpr Field<Access::RO, rcc::Rdy, true> rcc_cr_hserdy{0x40023800u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Hsion, true> rcc_cr_hseon{0x40023800u, 0x00010000u, 16};
constexpr Field<Access::RO> rcc_cr_hsical{0x40023800u, 0x0000FF00u, 8};
constexpr Field<Access::RW> rcc_cr_hsitrim{0x40023800u, 0x000000F8u, 3};
constexpr Field<Access::RO, rcc::Rdy, true> rcc_cr_hsirdy{0x40023800u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Hsion, true> rcc_cr_hsion{0x40023800u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, true> rcc_pllcfgr_pllq[4] = {
    {0x40023804u, 0x01000000u, 24, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x02000000u, 25, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x04000000u, 26, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x08000000u, 27, 0x00000000u, 0x20000000u},
};
constexpr Field<Access::RW, uint32_t, true> rcc_pllcfgr_plln[9] = {
    {0x40023804u, 0x00000040u, 6, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000080u, 7, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000100u, 8, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000200u, 9, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000400u, 10, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000800u, 11, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00001000u, 12, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00002000u, 13, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00004000u, 14, 0x00000000u, 0x20000000u},
};
constexpr Field<Access::RW, uint32_t, true> rcc_pllcfgr_pllm[6] = {
    {0x40023804u, 0x00000001u, 0, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000002u, 1, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000004u, 2, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000008u, 3, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000010u, 4, 0x00000000u, 0x20000000u},
    {0x40023804u, 0x00000020u, 5, 0x00000000u, 0x20000000u},
};
constexpr Field<Access::RW, rcc::Pllsrc, true> rcc_pllcfgr_pllsrc{0x40023804u, 0x00400000u, 22, 0x00000000u, 0x20000000u};
constexpr Field<Access::RW, uint32_t, true> rcc_pllcfgr_pllp1{0x40023804u, 0x00020000u, 17, 0x00000000u, 0x20000000u};
constexpr Field<Access::RW, uint32_t, true> rcc_pllcfgr_pllp0{0x40023804u, 0x00010000u, 16, 0x00000000u, 0x20000000u};
constexpr Field<Access::RW, rcc::Mcopre> rcc_cfgr_mco2pre{0x40023808u, 0x38000000u, 27};
constexpr Field<Access::RW, rcc::Mcopre> rcc_cfgr_mco1pre{0x40023808u, 0x07000000u, 24};
constexpr Field<Access::RW, rcc::I2ssrc, true> rcc_cfgr_i2ssrc{0x40023808u, 0x00800000u, 23};
constexpr Field<Access::RW> rcc_cfgr_rtcpre{0x40023808u, 0x001F0000u, 16};
constexpr Field<Access::RW, rcc::Hpre> rcc_cfgr_hpre{0x40023808u, 0x000000F0u, 4};
constexpr Field<Access::RW, rcc::Mco2> rcc_cfgr_mco2{0x40023808u, 0xC0000000u, 30};
constexpr Field<Access::RW, rcc::Mco1> rcc_cfgr_mco1{0x40023808u, 0x00600000u, 21};
constexpr Field<Access::RW, rcc::Ppre> rcc_cfgr_ppre2{0x40023808u, 0x0000E000u, 13};
constexpr Field<Access::RW, rcc::Ppre> rcc_cfgr_ppre1{0x40023808u, 0x00001C00u, 10};
constexpr Field<Access::RO, uint32_t, true> rcc_cfgr_sws1{0x40023808u, 0x00000008u, 3};
constexpr Field<Access::RO, uint32_t, true> rcc_cfgr_sws0{0x40023808u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, true> rcc_cfgr_sw1{0x40023808u, 0x00000002u, 1};
constexpr Field<Access::RW, uint32_t, true> rcc_cfgr_sw0{0x40023808u, 0x00000001u, 0};
constexpr Field<Access::WO, rcc::Cssc> rcc_cir_cssc{0x4002380Cu, 0x00800000u, 23};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_plli2srdyc{0x4002380Cu, 0x00200000u, 21};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_pllrdyc{0x4002380Cu, 0x00100000u, 20};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_hserdyc{0x4002380Cu, 0x00080000u, 19};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_hsirdyc{0x4002380Cu, 0x00040000u, 18};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_lserdyc{0x4002380Cu, 0x00020000u, 17};
constexpr Field<Access::WO, rcc::Rdyc> rcc_cir_lsirdyc{0x4002380Cu, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_plli2srdyie{0x4002380Cu, 0x00002000u, 13};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_pllrdyie{0x4002380Cu, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_hserdyie{0x4002380Cu, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_hsirdyie{0x4002380Cu, 0x00000400u, 10};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_lserdyie{0x4002380Cu, 0x00000200u, 9};
constexpr Field<Access::RW, rcc::Rdyie, true> rcc_cir_lsirdyie{0x4002380Cu, 0x00000100u, 8};
constexpr Field<Access::RO, rcc::Cssf, true> rcc_cir_cssf{0x4002380Cu, 0x00000080u, 7};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_plli2srdyf{0x4002380Cu, 0x00000020u, 5};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_pllrdyf{0x4002380Cu, 0x00000010u, 4};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_hserdyf{0x4002380Cu, 0x00000008u, 3};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_hsirdyf{0x4002380Cu, 0x00000004u, 2};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_lserdyf{0x4002380Cu, 0x00000002u, 1};
constexpr Field<Access::RO, rcc::Rdyf, true> rcc_cir_lsirdyf{0x4002380Cu, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_otghsrst{0x40023810u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_ethmacrst{0x40023810u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_dma2rst{0x40023810u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_dma1rst{0x40023810u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_crcrst{0x40023810u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpioirst{0x40023810u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiohrst{0x40023810u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiogrst{0x40023810u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiofrst{0x40023810u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpioerst{0x40023810u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiodrst{0x40023810u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiocrst{0x40023810u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpiobrst{0x40023810u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb1rstr_gpioarst{0x40023810u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb2rstr_otgfsrst{0x40023814u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb2rstr_rngrst{0x40023814u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb2rstr_hsahrst{0x40023814u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb2rstr_cryprst{0x40023814u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Rst, true> rcc_ahb2rstr_dcmirst{0x40023814u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, false, false> rcc_ahb3rstr_fmcrst{0x40023818u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim2rst{0x40023820u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim3rst{0x40023820u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim4rst{0x40023820u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim5rst{0x40023820u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim6rst{0x40023820u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim7rst{0x40023820u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim12rst{0x40023820u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim13rst{0x40023820u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_tim14rst{0x40023820u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_wwdgrst{0x40023820u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_spi2rst{0x40023820u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_spi3rst{0x40023820u, 0x00008000u, 15};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_uart2rst{0x40023820u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_uart3rst{0x40023820u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_uart4rst{0x40023820u, 0x00080000u, 19};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_uart5rst{0x40023820u, 0x00100000u, 20};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_i2c1rst{0x40023820u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_i2c2rst{0x40023820u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_i2c3rst{0x40023820u, 0x00800000u, 23};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_can1rst{0x40023820u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_can2rst{0x40023820u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_pwrrst{0x40023820u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb1rstr_dacrst{0x40023820u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_tim1rst{0x40023824u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_tim8rst{0x40023824u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_usart1rst{0x40023824u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_usart6rst{0x40023824u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_adcrst{0x40023824u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_sdiorst{0x40023824u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_spi1rst{0x40023824u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_syscfgrst{0x40023824u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_tim9rst{0x40023824u, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_tim10rst{0x40023824u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Rst, true> rcc_apb2rstr_tim11rst{0x40023824u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_otghsulpien{0x40023830u, 0x40000000u, 30};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_otghsen{0x40023830u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_ethmacptpen{0x40023830u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_ethmacrxen{0x40023830u, 0x08000000u, 27};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_ethmactxen{0x40023830u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_ethmacen{0x40023830u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_dma2en{0x40023830u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_dma1en{0x40023830u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_ccmdataramen{0x40023830u, 0x00100000u, 20};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_bkpsramen{0x40023830u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_crcen{0x40023830u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpioien{0x40023830u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpiohen{0x40023830u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpiogen{0x40023830u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpiofen{0x40023830u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpioeen{0x40023830u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpioden{0x40023830u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpiocen{0x40023830u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpioben{0x40023830u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb1enr_gpioaen{0x40023830u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb2enr_otgfsen{0x40023834u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb2enr_rngen{0x40023834u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb2enr_hashen{0x40023834u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb2enr_crypen{0x40023834u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::En, true> rcc_ahb2enr_dcmien{0x40023834u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::En, false, false> rcc_ahb3enr_fmcen{0x40023838u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim2en{0x40023840u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim3en{0x40023840u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim4en{0x40023840u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim5en{0x40023840u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim6en{0x40023840u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim7en{0x40023840u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim12en{0x40023840u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim13en{0x40023840u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_tim14en{0x40023840u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_wwdgen{0x40023840u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_spi2en{0x40023840u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_spi3en{0x40023840u, 0x00008000u, 15};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_usart2en{0x40023840u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_usart3en{0x40023840u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_uart4en{0x40023840u, 0x00080000u, 19};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_uart5en{0x40023840u, 0x00100000u, 20};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_i2c1en{0x40023840u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_i2c2en{0x40023840u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_i2c3en{0x40023840u, 0x00800000u, 23};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_can1en{0x40023840u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_can2en{0x40023840u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_pwren{0x40023840u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::En, true> rcc_apb1enr_dacen{0x40023840u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_tim1en{0x40023844u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_tim8en{0x40023844u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_usart1en{0x40023844u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_usart6en{0x40023844u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_adc1en{0x40023844u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_adc2en{0x40023844u, 0x00000200u, 9};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_adc3en{0x40023844u, 0x00000400u, 10};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_sdioen{0x40023844u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_spi1en{0x40023844u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_syscfgen{0x40023844u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_tim9en{0x40023844u, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_tim10en{0x40023844u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::En, true> rcc_apb2enr_tim11en{0x40023844u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioalpen{0x40023850u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioblpen{0x40023850u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioclpen{0x40023850u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpiodlpen{0x40023850u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioelpen{0x40023850u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioflpen{0x40023850u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioglpen{0x40023850u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpiohlpen{0x40023850u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_gpioilpen{0x40023850u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_crclpen{0x40023850u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_flitflpen{0x40023850u, 0x00008000u, 15};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_sram1lpen{0x40023850u, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_sram2lpen{0x40023850u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_bkpsramlpen{0x40023850u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_dma1lpen{0x40023850u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_dma2lpen{0x40023850u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_ethmaclpen{0x40023850u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_ethmactxlpen{0x40023850u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_ethmacrxlpen{0x40023850u, 0x08000000u, 27};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_ethmacptplpen{0x40023850u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_otghslpen{0x40023850u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb1lpenr_otghsulpilpen{0x40023850u, 0x40000000u, 30};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb2lpenr_otgfslpen{0x40023854u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb2lpenr_rnglpen{0x40023854u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb2lpenr_hashlpen{0x40023854u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb2lpenr_cryplpen{0x40023854u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_ahb2lpenr_dcmilpen{0x40023854u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Lpen, false, false> rcc_ahb3lpenr_fmclpen{0x40023858u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim2lpen{0x40023860u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim3lpen{0x40023860u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim4lpen{0x40023860u, 0x00000004u, 2};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim5lpen{0x40023860u, 0x00000008u, 3};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim6lpen{0x40023860u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim7lpen{0x40023860u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim12lpen{0x40023860u, 0x00000040u, 6};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim13lpen{0x40023860u, 0x00000080u, 7};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_tim14lpen{0x40023860u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_wwdglpen{0x40023860u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_spi2lpen{0x40023860u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_spi3lpen{0x40023860u, 0x00008000u, 15};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_usart2lpen{0x40023860u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_usart3lpen{0x40023860u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_uart4lpen{0x40023860u, 0x00080000u, 19};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_uart5lpen{0x40023860u, 0x00100000u, 20};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_i2c1lpen{0x40023860u, 0x00200000u, 21};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_i2c2lpen{0x40023860u, 0x00400000u, 22};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_i2c3lpen{0x40023860u, 0x00800000u, 23};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_can1lpen{0x40023860u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_can2lpen{0x40023860u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_pwrlpen{0x40023860u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb1lpenr_daclpen{0x40023860u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_tim1lpen{0x40023864u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_tim8lpen{0x40023864u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_usart1lpen{0x40023864u, 0x00000010u, 4};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_usart6lpen{0x40023864u, 0x00000020u, 5};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_adc1lpen{0x40023864u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_adc2lpen{0x40023864u, 0x00000200u, 9};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_adc3lpen{0x40023864u, 0x00000400u, 10};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_sdiolpen{0x40023864u, 0x00000800u, 11};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_spi1lpen{0x40023864u, 0x00001000u, 12};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_syscfglpen{0x40023864u, 0x00004000u, 14};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_tim9lpen{0x40023864u, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_tim10lpen{0x40023864u, 0x00020000u, 17};
constexpr Field<Access::RW, rcc::Lpen, true> rcc_apb2lpenr_tim11lpen{0x40023864u, 0x00040000u, 18};
constexpr Field<Access::RW, rcc::Bdrst, true> rcc_bdcr_bdrst{0x40023870u, 0x00010000u, 16};
constexpr Field<Access::RW, rcc::Rtcen, true> rcc_bdcr_rtcen{0x40023870u, 0x00008000u, 15};
constexpr Field<Access::RW, rcc::Lsebyp, true> rcc_bdcr_lsebyp{0x40023870u, 0x00000004u, 2};
constexpr Field<Access::RO, rcc::Lserdy, true> rcc_bdcr_lserdy{0x40023870u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Lseon, true> rcc_bdcr_lseon{0x40023870u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, true> rcc_bdcr_rtcsel1{0x40023870u, 0x00000200u, 9};
constexpr Field<Access::RW, uint32_t, true> rcc_bdcr_rtcsel0{0x40023870u, 0x00000100u, 8};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_lpwrrstf{0x40023874u, 0x80000000u, 31};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_wwdgrstf{0x40023874u, 0x40000000u, 30};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_wdgrstf{0x40023874u, 0x20000000u, 29};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_sftrstf{0x40023874u, 0x10000000u, 28};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_porrstf{0x40023874u, 0x08000000u, 27};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_padrstf{0x40023874u, 0x04000000u, 26};
constexpr Field<Access::RW, rcc::Rstf, true> rcc_csr_borrstf{0x40023874u, 0x02000000u, 25};
constexpr Field<Access::RW, rcc::Rmvf, true> rcc_csr_rmvf{0x40023874u, 0x01000000u, 24};
constexpr Field<Access::RO, rcc::Lsirdy, true> rcc_csr_lsirdy{0x40023874u, 0x00000002u, 1};
constexpr Field<Access::RW, rcc::Lsion, true> rcc_csr_lsion{0x40023874u, 0x00000001u, 0};
constexpr Field<Access::RW, rcc::Sscgen, true> rcc_sscgr_sscgen{0x40023880u, 0x80000000u, 31};
constexpr Field<Access::RW, rcc::Spreadsel, true> rcc_sscgr_spreadsel{0x40023880u, 0x40000000u, 30};
constexpr Field<Access::RW> rcc_sscgr_incstep{0x40023880u, 0x0FFFE000u, 13};
constexpr Field<Access::RW> rcc_sscgr_modper{0x40023880u, 0x00001FFFu, 0};
constexpr Field<Access::RW> rcc_plli2scfgr_plli2sr{0x40023884u, 0x70000000u, 28};
constexpr Field<Access::RW> rcc_plli2scfgr_plli2sq{0x40023884u, 0x0F000000u, 24};
constexpr Field<Access::RW> rcc_plli2scfgr_plli2sn{0x40023884u, 0x00007FC0u, 6};
constexpr Field<Access::RW> rcc_pllsaicfgr_pllsair{0x40023888u, 0x70000000u, 28};
constexpr Field<Access::RW> rcc_pllsaicfgr_pllsaiq{0x40023888u, 0x0F000000u, 24};
constexpr Field<Access::RW> rcc_pllsaicfgr_pllsain{0x40023888u, 0x00007FC0u, 6};
constexpr Field<Access::RW, rcc::Plli2sdivq> rcc_dckcfgr_plli2sdivq{0x4002388Cu, 0x0000001Fu, 0};
constexpr Field<Access::RW, rcc::Pllsaidivq> rcc_dckcfgr_pllsaidivq{0x4002388Cu, 0x00001F00u, 8};
constexpr Field<Access::RW, rcc::Pllsaidivr> rcc_dckcfgr_pllsaidivr{0x4002388Cu, 0x00030000u, 16};
constexpr Field<Access::RW, rcc::Sai1asrc> rcc_dckcfgr_sai1asrc{0x4002388Cu, 0x00300000u, 20};
constexpr Field<Access::RW, rcc::Sai1bsrc> rcc_dckcfgr_sai1bsrc{0x4002388Cu, 0x00C00000u, 22};
constexpr Field<Access::RW, rcc::Timpre, true> rcc_dckcfgr_timpre{0x4002388Cu, 0x01000000u, 24};

#endif // STM32_RCC_HPP
