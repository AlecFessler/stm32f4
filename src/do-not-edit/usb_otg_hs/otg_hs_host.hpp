// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go high speed
#ifndef STM32_OTG_HS_HOST_HPP
#define STM32_OTG_HS_HOST_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t OTG_HS_HOST_BASE = 0x40040400;
struct Otg_hs_hostRegs {
    volatile uint32_t otg_hs_hcfg; // OTG_HS host configuration register
    volatile uint32_t otg_hs_hfir; // OTG_HS Host frame interval register
    volatile uint32_t otg_hs_hfnum; // OTG_HS host frame number/frame time remaining register
    uint32_t _reserved0[1];
    volatile uint32_t otg_hs_hptxsts; // OTG_HS_Host periodic transmit FIFO/queue status register
    volatile uint32_t otg_hs_haint; // OTG_HS Host all channels interrupt register
    volatile uint32_t otg_hs_haintmsk; // OTG_HS host all channels interrupt mask register
    uint32_t _reserved1[9];
    volatile uint32_t otg_hs_hprt; // OTG_HS host port control and status register
    uint32_t _reserved2[47];
    volatile uint32_t otg_hs_hcchar0; // OTG_HS host channel-0 characteristics register
    volatile uint32_t otg_hs_hcsplt0; // OTG_HS host channel-0 split control register
    volatile uint32_t otg_hs_hcint0; // OTG_HS host channel-11 interrupt register
    volatile uint32_t otg_hs_hcintmsk0; // OTG_HS host channel-11 interrupt mask register
    volatile uint32_t otg_hs_hctsiz0; // OTG_HS host channel-11 transfer size register
    volatile uint32_t otg_hs_hcdma0; // OTG_HS host channel-0 DMA address register
    uint32_t _reserved3[2];
    volatile uint32_t otg_hs_hcchar1; // OTG_HS host channel-1 characteristics register
    volatile uint32_t otg_hs_hcsplt1; // OTG_HS host channel-1 split control register
    volatile uint32_t otg_hs_hcint1; // OTG_HS host channel-1 interrupt register
    volatile uint32_t otg_hs_hcintmsk1; // OTG_HS host channel-1 interrupt mask register
    volatile uint32_t otg_hs_hctsiz1; // OTG_HS host channel-1 transfer size register
    volatile uint32_t otg_hs_hcdma1; // OTG_HS host channel-1 DMA address register
    uint32_t _reserved4[2];
    volatile uint32_t otg_hs_hcchar2; // OTG_HS host channel-2 characteristics register
    volatile uint32_t otg_hs_hcsplt2; // OTG_HS host channel-2 split control register
    volatile uint32_t otg_hs_hcint2; // OTG_HS host channel-2 interrupt register
    volatile uint32_t otg_hs_hcintmsk2; // OTG_HS host channel-2 interrupt mask register
    volatile uint32_t otg_hs_hctsiz2; // OTG_HS host channel-2 transfer size register
    volatile uint32_t otg_hs_hcdma2; // OTG_HS host channel-2 DMA address register
    uint32_t _reserved5[2];
    volatile uint32_t otg_hs_hcchar3; // OTG_HS host channel-3 characteristics register
    volatile uint32_t otg_hs_hcsplt3; // OTG_HS host channel-3 split control register
    volatile uint32_t otg_hs_hcint3; // OTG_HS host channel-3 interrupt register
    volatile uint32_t otg_hs_hcintmsk3; // OTG_HS host channel-3 interrupt mask register
    volatile uint32_t otg_hs_hctsiz3; // OTG_HS host channel-3 transfer size register
    volatile uint32_t otg_hs_hcdma3; // OTG_HS host channel-3 DMA address register
    uint32_t _reserved6[2];
    volatile uint32_t otg_hs_hcchar4; // OTG_HS host channel-4 characteristics register
    volatile uint32_t otg_hs_hcsplt4; // OTG_HS host channel-4 split control register
    volatile uint32_t otg_hs_hcint4; // OTG_HS host channel-4 interrupt register
    volatile uint32_t otg_hs_hcintmsk4; // OTG_HS host channel-4 interrupt mask register
    volatile uint32_t otg_hs_hctsiz4; // OTG_HS host channel-4 transfer size register
    volatile uint32_t otg_hs_hcdma4; // OTG_HS host channel-4 DMA address register
    uint32_t _reserved7[2];
    volatile uint32_t otg_hs_hcchar5; // OTG_HS host channel-5 characteristics register
    volatile uint32_t otg_hs_hcsplt5; // OTG_HS host channel-5 split control register
    volatile uint32_t otg_hs_hcint5; // OTG_HS host channel-5 interrupt register
    volatile uint32_t otg_hs_hcintmsk5; // OTG_HS host channel-5 interrupt mask register
    volatile uint32_t otg_hs_hctsiz5; // OTG_HS host channel-5 transfer size register
    volatile uint32_t otg_hs_hcdma5; // OTG_HS host channel-5 DMA address register
    uint32_t _reserved8[2];
    volatile uint32_t otg_hs_hcchar6; // OTG_HS host channel-6 characteristics register
    volatile uint32_t otg_hs_hcsplt6; // OTG_HS host channel-6 split control register
    volatile uint32_t otg_hs_hcint6; // OTG_HS host channel-6 interrupt register
    volatile uint32_t otg_hs_hcintmsk6; // OTG_HS host channel-6 interrupt mask register
    volatile uint32_t otg_hs_hctsiz6; // OTG_HS host channel-6 transfer size register
    volatile uint32_t otg_hs_hcdma6; // OTG_HS host channel-6 DMA address register
    uint32_t _reserved9[2];
    volatile uint32_t otg_hs_hcchar7; // OTG_HS host channel-7 characteristics register
    volatile uint32_t otg_hs_hcsplt7; // OTG_HS host channel-7 split control register
    volatile uint32_t otg_hs_hcint7; // OTG_HS host channel-7 interrupt register
    volatile uint32_t otg_hs_hcintmsk7; // OTG_HS host channel-7 interrupt mask register
    volatile uint32_t otg_hs_hctsiz7; // OTG_HS host channel-7 transfer size register
    volatile uint32_t otg_hs_hcdma7; // OTG_HS host channel-7 DMA address register
    uint32_t _reserved10[2];
    volatile uint32_t otg_hs_hcchar8; // OTG_HS host channel-8 characteristics register
    volatile uint32_t otg_hs_hcsplt8; // OTG_HS host channel-8 split control register
    volatile uint32_t otg_hs_hcint8; // OTG_HS host channel-8 interrupt register
    volatile uint32_t otg_hs_hcintmsk8; // OTG_HS host channel-8 interrupt mask register
    volatile uint32_t otg_hs_hctsiz8; // OTG_HS host channel-8 transfer size register
    volatile uint32_t otg_hs_hcdma8; // OTG_HS host channel-8 DMA address register
    uint32_t _reserved11[2];
    volatile uint32_t otg_hs_hcchar9; // OTG_HS host channel-9 characteristics register
    volatile uint32_t otg_hs_hcsplt9; // OTG_HS host channel-9 split control register
    volatile uint32_t otg_hs_hcint9; // OTG_HS host channel-9 interrupt register
    volatile uint32_t otg_hs_hcintmsk9; // OTG_HS host channel-9 interrupt mask register
    volatile uint32_t otg_hs_hctsiz9; // OTG_HS host channel-9 transfer size register
    volatile uint32_t otg_hs_hcdma9; // OTG_HS host channel-9 DMA address register
    uint32_t _reserved12[2];
    volatile uint32_t otg_hs_hcchar10; // OTG_HS host channel-10 characteristics register
    volatile uint32_t otg_hs_hcsplt10; // OTG_HS host channel-10 split control register
    volatile uint32_t otg_hs_hcint10; // OTG_HS host channel-10 interrupt register
    volatile uint32_t otg_hs_hcintmsk10; // OTG_HS host channel-10 interrupt mask register
    volatile uint32_t otg_hs_hctsiz10; // OTG_HS host channel-10 transfer size register
    volatile uint32_t otg_hs_hcdma10; // OTG_HS host channel-10 DMA address register
    uint32_t _reserved13[2];
    volatile uint32_t otg_hs_hcchar11; // OTG_HS host channel-11 characteristics register
    volatile uint32_t otg_hs_hcsplt11; // OTG_HS host channel-11 split control register
    volatile uint32_t otg_hs_hcint11; // OTG_HS host channel-11 interrupt register
    volatile uint32_t otg_hs_hcintmsk11; // OTG_HS host channel-11 interrupt mask register
    volatile uint32_t otg_hs_hctsiz11; // OTG_HS host channel-11 transfer size register
    volatile uint32_t otg_hs_hcdma11; // OTG_HS host channel-11 DMA address register
};
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcfg) == 0);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hfir) == 4);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hfnum) == 8);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hptxsts) == 16);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_haint) == 20);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_haintmsk) == 24);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hprt) == 64);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar0) == 256);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt0) == 260);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint0) == 264);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk0) == 268);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz0) == 272);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma0) == 276);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar1) == 288);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt1) == 292);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint1) == 296);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk1) == 300);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz1) == 304);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma1) == 308);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar2) == 320);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt2) == 324);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint2) == 328);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk2) == 332);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz2) == 336);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma2) == 340);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar3) == 352);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt3) == 356);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint3) == 360);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk3) == 364);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz3) == 368);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma3) == 372);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar4) == 384);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt4) == 388);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint4) == 392);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk4) == 396);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz4) == 400);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma4) == 404);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar5) == 416);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt5) == 420);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint5) == 424);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk5) == 428);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz5) == 432);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma5) == 436);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar6) == 448);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt6) == 452);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint6) == 456);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk6) == 460);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz6) == 464);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma6) == 468);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar7) == 480);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt7) == 484);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint7) == 488);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk7) == 492);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz7) == 496);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma7) == 500);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar8) == 512);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt8) == 516);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint8) == 520);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk8) == 524);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz8) == 528);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma8) == 532);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar9) == 544);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt9) == 548);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint9) == 552);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk9) == 556);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz9) == 560);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma9) == 564);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar10) == 576);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt10) == 580);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint10) == 584);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk10) == 588);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz10) == 592);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma10) == 596);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcchar11) == 608);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcsplt11) == 612);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcint11) == 616);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcintmsk11) == 620);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hctsiz11) == 624);
static_assert(offsetof(Otg_hs_hostRegs, otg_hs_hcdma11) == 628);

