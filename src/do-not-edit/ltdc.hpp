// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// LCD-TFT Controller
#ifndef LTDC_HPP
#define LTDC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t LTDC_BASE = 0x40016800;
struct LtdcRegs {
    uint32_t _reserved0[2];
    volatile uint32_t sscr; // Synchronization Size Configuration Register
    volatile uint32_t bpcr; // Back Porch Configuration Register
    volatile uint32_t awcr; // Active Width Configuration Register
    volatile uint32_t twcr; // Total Width Configuration Register
    volatile uint32_t gcr; // Global Control Register
    uint32_t _reserved1[2];
    volatile uint32_t srcr; // Shadow Reload Configuration Register
    uint32_t _reserved2[1];
    volatile uint32_t bccr; // Background Color Configuration Register
    uint32_t _reserved3[1];
    volatile uint32_t ier; // Interrupt Enable Register
    volatile uint32_t isr; // Interrupt Status Register
    volatile uint32_t icr; // Interrupt Clear Register
    volatile uint32_t lipcr; // Line Interrupt Position Configuration Register
    volatile uint32_t cpsr; // Current Position Status Register
    volatile uint32_t cdsr; // Current Display Status Register
    uint32_t _reserved4[14];
    volatile uint32_t l1cr; // Layerx Control Register
    volatile uint32_t l1whpcr; // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t l1wvpcr; // Layerx Window Vertical Position Configuration Register
    volatile uint32_t l1ckcr; // Layerx Color Keying Configuration Register
    volatile uint32_t l1pfcr; // Layerx Pixel Format Configuration Register
    volatile uint32_t l1cacr; // Layerx Constant Alpha Configuration Register
    volatile uint32_t l1dccr; // Layerx Default Color Configuration Register
    volatile uint32_t l1bfcr; // Layerx Blending Factors Configuration Register
    uint32_t _reserved5[2];
    volatile uint32_t l1cfbar; // Layerx Color Frame Buffer Address Register
    volatile uint32_t l1cfblr; // Layerx Color Frame Buffer Length Register
    volatile uint32_t l1cfblnr; // Layerx ColorFrame Buffer Line Number Register
    uint32_t _reserved6[3];
    volatile uint32_t l1clutwr; // Layerx CLUT Write Register
    uint32_t _reserved7[15];
    volatile uint32_t l2cr; // Layerx Control Register
    volatile uint32_t l2whpcr; // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t l2wvpcr; // Layerx Window Vertical Position Configuration Register
    volatile uint32_t l2ckcr; // Layerx Color Keying Configuration Register
    volatile uint32_t l2pfcr; // Layerx Pixel Format Configuration Register
    volatile uint32_t l2cacr; // Layerx Constant Alpha Configuration Register
    volatile uint32_t l2dccr; // Layerx Default Color Configuration Register
    volatile uint32_t l2bfcr; // Layerx Blending Factors Configuration Register
    uint32_t _reserved8[2];
    volatile uint32_t l2cfbar; // Layerx Color Frame Buffer Address Register
    volatile uint32_t l2cfblr; // Layerx Color Frame Buffer Length Register
    volatile uint32_t l2cfblnr; // Layerx ColorFrame Buffer Line Number Register
    uint32_t _reserved9[3];
    volatile uint32_t l2clutwr; // Layerx CLUT Write Register
};
static_assert(offsetof(LtdcRegs, sscr) == 8);
static_assert(offsetof(LtdcRegs, bpcr) == 12);
static_assert(offsetof(LtdcRegs, awcr) == 16);
static_assert(offsetof(LtdcRegs, twcr) == 20);
static_assert(offsetof(LtdcRegs, gcr) == 24);
static_assert(offsetof(LtdcRegs, srcr) == 36);
static_assert(offsetof(LtdcRegs, bccr) == 44);
static_assert(offsetof(LtdcRegs, ier) == 52);
static_assert(offsetof(LtdcRegs, isr) == 56);
static_assert(offsetof(LtdcRegs, icr) == 60);
static_assert(offsetof(LtdcRegs, lipcr) == 64);
static_assert(offsetof(LtdcRegs, cpsr) == 68);
static_assert(offsetof(LtdcRegs, cdsr) == 72);
static_assert(offsetof(LtdcRegs, l1cr) == 132);
static_assert(offsetof(LtdcRegs, l1whpcr) == 136);
static_assert(offsetof(LtdcRegs, l1wvpcr) == 140);
static_assert(offsetof(LtdcRegs, l1ckcr) == 144);
static_assert(offsetof(LtdcRegs, l1pfcr) == 148);
static_assert(offsetof(LtdcRegs, l1cacr) == 152);
static_assert(offsetof(LtdcRegs, l1dccr) == 156);
static_assert(offsetof(LtdcRegs, l1bfcr) == 160);
static_assert(offsetof(LtdcRegs, l1cfbar) == 172);
static_assert(offsetof(LtdcRegs, l1cfblr) == 176);
static_assert(offsetof(LtdcRegs, l1cfblnr) == 180);
static_assert(offsetof(LtdcRegs, l1clutwr) == 196);
static_assert(offsetof(LtdcRegs, l2cr) == 260);
static_assert(offsetof(LtdcRegs, l2whpcr) == 264);
static_assert(offsetof(LtdcRegs, l2wvpcr) == 268);
static_assert(offsetof(LtdcRegs, l2ckcr) == 272);
static_assert(offsetof(LtdcRegs, l2pfcr) == 276);
static_assert(offsetof(LtdcRegs, l2cacr) == 280);
static_assert(offsetof(LtdcRegs, l2dccr) == 284);
static_assert(offsetof(LtdcRegs, l2bfcr) == 288);
static_assert(offsetof(LtdcRegs, l2cfbar) == 300);
static_assert(offsetof(LtdcRegs, l2cfblr) == 304);
static_assert(offsetof(LtdcRegs, l2cfblnr) == 308);
static_assert(offsetof(LtdcRegs, l2clutwr) == 324);

