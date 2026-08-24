// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go full speed
#ifndef STM32_OTG_FS_DEVICE_HPP
#define STM32_OTG_FS_DEVICE_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t OTG_FS_DEVICE_BASE = 0x50000800;
struct Otg_fs_deviceRegs {
    volatile uint32_t fs_dcfg; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t fs_dctl; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t fs_dsts; // OTG_FS device status register (OTG_FS_DSTS)
    uint32_t _reserved0[1];
    volatile uint32_t fs_diepmsk; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t fs_doepmsk; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t fs_daint; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t fs_daintmsk; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    uint32_t _reserved1[2];
    volatile uint32_t dvbusdis; // OTG_FS device VBUS discharge time register
    volatile uint32_t dvbuspulse; // OTG_FS device VBUS pulsing time register
    uint32_t _reserved2[1];
    volatile uint32_t diepempmsk; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    uint32_t _reserved3[50];
    volatile uint32_t fs_diepctl0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    uint32_t _reserved4[1];
    volatile uint32_t diepint0; // device endpoint-x interrupt register
    uint32_t _reserved5[1];
    volatile uint32_t dieptsiz0; // device endpoint-0 transfer size register
    uint32_t _reserved6[1];
    volatile uint32_t dtxfsts0; // OTG_FS device IN endpoint transmit FIFO status register
    uint32_t _reserved7[1];
    volatile uint32_t diepctl1; // OTG device endpoint-1 control register
    uint32_t _reserved8[1];
    volatile uint32_t diepint1; // device endpoint-1 interrupt register
    uint32_t _reserved9[1];
    volatile uint32_t dieptsiz1; // device endpoint-1 transfer size register
    uint32_t _reserved10[1];
    volatile uint32_t dtxfsts1; // OTG_FS device IN endpoint transmit FIFO status register
    uint32_t _reserved11[1];
    volatile uint32_t diepctl2; // OTG device endpoint-2 control register
    uint32_t _reserved12[1];
    volatile uint32_t diepint2; // device endpoint-2 interrupt register
    uint32_t _reserved13[1];
    volatile uint32_t dieptsiz2; // device endpoint-2 transfer size register
    uint32_t _reserved14[1];
    volatile uint32_t dtxfsts2; // OTG_FS device IN endpoint transmit FIFO status register
    uint32_t _reserved15[1];
    volatile uint32_t diepctl3; // OTG device endpoint-3 control register
    uint32_t _reserved16[1];
    volatile uint32_t diepint3; // device endpoint-3 interrupt register
    uint32_t _reserved17[1];
    volatile uint32_t dieptsiz3; // device endpoint-3 transfer size register
    uint32_t _reserved18[1];
    volatile uint32_t dtxfsts3; // OTG_FS device IN endpoint transmit FIFO status register
    uint32_t _reserved19[97];
    volatile uint32_t doepctl0; // device endpoint-0 control register
    uint32_t _reserved20[1];
    volatile uint32_t doepint0; // device endpoint-0 interrupt register
    uint32_t _reserved21[1];
    volatile uint32_t doeptsiz0; // device OUT endpoint-0 transfer size register
    uint32_t _reserved22[3];
    volatile uint32_t doepctl1; // device endpoint-1 control register
    uint32_t _reserved23[1];
    volatile uint32_t doepint1; // device endpoint-1 interrupt register
    uint32_t _reserved24[1];
    volatile uint32_t doeptsiz1; // device OUT endpoint-1 transfer size register
    uint32_t _reserved25[3];
    volatile uint32_t doepctl2; // device endpoint-2 control register
    uint32_t _reserved26[1];
    volatile uint32_t doepint2; // device endpoint-2 interrupt register
    uint32_t _reserved27[1];
    volatile uint32_t doeptsiz2; // device OUT endpoint-2 transfer size register
    uint32_t _reserved28[3];
    volatile uint32_t doepctl3; // device endpoint-3 control register
    uint32_t _reserved29[1];
    volatile uint32_t doepint3; // device endpoint-3 interrupt register
    uint32_t _reserved30[1];
    volatile uint32_t doeptsiz3; // device OUT endpoint-3 transfer size register
};
static_assert(offsetof(Otg_fs_deviceRegs, fs_dcfg) == 0);
static_assert(offsetof(Otg_fs_deviceRegs, fs_dctl) == 4);
static_assert(offsetof(Otg_fs_deviceRegs, fs_dsts) == 8);
static_assert(offsetof(Otg_fs_deviceRegs, fs_diepmsk) == 16);
static_assert(offsetof(Otg_fs_deviceRegs, fs_doepmsk) == 20);
static_assert(offsetof(Otg_fs_deviceRegs, fs_daint) == 24);
static_assert(offsetof(Otg_fs_deviceRegs, fs_daintmsk) == 28);
static_assert(offsetof(Otg_fs_deviceRegs, dvbusdis) == 40);
static_assert(offsetof(Otg_fs_deviceRegs, dvbuspulse) == 44);
static_assert(offsetof(Otg_fs_deviceRegs, diepempmsk) == 52);
static_assert(offsetof(Otg_fs_deviceRegs, fs_diepctl0) == 256);
static_assert(offsetof(Otg_fs_deviceRegs, diepint0) == 264);
static_assert(offsetof(Otg_fs_deviceRegs, dieptsiz0) == 272);
static_assert(offsetof(Otg_fs_deviceRegs, dtxfsts0) == 280);
static_assert(offsetof(Otg_fs_deviceRegs, diepctl1) == 288);
static_assert(offsetof(Otg_fs_deviceRegs, diepint1) == 296);
static_assert(offsetof(Otg_fs_deviceRegs, dieptsiz1) == 304);
static_assert(offsetof(Otg_fs_deviceRegs, dtxfsts1) == 312);
static_assert(offsetof(Otg_fs_deviceRegs, diepctl2) == 320);
static_assert(offsetof(Otg_fs_deviceRegs, diepint2) == 328);
static_assert(offsetof(Otg_fs_deviceRegs, dieptsiz2) == 336);
static_assert(offsetof(Otg_fs_deviceRegs, dtxfsts2) == 344);
static_assert(offsetof(Otg_fs_deviceRegs, diepctl3) == 352);
static_assert(offsetof(Otg_fs_deviceRegs, diepint3) == 360);
static_assert(offsetof(Otg_fs_deviceRegs, dieptsiz3) == 368);
static_assert(offsetof(Otg_fs_deviceRegs, dtxfsts3) == 376);
static_assert(offsetof(Otg_fs_deviceRegs, doepctl0) == 768);
static_assert(offsetof(Otg_fs_deviceRegs, doepint0) == 776);
static_assert(offsetof(Otg_fs_deviceRegs, doeptsiz0) == 784);
static_assert(offsetof(Otg_fs_deviceRegs, doepctl1) == 800);
static_assert(offsetof(Otg_fs_deviceRegs, doepint1) == 808);
static_assert(offsetof(Otg_fs_deviceRegs, doeptsiz1) == 816);
static_assert(offsetof(Otg_fs_deviceRegs, doepctl2) == 832);
static_assert(offsetof(Otg_fs_deviceRegs, doepint2) == 840);
static_assert(offsetof(Otg_fs_deviceRegs, doeptsiz2) == 848);
static_assert(offsetof(Otg_fs_deviceRegs, doepctl3) == 864);
static_assert(offsetof(Otg_fs_deviceRegs, doepint3) == 872);
static_assert(offsetof(Otg_fs_deviceRegs, doeptsiz3) == 880);

