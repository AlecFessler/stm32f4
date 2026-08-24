// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Inter-integrated circuit
#ifndef STM32_I2C2_HPP
#define STM32_I2C2_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

#include "values.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t I2C2_BASE = 0x40005800;
struct I2c2Regs {
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t oar1; // Own address register 1
    volatile uint32_t oar2; // Own address register 2
    volatile uint32_t dr; // Data register
    volatile uint32_t sr1; // Status register 1
    volatile uint32_t sr2; // Status register 2
    volatile uint32_t ccr; // Clock control register
    volatile uint32_t trise; // TRISE register
    volatile uint32_t fltr; // I2C FLTR register
};
static_assert(offsetof(I2c2Regs, cr1) == 0);
static_assert(offsetof(I2c2Regs, cr2) == 4);
static_assert(offsetof(I2c2Regs, oar1) == 8);
static_assert(offsetof(I2c2Regs, oar2) == 12);
static_assert(offsetof(I2c2Regs, dr) == 16);
static_assert(offsetof(I2c2Regs, sr1) == 20);
static_assert(offsetof(I2c2Regs, sr2) == 24);
static_assert(offsetof(I2c2Regs, ccr) == 28);
static_assert(offsetof(I2c2Regs, trise) == 32);
static_assert(offsetof(I2c2Regs, fltr) == 36);