constexpr Field<Access::RW> ltdc_sscr_hsw{0x40016808u, 0x03FF0000u, 16};
constexpr Field<Access::RW> ltdc_sscr_vsh{0x40016808u, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_bpcr_ahbp{0x4001680Cu, 0x03FF0000u, 16};
constexpr Field<Access::RW> ltdc_bpcr_avbp{0x4001680Cu, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_awcr_aav{0x40016810u, 0x03FF0000u, 16};
constexpr Field<Access::RW> ltdc_awcr_aah{0x40016810u, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_twcr_totalw{0x40016814u, 0x03FF0000u, 16};
constexpr Field<Access::RW> ltdc_twcr_totalh{0x40016814u, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_gcr_hspol{0x40016818u, 0x80000000u, 31};
constexpr Field<Access::RW> ltdc_gcr_vspol{0x40016818u, 0x40000000u, 30};
constexpr Field<Access::RW> ltdc_gcr_depol{0x40016818u, 0x20000000u, 29};
constexpr Field<Access::RW> ltdc_gcr_pcpol{0x40016818u, 0x10000000u, 28};
constexpr Field<Access::RW> ltdc_gcr_den{0x40016818u, 0x00010000u, 16};
constexpr Field<Access::RO> ltdc_gcr_drw{0x40016818u, 0x00007000u, 12};
constexpr Field<Access::RO> ltdc_gcr_dgw{0x40016818u, 0x00000700u, 8};
constexpr Field<Access::RO> ltdc_gcr_dbw{0x40016818u, 0x00000070u, 4};
constexpr Field<Access::RW> ltdc_gcr_ltdcen{0x40016818u, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_srcr_vbr{0x40016824u, 0x00000002u, 1};
constexpr Field<Access::RW> ltdc_srcr_imr{0x40016824u, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_bccr_bc{0x4001682Cu, 0x00FFFFFFu, 0};
constexpr Field<Access::RW> ltdc_ier_rrie{0x40016834u, 0x00000008u, 3};
constexpr Field<Access::RW> ltdc_ier_terrie{0x40016834u, 0x00000004u, 2};
constexpr Field<Access::RW> ltdc_ier_fuie{0x40016834u, 0x00000002u, 1};
constexpr Field<Access::RW> ltdc_ier_lie{0x40016834u, 0x00000001u, 0};
constexpr Field<Access::RO> ltdc_isr_rrif{0x40016838u, 0x00000008u, 3};
constexpr Field<Access::RO> ltdc_isr_terrif{0x40016838u, 0x00000004u, 2};
constexpr Field<Access::RO> ltdc_isr_fuif{0x40016838u, 0x00000002u, 1};
constexpr Field<Access::RO> ltdc_isr_lif{0x40016838u, 0x00000001u, 0};
constexpr Field<Access::WO> ltdc_icr_crrif{0x4001683Cu, 0x00000008u, 3};
constexpr Field<Access::WO> ltdc_icr_cterrif{0x4001683Cu, 0x00000004u, 2};
constexpr Field<Access::WO> ltdc_icr_cfuif{0x4001683Cu, 0x00000002u, 1};
constexpr Field<Access::WO> ltdc_icr_clif{0x4001683Cu, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_lipcr_lipos{0x40016840u, 0x000007FFu, 0};
constexpr Field<Access::RO> ltdc_cpsr_cxpos{0x40016844u, 0xFFFF0000u, 16};
constexpr Field<Access::RO> ltdc_cpsr_cypos{0x40016844u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> ltdc_cdsr_hsyncs{0x40016848u, 0x00000008u, 3};
constexpr Field<Access::RO> ltdc_cdsr_vsyncs{0x40016848u, 0x00000004u, 2};
constexpr Field<Access::RO> ltdc_cdsr_hdes{0x40016848u, 0x00000002u, 1};
constexpr Field<Access::RO> ltdc_cdsr_vdes{0x40016848u, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_l1cr_cluten{0x40016884u, 0x00000010u, 4};
constexpr Field<Access::RW> ltdc_l1cr_colken{0x40016884u, 0x00000002u, 1};
constexpr Field<Access::RW> ltdc_l1cr_len{0x40016884u, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_l1whpcr_whsppos{0x40016888u, 0x0FFF0000u, 16};
constexpr Field<Access::RW> ltdc_l1whpcr_whstpos{0x40016888u, 0x00000FFFu, 0};
constexpr Field<Access::RW> ltdc_l1wvpcr_wvsppos{0x4001688Cu, 0x07FF0000u, 16};
constexpr Field<Access::RW> ltdc_l1wvpcr_wvstpos{0x4001688Cu, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_l1ckcr_ckred{0x40016890u, 0x00FF0000u, 16};
constexpr Field<Access::RW> ltdc_l1ckcr_ckgreen{0x40016890u, 0x0000FF00u, 8};
constexpr Field<Access::RW> ltdc_l1ckcr_ckblue{0x40016890u, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l1pfcr_pf{0x40016894u, 0x00000007u, 0};
constexpr Field<Access::RW> ltdc_l1cacr_consta{0x40016898u, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l1dccr_dcalpha{0x4001689Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> ltdc_l1dccr_dcred{0x4001689Cu, 0x00FF0000u, 16};
constexpr Field<Access::RW> ltdc_l1dccr_dcgreen{0x4001689Cu, 0x0000FF00u, 8};
constexpr Field<Access::RW> ltdc_l1dccr_dcblue{0x4001689Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l1bfcr_bf1{0x400168A0u, 0x00000700u, 8};
constexpr Field<Access::RW> ltdc_l1bfcr_bf2{0x400168A0u, 0x00000007u, 0};
constexpr Field<Access::RW> ltdc_l1cfbar_cfbadd{0x400168ACu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ltdc_l1cfblr_cfbp{0x400168B0u, 0x1FFF0000u, 16};
constexpr Field<Access::RW> ltdc_l1cfblr_cfbll{0x400168B0u, 0x00001FFFu, 0};
constexpr Field<Access::RW> ltdc_l1cfblnr_cfblnbr{0x400168B4u, 0x000007FFu, 0};
constexpr Field<Access::WO> ltdc_l1clutwr_clutadd{0x400168C4u, 0xFF000000u, 24};
constexpr Field<Access::WO> ltdc_l1clutwr_red{0x400168C4u, 0x00FF0000u, 16};
constexpr Field<Access::WO> ltdc_l1clutwr_green{0x400168C4u, 0x0000FF00u, 8};
constexpr Field<Access::WO> ltdc_l1clutwr_blue{0x400168C4u, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l2cr_cluten{0x40016904u, 0x00000010u, 4};
constexpr Field<Access::RW> ltdc_l2cr_colken{0x40016904u, 0x00000002u, 1};
constexpr Field<Access::RW> ltdc_l2cr_len{0x40016904u, 0x00000001u, 0};
constexpr Field<Access::RW> ltdc_l2whpcr_whsppos{0x40016908u, 0x0FFF0000u, 16};
constexpr Field<Access::RW> ltdc_l2whpcr_whstpos{0x40016908u, 0x00000FFFu, 0};
constexpr Field<Access::RW> ltdc_l2wvpcr_wvsppos{0x4001690Cu, 0x07FF0000u, 16};
constexpr Field<Access::RW> ltdc_l2wvpcr_wvstpos{0x4001690Cu, 0x000007FFu, 0};
constexpr Field<Access::RW> ltdc_l2ckcr_ckred{0x40016910u, 0x00FF8000u, 15};
constexpr Field<Access::RW> ltdc_l2ckcr_ckgreen{0x40016910u, 0x00007F00u, 8};
constexpr Field<Access::RW> ltdc_l2ckcr_ckblue{0x40016910u, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l2pfcr_pf{0x40016914u, 0x00000007u, 0};
constexpr Field<Access::RW> ltdc_l2cacr_consta{0x40016918u, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l2dccr_dcalpha{0x4001691Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> ltdc_l2dccr_dcred{0x4001691Cu, 0x00FF0000u, 16};
constexpr Field<Access::RW> ltdc_l2dccr_dcgreen{0x4001691Cu, 0x0000FF00u, 8};
constexpr Field<Access::RW> ltdc_l2dccr_dcblue{0x4001691Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> ltdc_l2bfcr_bf1{0x40016920u, 0x00000700u, 8};
constexpr Field<Access::RW> ltdc_l2bfcr_bf2{0x40016920u, 0x00000007u, 0};
constexpr Field<Access::RW> ltdc_l2cfbar_cfbadd{0x4001692Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ltdc_l2cfblr_cfbp{0x40016930u, 0x1FFF0000u, 16};
constexpr Field<Access::RW> ltdc_l2cfblr_cfbll{0x40016930u, 0x00001FFFu, 0};
constexpr Field<Access::RW> ltdc_l2cfblnr_cfblnbr{0x40016934u, 0x000007FFu, 0};
constexpr Field<Access::WO> ltdc_l2clutwr_clutadd{0x40016944u, 0xFF000000u, 24};
constexpr Field<Access::WO> ltdc_l2clutwr_red{0x40016944u, 0x00FF0000u, 16};
constexpr Field<Access::WO> ltdc_l2clutwr_green{0x40016944u, 0x0000FF00u, 8};
constexpr Field<Access::WO> ltdc_l2clutwr_blue{0x40016944u, 0x000000FFu, 0};

#endif // LTDC_HPP