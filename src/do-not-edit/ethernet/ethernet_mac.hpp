// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Ethernet: media access control (MAC)
#ifndef STM32_ETHERNET_MAC_HPP
#define STM32_ETHERNET_MAC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t ETHERNET_MAC_BASE = 0x40028000;
struct Ethernet_macRegs {
    volatile uint32_t maccr; // Ethernet MAC configuration register
    volatile uint32_t macffr; // Ethernet MAC frame filter register
    volatile uint32_t machthr; // Ethernet MAC hash table high register
    volatile uint32_t machtlr; // Ethernet MAC hash table low register
    volatile uint32_t macmiiar; // Ethernet MAC MII address register
    volatile uint32_t macmiidr; // Ethernet MAC MII data register
    volatile uint32_t macfcr; // Ethernet MAC flow control register
    volatile uint32_t macvlantr; // Ethernet MAC VLAN tag register
    uint32_t _reserved0[3];
    volatile uint32_t macpmtcsr; // Ethernet MAC PMT control and status register
    uint32_t _reserved1[1];
    volatile uint32_t macdbgr; // Ethernet MAC debug register
    volatile uint32_t macsr; // Ethernet MAC interrupt status register
    volatile uint32_t macimr; // Ethernet MAC interrupt mask register
    volatile uint32_t maca0hr; // Ethernet MAC address 0 high register
    volatile uint32_t maca0lr; // Ethernet MAC address 0 low register
    volatile uint32_t maca1hr; // Ethernet MAC address 1 high register
    volatile uint32_t maca1lr; // Ethernet MAC address1 low register
    volatile uint32_t maca2hr; // Ethernet MAC address 2 high register
    volatile uint32_t maca2lr; // Ethernet MAC address 2 low register
    volatile uint32_t maca3hr; // Ethernet MAC address 3 high register
    volatile uint32_t maca3lr; // Ethernet MAC address 3 low register
};
static_assert(offsetof(Ethernet_macRegs, maccr) == 0);
static_assert(offsetof(Ethernet_macRegs, macffr) == 4);
static_assert(offsetof(Ethernet_macRegs, machthr) == 8);
static_assert(offsetof(Ethernet_macRegs, machtlr) == 12);
static_assert(offsetof(Ethernet_macRegs, macmiiar) == 16);
static_assert(offsetof(Ethernet_macRegs, macmiidr) == 20);
static_assert(offsetof(Ethernet_macRegs, macfcr) == 24);
static_assert(offsetof(Ethernet_macRegs, macvlantr) == 28);
static_assert(offsetof(Ethernet_macRegs, macpmtcsr) == 44);
static_assert(offsetof(Ethernet_macRegs, macdbgr) == 52);
static_assert(offsetof(Ethernet_macRegs, macsr) == 56);
static_assert(offsetof(Ethernet_macRegs, macimr) == 60);
static_assert(offsetof(Ethernet_macRegs, maca0hr) == 64);
static_assert(offsetof(Ethernet_macRegs, maca0lr) == 68);
static_assert(offsetof(Ethernet_macRegs, maca1hr) == 72);
static_assert(offsetof(Ethernet_macRegs, maca1lr) == 76);
static_assert(offsetof(Ethernet_macRegs, maca2hr) == 80);
static_assert(offsetof(Ethernet_macRegs, maca2lr) == 84);
static_assert(offsetof(Ethernet_macRegs, maca3hr) == 88);
static_assert(offsetof(Ethernet_macRegs, maca3lr) == 92);

