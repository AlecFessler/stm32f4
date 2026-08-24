// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Ethernet: MAC management counters
#ifndef STM32_ETHERNET_MMC_HPP
#define STM32_ETHERNET_MMC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t ETHERNET_MMC_BASE = 0x40028100;
struct Ethernet_mmcRegs {
    volatile uint32_t mmccr; // Ethernet MMC control register
    volatile uint32_t mmcrir; // Ethernet MMC receive interrupt register
    volatile uint32_t mmctir; // Ethernet MMC transmit interrupt register
    volatile uint32_t mmcrimr; // Ethernet MMC receive interrupt mask register
    volatile uint32_t mmctimr; // Ethernet MMC transmit interrupt mask register
    uint32_t _reserved0[14];
    volatile uint32_t mmctgfsccr; // Ethernet MMC transmitted good frames after a single collision counter
    volatile uint32_t mmctgfmsccr; // Ethernet MMC transmitted good frames after more than a single collision
    uint32_t _reserved1[5];
    volatile uint32_t mmctgfcr; // Ethernet MMC transmitted good frames counter register
    uint32_t _reserved2[10];
    volatile uint32_t mmcrfcecr; // Ethernet MMC received frames with CRC error counter register
    volatile uint32_t mmcrfaecr; // Ethernet MMC received frames with alignment error counter register
    uint32_t _reserved3[10];
    volatile uint32_t mmcrgufcr; // MMC received good unicast frames counter register
};
static_assert(offsetof(Ethernet_mmcRegs, mmccr) == 0);
static_assert(offsetof(Ethernet_mmcRegs, mmcrir) == 4);
static_assert(offsetof(Ethernet_mmcRegs, mmctir) == 8);
static_assert(offsetof(Ethernet_mmcRegs, mmcrimr) == 12);
static_assert(offsetof(Ethernet_mmcRegs, mmctimr) == 16);
static_assert(offsetof(Ethernet_mmcRegs, mmctgfsccr) == 76);
static_assert(offsetof(Ethernet_mmcRegs, mmctgfmsccr) == 80);
static_assert(offsetof(Ethernet_mmcRegs, mmctgfcr) == 104);
static_assert(offsetof(Ethernet_mmcRegs, mmcrfcecr) == 148);
static_assert(offsetof(Ethernet_mmcRegs, mmcrfaecr) == 152);
static_assert(offsetof(Ethernet_mmcRegs, mmcrgufcr) == 196);

constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_cr{0x40028100u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_csr{0x40028100u, 0x00000002u, 1};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_ror{0x40028100u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_mcf{0x40028100u, 0x00000008u, 3};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_mcp{0x40028100u, 0x00000010u, 4};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmccr_mcfhp{0x40028100u, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrir_rfces{0x40028104u, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrir_rfaes{0x40028104u, 0x00000040u, 6};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrir_rgufs{0x40028104u, 0x00020000u, 17};
constexpr Field<Access::RO, uint32_t, true> ethernet_mmc_mmctir_tgfscs{0x40028108u, 0x00004000u, 14};
constexpr Field<Access::RO, uint32_t, true> ethernet_mmc_mmctir_tgfmscs{0x40028108u, 0x00008000u, 15};
constexpr Field<Access::RO, uint32_t, true> ethernet_mmc_mmctir_tgfs{0x40028108u, 0x00200000u, 21};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrimr_rfcem{0x4002810Cu, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrimr_rfaem{0x4002810Cu, 0x00000040u, 6};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmcrimr_rgufm{0x4002810Cu, 0x00020000u, 17};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmctimr_tgfscm{0x40028110u, 0x00004000u, 14};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmctimr_tgfmscm{0x40028110u, 0x00008000u, 15};
constexpr Field<Access::RW, uint32_t, true> ethernet_mmc_mmctimr_tgfm{0x40028110u, 0x00010000u, 16};
constexpr Field<Access::RO> ethernet_mmc_mmctgfsccr_tgfscc{0x4002814Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_mmc_mmctgfmsccr_tgfmscc{0x40028150u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_mmc_mmctgfcr_tgfc{0x40028168u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_mmc_mmcrfcecr_rfcfc{0x40028194u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_mmc_mmcrfaecr_rfaec{0x40028198u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> ethernet_mmc_mmcrgufcr_rgufc{0x400281C4u, 0xFFFFFFFFu, 0};

#endif // STM32_ETHERNET_MMC_HPP
