// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Serial peripheral interface
#ifndef STM32_SPI2_HPP
#define STM32_SPI2_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

#include "values.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SPI2_BASE = 0x40003800;
struct Spi2Regs {
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
static_assert(offsetof(Spi2Regs, cr1) == 0);
static_assert(offsetof(Spi2Regs, cr2) == 4);
static_assert(offsetof(Spi2Regs, sr) == 8);
static_assert(offsetof(Spi2Regs, dr) == 12);
static_assert(offsetof(Spi2Regs, crcpr) == 16);
static_assert(offsetof(Spi2Regs, rxcrcr) == 20);
static_assert(offsetof(Spi2Regs, txcrcr) == 24);
static_assert(offsetof(Spi2Regs, i2scfgr) == 28);
static_assert(offsetof(Spi2Regs, i2spr) == 32);

constexpr Field<Access::RW, spi::Bidimode, true> spi2_cr1_bidimode{0x40003800u, 0x00008000u, 15};
constexpr Field<Access::RW, spi::Bidioe, true> spi2_cr1_bidioe{0x40003800u, 0x00004000u, 14};
constexpr Field<Access::RW, spi::Crcen, true> spi2_cr1_crcen{0x40003800u, 0x00002000u, 13};
constexpr Field<Access::RW, spi::Crcnext, true> spi2_cr1_crcnext{0x40003800u, 0x00001000u, 12};
constexpr Field<Access::RW, spi::Dff, true> spi2_cr1_dff{0x40003800u, 0x00000800u, 11};
constexpr Field<Access::RW, spi::Rxonly, true> spi2_cr1_rxonly{0x40003800u, 0x00000400u, 10};
constexpr Field<Access::RW, spi::Ssm, true> spi2_cr1_ssm{0x40003800u, 0x00000200u, 9};
constexpr Field<Access::RW, spi::Ssi, true> spi2_cr1_ssi{0x40003800u, 0x00000100u, 8};
constexpr Field<Access::RW, spi::Lsbfirst, true> spi2_cr1_lsbfirst{0x40003800u, 0x00000080u, 7};
constexpr Field<Access::RW, spi::Spe, true> spi2_cr1_spe{0x40003800u, 0x00000040u, 6};
constexpr Field<Access::RW, spi::Br> spi2_cr1_br{0x40003800u, 0x00000038u, 3};
constexpr Field<Access::RW, spi::Mstr, true> spi2_cr1_mstr{0x40003800u, 0x00000004u, 2};
constexpr Field<Access::RW, spi::Cpol, true> spi2_cr1_cpol{0x40003800u, 0x00000002u, 1};
constexpr Field<Access::RW, spi::Cpha, true> spi2_cr1_cpha{0x40003800u, 0x00000001u, 0};
constexpr Field<Access::RW, spi::Txeie, true> spi2_cr2_txeie{0x40003804u, 0x00000080u, 7};
constexpr Field<Access::RW, spi::Rxneie, true> spi2_cr2_rxneie{0x40003804u, 0x00000040u, 6};
constexpr Field<Access::RW, spi::Errie, true> spi2_cr2_errie{0x40003804u, 0x00000020u, 5};
constexpr Field<Access::RW, spi::Frf, true> spi2_cr2_frf{0x40003804u, 0x00000010u, 4};
constexpr Field<Access::RW, spi::Ssoe, true> spi2_cr2_ssoe{0x40003804u, 0x00000004u, 2};
constexpr Field<Access::RW, spi::Txdmaen, true> spi2_cr2_txdmaen{0x40003804u, 0x00000002u, 1};
constexpr Field<Access::RW, spi::Rxdmaen, true> spi2_cr2_rxdmaen{0x40003804u, 0x00000001u, 0};
constexpr Field<Access::RO, spi::Fre, true> spi2_sr_fre{0x40003808u, 0x00000100u, 8};
constexpr Field<Access::RO, spi::Bsy, true> spi2_sr_bsy{0x40003808u, 0x00000080u, 7};
constexpr Field<Access::RO, spi::Ovr, true> spi2_sr_ovr{0x40003808u, 0x00000040u, 6};
constexpr Field<Access::RO, spi::Modf, true> spi2_sr_modf{0x40003808u, 0x00000020u, 5};
constexpr Field<Access::RC_W0, spi::Crcerr, false, false> spi2_sr_crcerr{0x40003808u, 0x00000010u, 4, 0x00000000u, 0x00000010u};
constexpr Field<Access::RO, spi::Udr, true> spi2_sr_udr{0x40003808u, 0x00000008u, 3};
constexpr Field<Access::RO, spi::Chside, true> spi2_sr_chside{0x40003808u, 0x00000004u, 2};
constexpr Field<Access::RO, spi::Txe, true> spi2_sr_txe{0x40003808u, 0x00000002u, 1};
constexpr Field<Access::RO, spi::Rxne, true> spi2_sr_rxne{0x40003808u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false, false> spi2_dr_dr{0x4000380Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> spi2_crcpr_crcpoly{0x40003810u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> spi2_rxcrcr_rxcrc{0x40003814u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> spi2_txcrcr_txcrc{0x40003818u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, spi::I2smod, true> spi2_i2scfgr_i2smod{0x4000381Cu, 0x00000800u, 11};
constexpr Field<Access::RW, spi::I2se, true> spi2_i2scfgr_i2se{0x4000381Cu, 0x00000400u, 10};
constexpr Field<Access::RW, spi::I2scfg> spi2_i2scfgr_i2scfg{0x4000381Cu, 0x00000300u, 8};
constexpr Field<Access::RW, spi::Pcmsync, true> spi2_i2scfgr_pcmsync{0x4000381Cu, 0x00000080u, 7};
constexpr Field<Access::RW, spi::I2sstd> spi2_i2scfgr_i2sstd{0x4000381Cu, 0x00000030u, 4};
constexpr Field<Access::RW, spi::Ckpol, true> spi2_i2scfgr_ckpol{0x4000381Cu, 0x00000008u, 3};
constexpr Field<Access::RW, spi::Datlen> spi2_i2scfgr_datlen{0x4000381Cu, 0x00000006u, 1};
constexpr Field<Access::RW, spi::Chlen, true> spi2_i2scfgr_chlen{0x4000381Cu, 0x00000001u, 0};
constexpr Field<Access::RW, spi::Mckoe, true> spi2_i2spr_mckoe{0x40003820u, 0x00000200u, 9};
constexpr Field<Access::RW, spi::Odd, true> spi2_i2spr_odd{0x40003820u, 0x00000100u, 8};
constexpr Field<Access::RW> spi2_i2spr_i2sdiv{0x40003820u, 0x000000FFu, 0};

#endif // STM32_SPI2_HPP
