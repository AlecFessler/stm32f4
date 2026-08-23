// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Ethernet: DMA controller operation
#ifndef STM32_ETHERNET_DMA_HPP
#define STM32_ETHERNET_DMA_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t ETHERNET_DMA_BASE = 0x40029000;
struct Ethernet_dmaRegs {
    volatile uint32_t dmabmr; // Ethernet DMA bus mode register
    volatile uint32_t dmatpdr; // Ethernet DMA transmit poll demand register
    volatile uint32_t dmarpdr; // EHERNET DMA receive poll demand register
    volatile uint32_t dmardlar; // Ethernet DMA receive descriptor list address register
    volatile uint32_t dmatdlar; // Ethernet DMA transmit descriptor list address register
    volatile uint32_t dmasr; // Ethernet DMA status register
    volatile uint32_t dmaomr; // Ethernet DMA operation mode register
    volatile uint32_t dmaier; // Ethernet DMA interrupt enable register
    volatile uint32_t dmamfbocr; // Ethernet DMA missed frame and buffer overflow counter register
    volatile uint32_t dmarswtr; // Ethernet DMA receive status watchdog timer register
    uint32_t _reserved0[8];
    volatile uint32_t dmachtdr; // Ethernet DMA current host transmit descriptor register
    volatile uint32_t dmachrdr; // Ethernet DMA current host receive descriptor register
    volatile uint32_t dmachtbar; // Ethernet DMA current host transmit buffer address register
    volatile uint32_t dmachrbar; // Ethernet DMA current host receive buffer address register
};
static_assert(offsetof(Ethernet_dmaRegs, dmabmr) == 0);
static_assert(offsetof(Ethernet_dmaRegs, dmatpdr) == 4);
static_assert(offsetof(Ethernet_dmaRegs, dmarpdr) == 8);
static_assert(offsetof(Ethernet_dmaRegs, dmardlar) == 12);
static_assert(offsetof(Ethernet_dmaRegs, dmatdlar) == 16);
static_assert(offsetof(Ethernet_dmaRegs, dmasr) == 20);
static_assert(offsetof(Ethernet_dmaRegs, dmaomr) == 24);
static_assert(offsetof(Ethernet_dmaRegs, dmaier) == 28);
static_assert(offsetof(Ethernet_dmaRegs, dmamfbocr) == 32);
static_assert(offsetof(Ethernet_dmaRegs, dmarswtr) == 36);
static_assert(offsetof(Ethernet_dmaRegs, dmachtdr) == 72);
static_assert(offsetof(Ethernet_dmaRegs, dmachrdr) == 76);
static_assert(offsetof(Ethernet_dmaRegs, dmachtbar) == 80);
static_assert(offsetof(Ethernet_dmaRegs, dmachrbar) == 84);

