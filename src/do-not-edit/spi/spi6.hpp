// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Serial peripheral interface
#ifndef STM32_SPI6_HPP
#define STM32_SPI6_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SPI6_BASE = 0x40015400;
struct Spi6Regs {
    volatile uint32_t cr1; // control register 1
    volatile uint32_t cr2; // control register 2
    volatile uint32_t sr; // status register
    volatile uint32_t dr; // data register
    volatile uint32_t crcpr; // CRC polynomial register
    volatile uint32_t rxcrcr; // RX CRC register
    volatile uint32_t txcrcr; // TX CRC register
    volatile uint32_t i2scfgr; // I2S configuration register
    volatile uint32_t i2spr; // I2S prescaler register
};
static_assert(offsetof(Spi6Regs, cr1) == 0);
static_assert(offsetof(Spi6Regs, cr2) == 4);
static_assert(offsetof(Spi6Regs, sr) == 8);
static_assert(offsetof(Spi6Regs, dr) == 12);
static_assert(offsetof(Spi6Regs, crcpr) == 16);
static_assert(offsetof(Spi6Regs, rxcrcr) == 20);
static_assert(offsetof(Spi6Regs, txcrcr) == 24);
static_assert(offsetof(Spi6Regs, i2scfgr) == 28);
static_assert(offsetof(Spi6Regs, i2spr) == 32);

constexpr Field<Access::RW> spi6_cr1_bidimode{0x40015400u, 0x00008000u, 15};
constexpr Field<Access::RW> spi6_cr1_bidioe{0x40015400u, 0x00004000u, 14};
constexpr Field<Access::RW> spi6_cr1_crcen{0x40015400u, 0x00002000u, 13};
constexpr Field<Access::RW> spi6_cr1_crcnext{0x40015400u, 0x00001000u, 12};
constexpr Field<Access::RW> spi6_cr1_dff{0x40015400u, 0x00000800u, 11};
constexpr Field<Access::RW> spi6_cr1_rxonly{0x40015400u, 0x00000400u, 10};
constexpr Field<Access::RW> spi6_cr1_ssm{0x40015400u, 0x00000200u, 9};
constexpr Field<Access::RW> spi6_cr1_ssi{0x40015400u, 0x00000100u, 8};
constexpr Field<Access::RW> spi6_cr1_lsbfirst{0x40015400u, 0x00000080u, 7};
constexpr Field<Access::RW> spi6_cr1_spe{0x40015400u, 0x00000040u, 6};
constexpr Field<Access::RW> spi6_cr1_br{0x40015400u, 0x00000038u, 3};
constexpr Field<Access::RW> spi6_cr1_mstr{0x40015400u, 0x00000004u, 2};
constexpr Field<Access::RW> spi6_cr1_cpol{0x40015400u, 0x00000002u, 1};
constexpr Field<Access::RW> spi6_cr1_cpha{0x40015400u, 0x00000001u, 0};
constexpr Field<Access::RW> spi6_cr2_txeie{0x40015404u, 0x00000080u, 7};
constexpr Field<Access::RW> spi6_cr2_rxneie{0x40015404u, 0x00000040u, 6};
constexpr Field<Access::RW> spi6_cr2_errie{0x40015404u, 0x00000020u, 5};
constexpr Field<Access::RW> spi6_cr2_frf{0x40015404u, 0x00000010u, 4};
constexpr Field<Access::RW> spi6_cr2_ssoe{0x40015404u, 0x00000004u, 2};
constexpr Field<Access::RW> spi6_cr2_txdmaen{0x40015404u, 0x00000002u, 1};
constexpr Field<Access::RW> spi6_cr2_rxdmaen{0x40015404u, 0x00000001u, 0};
constexpr Field<Access::RO> spi6_sr_tifrfe{0x40015408u, 0x00000100u, 8};
constexpr Field<Access::RO> spi6_sr_bsy{0x40015408u, 0x00000080u, 7};
constexpr Field<Access::RO> spi6_sr_ovr{0x40015408u, 0x00000040u, 6};
constexpr Field<Access::RO> spi6_sr_modf{0x40015408u, 0x00000020u, 5};
constexpr Field<Access::RW> spi6_sr_crcerr{0x40015408u, 0x00000010u, 4};
constexpr Field<Access::RO> spi6_sr_udr{0x40015408u, 0x00000008u, 3};
constexpr Field<Access::RO> spi6_sr_chside{0x40015408u, 0x00000004u, 2};
constexpr Field<Access::RO> spi6_sr_txe{0x40015408u, 0x00000002u, 1};
constexpr Field<Access::RO> spi6_sr_rxne{0x40015408u, 0x00000001u, 0};
constexpr Field<Access::RW> spi6_dr_dr{0x4001540Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> spi6_crcpr_crcpoly{0x40015410u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> spi6_rxcrcr_rxcrc{0x40015414u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> spi6_txcrcr_txcrc{0x40015418u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> spi6_i2scfgr_i2smod{0x4001541Cu, 0x00000800u, 11};
constexpr Field<Access::RW> spi6_i2scfgr_i2se{0x4001541Cu, 0x00000400u, 10};
constexpr Field<Access::RW> spi6_i2scfgr_i2scfg{0x4001541Cu, 0x00000300u, 8};
constexpr Field<Access::RW> spi6_i2scfgr_pcmsync{0x4001541Cu, 0x00000080u, 7};
constexpr Field<Access::RW> spi6_i2scfgr_i2sstd{0x4001541Cu, 0x00000030u, 4};
constexpr Field<Access::RW> spi6_i2scfgr_ckpol{0x4001541Cu, 0x00000008u, 3};
constexpr Field<Access::RW> spi6_i2scfgr_datlen{0x4001541Cu, 0x00000006u, 1};
constexpr Field<Access::RW> spi6_i2scfgr_chlen{0x4001541Cu, 0x00000001u, 0};
constexpr Field<Access::RW> spi6_i2spr_mckoe{0x40015420u, 0x00000200u, 9};
constexpr Field<Access::RW> spi6_i2spr_odd{0x40015420u, 0x00000100u, 8};
constexpr Field<Access::RW> spi6_i2spr_i2sdiv{0x40015420u, 0x000000FFu, 0};

#endif // STM32_SPI6_HPP