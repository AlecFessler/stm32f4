// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go high speed
#ifndef OTG_HS_DEVICE_HPP
#define OTG_HS_DEVICE_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t OTG_HS_DEVICE_BASE = 0x40040800;

struct Otg_hs_deviceRegs {
    volatile uint32_t otg_hs_dcfg; // OTG_HS device configuration register
    volatile uint32_t otg_hs_dctl; // OTG_HS device control register
    volatile uint32_t otg_hs_dsts; // OTG_HS device status register
    uint32_t _reserved0[1];
    volatile uint32_t otg_hs_diepmsk; // OTG_HS device IN endpoint common interrupt mask register
    volatile uint32_t otg_hs_doepmsk; // OTG_HS device OUT endpoint common interrupt mask register
    volatile uint32_t otg_hs_daint; // OTG_HS device all endpoints interrupt register
    volatile uint32_t otg_hs_daintmsk; // OTG_HS all endpoints interrupt mask register
    uint32_t _reserved1[2];
    volatile uint32_t otg_hs_dvbusdis; // OTG_HS device VBUS discharge time register
    volatile uint32_t otg_hs_dvbuspulse; // OTG_HS device VBUS pulsing time register
    volatile uint32_t otg_hs_dthrctl; // OTG_HS Device threshold control register
    volatile uint32_t otg_hs_diepempmsk; // OTG_HS device IN endpoint FIFO empty interrupt mask register
    volatile uint32_t otg_hs_deachint; // OTG_HS device each endpoint interrupt register
    volatile uint32_t otg_hs_deachintmsk; // OTG_HS device each endpoint interrupt register mask
    volatile uint32_t otg_hs_diepeachmsk1; // OTG_HS device each in endpoint-1 interrupt register
    uint32_t _reserved2[15];
    volatile uint32_t otg_hs_doepeachmsk1; // OTG_HS device each OUT endpoint-1 interrupt register
    uint32_t _reserved3[31];
    volatile uint32_t otg_hs_diepctl0; // OTG device endpoint-0 control register
    uint32_t _reserved4[1];
    volatile uint32_t otg_hs_diepint0; // OTG device endpoint-0 interrupt register
    uint32_t _reserved5[1];
    volatile uint32_t otg_hs_dieptsiz0; // OTG_HS device IN endpoint 0 transfer size register
    volatile uint32_t otg_hs_diepdma1; // OTG_HS device endpoint-1 DMA address register
    volatile uint32_t otg_hs_dtxfsts0; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved6[1];
    volatile uint32_t otg_hs_diepctl1; // OTG device endpoint-1 control register
    uint32_t _reserved7[1];
    volatile uint32_t otg_hs_diepint1; // OTG device endpoint-1 interrupt register
    uint32_t _reserved8[1];
    volatile uint32_t otg_hs_dieptsiz1; // OTG_HS device endpoint transfer size register
    volatile uint32_t otg_hs_diepdma2; // OTG_HS device endpoint-2 DMA address register
    volatile uint32_t otg_hs_dtxfsts1; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved9[1];
    volatile uint32_t otg_hs_diepctl2; // OTG device endpoint-2 control register
    uint32_t _reserved10[1];
    volatile uint32_t otg_hs_diepint2; // OTG device endpoint-2 interrupt register
    uint32_t _reserved11[1];
    volatile uint32_t otg_hs_dieptsiz2; // OTG_HS device endpoint transfer size register
    volatile uint32_t otg_hs_diepdma3; // OTG_HS device endpoint-3 DMA address register
    volatile uint32_t otg_hs_dtxfsts2; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved12[1];
    volatile uint32_t otg_hs_diepctl3; // OTG device endpoint-3 control register
    uint32_t _reserved13[1];
    volatile uint32_t otg_hs_diepint3; // OTG device endpoint-3 interrupt register
    uint32_t _reserved14[1];
    volatile uint32_t otg_hs_dieptsiz3; // OTG_HS device endpoint transfer size register
    volatile uint32_t otg_hs_diepdma4; // OTG_HS device endpoint-4 DMA address register
    volatile uint32_t otg_hs_dtxfsts3; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved15[1];
    volatile uint32_t otg_hs_diepctl4; // OTG device endpoint-4 control register
    uint32_t _reserved16[1];
    volatile uint32_t otg_hs_diepint4; // OTG device endpoint-4 interrupt register
    uint32_t _reserved17[1];
    volatile uint32_t otg_hs_dieptsiz4; // OTG_HS device endpoint transfer size register
    volatile uint32_t otg_hs_diepdma5; // OTG_HS device endpoint-5 DMA address register
    volatile uint32_t otg_hs_dtxfsts4; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved18[1];
    volatile uint32_t otg_hs_diepctl5; // OTG device endpoint-5 control register
    uint32_t _reserved19[1];
    volatile uint32_t otg_hs_diepint5; // OTG device endpoint-5 interrupt register
    uint32_t _reserved20[1];
    volatile uint32_t otg_hs_dieptsiz5; // OTG_HS device endpoint transfer size register
    uint32_t _reserved21[1];
    volatile uint32_t otg_hs_dtxfsts5; // OTG_HS device IN endpoint transmit FIFO status register
    uint32_t _reserved22[1];
    volatile uint32_t otg_hs_diepctl6; // OTG device endpoint-6 control register
    uint32_t _reserved23[1];
    volatile uint32_t otg_hs_diepint6; // OTG device endpoint-6 interrupt register
    uint32_t _reserved24[5];
    volatile uint32_t otg_hs_diepctl7; // OTG device endpoint-7 control register
    uint32_t _reserved25[1];
    volatile uint32_t otg_hs_diepint7; // OTG device endpoint-7 interrupt register
    uint32_t _reserved26[69];
    volatile uint32_t otg_hs_doepctl0; // OTG_HS device control OUT endpoint 0 control register
    uint32_t _reserved27[1];
    volatile uint32_t otg_hs_doepint0; // OTG_HS device endpoint-0 interrupt register
    uint32_t _reserved28[1];
    volatile uint32_t otg_hs_doeptsiz0; // OTG_HS device endpoint-1 transfer size register
    uint32_t _reserved29[3];
    volatile uint32_t otg_hs_doepctl1; // OTG device endpoint-1 control register
    uint32_t _reserved30[1];
    volatile uint32_t otg_hs_doepint1; // OTG_HS device endpoint-1 interrupt register
    uint32_t _reserved31[1];
    volatile uint32_t otg_hs_doeptsiz1; // OTG_HS device endpoint-2 transfer size register
    uint32_t _reserved32[3];
    volatile uint32_t otg_hs_doepctl2; // OTG device endpoint-2 control register
    uint32_t _reserved33[1];
    volatile uint32_t otg_hs_doepint2; // OTG_HS device endpoint-2 interrupt register
    uint32_t _reserved34[1];
    volatile uint32_t otg_hs_doeptsiz2; // OTG_HS device endpoint-3 transfer size register
    uint32_t _reserved35[3];
    volatile uint32_t otg_hs_doepctl3; // OTG device endpoint-3 control register
    uint32_t _reserved36[1];
    volatile uint32_t otg_hs_doepint3; // OTG_HS device endpoint-3 interrupt register
    uint32_t _reserved37[1];
    volatile uint32_t otg_hs_doeptsiz3; // OTG_HS device endpoint-4 transfer size register
    uint32_t _reserved38[5];
    volatile uint32_t otg_hs_doepint4; // OTG_HS device endpoint-4 interrupt register
    uint32_t _reserved39[1];
    volatile uint32_t otg_hs_doeptsiz4; // OTG_HS device endpoint-5 transfer size register
    uint32_t _reserved40[5];
    volatile uint32_t otg_hs_doepint5; // OTG_HS device endpoint-5 interrupt register
    uint32_t _reserved41[7];
    volatile uint32_t otg_hs_doepint6; // OTG_HS device endpoint-6 interrupt register
    uint32_t _reserved42[7];
    volatile uint32_t otg_hs_doepint7; // OTG_HS device endpoint-7 interrupt register
};

