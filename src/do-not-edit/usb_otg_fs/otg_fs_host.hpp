// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go full speed
#ifndef STM32_OTG_FS_HOST_HPP
#define STM32_OTG_FS_HOST_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t OTG_FS_HOST_BASE = 0x50000400;
struct Otg_fs_hostRegs {
    volatile uint32_t fs_hcfg; // OTG_FS host configuration register (OTG_FS_HCFG)
    volatile uint32_t hfir; // OTG_FS Host frame interval register
    volatile uint32_t fs_hfnum; // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
    uint32_t _reserved0[1];
    volatile uint32_t fs_hptxsts; // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
    volatile uint32_t haint; // OTG_FS Host all channels interrupt register
    volatile uint32_t haintmsk; // OTG_FS host all channels interrupt mask register
    uint32_t _reserved1[9];
    volatile uint32_t fs_hprt; // OTG_FS host port control and status register (OTG_FS_HPRT)
    uint32_t _reserved2[47];
    volatile uint32_t fs_hcchar0; // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
    uint32_t _reserved3[1];
    volatile uint32_t fs_hcint0; // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
    volatile uint32_t fs_hcintmsk0; // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
    volatile uint32_t fs_hctsiz0; // OTG_FS host channel-0 transfer size register
    uint32_t _reserved4[3];
    volatile uint32_t fs_hcchar1; // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
    uint32_t _reserved5[1];
    volatile uint32_t fs_hcint1; // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
    volatile uint32_t fs_hcintmsk1; // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
    volatile uint32_t fs_hctsiz1; // OTG_FS host channel-1 transfer size register
    uint32_t _reserved6[3];
    volatile uint32_t fs_hcchar2; // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
    uint32_t _reserved7[1];
    volatile uint32_t fs_hcint2; // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
    volatile uint32_t fs_hcintmsk2; // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
    volatile uint32_t fs_hctsiz2; // OTG_FS host channel-2 transfer size register
    uint32_t _reserved8[3];
    volatile uint32_t fs_hcchar3; // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
    uint32_t _reserved9[1];
    volatile uint32_t fs_hcint3; // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
    volatile uint32_t fs_hcintmsk3; // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
    volatile uint32_t fs_hctsiz3; // OTG_FS host channel-3 transfer size register
    uint32_t _reserved10[3];
    volatile uint32_t fs_hcchar4; // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
    uint32_t _reserved11[1];
    volatile uint32_t fs_hcint4; // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
    volatile uint32_t fs_hcintmsk4; // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
    volatile uint32_t fs_hctsiz4; // OTG_FS host channel-x transfer size register
    uint32_t _reserved12[3];
    volatile uint32_t fs_hcchar5; // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
    uint32_t _reserved13[1];
    volatile uint32_t fs_hcint5; // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
    volatile uint32_t fs_hcintmsk5; // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
    volatile uint32_t fs_hctsiz5; // OTG_FS host channel-5 transfer size register
    uint32_t _reserved14[3];
    volatile uint32_t fs_hcchar6; // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
    uint32_t _reserved15[1];
    volatile uint32_t fs_hcint6; // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
    volatile uint32_t fs_hcintmsk6; // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
    volatile uint32_t fs_hctsiz6; // OTG_FS host channel-6 transfer size register
    uint32_t _reserved16[3];
    volatile uint32_t fs_hcchar7; // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
    uint32_t _reserved17[1];
    volatile uint32_t fs_hcint7; // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
    volatile uint32_t fs_hcintmsk7; // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
    volatile uint32_t fs_hctsiz7; // OTG_FS host channel-7 transfer size register
};
static_assert(offsetof(Otg_fs_hostRegs, fs_hcfg) == 0);
static_assert(offsetof(Otg_fs_hostRegs, hfir) == 4);
static_assert(offsetof(Otg_fs_hostRegs, fs_hfnum) == 8);
static_assert(offsetof(Otg_fs_hostRegs, fs_hptxsts) == 16);
static_assert(offsetof(Otg_fs_hostRegs, haint) == 20);
static_assert(offsetof(Otg_fs_hostRegs, haintmsk) == 24);
static_assert(offsetof(Otg_fs_hostRegs, fs_hprt) == 64);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar0) == 256);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint0) == 264);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk0) == 268);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz0) == 272);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar1) == 288);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint1) == 296);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk1) == 300);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz1) == 304);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar2) == 320);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint2) == 328);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk2) == 332);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz2) == 336);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar3) == 352);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint3) == 360);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk3) == 364);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz3) == 368);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar4) == 384);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint4) == 392);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk4) == 396);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz4) == 400);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar5) == 416);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint5) == 424);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk5) == 428);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz5) == 432);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar6) == 448);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint6) == 456);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk6) == 460);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz6) == 464);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcchar7) == 480);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcint7) == 488);
static_assert(offsetof(Otg_fs_hostRegs, fs_hcintmsk7) == 492);
static_assert(offsetof(Otg_fs_hostRegs, fs_hctsiz7) == 496);