constexpr Field<Access::RW> ethernet_mac_maccr_re{0x40028000u, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_mac_maccr_te{0x40028000u, 0x00000008u, 3};
constexpr Field<Access::RW> ethernet_mac_maccr_dc{0x40028000u, 0x00000010u, 4};
constexpr Field<Access::RW> ethernet_mac_maccr_bl{0x40028000u, 0x00000060u, 5};
constexpr Field<Access::RW> ethernet_mac_maccr_apcs{0x40028000u, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_mac_maccr_rd{0x40028000u, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_mac_maccr_ipco{0x40028000u, 0x00000400u, 10};
constexpr Field<Access::RW> ethernet_mac_maccr_dm{0x40028000u, 0x00000800u, 11};
constexpr Field<Access::RW> ethernet_mac_maccr_lm{0x40028000u, 0x00001000u, 12};
constexpr Field<Access::RW> ethernet_mac_maccr_rod{0x40028000u, 0x00002000u, 13};
constexpr Field<Access::RW> ethernet_mac_maccr_fes{0x40028000u, 0x00004000u, 14};
constexpr Field<Access::RW> ethernet_mac_maccr_csd{0x40028000u, 0x00010000u, 16};
constexpr Field<Access::RW> ethernet_mac_maccr_ifg{0x40028000u, 0x000E0000u, 17};
constexpr Field<Access::RW> ethernet_mac_maccr_jd{0x40028000u, 0x00400000u, 22};
constexpr Field<Access::RW> ethernet_mac_maccr_wd{0x40028000u, 0x00800000u, 23};
constexpr Field<Access::RW> ethernet_mac_maccr_cstf{0x40028000u, 0x02000000u, 25};
constexpr Field<Access::RW> ethernet_mac_macffr_pm{0x40028004u, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_mac_macffr_hu{0x40028004u, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_mac_macffr_hm{0x40028004u, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_mac_macffr_daif{0x40028004u, 0x00000008u, 3};
constexpr Field<Access::RW> ethernet_mac_macffr_ram{0x40028004u, 0x00000010u, 4};
constexpr Field<Access::RW> ethernet_mac_macffr_bfd{0x40028004u, 0x00000020u, 5};
constexpr Field<Access::RW> ethernet_mac_macffr_pcf{0x40028004u, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_mac_macffr_saif{0x40028004u, 0x00000080u, 7};
constexpr Field<Access::RW> ethernet_mac_macffr_saf{0x40028004u, 0x00000100u, 8};
constexpr Field<Access::RW> ethernet_mac_macffr_hpf{0x40028004u, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_mac_macffr_ra{0x40028004u, 0x80000000u, 31};
constexpr Field<Access::RW> ethernet_mac_machthr_hth{0x40028008u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_machtlr_htl{0x4002800Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_macmiiar_mb{0x40028010u, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_mac_macmiiar_mw{0x40028010u, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_mac_macmiiar_cr{0x40028010u, 0x0000001Cu, 2};
constexpr Field<Access::RW> ethernet_mac_macmiiar_mr{0x40028010u, 0x000007C0u, 6};
constexpr Field<Access::RW> ethernet_mac_macmiiar_pa{0x40028010u, 0x0000F800u, 11};
constexpr Field<Access::RW> ethernet_mac_macmiidr_td{0x40028014u, 0x0000FFFFu, 0};
constexpr Field<Access::RC_W1, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_fcb{0x40028018u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_tfce{0x40028018u, 0x00000002u, 1};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_rfce{0x40028018u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_upfd{0x40028018u, 0x00000008u, 3};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_plt{0x40028018u, 0x00000030u, 4};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_zqpd{0x40028018u, 0x00000080u, 7};
constexpr Field<Access::RW, uint32_t, 0x00000001u, 0x00000000u, true> ethernet_mac_macfcr_pt{0x40028018u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> ethernet_mac_macvlantr_vlanti{0x4002801Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_macvlantr_vlantc{0x4002801Cu, 0x00010000u, 16};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_pd{0x4002802Cu, 0x00000001u, 0};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_mpe{0x4002802Cu, 0x00000002u, 1};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_wfe{0x4002802Cu, 0x00000004u, 2};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_mpr{0x4002802Cu, 0x00000020u, 5};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_wfr{0x4002802Cu, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_gu{0x4002802Cu, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_mac_macpmtcsr_wffrpr{0x4002802Cu, 0x80000000u, 31};
constexpr Field<Access::RO> ethernet_mac_macdbgr_cr{0x40028034u, 0x00000001u, 0};
constexpr Field<Access::RO> ethernet_mac_macdbgr_csr{0x40028034u, 0x00000002u, 1};
constexpr Field<Access::RO> ethernet_mac_macdbgr_ror{0x40028034u, 0x00000004u, 2};
constexpr Field<Access::RO> ethernet_mac_macdbgr_mcf{0x40028034u, 0x00000008u, 3};
constexpr Field<Access::RO> ethernet_mac_macdbgr_mcp{0x40028034u, 0x00000010u, 4};
constexpr Field<Access::RO> ethernet_mac_macdbgr_mcfhp{0x40028034u, 0x00000020u, 5};
constexpr Field<Access::RO> ethernet_mac_macsr_pmts{0x40028038u, 0x00000008u, 3};
constexpr Field<Access::RO> ethernet_mac_macsr_mmcs{0x40028038u, 0x00000010u, 4};
constexpr Field<Access::RO> ethernet_mac_macsr_mmcrs{0x40028038u, 0x00000020u, 5};
constexpr Field<Access::RO> ethernet_mac_macsr_mmcts{0x40028038u, 0x00000040u, 6};
constexpr Field<Access::RW> ethernet_mac_macsr_tsts{0x40028038u, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_mac_macimr_pmtim{0x4002803Cu, 0x00000008u, 3};
constexpr Field<Access::RW> ethernet_mac_macimr_tstim{0x4002803Cu, 0x00000200u, 9};
constexpr Field<Access::RW> ethernet_mac_maca0hr_maca0h{0x40028040u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> ethernet_mac_maca0hr_mo{0x40028040u, 0x80000000u, 31};
constexpr Field<Access::RW> ethernet_mac_maca0lr_maca0l{0x40028044u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca1hr_maca1h{0x40028048u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca1hr_mbc{0x40028048u, 0x3F000000u, 24};
constexpr Field<Access::RW> ethernet_mac_maca1hr_sa{0x40028048u, 0x40000000u, 30};
constexpr Field<Access::RW> ethernet_mac_maca1hr_ae{0x40028048u, 0x80000000u, 31};
constexpr Field<Access::RW> ethernet_mac_maca1lr_maca1lr{0x4002804Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca2hr_mac2ah{0x40028050u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca2hr_mbc{0x40028050u, 0x3F000000u, 24};
constexpr Field<Access::RW> ethernet_mac_maca2hr_sa{0x40028050u, 0x40000000u, 30};
constexpr Field<Access::RW> ethernet_mac_maca2hr_ae{0x40028050u, 0x80000000u, 31};
constexpr Field<Access::RW> ethernet_mac_maca2lr_maca2l{0x40028054u, 0x7FFFFFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca3hr_maca3h{0x40028058u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> ethernet_mac_maca3hr_mbc{0x40028058u, 0x3F000000u, 24};
constexpr Field<Access::RW> ethernet_mac_maca3hr_sa{0x40028058u, 0x40000000u, 30};
constexpr Field<Access::RW> ethernet_mac_maca3hr_ae{0x40028058u, 0x80000000u, 31};
constexpr Field<Access::RW> ethernet_mac_maca3lr_mbca3l{0x4002805Cu, 0xFFFFFFFFu, 0};

#endif // STM32_ETHERNET_MAC_HPP