static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dcfg) == 0);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dctl) == 4);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dsts) == 8);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepmsk) == 16);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepmsk) == 20);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_daint) == 24);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_daintmsk) == 28);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dvbusdis) == 40);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dvbuspulse) == 44);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dthrctl) == 48);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepempmsk) == 52);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_deachint) == 56);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_deachintmsk) == 60);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepeachmsk1) == 64);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepeachmsk1) == 128);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl0) == 256);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint0) == 264);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz0) == 272);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepdma1) == 276);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts0) == 280);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl1) == 288);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint1) == 296);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz1) == 304);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepdma2) == 308);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts1) == 312);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl2) == 320);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint2) == 328);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz2) == 336);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepdma3) == 340);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts2) == 344);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl3) == 352);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint3) == 360);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz3) == 368);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepdma4) == 372);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts3) == 376);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl4) == 384);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint4) == 392);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz4) == 400);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepdma5) == 404);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts4) == 408);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl5) == 416);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint5) == 424);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dieptsiz5) == 432);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_dtxfsts5) == 440);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl6) == 448);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint6) == 456);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepctl7) == 480);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_diepint7) == 488);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepctl0) == 768);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint0) == 776);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doeptsiz0) == 784);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepctl1) == 800);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint1) == 808);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doeptsiz1) == 816);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepctl2) == 832);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint2) == 840);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doeptsiz2) == 848);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepctl3) == 864);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint3) == 872);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doeptsiz3) == 880);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint4) == 904);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doeptsiz4) == 912);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint5) == 936);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint6) == 968);
static_assert(offsetof(Otg_hs_deviceRegs, otg_hs_doepint7) == 1000);