constexpr Field<Access::RW> ethernet_dma_dmabmr_sr{0x40029000u, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_dma_dmabmr_da{0x40029000u, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_dma_dmabmr_dsl{0x40029000u, 0x0000007Cu, 2};
constexpr Field<Access::RW> ethernet_dma_dmabmr_edfe{0x40029000u, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_dma_dmabmr_pbl{0x40029000u, 0x00003F00u, 8};
constexpr Field<Access::RW> ethernet_dma_dmabmr_rtpr{0x40029000u, 0x0000C000u, 14};
constexpr Field<Access::RW> ethernet_dma_dmabmr_fb{0x40029000u, 0x00010000u, 16};
constexpr Field<Access::RW> ethernet_dma_dmabmr_rdp{0x40029000u, 0x007E0000u, 17};
constexpr Field<Access::RW> ethernet_dma_dmabmr_usp{0x40029000u, 0x00800000u, 23};
constexpr Field<Access::RW> ethernet_dma_dmabmr_fpm{0x40029000u, 0x01000000u, 24};
constexpr Field<Access::RW> ethernet_dma_dmabmr_aab{0x40029000u, 0x02000000u, 25};
constexpr Field<Access::RW> ethernet_dma_dmabmr_mb{0x40029000u, 0x04000000u, 26};
constexpr Field<Access::RW> ethernet_dma_dmatpdr_tpd{0x40029004u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_dma_dmarpdr_rpd{0x40029008u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_dma_dmardlar_srl{0x4002900Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_dma_dmatdlar_stl{0x40029010u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_dma_dmasr_ts{0x40029014u, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_dma_dmasr_tpss{0x40029014u, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_dma_dmasr_tbus{0x40029014u, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_dma_dmasr_tjts{0x40029014u, 0x00000008u, 3};
constexpr Field<Access::RW> ethernet_dma_dmasr_ros{0x40029014u, 0x00000010u, 4};
constexpr Field<Access::RW> ethernet_dma_dmasr_tus{0x40029014u, 0x00000020u, 5};
constexpr Field<Access::RW> ethernet_dma_dmasr_rs{0x40029014u, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_dma_dmasr_rbus{0x40029014u, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_dma_dmasr_rpss{0x40029014u, 0x00000100u, 8};
constexpr Field<Access::RW> ethernet_dma_dmasr_pwts{0x40029014u, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_dma_dmasr_ets{0x40029014u, 0x00000400u, 10};
constexpr Field<Access::RW> ethernet_dma_dmasr_fbes{0x40029014u, 0x00002000u, 13};
constexpr Field<Access::RW> ethernet_dma_dmasr_ers{0x40029014u, 0x00004000u, 14};
constexpr Field<Access::RW> ethernet_dma_dmasr_ais{0x40029014u, 0x00008000u, 15};
constexpr Field<Access::RW> ethernet_dma_dmasr_nis{0x40029014u, 0x00010000u, 16};
constexpr Field<Access::RO> ethernet_dma_dmasr_rps{0x40029014u, 0x000E0000u, 17};
constexpr Field<Access::RO> ethernet_dma_dmasr_tps{0x40029014u, 0x00700000u, 20};
constexpr Field<Access::RO> ethernet_dma_dmasr_ebs{0x40029014u, 0x03800000u, 23};
constexpr Field<Access::RO> ethernet_dma_dmasr_mmcs{0x40029014u, 0x08000000u, 27};
constexpr Field<Access::RO> ethernet_dma_dmasr_pmts{0x40029014u, 0x10000000u, 28};
constexpr Field<Access::RO> ethernet_dma_dmasr_tsts{0x40029014u, 0x20000000u, 29};
constexpr Field<Access::RW> ethernet_dma_dmaomr_sr{0x40029018u, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_dma_dmaomr_osf{0x40029018u, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_dma_dmaomr_rtc{0x40029018u, 0x00000018u, 3};
constexpr Field<Access::RW> ethernet_dma_dmaomr_fugf{0x40029018u, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_dma_dmaomr_fef{0x40029018u, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_dma_dmaomr_st{0x40029018u, 0x00002000u, 13};
constexpr Field<Access::RW> ethernet_dma_dmaomr_ttc{0x40029018u, 0x0001C000u, 14};
constexpr Field<Access::RW> ethernet_dma_dmaomr_ftf{0x40029018u, 0x00100000u, 20};
constexpr Field<Access::RW> ethernet_dma_dmaomr_tsf{0x40029018u, 0x00200000u, 21};
constexpr Field<Access::RW> ethernet_dma_dmaomr_dfrf{0x40029018u, 0x01000000u, 24};
constexpr Field<Access::RW> ethernet_dma_dmaomr_rsf{0x40029018u, 0x02000000u, 25};
constexpr Field<Access::RW> ethernet_dma_dmaomr_dtcefd{0x40029018u, 0x04000000u, 26};
constexpr Field<Access::RW> ethernet_dma_dmaier_tie{0x4002901Cu, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_dma_dmaier_tpsie{0x4002901Cu, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_dma_dmaier_tbuie{0x4002901Cu, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_dma_dmaier_tjtie{0x4002901Cu, 0x00000008u, 3};
constexpr Field<Access::RW> ethernet_dma_dmaier_roie{0x4002901Cu, 0x00000010u, 4};
constexpr Field<Access::RW> ethernet_dma_dmaier_tuie{0x4002901Cu, 0x00000020u, 5};
constexpr Field<Access::RW> ethernet_dma_dmaier_rie{0x4002901Cu, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_dma_dmaier_rbuie{0x4002901Cu, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_dma_dmaier_rpsie{0x4002901Cu, 0x00000100u, 8};
constexpr Field<Access::RW> ethernet_dma_dmaier_rwtie{0x4002901Cu, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_dma_dmaier_etie{0x4002901Cu, 0x00000400u, 10};
constexpr Field<Access::RW> ethernet_dma_dmaier_fbeie{0x4002901Cu, 0x00002000u, 13};
constexpr Field<Access::RW> ethernet_dma_dmaier_erie{0x4002901Cu, 0x00004000u, 14};
constexpr Field<Access::RW> ethernet_dma_dmaier_aise{0x4002901Cu, 0x00008000u, 15};
constexpr Field<Access::RW> ethernet_dma_dmaier_nise{0x4002901Cu, 0x00010000u, 16};
constexpr Field<Access::RW> ethernet_dma_dmamfbocr_mfc{0x40029020u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> ethernet_dma_dmamfbocr_omfc{0x40029020u, 0x00010000u, 16};
constexpr Field<Access::RW> ethernet_dma_dmamfbocr_mfa{0x40029020u, 0x0FFE0000u, 17};
constexpr Field<Access::RW> ethernet_dma_dmamfbocr_ofoc{0x40029020u, 0x10000000u, 28};
constexpr Field<Access::RW> ethernet_dma_dmarswtr_rswtc{0x40029024u, 0x000000FFu, 0};
constexpr Field<Access::RO> ethernet_dma_dmachtdr_htdap{0x40029048u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_dma_dmachrdr_hrdap{0x4002904Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_dma_dmachtbar_htbap{0x40029050u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_dma_dmachrbar_hrbap{0x40029054u, 0xFFFFFFFFu, 0};

#endif // STM32_ETHERNET_DMA_HPP