constexpr Field<Access::RW> otg_fs_device_fs_dcfg_dspd{0x50000800u, 0x00000003u, 0, 0x00000000u, 0x02200000u};
constexpr Field<Access::RW> otg_fs_device_fs_dcfg_nzlsohsk{0x50000800u, 0x00000004u, 2, 0x00000000u, 0x02200000u};
constexpr Field<Access::RW> otg_fs_device_fs_dcfg_dad{0x50000800u, 0x000007F0u, 4, 0x00000000u, 0x02200000u};
constexpr Field<Access::RW> otg_fs_device_fs_dcfg_pfivl{0x50000800u, 0x00001800u, 11, 0x00000000u, 0x02200000u};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_rwusig{0x50000804u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_sdis{0x50000804u, 0x00000002u, 1};
constexpr Field<Access::RO> otg_fs_device_fs_dctl_ginsts{0x50000804u, 0x00000004u, 2};
constexpr Field<Access::RO> otg_fs_device_fs_dctl_gonsts{0x50000804u, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_tctl{0x50000804u, 0x00000070u, 4};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_sginak{0x50000804u, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_cginak{0x50000804u, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_sgonak{0x50000804u, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_cgonak{0x50000804u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_device_fs_dctl_poprgdne{0x50000804u, 0x00000800u, 11};
constexpr Field<Access::RO> otg_fs_device_fs_dsts_suspsts{0x50000808u, 0x00000001u, 0};
constexpr Field<Access::RO> otg_fs_device_fs_dsts_enumspd{0x50000808u, 0x00000006u, 1};
constexpr Field<Access::RO> otg_fs_device_fs_dsts_eerr{0x50000808u, 0x00000008u, 3};
constexpr Field<Access::RO> otg_fs_device_fs_dsts_fnsof{0x50000808u, 0x003FFF00u, 8};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_xfrcm{0x50000810u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_epdm{0x50000810u, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_tom{0x50000810u, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_ittxfemsk{0x50000810u, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_inepnmm{0x50000810u, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_device_fs_diepmsk_inepnem{0x50000810u, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_device_fs_doepmsk_xfrcm{0x50000814u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_device_fs_doepmsk_epdm{0x50000814u, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_device_fs_doepmsk_stupm{0x50000814u, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_device_fs_doepmsk_otepdm{0x50000814u, 0x00000010u, 4};
constexpr Field<Access::RO> otg_fs_device_fs_daint_iepint{0x50000818u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_device_fs_daint_oepint{0x50000818u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_fs_device_fs_daintmsk_iepm{0x5000081Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_device_fs_daintmsk_oepint{0x5000081Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_device_dvbusdis_vbusdt{0x50000828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_device_dvbuspulse_dvbusp{0x5000082Cu, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_device_diepempmsk_ineptxfem{0x50000834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_device_fs_diepctl0_mpsiz{0x50000900u, 0x00000003u, 0, 0x00200000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_fs_diepctl0_usbaep{0x50000900u, 0x00008000u, 15};
constexpr Field<Access::RO> otg_fs_device_fs_diepctl0_naksts{0x50000900u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_fs_diepctl0_eptyp{0x50000900u, 0x000C0000u, 18};
constexpr Field<Access::RS> otg_fs_device_fs_diepctl0_stall{0x50000900u, 0x00200000u, 21, 0x00200000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_fs_diepctl0_txfnum{0x50000900u, 0x03C00000u, 22, 0x00200000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_fs_diepctl0_cnak{0x50000900u, 0x04000000u, 26, 0x00200000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_fs_diepctl0_snak{0x50000900u, 0x08000000u, 27, 0x00200000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_fs_diepctl0_epdis{0x50000900u, 0x40000000u, 30};
constexpr Field<Access::RO> otg_fs_device_fs_diepctl0_epena{0x50000900u, 0x80000000u, 31};
constexpr Field<Access::RO> otg_fs_device_diepint0_txfe{0x50000908u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint0_inepne{0x50000908u, 0x00000040u, 6, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint0_ittxfe{0x50000908u, 0x00000010u, 4, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint0_toc{0x50000908u, 0x00000008u, 3, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint0_epdisd{0x50000908u, 0x00000002u, 1, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint0_xfrc{0x50000908u, 0x00000001u, 0, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_dieptsiz0_pktcnt{0x50000910u, 0x00180000u, 19};
constexpr Field<Access::RW> otg_fs_device_dieptsiz0_xfrsiz{0x50000910u, 0x0000007Fu, 0};
constexpr Field<Access::RO> otg_fs_device_dtxfsts0_ineptfsav{0x50000918u, 0x0000FFFFu, 0};
constexpr Field<Access::RS> otg_fs_device_diepctl1_epena{0x50000920u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_diepctl1_epdis{0x50000920u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl1_soddfrm_sd1pid{0x50000920u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl1_sd0pid_sevnfrm{0x50000920u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl1_snak{0x50000920u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl1_cnak{0x50000920u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl1_txfnum{0x50000920u, 0x03C00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl1_stall{0x50000920u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl1_eptyp{0x50000920u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepctl1_naksts{0x50000920u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_diepctl1_eonum_dpid{0x50000920u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_diepctl1_usbaep{0x50000920u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl1_mpsiz{0x50000920u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepint1_txfe{0x50000928u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint1_inepne{0x50000928u, 0x00000040u, 6, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint1_ittxfe{0x50000928u, 0x00000010u, 4, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint1_toc{0x50000928u, 0x00000008u, 3, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint1_epdisd{0x50000928u, 0x00000002u, 1, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint1_xfrc{0x50000928u, 0x00000001u, 0, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_dieptsiz1_mcnt{0x50000930u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_dieptsiz1_pktcnt{0x50000930u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_dieptsiz1_xfrsiz{0x50000930u, 0x0007FFFFu, 0};
constexpr Field<Access::RO> otg_fs_device_dtxfsts1_ineptfsav{0x50000938u, 0x0000FFFFu, 0};
constexpr Field<Access::RS> otg_fs_device_diepctl2_epena{0x50000940u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_diepctl2_epdis{0x50000940u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl2_soddfrm{0x50000940u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl2_sd0pid_sevnfrm{0x50000940u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl2_snak{0x50000940u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl2_cnak{0x50000940u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl2_txfnum{0x50000940u, 0x03C00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl2_stall{0x50000940u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl2_eptyp{0x50000940u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepctl2_naksts{0x50000940u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_diepctl2_eonum_dpid{0x50000940u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_diepctl2_usbaep{0x50000940u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl2_mpsiz{0x50000940u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepint2_txfe{0x50000948u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint2_inepne{0x50000948u, 0x00000040u, 6, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint2_ittxfe{0x50000948u, 0x00000010u, 4, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint2_toc{0x50000948u, 0x00000008u, 3, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint2_epdisd{0x50000948u, 0x00000002u, 1, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint2_xfrc{0x50000948u, 0x00000001u, 0, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_dieptsiz2_mcnt{0x50000950u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_dieptsiz2_pktcnt{0x50000950u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_dieptsiz2_xfrsiz{0x50000950u, 0x0007FFFFu, 0};
constexpr Field<Access::RO> otg_fs_device_dtxfsts2_ineptfsav{0x50000958u, 0x0000FFFFu, 0};
constexpr Field<Access::RS> otg_fs_device_diepctl3_epena{0x50000960u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_diepctl3_epdis{0x50000960u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl3_soddfrm{0x50000960u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl3_sd0pid_sevnfrm{0x50000960u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl3_snak{0x50000960u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_diepctl3_cnak{0x50000960u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl3_txfnum{0x50000960u, 0x03C00000u, 22, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl3_stall{0x50000960u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl3_eptyp{0x50000960u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepctl3_naksts{0x50000960u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_diepctl3_eonum_dpid{0x50000960u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_diepctl3_usbaep{0x50000960u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_diepctl3_mpsiz{0x50000960u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_diepint3_txfe{0x50000968u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint3_inepne{0x50000968u, 0x00000040u, 6, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint3_ittxfe{0x50000968u, 0x00000010u, 4, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint3_toc{0x50000968u, 0x00000008u, 3, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint3_epdisd{0x50000968u, 0x00000002u, 1, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_diepint3_xfrc{0x50000968u, 0x00000001u, 0, 0x0000005Bu, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_dieptsiz3_mcnt{0x50000970u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_dieptsiz3_pktcnt{0x50000970u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_dieptsiz3_xfrsiz{0x50000970u, 0x0007FFFFu, 0};
constexpr Field<Access::RO> otg_fs_device_dtxfsts3_ineptfsav{0x50000978u, 0x0000FFFFu, 0};
constexpr Field<Access::WO> otg_fs_device_doepctl0_epena{0x50000B00u, 0x80000000u, 31, 0x00200000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_doepctl0_epdis{0x50000B00u, 0x40000000u, 30};
constexpr Field<Access::WO> otg_fs_device_doepctl0_snak{0x50000B00u, 0x08000000u, 27, 0x00200000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl0_cnak{0x50000B00u, 0x04000000u, 26, 0x00200000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_doepctl0_stall{0x50000B00u, 0x00200000u, 21, 0x00200000u, 0x00000000u};
constexpr Field<Access::RW, uint32_t, false, false> otg_fs_device_doepctl0_snpm{0x50000B00u, 0x00100000u, 20, 0x00200000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_doepctl0_eptyp{0x50000B00u, 0x000C0000u, 18};
constexpr Field<Access::RO> otg_fs_device_doepctl0_naksts{0x50000B00u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_doepctl0_usbaep{0x50000B00u, 0x00008000u, 15};
constexpr Field<Access::RO> otg_fs_device_doepctl0_mpsiz{0x50000B00u, 0x00000003u, 0};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint0_b2bstup{0x50000B08u, 0x00000040u, 6, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint0_otepdis{0x50000B08u, 0x00000010u, 4, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint0_stup{0x50000B08u, 0x00000008u, 3, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint0_epdisd{0x50000B08u, 0x00000002u, 1, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint0_xfrc{0x50000B08u, 0x00000001u, 0, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RW> otg_fs_device_doeptsiz0_stupcnt{0x50000B10u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_doeptsiz0_pktcnt{0x50000B10u, 0x00080000u, 19};
constexpr Field<Access::RW> otg_fs_device_doeptsiz0_xfrsiz{0x50000B10u, 0x0000007Fu, 0};
constexpr Field<Access::RS> otg_fs_device_doepctl1_epena{0x50000B20u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_doepctl1_epdis{0x50000B20u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl1_soddfrm{0x50000B20u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl1_sd0pid_sevnfrm{0x50000B20u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl1_snak{0x50000B20u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl1_cnak{0x50000B20u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl1_stall{0x50000B20u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl1_snpm{0x50000B20u, 0x00100000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl1_eptyp{0x50000B20u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_doepctl1_naksts{0x50000B20u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_doepctl1_eonum_dpid{0x50000B20u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_doepctl1_usbaep{0x50000B20u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl1_mpsiz{0x50000B20u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint1_b2bstup{0x50000B28u, 0x00000040u, 6, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint1_otepdis{0x50000B28u, 0x00000010u, 4, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint1_stup{0x50000B28u, 0x00000008u, 3, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint1_epdisd{0x50000B28u, 0x00000002u, 1, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint1_xfrc{0x50000B28u, 0x00000001u, 0, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RW> otg_fs_device_doeptsiz1_rxdpid_stupcnt{0x50000B30u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_doeptsiz1_pktcnt{0x50000B30u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_doeptsiz1_xfrsiz{0x50000B30u, 0x0007FFFFu, 0};
constexpr Field<Access::RS> otg_fs_device_doepctl2_epena{0x50000B40u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_doepctl2_epdis{0x50000B40u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl2_soddfrm{0x50000B40u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl2_sd0pid_sevnfrm{0x50000B40u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl2_snak{0x50000B40u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl2_cnak{0x50000B40u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl2_stall{0x50000B40u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl2_snpm{0x50000B40u, 0x00100000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl2_eptyp{0x50000B40u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_doepctl2_naksts{0x50000B40u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_doepctl2_eonum_dpid{0x50000B40u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_doepctl2_usbaep{0x50000B40u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl2_mpsiz{0x50000B40u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint2_b2bstup{0x50000B48u, 0x00000040u, 6, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint2_otepdis{0x50000B48u, 0x00000010u, 4, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint2_stup{0x50000B48u, 0x00000008u, 3, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint2_epdisd{0x50000B48u, 0x00000002u, 1, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint2_xfrc{0x50000B48u, 0x00000001u, 0, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RW> otg_fs_device_doeptsiz2_rxdpid_stupcnt{0x50000B50u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_doeptsiz2_pktcnt{0x50000B50u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_doeptsiz2_xfrsiz{0x50000B50u, 0x0007FFFFu, 0};
constexpr Field<Access::RS> otg_fs_device_doepctl3_epena{0x50000B60u, 0x80000000u, 31, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RS> otg_fs_device_doepctl3_epdis{0x50000B60u, 0x40000000u, 30, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl3_soddfrm{0x50000B60u, 0x20000000u, 29, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl3_sd0pid_sevnfrm{0x50000B60u, 0x10000000u, 28, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl3_snak{0x50000B60u, 0x08000000u, 27, 0xC0000000u, 0x00000000u};
constexpr Field<Access::WO> otg_fs_device_doepctl3_cnak{0x50000B60u, 0x04000000u, 26, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl3_stall{0x50000B60u, 0x00200000u, 21, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl3_snpm{0x50000B60u, 0x00100000u, 20, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl3_eptyp{0x50000B60u, 0x000C0000u, 18, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RO> otg_fs_device_doepctl3_naksts{0x50000B60u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_device_doepctl3_eonum_dpid{0x50000B60u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_device_doepctl3_usbaep{0x50000B60u, 0x00008000u, 15, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RW> otg_fs_device_doepctl3_mpsiz{0x50000B60u, 0x000007FFu, 0, 0xC0000000u, 0x00000000u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint3_b2bstup{0x50000B68u, 0x00000040u, 6, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint3_otepdis{0x50000B68u, 0x00000010u, 4, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint3_stup{0x50000B68u, 0x00000008u, 3, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint3_epdisd{0x50000B68u, 0x00000002u, 1, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RC_W1, uint32_t, false, false> otg_fs_device_doepint3_xfrc{0x50000B68u, 0x00000001u, 0, 0x0000005Bu, 0x00000080u};
constexpr Field<Access::RW> otg_fs_device_doeptsiz3_rxdpid_stupcnt{0x50000B70u, 0x60000000u, 29};
constexpr Field<Access::RW> otg_fs_device_doeptsiz3_pktcnt{0x50000B70u, 0x1FF80000u, 19};
constexpr Field<Access::RW> otg_fs_device_doeptsiz3_xfrsiz{0x50000B70u, 0x0007FFFFu, 0};

#endif // STM32_OTG_FS_DEVICE_HPP