inline Otg_hs_deviceRegs& otg_hs_device() { return *reinterpret_cast<Otg_hs_deviceRegs*>(OTG_HS_DEVICE_BASE); }

constexpr RegField otg_hs_device_otg_hs_dcfg_dspd{0x00000003u, 0};
constexpr RegField otg_hs_device_otg_hs_dcfg_nzlsohsk{0x00000004u, 2};
constexpr RegField otg_hs_device_otg_hs_dcfg_dad{0x000007F0u, 4};
constexpr RegField otg_hs_device_otg_hs_dcfg_pfivl{0x00001800u, 11};
constexpr RegField otg_hs_device_otg_hs_dcfg_perschivl{0x03000000u, 24};
constexpr RegField otg_hs_device_otg_hs_dctl_rwusig{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_dctl_sdis{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_dctl_ginsts{0x00000004u, 2};
constexpr RegField otg_hs_device_otg_hs_dctl_gonsts{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_dctl_tctl{0x00000070u, 4};
constexpr RegField otg_hs_device_otg_hs_dctl_sginak{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_dctl_cginak{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_dctl_sgonak{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_dctl_cgonak{0x00000400u, 10};
constexpr RegField otg_hs_device_otg_hs_dctl_poprgdne{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_dsts_suspsts{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_dsts_enumspd{0x00000006u, 1};
constexpr RegField otg_hs_device_otg_hs_dsts_eerr{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_dsts_fnsof{0x003FFF00u, 8};
constexpr RegField otg_hs_device_otg_hs_diepmsk_xfrcm{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepmsk_epdm{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepmsk_tom{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepmsk_ittxfemsk{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepmsk_inepnmm{0x00000020u, 5};
constexpr RegField otg_hs_device_otg_hs_diepmsk_inepnem{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepmsk_txfurm{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepmsk_bim{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_doepmsk_xfrcm{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepmsk_epdm{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepmsk_stupm{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepmsk_otepdm{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepmsk_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepmsk_opem{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_doepmsk_boim{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_daint_iepint{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_daint_oepint{0xFFFF0000u, 16};
constexpr RegField otg_hs_device_otg_hs_daintmsk_iepm{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_daintmsk_oepm{0xFFFF0000u, 16};
constexpr RegField otg_hs_device_otg_hs_dvbusdis_vbusdt{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dvbuspulse_dvbusp{0x00000FFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dthrctl_nonisothren{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_dthrctl_isothren{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_dthrctl_txthrlen{0x000007FCu, 2};
constexpr RegField otg_hs_device_otg_hs_dthrctl_rxthren{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_dthrctl_rxthrlen{0x03FE0000u, 17};
constexpr RegField otg_hs_device_otg_hs_dthrctl_arpen{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepempmsk_ineptxfem{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_deachint_iep1int{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_deachint_oep1int{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_deachintmsk_iep1intm{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_deachintmsk_oep1intm{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_xfrcm{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_epdm{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_tom{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_ittxfemsk{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_inepnmm{0x00000020u, 5};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_inepnem{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_txfurm{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_bim{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepeachmsk1_nakm{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_xfrcm{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_epdm{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_tom{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_ittxfemsk{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_inepnmm{0x00000020u, 5};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_inepnem{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_txfurm{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_bim{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_berrm{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_nakm{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_doepeachmsk1_nyetm{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_diepctl0_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl0_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl0_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl0_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl0_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl0_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl0_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl0_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl0_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl0_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl0_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl0_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl0_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint0_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint0_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint0_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint0_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint0_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint0_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint0_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint0_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint0_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint0_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint0_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz0_xfrsiz{0x0000007Fu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz0_pktcnt{0x00180000u, 19};
constexpr RegField otg_hs_device_otg_hs_diepdma1_dmaaddr{0xFFFFFFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dtxfsts0_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl1_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl1_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl1_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl1_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl1_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl1_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl1_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl1_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl1_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl1_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl1_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl1_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl1_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint1_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint1_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint1_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint1_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint1_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint1_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint1_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint1_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint1_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint1_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint1_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz1_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz1_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_dieptsiz1_mcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepdma2_dmaaddr{0xFFFFFFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dtxfsts1_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl2_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl2_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl2_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl2_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl2_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl2_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl2_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl2_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl2_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl2_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl2_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl2_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl2_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint2_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint2_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint2_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint2_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint2_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint2_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint2_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint2_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint2_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint2_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint2_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz2_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz2_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_dieptsiz2_mcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepdma3_dmaaddr{0xFFFFFFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dtxfsts2_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl3_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl3_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl3_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl3_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl3_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl3_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl3_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl3_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl3_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl3_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl3_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl3_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl3_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint3_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint3_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint3_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint3_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint3_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint3_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint3_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint3_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint3_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint3_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint3_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz3_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz3_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_dieptsiz3_mcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepdma4_dmaaddr{0xFFFFFFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dtxfsts3_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl4_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl4_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl4_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl4_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl4_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl4_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl4_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl4_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl4_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl4_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl4_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl4_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl4_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint4_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint4_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint4_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint4_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint4_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint4_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint4_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint4_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint4_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint4_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint4_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz4_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz4_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_dieptsiz4_mcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepdma5_dmaaddr{0xFFFFFFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dtxfsts4_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl5_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl5_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl5_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl5_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl5_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl5_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl5_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl5_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl5_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl5_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl5_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl5_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl5_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint5_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint5_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint5_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint5_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint5_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint5_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint5_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint5_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint5_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint5_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint5_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_dieptsiz5_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_dieptsiz5_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_dieptsiz5_mcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_dtxfsts5_ineptfsav{0x0000FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl6_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl6_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl6_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl6_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl6_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl6_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl6_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl6_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl6_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl6_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl6_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl6_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl6_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint6_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint6_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint6_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint6_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint6_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint6_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint6_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint6_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint6_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint6_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint6_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_diepctl7_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_diepctl7_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_diepctl7_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_diepctl7_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_diepctl7_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_diepctl7_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_diepctl7_txfnum{0x03C00000u, 22};
constexpr RegField otg_hs_device_otg_hs_diepctl7_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_diepctl7_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_diepctl7_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_diepctl7_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_diepctl7_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_diepctl7_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_diepint7_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_diepint7_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_diepint7_toc{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_diepint7_ittxfe{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_diepint7_inepne{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_diepint7_txfe{0x00000080u, 7};
constexpr RegField otg_hs_device_otg_hs_diepint7_txfifoudrn{0x00000100u, 8};
constexpr RegField otg_hs_device_otg_hs_diepint7_bna{0x00000200u, 9};
constexpr RegField otg_hs_device_otg_hs_diepint7_pktdrpsts{0x00000800u, 11};
constexpr RegField otg_hs_device_otg_hs_diepint7_berr{0x00001000u, 12};
constexpr RegField otg_hs_device_otg_hs_diepint7_nak{0x00002000u, 13};
constexpr RegField otg_hs_device_otg_hs_doepctl0_mpsiz{0x00000003u, 0};
constexpr RegField otg_hs_device_otg_hs_doepctl0_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_doepctl0_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_doepctl0_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_doepctl0_snpm{0x00100000u, 20};
constexpr RegField otg_hs_device_otg_hs_doepctl0_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_doepctl0_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_doepctl0_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_doepctl0_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_doepctl0_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_doepint0_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint0_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint0_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint0_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint0_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint0_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doeptsiz0_xfrsiz{0x0000007Fu, 0};
constexpr RegField otg_hs_device_otg_hs_doeptsiz0_pktcnt{0x00080000u, 19};
constexpr RegField otg_hs_device_otg_hs_doeptsiz0_stupcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl1_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_doepctl1_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_doepctl1_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_doepctl1_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_doepctl1_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_doepctl1_snpm{0x00100000u, 20};
constexpr RegField otg_hs_device_otg_hs_doepctl1_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_doepctl1_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_doepctl1_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_doepctl1_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_doepctl1_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl1_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_doepctl1_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_doepint1_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint1_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint1_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint1_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint1_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint1_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doeptsiz1_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_doeptsiz1_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_doeptsiz1_rxdpid_stupcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl2_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_doepctl2_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_doepctl2_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_doepctl2_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_doepctl2_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_doepctl2_snpm{0x00100000u, 20};
constexpr RegField otg_hs_device_otg_hs_doepctl2_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_doepctl2_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_doepctl2_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_doepctl2_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_doepctl2_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl2_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_doepctl2_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_doepint2_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint2_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint2_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint2_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint2_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint2_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doeptsiz2_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_doeptsiz2_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_doeptsiz2_rxdpid_stupcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl3_mpsiz{0x000007FFu, 0};
constexpr RegField otg_hs_device_otg_hs_doepctl3_usbaep{0x00008000u, 15};
constexpr RegField otg_hs_device_otg_hs_doepctl3_eonum_dpid{0x00010000u, 16};
constexpr RegField otg_hs_device_otg_hs_doepctl3_naksts{0x00020000u, 17};
constexpr RegField otg_hs_device_otg_hs_doepctl3_eptyp{0x000C0000u, 18};
constexpr RegField otg_hs_device_otg_hs_doepctl3_snpm{0x00100000u, 20};
constexpr RegField otg_hs_device_otg_hs_doepctl3_stall{0x00200000u, 21};
constexpr RegField otg_hs_device_otg_hs_doepctl3_cnak{0x04000000u, 26};
constexpr RegField otg_hs_device_otg_hs_doepctl3_snak{0x08000000u, 27};
constexpr RegField otg_hs_device_otg_hs_doepctl3_sd0pid_sevnfrm{0x10000000u, 28};
constexpr RegField otg_hs_device_otg_hs_doepctl3_soddfrm{0x20000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepctl3_epdis{0x40000000u, 30};
constexpr RegField otg_hs_device_otg_hs_doepctl3_epena{0x80000000u, 31};
constexpr RegField otg_hs_device_otg_hs_doepint3_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint3_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint3_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint3_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint3_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint3_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doeptsiz3_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_doeptsiz3_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_doeptsiz3_rxdpid_stupcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepint4_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint4_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint4_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint4_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint4_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint4_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doeptsiz4_xfrsiz{0x0007FFFFu, 0};
constexpr RegField otg_hs_device_otg_hs_doeptsiz4_pktcnt{0x1FF80000u, 19};
constexpr RegField otg_hs_device_otg_hs_doeptsiz4_rxdpid_stupcnt{0x60000000u, 29};
constexpr RegField otg_hs_device_otg_hs_doepint5_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint5_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint5_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint5_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint5_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint5_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doepint6_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint6_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint6_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint6_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint6_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint6_nyet{0x00004000u, 14};
constexpr RegField otg_hs_device_otg_hs_doepint7_xfrc{0x00000001u, 0};
constexpr RegField otg_hs_device_otg_hs_doepint7_epdisd{0x00000002u, 1};
constexpr RegField otg_hs_device_otg_hs_doepint7_stup{0x00000008u, 3};
constexpr RegField otg_hs_device_otg_hs_doepint7_otepdis{0x00000010u, 4};
constexpr RegField otg_hs_device_otg_hs_doepint7_b2bstup{0x00000040u, 6};
constexpr RegField otg_hs_device_otg_hs_doepint7_nyet{0x00004000u, 14};

#endif // OTG_HS_DEVICE_HPP