constexpr Field<Access::RW> otg_hs_host_otg_hs_hcfg_fslspcs{0x40040400u, 0x00000003u, 0};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hcfg_fslss{0x40040400u, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hfir_frivl{0x40040404u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hfnum_frnum{0x40040408u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hfnum_ftrem{0x40040408u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hptxsts_ptxfsavl{0x40040410u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hptxsts_ptxqsav{0x40040410u, 0x00FF0000u, 16};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hptxsts_ptxqtop{0x40040410u, 0xFF000000u, 24};
constexpr Field<Access::RO> otg_hs_host_otg_hs_haint_haint{0x40040414u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_haintmsk_haintm{0x40040418u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hprt_pcsts{0x40040440u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_pcdet{0x40040440u, 0x00000002u, 1};
constexpr Field<Access::RC_W0, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_pena{0x40040440u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_penchng{0x40040440u, 0x00000008u, 3};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hprt_poca{0x40040440u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_pocchng{0x40040440u, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_pres{0x40040440u, 0x00000040u, 6};
constexpr Field<Access::RW, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_psusp{0x40040440u, 0x00000080u, 7};
constexpr Field<Access::RW, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_prst{0x40040440u, 0x00000100u, 8};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hprt_plsts{0x40040440u, 0x00000C00u, 10};
constexpr Field<Access::RW, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_ppwr{0x40040440u, 0x00001000u, 12};
constexpr Field<Access::RW, uint32_t, 0x0000002Au, 0x00000004u, true> otg_hs_host_otg_hs_hprt_ptctl{0x40040440u, 0x0001E000u, 13};
constexpr Field<Access::RO> otg_hs_host_otg_hs_hprt_pspd{0x40040440u, 0x00060000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_mpsiz{0x40040500u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_epnum{0x40040500u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_epdir{0x40040500u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_lsdev{0x40040500u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_eptyp{0x40040500u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_mc{0x40040500u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_dad{0x40040500u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_oddfrm{0x40040500u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_chdis{0x40040500u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar0_chena{0x40040500u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt0_prtaddr{0x40040504u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt0_hubaddr{0x40040504u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt0_xactpos{0x40040504u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt0_complsplt{0x40040504u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt0_spliten{0x40040504u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_xfrc{0x40040508u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_chh{0x40040508u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_ahberr{0x40040508u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_stall{0x40040508u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_nak{0x40040508u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_ack{0x40040508u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_nyet{0x40040508u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_txerr{0x40040508u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_bberr{0x40040508u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_frmor{0x40040508u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint0_dterr{0x40040508u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_xfrcm{0x4004050Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_chhm{0x4004050Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_ahberr{0x4004050Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_stallm{0x4004050Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_nakm{0x4004050Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_ackm{0x4004050Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_nyet{0x4004050Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_txerrm{0x4004050Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_bberrm{0x4004050Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_frmorm{0x4004050Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk0_dterrm{0x4004050Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz0_xfrsiz{0x40040510u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz0_pktcnt{0x40040510u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz0_dpid{0x40040510u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma0_dmaaddr{0x40040514u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_mpsiz{0x40040520u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_epnum{0x40040520u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_epdir{0x40040520u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_lsdev{0x40040520u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_eptyp{0x40040520u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_mc{0x40040520u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_dad{0x40040520u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_oddfrm{0x40040520u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_chdis{0x40040520u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar1_chena{0x40040520u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt1_prtaddr{0x40040524u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt1_hubaddr{0x40040524u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt1_xactpos{0x40040524u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt1_complsplt{0x40040524u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt1_spliten{0x40040524u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_xfrc{0x40040528u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_chh{0x40040528u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_ahberr{0x40040528u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_stall{0x40040528u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_nak{0x40040528u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_ack{0x40040528u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_nyet{0x40040528u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_txerr{0x40040528u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_bberr{0x40040528u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_frmor{0x40040528u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint1_dterr{0x40040528u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_xfrcm{0x4004052Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_chhm{0x4004052Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_ahberr{0x4004052Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_stallm{0x4004052Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_nakm{0x4004052Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_ackm{0x4004052Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_nyet{0x4004052Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_txerrm{0x4004052Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_bberrm{0x4004052Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_frmorm{0x4004052Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk1_dterrm{0x4004052Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz1_xfrsiz{0x40040530u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz1_pktcnt{0x40040530u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz1_dpid{0x40040530u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma1_dmaaddr{0x40040534u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_mpsiz{0x40040540u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_epnum{0x40040540u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_epdir{0x40040540u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_lsdev{0x40040540u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_eptyp{0x40040540u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_mc{0x40040540u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_dad{0x40040540u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_oddfrm{0x40040540u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_chdis{0x40040540u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar2_chena{0x40040540u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt2_prtaddr{0x40040544u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt2_hubaddr{0x40040544u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt2_xactpos{0x40040544u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt2_complsplt{0x40040544u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt2_spliten{0x40040544u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_xfrc{0x40040548u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_chh{0x40040548u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_ahberr{0x40040548u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_stall{0x40040548u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_nak{0x40040548u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_ack{0x40040548u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_nyet{0x40040548u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_txerr{0x40040548u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_bberr{0x40040548u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_frmor{0x40040548u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint2_dterr{0x40040548u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_xfrcm{0x4004054Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_chhm{0x4004054Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_ahberr{0x4004054Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_stallm{0x4004054Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_nakm{0x4004054Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_ackm{0x4004054Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_nyet{0x4004054Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_txerrm{0x4004054Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_bberrm{0x4004054Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_frmorm{0x4004054Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk2_dterrm{0x4004054Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz2_xfrsiz{0x40040550u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz2_pktcnt{0x40040550u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz2_dpid{0x40040550u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma2_dmaaddr{0x40040554u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_mpsiz{0x40040560u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_epnum{0x40040560u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_epdir{0x40040560u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_lsdev{0x40040560u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_eptyp{0x40040560u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_mc{0x40040560u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_dad{0x40040560u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_oddfrm{0x40040560u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_chdis{0x40040560u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar3_chena{0x40040560u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt3_prtaddr{0x40040564u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt3_hubaddr{0x40040564u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt3_xactpos{0x40040564u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt3_complsplt{0x40040564u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt3_spliten{0x40040564u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_xfrc{0x40040568u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_chh{0x40040568u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_ahberr{0x40040568u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_stall{0x40040568u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_nak{0x40040568u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_ack{0x40040568u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_nyet{0x40040568u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_txerr{0x40040568u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_bberr{0x40040568u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_frmor{0x40040568u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint3_dterr{0x40040568u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_xfrcm{0x4004056Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_chhm{0x4004056Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_ahberr{0x4004056Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_stallm{0x4004056Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_nakm{0x4004056Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_ackm{0x4004056Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_nyet{0x4004056Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_txerrm{0x4004056Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_bberrm{0x4004056Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_frmorm{0x4004056Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk3_dterrm{0x4004056Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz3_xfrsiz{0x40040570u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz3_pktcnt{0x40040570u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz3_dpid{0x40040570u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma3_dmaaddr{0x40040574u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_mpsiz{0x40040580u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_epnum{0x40040580u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_epdir{0x40040580u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_lsdev{0x40040580u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_eptyp{0x40040580u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_mc{0x40040580u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_dad{0x40040580u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_oddfrm{0x40040580u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_chdis{0x40040580u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar4_chena{0x40040580u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt4_prtaddr{0x40040584u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt4_hubaddr{0x40040584u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt4_xactpos{0x40040584u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt4_complsplt{0x40040584u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt4_spliten{0x40040584u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_xfrc{0x40040588u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_chh{0x40040588u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_ahberr{0x40040588u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_stall{0x40040588u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_nak{0x40040588u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_ack{0x40040588u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_nyet{0x40040588u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_txerr{0x40040588u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_bberr{0x40040588u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_frmor{0x40040588u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint4_dterr{0x40040588u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_xfrcm{0x4004058Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_chhm{0x4004058Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_ahberr{0x4004058Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_stallm{0x4004058Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_nakm{0x4004058Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_ackm{0x4004058Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_nyet{0x4004058Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_txerrm{0x4004058Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_bberrm{0x4004058Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_frmorm{0x4004058Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk4_dterrm{0x4004058Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz4_xfrsiz{0x40040590u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz4_pktcnt{0x40040590u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz4_dpid{0x40040590u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma4_dmaaddr{0x40040594u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_mpsiz{0x400405A0u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_epnum{0x400405A0u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_epdir{0x400405A0u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_lsdev{0x400405A0u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_eptyp{0x400405A0u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_mc{0x400405A0u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_dad{0x400405A0u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_oddfrm{0x400405A0u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_chdis{0x400405A0u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar5_chena{0x400405A0u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt5_prtaddr{0x400405A4u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt5_hubaddr{0x400405A4u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt5_xactpos{0x400405A4u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt5_complsplt{0x400405A4u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt5_spliten{0x400405A4u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_xfrc{0x400405A8u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_chh{0x400405A8u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_ahberr{0x400405A8u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_stall{0x400405A8u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_nak{0x400405A8u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_ack{0x400405A8u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_nyet{0x400405A8u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_txerr{0x400405A8u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_bberr{0x400405A8u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_frmor{0x400405A8u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint5_dterr{0x400405A8u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_xfrcm{0x400405ACu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_chhm{0x400405ACu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_ahberr{0x400405ACu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_stallm{0x400405ACu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_nakm{0x400405ACu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_ackm{0x400405ACu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_nyet{0x400405ACu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_txerrm{0x400405ACu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_bberrm{0x400405ACu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_frmorm{0x400405ACu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk5_dterrm{0x400405ACu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz5_xfrsiz{0x400405B0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz5_pktcnt{0x400405B0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz5_dpid{0x400405B0u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma5_dmaaddr{0x400405B4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_mpsiz{0x400405C0u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_epnum{0x400405C0u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_epdir{0x400405C0u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_lsdev{0x400405C0u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_eptyp{0x400405C0u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_mc{0x400405C0u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_dad{0x400405C0u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_oddfrm{0x400405C0u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_chdis{0x400405C0u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar6_chena{0x400405C0u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt6_prtaddr{0x400405C4u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt6_hubaddr{0x400405C4u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt6_xactpos{0x400405C4u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt6_complsplt{0x400405C4u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt6_spliten{0x400405C4u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_xfrc{0x400405C8u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_chh{0x400405C8u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_ahberr{0x400405C8u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_stall{0x400405C8u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_nak{0x400405C8u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_ack{0x400405C8u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_nyet{0x400405C8u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_txerr{0x400405C8u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_bberr{0x400405C8u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_frmor{0x400405C8u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint6_dterr{0x400405C8u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_xfrcm{0x400405CCu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_chhm{0x400405CCu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_ahberr{0x400405CCu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_stallm{0x400405CCu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_nakm{0x400405CCu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_ackm{0x400405CCu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_nyet{0x400405CCu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_txerrm{0x400405CCu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_bberrm{0x400405CCu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_frmorm{0x400405CCu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk6_dterrm{0x400405CCu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz6_xfrsiz{0x400405D0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz6_pktcnt{0x400405D0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz6_dpid{0x400405D0u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma6_dmaaddr{0x400405D4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_mpsiz{0x400405E0u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_epnum{0x400405E0u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_epdir{0x400405E0u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_lsdev{0x400405E0u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_eptyp{0x400405E0u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_mc{0x400405E0u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_dad{0x400405E0u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_oddfrm{0x400405E0u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_chdis{0x400405E0u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar7_chena{0x400405E0u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt7_prtaddr{0x400405E4u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt7_hubaddr{0x400405E4u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt7_xactpos{0x400405E4u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt7_complsplt{0x400405E4u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt7_spliten{0x400405E4u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_xfrc{0x400405E8u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_chh{0x400405E8u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_ahberr{0x400405E8u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_stall{0x400405E8u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_nak{0x400405E8u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_ack{0x400405E8u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_nyet{0x400405E8u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_txerr{0x400405E8u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_bberr{0x400405E8u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_frmor{0x400405E8u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint7_dterr{0x400405E8u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_xfrcm{0x400405ECu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_chhm{0x400405ECu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_ahberr{0x400405ECu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_stallm{0x400405ECu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_nakm{0x400405ECu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_ackm{0x400405ECu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_nyet{0x400405ECu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_txerrm{0x400405ECu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_bberrm{0x400405ECu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_frmorm{0x400405ECu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk7_dterrm{0x400405ECu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz7_xfrsiz{0x400405F0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz7_pktcnt{0x400405F0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz7_dpid{0x400405F0u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma7_dmaaddr{0x400405F4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_mpsiz{0x40040600u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_epnum{0x40040600u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_epdir{0x40040600u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_lsdev{0x40040600u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_eptyp{0x40040600u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_mc{0x40040600u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_dad{0x40040600u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_oddfrm{0x40040600u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_chdis{0x40040600u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar8_chena{0x40040600u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt8_prtaddr{0x40040604u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt8_hubaddr{0x40040604u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt8_xactpos{0x40040604u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt8_complsplt{0x40040604u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt8_spliten{0x40040604u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_xfrc{0x40040608u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_chh{0x40040608u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_ahberr{0x40040608u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_stall{0x40040608u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_nak{0x40040608u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_ack{0x40040608u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_nyet{0x40040608u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_txerr{0x40040608u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_bberr{0x40040608u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_frmor{0x40040608u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint8_dterr{0x40040608u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_xfrcm{0x4004060Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_chhm{0x4004060Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_ahberr{0x4004060Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_stallm{0x4004060Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_nakm{0x4004060Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_ackm{0x4004060Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_nyet{0x4004060Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_txerrm{0x4004060Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_bberrm{0x4004060Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_frmorm{0x4004060Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk8_dterrm{0x4004060Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz8_xfrsiz{0x40040610u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz8_pktcnt{0x40040610u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz8_dpid{0x40040610u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma8_dmaaddr{0x40040614u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_mpsiz{0x40040620u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_epnum{0x40040620u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_epdir{0x40040620u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_lsdev{0x40040620u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_eptyp{0x40040620u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_mc{0x40040620u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_dad{0x40040620u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_oddfrm{0x40040620u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_chdis{0x40040620u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar9_chena{0x40040620u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt9_prtaddr{0x40040624u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt9_hubaddr{0x40040624u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt9_xactpos{0x40040624u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt9_complsplt{0x40040624u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt9_spliten{0x40040624u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_xfrc{0x40040628u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_chh{0x40040628u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_ahberr{0x40040628u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_stall{0x40040628u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_nak{0x40040628u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_ack{0x40040628u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_nyet{0x40040628u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_txerr{0x40040628u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_bberr{0x40040628u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_frmor{0x40040628u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint9_dterr{0x40040628u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_xfrcm{0x4004062Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_chhm{0x4004062Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_ahberr{0x4004062Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_stallm{0x4004062Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_nakm{0x4004062Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_ackm{0x4004062Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_nyet{0x4004062Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_txerrm{0x4004062Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_bberrm{0x4004062Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_frmorm{0x4004062Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk9_dterrm{0x4004062Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz9_xfrsiz{0x40040630u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz9_pktcnt{0x40040630u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz9_dpid{0x40040630u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma9_dmaaddr{0x40040634u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_mpsiz{0x40040640u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_epnum{0x40040640u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_epdir{0x40040640u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_lsdev{0x40040640u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_eptyp{0x40040640u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_mc{0x40040640u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_dad{0x40040640u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_oddfrm{0x40040640u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_chdis{0x40040640u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar10_chena{0x40040640u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt10_prtaddr{0x40040644u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt10_hubaddr{0x40040644u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt10_xactpos{0x40040644u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt10_complsplt{0x40040644u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt10_spliten{0x40040644u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_xfrc{0x40040648u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_chh{0x40040648u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_ahberr{0x40040648u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_stall{0x40040648u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_nak{0x40040648u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_ack{0x40040648u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_nyet{0x40040648u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_txerr{0x40040648u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_bberr{0x40040648u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_frmor{0x40040648u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint10_dterr{0x40040648u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_xfrcm{0x4004064Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_chhm{0x4004064Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_ahberr{0x4004064Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_stallm{0x4004064Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_nakm{0x4004064Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_ackm{0x4004064Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_nyet{0x4004064Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_txerrm{0x4004064Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_bberrm{0x4004064Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_frmorm{0x4004064Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk10_dterrm{0x4004064Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz10_xfrsiz{0x40040650u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz10_pktcnt{0x40040650u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz10_dpid{0x40040650u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma10_dmaaddr{0x40040654u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_mpsiz{0x40040660u, 0x000007FFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_epnum{0x40040660u, 0x00007800u, 11};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_epdir{0x40040660u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_lsdev{0x40040660u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_eptyp{0x40040660u, 0x000C0000u, 18};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_mc{0x40040660u, 0x00300000u, 20};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_dad{0x40040660u, 0x1FC00000u, 22};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_oddfrm{0x40040660u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_chdis{0x40040660u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcchar11_chena{0x40040660u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt11_prtaddr{0x40040664u, 0x0000007Fu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt11_hubaddr{0x40040664u, 0x00003F80u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt11_xactpos{0x40040664u, 0x0000C000u, 14};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt11_complsplt{0x40040664u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcsplt11_spliten{0x40040664u, 0x80000000u, 31};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_xfrc{0x40040668u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_chh{0x40040668u, 0x00000002u, 1};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_ahberr{0x40040668u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_stall{0x40040668u, 0x00000008u, 3};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_nak{0x40040668u, 0x00000010u, 4};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_ack{0x40040668u, 0x00000020u, 5};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_nyet{0x40040668u, 0x00000040u, 6};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_txerr{0x40040668u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_bberr{0x40040668u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_frmor{0x40040668u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000007FFu, 0x00000000u, false> otg_hs_host_otg_hs_hcint11_dterr{0x40040668u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_xfrcm{0x4004066Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_chhm{0x4004066Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_ahberr{0x4004066Cu, 0x00000004u, 2};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_stallm{0x4004066Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_nakm{0x4004066Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_ackm{0x4004066Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_nyet{0x4004066Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_txerrm{0x4004066Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_bberrm{0x4004066Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_frmorm{0x4004066Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcintmsk11_dterrm{0x4004066Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz11_xfrsiz{0x40040670u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz11_pktcnt{0x40040670u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hctsiz11_dpid{0x40040670u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_hs_host_otg_hs_hcdma11_dmaaddr{0x40040674u, 0xFFFFFFFFu, 0};

#endif // STM32_OTG_HS_HOST_HPP