constexpr Field<Access::RW, i2c::Swrst, true> i2c2_cr1_swrst{0x40005800u, 0x00008000u, 15};
constexpr Field<Access::RW, i2c::Alert, true> i2c2_cr1_alert{0x40005800u, 0x00002000u, 13};
constexpr Field<Access::RW, i2c::Pec, true> i2c2_cr1_pec{0x40005800u, 0x00001000u, 12};
constexpr Field<Access::RW, i2c::Pos, true> i2c2_cr1_pos{0x40005800u, 0x00000800u, 11};
constexpr Field<Access::RW, i2c::Ack, true> i2c2_cr1_ack{0x40005800u, 0x00000400u, 10};
constexpr Field<Access::RW, i2c::Stop, true> i2c2_cr1_stop{0x40005800u, 0x00000200u, 9};
constexpr Field<Access::RW, i2c::Start, true> i2c2_cr1_start{0x40005800u, 0x00000100u, 8};
constexpr Field<Access::RW, i2c::Nostretch, true> i2c2_cr1_nostretch{0x40005800u, 0x00000080u, 7};
constexpr Field<Access::RW, i2c::Engc, true> i2c2_cr1_engc{0x40005800u, 0x00000040u, 6};
constexpr Field<Access::RW, i2c::Enpec, true> i2c2_cr1_enpec{0x40005800u, 0x00000020u, 5};
constexpr Field<Access::RW, i2c::Enarp, true> i2c2_cr1_enarp{0x40005800u, 0x00000010u, 4};
constexpr Field<Access::RW, i2c::Smbtype, true> i2c2_cr1_smbtype{0x40005800u, 0x00000008u, 3};
constexpr Field<Access::RW, i2c::Smbus, true> i2c2_cr1_smbus{0x40005800u, 0x00000002u, 1};
constexpr Field<Access::RW, i2c::Pe, true> i2c2_cr1_pe{0x40005800u, 0x00000001u, 0};
constexpr Field<Access::RW, i2c::Last, true> i2c2_cr2_last{0x40005804u, 0x00001000u, 12};
constexpr Field<Access::RW, i2c::Dmaen, true> i2c2_cr2_dmaen{0x40005804u, 0x00000800u, 11};
constexpr Field<Access::RW, i2c::Itbufen, true> i2c2_cr2_itbufen{0x40005804u, 0x00000400u, 10};
constexpr Field<Access::RW, i2c::Itevten, true> i2c2_cr2_itevten{0x40005804u, 0x00000200u, 9};
constexpr Field<Access::RW, i2c::Iterren, true> i2c2_cr2_iterren{0x40005804u, 0x00000100u, 8};
constexpr Field<Access::RW> i2c2_cr2_freq{0x40005804u, 0x0000003Fu, 0};
constexpr Field<Access::RW, i2c::Addmode, true> i2c2_oar1_addmode{0x40005808u, 0x00008000u, 15};
constexpr Field<Access::RW> i2c2_oar1_add10{0x40005808u, 0x00000300u, 8};
constexpr Field<Access::RW> i2c2_oar1_add7{0x40005808u, 0x000000FEu, 1};
constexpr Field<Access::RW, uint32_t, true> i2c2_oar1_add0{0x40005808u, 0x00000001u, 0};
constexpr Field<Access::RW, i2c::Endual, true> i2c2_oar2_endual{0x4000580Cu, 0x00000001u, 0};
constexpr Field<Access::RW> i2c2_oar2_add2{0x4000580Cu, 0x000000FEu, 1};
constexpr Field<Access::RW, uint32_t, false, false> i2c2_dr_dr{0x40005810u, 0x000000FFu, 0};
constexpr Field<Access::RC_W0, i2c::Smbalert, false, false> i2c2_sr1_smbalert{0x40005814u, 0x00008000u, 15, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Timeout, false, false> i2c2_sr1_timeout{0x40005814u, 0x00004000u, 14, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Pecerr, false, false> i2c2_sr1_pecerr{0x40005814u, 0x00001000u, 12, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Ovr, false, false> i2c2_sr1_ovr{0x40005814u, 0x00000800u, 11, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Af, false, false> i2c2_sr1_af{0x40005814u, 0x00000400u, 10, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Arlo, false, false> i2c2_sr1_arlo{0x40005814u, 0x00000200u, 9, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RC_W0, i2c::Berr, false, false> i2c2_sr1_berr{0x40005814u, 0x00000100u, 8, 0x00000000u, 0x0000DF00u};
constexpr Field<Access::RO, i2c::Txe, true> i2c2_sr1_txe{0x40005814u, 0x00000080u, 7};
constexpr Field<Access::RO, i2c::Rxne, true> i2c2_sr1_rxne{0x40005814u, 0x00000040u, 6};
constexpr Field<Access::RO, i2c::Stopf, true> i2c2_sr1_stopf{0x40005814u, 0x00000010u, 4};
constexpr Field<Access::RO, i2c::Btf, true> i2c2_sr1_btf{0x40005814u, 0x00000004u, 2};
constexpr Field<Access::RO, i2c::Addr, true> i2c2_sr1_addr{0x40005814u, 0x00000002u, 1};
constexpr Field<Access::RO, i2c::Sb, true> i2c2_sr1_sb{0x40005814u, 0x00000001u, 0};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr1_add10{0x40005814u, 0x00000008u, 3};
constexpr Field<Access::RO> i2c2_sr2_pec{0x40005818u, 0x0000FF00u, 8};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_dualf{0x40005818u, 0x00000080u, 7};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_smbhost{0x40005818u, 0x00000040u, 6};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_smbdefault{0x40005818u, 0x00000020u, 5};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_gencall{0x40005818u, 0x00000010u, 4};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_tra{0x40005818u, 0x00000004u, 2};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_busy{0x40005818u, 0x00000002u, 1};
constexpr Field<Access::RO, uint32_t, true> i2c2_sr2_msl{0x40005818u, 0x00000001u, 0};
constexpr Field<Access::RW, i2c::F_s, true> i2c2_ccr_f_s{0x4000581Cu, 0x00008000u, 15};
constexpr Field<Access::RW, i2c::Duty, true> i2c2_ccr_duty{0x4000581Cu, 0x00004000u, 14};
constexpr Field<Access::RW> i2c2_ccr_ccr{0x4000581Cu, 0x00000FFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> i2c2_trise_trise{0x40005820u, 0x0000003Fu, 0};
constexpr Field<Access::RW, i2c::Dnf> i2c2_fltr_dnf{0x40005824u, 0x0000000Fu, 0};
constexpr Field<Access::RW, i2c::Anoff, true> i2c2_fltr_anoff{0x40005824u, 0x00000010u, 4};

#endif // STM32_I2C2_HPP
