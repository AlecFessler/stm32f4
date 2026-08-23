// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Serial peripheral interface
#ifndef STM32_I2S2EXT_HPP
#define STM32_I2S2EXT_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

#include "values.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t I2S2EXT_BASE = 0x40003400;
struct I2s2extRegs {
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
static_assert(offsetof(I2s2extRegs, cr1) == 0);
static_assert(offsetof(I2s2extRegs, cr2) == 4);
static_assert(offsetof(I2s2extRegs, sr) == 8);
static_assert(offsetof(I2s2extRegs, dr) == 12);
static_assert(offsetof(I2s2extRegs, crcpr) == 16);
static_assert(offsetof(I2s2extRegs, rxcrcr) == 20);
static_assert(offsetof(I2s2extRegs, txcrcr) == 24);
static_assert(offsetof(I2s2extRegs, i2scfgr) == 28);
static_assert(offsetof(I2s2extRegs, i2spr) == 32);

constexpr Field<Access::RW, spi::Bidimode> i2s2ext_cr1_bidimode{0x40003400u, 0x00008000u, 15};
constexpr Field<Access::RW, spi::Bidioe> i2s2ext_cr1_bidioe{0x40003400u, 0x00004000u, 14};
constexpr Field<Access::RW, spi::Crcen> i2s2ext_cr1_crcen{0x40003400u, 0x00002000u, 13};
constexpr Field<Access::RW, spi::Crcnext> i2s2ext_cr1_crcnext{0x40003400u, 0x00001000u, 12};
constexpr Field<Access::RW, spi::Dff> i2s2ext_cr1_dff{0x40003400u, 0x00000800u, 11};
constexpr Field<Access::RW, spi::Rxonly> i2s2ext_cr1_rxonly{0x40003400u, 0x00000400u, 10};
constexpr Field<Access::RW, spi::Ssm> i2s2ext_cr1_ssm{0x40003400u, 0x00000200u, 9};
constexpr Field<Access::RW, spi::Ssi> i2s2ext_cr1_ssi{0x40003400u, 0x00000100u, 8};
constexpr Field<Access::RW, spi::Lsbfirst> i2s2ext_cr1_lsbfirst{0x40003400u, 0x00000080u, 7};
constexpr Field<Access::RW, spi::Spe> i2s2ext_cr1_spe{0x40003400u, 0x00000040u, 6};
constexpr Field<Access::RW, spi::Br> i2s2ext_cr1_br{0x40003400u, 0x00000038u, 3};
constexpr Field<Access::RW, spi::Mstr> i2s2ext_cr1_mstr{0x40003400u, 0x00000004u, 2};
constexpr Field<Access::RW, spi::Cpol> i2s2ext_cr1_cpol{0x40003400u, 0x00000002u, 1};
constexpr Field<Access::RW, spi::Cpha> i2s2ext_cr1_cpha{0x40003400u, 0x00000001u, 0};
constexpr Field<Access::RW, spi::Txeie> i2s2ext_cr2_txeie{0x40003404u, 0x00000080u, 7};
constexpr Field<Access::RW, spi::Rxneie> i2s2ext_cr2_rxneie{0x40003404u, 0x00000040u, 6};
constexpr Field<Access::RW, spi::Errie> i2s2ext_cr2_errie{0x40003404u, 0x00000020u, 5};
constexpr Field<Access::RW, spi::Frf> i2s2ext_cr2_frf{0x40003404u, 0x00000010u, 4};
constexpr Field<Access::RW, spi::Ssoe> i2s2ext_cr2_ssoe{0x40003404u, 0x00000004u, 2};
constexpr Field<Access::RW, spi::Txdmaen> i2s2ext_cr2_txdmaen{0x40003404u, 0x00000002u, 1};
constexpr Field<Access::RW, spi::Rxdmaen> i2s2ext_cr2_rxdmaen{0x40003404u, 0x00000001u, 0};
constexpr Field<Access::RO, spi::Fre> i2s2ext_sr_tifrfe{0x40003408u, 0x00000100u, 8};
constexpr Field<Access::RO, spi::Bsy> i2s2ext_sr_bsy{0x40003408u, 0x00000080u, 7};
constexpr Field<Access::RO, spi::Ovr> i2s2ext_sr_ovr{0x40003408u, 0x00000040u, 6};
constexpr Field<Access::RO, spi::Modf> i2s2ext_sr_modf{0x40003408u, 0x00000020u, 5};
constexpr Field<Access::RW, spi::Crcerr> i2s2ext_sr_crcerr{0x40003408u, 0x00000010u, 4};
constexpr Field<Access::RO, spi::Udr> i2s2ext_sr_udr{0x40003408u, 0x00000008u, 3};
constexpr Field<Access::RO, spi::Chside> i2s2ext_sr_chside{0x40003408u, 0x00000004u, 2};
constexpr Field<Access::RO, spi::Txe> i2s2ext_sr_txe{0x40003408u, 0x00000002u, 1};
constexpr Field<Access::RO, spi::Rxne> i2s2ext_sr_rxne{0x40003408u, 0x00000001u, 0};
constexpr Field<Access::RW> i2s2ext_dr_dr{0x4000340Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> i2s2ext_crcpr_crcpoly{0x40003410u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> i2s2ext_rxcrcr_rxcrc{0x40003414u, 0x0000FFFFu, 0};
constexpr Field<Access::RO> i2s2ext_txcrcr_txcrc{0x40003418u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, spi::I2smod> i2s2ext_i2scfgr_i2smod{0x4000341Cu, 0x00000800u, 11};
constexpr Field<Access::RW, spi::I2se> i2s2ext_i2scfgr_i2se{0x4000341Cu, 0x00000400u, 10};
constexpr Field<Access::RW, spi::I2scfg> i2s2ext_i2scfgr_i2scfg{0x4000341Cu, 0x00000300u, 8};
constexpr Field<Access::RW, spi::Pcmsync> i2s2ext_i2scfgr_pcmsync{0x4000341Cu, 0x00000080u, 7};
constexpr Field<Access::RW, spi::I2sstd> i2s2ext_i2scfgr_i2sstd{0x4000341Cu, 0x00000030u, 4};
constexpr Field<Access::RW, spi::Ckpol> i2s2ext_i2scfgr_ckpol{0x4000341Cu, 0x00000008u, 3};
constexpr Field<Access::RW, spi::Datlen> i2s2ext_i2scfgr_datlen{0x4000341Cu, 0x00000006u, 1};
constexpr Field<Access::RW, spi::Chlen> i2s2ext_i2scfgr_chlen{0x4000341Cu, 0x00000001u, 0};
constexpr Field<Access::RW, spi::Mckoe> i2s2ext_i2spr_mckoe{0x40003420u, 0x00000200u, 9};
constexpr Field<Access::RW, spi::Odd> i2s2ext_i2spr_odd{0x40003420u, 0x00000100u, 8};
constexpr Field<Access::RW> i2s2ext_i2spr_i2sdiv{0x40003420u, 0x000000FFu, 0};

#endif // STM32_I2S2EXT_HPP