constexpr Field<Access::RW, uint32_t, false, false> otg_fs_host_fs_hcfg_fslspcs{0x50000400u, 0x00000003u, 0};
constexpr Field<Access::RO> otg_fs_host_fs_hcfg_fslss{0x50000400u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_host_hfir_frivl{0x50000404u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_host_fs_hfnum_frnum{0x50000408u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_host_fs_hfnum_ftrem{0x50000408u, 0xFFFF0000u, 16};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_host_fs_hptxsts_ptxfsavl{0x50000410u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_host_fs_hptxsts_ptxqsav{0x50000410u, 0x00FF0000u, 16};
constexpr Field<Access::RO> otg_fs_host_fs_hptxsts_ptxqtop{0x50000410u, 0xFF000000u, 24};
constexpr Field<Access::RO> otg_fs_host_haint_haint{0x50000414u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_host_haintmsk_haintm{0x50000418u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_host_fs_hprt_pcsts{0x50000440u, 0x00000001u, 0};
constexpr Field<Access::RC_W1> otg_fs_host_fs_hprt_pcdet{0x50000440u, 0x00000002u, 1, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RC_W0> otg_fs_host_fs_hprt_pena{0x50000440u, 0x00000004u, 2, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RC_W1> otg_fs_host_fs_hprt_penchng{0x50000440u, 0x00000008u, 3, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RO> otg_fs_host_fs_hprt_poca{0x50000440u, 0x00000010u, 4};
constexpr Field<Access::RC_W1> otg_fs_host_fs_hprt_pocchng{0x50000440u, 0x00000020u, 5, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RW> otg_fs_host_fs_hprt_pres{0x50000440u, 0x00000040u, 6, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RS> otg_fs_host_fs_hprt_psusp{0x50000440u, 0x00000080u, 7, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RW> otg_fs_host_fs_hprt_prst{0x50000440u, 0x00000100u, 8, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RO> otg_fs_host_fs_hprt_plsts{0x50000440u, 0x00000C00u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hprt_ppwr{0x50000440u, 0x00001000u, 12, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RW> otg_fs_host_fs_hprt_ptctl{0x50000440u, 0x0001E000u, 13, 0x000000AAu, 0x00000004u};
constexpr Field<Access::RO> otg_fs_host_fs_hprt_pspd{0x50000440u, 0x00060000u, 17};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_mpsiz{0x50000500u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_epnum{0x50000500u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_epdir{0x50000500u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_lsdev{0x50000500u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_eptyp{0x50000500u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_mcnt{0x50000500u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_dad{0x50000500u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar0_oddfrm{0x50000500u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar0_chdis{0x50000500u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar0_chena{0x50000500u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_xfrc{0x50000508u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_chh{0x50000508u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_stall{0x50000508u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_nak{0x50000508u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_ack{0x50000508u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_txerr{0x50000508u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_bberr{0x50000508u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_frmor{0x50000508u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint0_dterr{0x50000508u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_xfrcm{0x5000050Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_chhm{0x5000050Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_stallm{0x5000050Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_nakm{0x5000050Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_ackm{0x5000050Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_nyet{0x5000050Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_txerrm{0x5000050Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_bberrm{0x5000050Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_frmorm{0x5000050Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk0_dterrm{0x5000050Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz0_xfrsiz{0x50000510u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz0_pktcnt{0x50000510u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz0_dpid{0x50000510u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_mpsiz{0x50000520u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_epnum{0x50000520u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_epdir{0x50000520u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_lsdev{0x50000520u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_eptyp{0x50000520u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_mcnt{0x50000520u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_dad{0x50000520u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar1_oddfrm{0x50000520u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar1_chdis{0x50000520u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar1_chena{0x50000520u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_xfrc{0x50000528u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_chh{0x50000528u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_stall{0x50000528u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_nak{0x50000528u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_ack{0x50000528u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_txerr{0x50000528u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_bberr{0x50000528u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_frmor{0x50000528u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint1_dterr{0x50000528u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_xfrcm{0x5000052Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_chhm{0x5000052Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_stallm{0x5000052Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_nakm{0x5000052Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_ackm{0x5000052Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_nyet{0x5000052Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_txerrm{0x5000052Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_bberrm{0x5000052Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_frmorm{0x5000052Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk1_dterrm{0x5000052Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz1_xfrsiz{0x50000530u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz1_pktcnt{0x50000530u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz1_dpid{0x50000530u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_mpsiz{0x50000540u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_epnum{0x50000540u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_epdir{0x50000540u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_lsdev{0x50000540u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_eptyp{0x50000540u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_mcnt{0x50000540u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_dad{0x50000540u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar2_oddfrm{0x50000540u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar2_chdis{0x50000540u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar2_chena{0x50000540u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_xfrc{0x50000548u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_chh{0x50000548u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_stall{0x50000548u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_nak{0x50000548u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_ack{0x50000548u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_txerr{0x50000548u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_bberr{0x50000548u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_frmor{0x50000548u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint2_dterr{0x50000548u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_xfrcm{0x5000054Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_chhm{0x5000054Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_stallm{0x5000054Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_nakm{0x5000054Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_ackm{0x5000054Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_nyet{0x5000054Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_txerrm{0x5000054Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_bberrm{0x5000054Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_frmorm{0x5000054Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk2_dterrm{0x5000054Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz2_xfrsiz{0x50000550u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz2_pktcnt{0x50000550u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz2_dpid{0x50000550u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_mpsiz{0x50000560u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_epnum{0x50000560u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_epdir{0x50000560u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_lsdev{0x50000560u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_eptyp{0x50000560u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_mcnt{0x50000560u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_dad{0x50000560u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar3_oddfrm{0x50000560u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar3_chdis{0x50000560u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar3_chena{0x50000560u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_xfrc{0x50000568u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_chh{0x50000568u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_stall{0x50000568u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_nak{0x50000568u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_ack{0x50000568u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_txerr{0x50000568u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_bberr{0x50000568u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_frmor{0x50000568u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint3_dterr{0x50000568u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_xfrcm{0x5000056Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_chhm{0x5000056Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_stallm{0x5000056Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_nakm{0x5000056Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_ackm{0x5000056Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_nyet{0x5000056Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_txerrm{0x5000056Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_bberrm{0x5000056Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_frmorm{0x5000056Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk3_dterrm{0x5000056Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz3_xfrsiz{0x50000570u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz3_pktcnt{0x50000570u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz3_dpid{0x50000570u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_mpsiz{0x50000580u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_epnum{0x50000580u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_epdir{0x50000580u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_lsdev{0x50000580u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_eptyp{0x50000580u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_mcnt{0x50000580u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_dad{0x50000580u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar4_oddfrm{0x50000580u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar4_chdis{0x50000580u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar4_chena{0x50000580u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_xfrc{0x50000588u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_chh{0x50000588u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_stall{0x50000588u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_nak{0x50000588u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_ack{0x50000588u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_txerr{0x50000588u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_bberr{0x50000588u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_frmor{0x50000588u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint4_dterr{0x50000588u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_xfrcm{0x5000058Cu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_chhm{0x5000058Cu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_stallm{0x5000058Cu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_nakm{0x5000058Cu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_ackm{0x5000058Cu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_nyet{0x5000058Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_txerrm{0x5000058Cu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_bberrm{0x5000058Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_frmorm{0x5000058Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk4_dterrm{0x5000058Cu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz4_xfrsiz{0x50000590u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz4_pktcnt{0x50000590u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz4_dpid{0x50000590u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_mpsiz{0x500005A0u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_epnum{0x500005A0u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_epdir{0x500005A0u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_lsdev{0x500005A0u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_eptyp{0x500005A0u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_mcnt{0x500005A0u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_dad{0x500005A0u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar5_oddfrm{0x500005A0u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar5_chdis{0x500005A0u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar5_chena{0x500005A0u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_xfrc{0x500005A8u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_chh{0x500005A8u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_stall{0x500005A8u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_nak{0x500005A8u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_ack{0x500005A8u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_txerr{0x500005A8u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_bberr{0x500005A8u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_frmor{0x500005A8u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint5_dterr{0x500005A8u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_xfrcm{0x500005ACu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_chhm{0x500005ACu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_stallm{0x500005ACu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_nakm{0x500005ACu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_ackm{0x500005ACu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_nyet{0x500005ACu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_txerrm{0x500005ACu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_bberrm{0x500005ACu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_frmorm{0x500005ACu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk5_dterrm{0x500005ACu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz5_xfrsiz{0x500005B0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz5_pktcnt{0x500005B0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz5_dpid{0x500005B0u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_mpsiz{0x500005C0u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_epnum{0x500005C0u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_epdir{0x500005C0u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_lsdev{0x500005C0u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_eptyp{0x500005C0u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_mcnt{0x500005C0u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_dad{0x500005C0u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar6_oddfrm{0x500005C0u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar6_chdis{0x500005C0u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar6_chena{0x500005C0u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_xfrc{0x500005C8u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_chh{0x500005C8u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_stall{0x500005C8u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_nak{0x500005C8u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_ack{0x500005C8u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_txerr{0x500005C8u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_bberr{0x500005C8u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_frmor{0x500005C8u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint6_dterr{0x500005C8u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_xfrcm{0x500005CCu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_chhm{0x500005CCu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_stallm{0x500005CCu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_nakm{0x500005CCu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_ackm{0x500005CCu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_nyet{0x500005CCu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_txerrm{0x500005CCu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_bberrm{0x500005CCu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_frmorm{0x500005CCu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk6_dterrm{0x500005CCu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz6_xfrsiz{0x500005D0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz6_pktcnt{0x500005D0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz6_dpid{0x500005D0u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_mpsiz{0x500005E0u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_epnum{0x500005E0u, 0x00007800u, 11, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_epdir{0x500005E0u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_lsdev{0x500005E0u, 0x00020000u, 17, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_eptyp{0x500005E0u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_mcnt{0x500005E0u, 0x00300000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_dad{0x500005E0u, 0x1FC00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcchar7_oddfrm{0x500005E0u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar7_chdis{0x500005E0u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_host_fs_hcchar7_chena{0x500005E0u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_xfrc{0x500005E8u, 0x00000001u, 0, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_chh{0x500005E8u, 0x00000002u, 1, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_stall{0x500005E8u, 0x00000008u, 3, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_nak{0x500005E8u, 0x00000010u, 4, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_ack{0x500005E8u, 0x00000020u, 5, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_txerr{0x500005E8u, 0x00000080u, 7, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_bberr{0x500005E8u, 0x00000100u, 8, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_frmor{0x500005E8u, 0x00000200u, 9, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_host_fs_hcint7_dterr{0x500005E8u, 0x00000400u, 10, 0x000007BBu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_xfrcm{0x500005ECu, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_chhm{0x500005ECu, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_stallm{0x500005ECu, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_nakm{0x500005ECu, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_ackm{0x500005ECu, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_nyet{0x500005ECu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_txerrm{0x500005ECu, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_bberrm{0x500005ECu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_frmorm{0x500005ECu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_host_fs_hcintmsk7_dterrm{0x500005ECu, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz7_xfrsiz{0x500005F0u, 0x0007FFFFu, 0};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz7_pktcnt{0x500005F0u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_host_fs_hctsiz7_dpid{0x500005F0u, 0x60000000u, 29};

#endif // STM32_OTG_FS_HOST_HPP
