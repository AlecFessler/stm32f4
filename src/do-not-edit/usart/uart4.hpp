// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Universal synchronous asynchronous receiver transmitter
#ifndef STM32_UART4_HPP
#define STM32_UART4_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace uart4 {
enum class Dmar : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dmat : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Eie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fe : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Hdsel : uint32_t {
    fullduplex = 0,
    halfduplex = 1,
};
enum class Idle : uint32_t {
    noidle = 0,
    idle = 1,
};
enum class Idleie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Iren : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Irlp : uint32_t {
    normal = 0,
    lowpower = 1,
};
enum class Lbd : uint32_t {
    notdetected = 0,
    detected = 1,
};
enum class Lbdie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Lbdl : uint32_t {
    lbdl10 = 0,
    lbdl11 = 1,
};
enum class Linen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class M : uint32_t {
    m8 = 0,
    m9 = 1,
};
enum class Ne : uint32_t {
    nonoise = 0,
    noise = 1,
};
enum class Nf : uint32_t {
    nonoise = 0,
    noise = 1,
};
enum class Onebit : uint32_t {
    sample3 = 0,
    sample1 = 1,
};
enum class Ore : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Over8 : uint32_t {
    oversample16 = 0,
    oversample8 = 1,
};
enum class Pce : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pe : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Peie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ps : uint32_t {
    even = 0,
    odd = 1,
};
enum class Re : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rwu : uint32_t {
    active = 0,
    mute = 1,
};
enum class Rxne : uint32_t {
    nodata = 0,
    dataready = 1,
};
enum class Rxneie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Sbk : uint32_t {
    nobreak = 0,
    break_ = 1,
};
enum class Stop : uint32_t {
    stop1 = 0,
    stop2 = 2,
};
enum class Tc : uint32_t {
    txnotcomplete = 0,
    txcomplete = 1,
};
enum class Tcie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Te : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Txe : uint32_t {
    txnotempty = 0,
    txempty = 1,
};
enum class Txeie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ue : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wake : uint32_t {
    idleline = 0,
    addressmark = 1,
};
} // namespace uart4

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t UART4_BASE = 0x40004C00;
struct Uart4Regs {
    volatile uint32_t sr; // Status register
    volatile uint32_t dr; // Data register
    volatile uint32_t brr; // Baud rate register
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t cr3; // Control register 3
};
static_assert(offsetof(Uart4Regs, sr) == 0);
static_assert(offsetof(Uart4Regs, dr) == 4);
static_assert(offsetof(Uart4Regs, brr) == 8);
static_assert(offsetof(Uart4Regs, cr1) == 12);
static_assert(offsetof(Uart4Regs, cr2) == 16);
static_assert(offsetof(Uart4Regs, cr3) == 20);

constexpr Field<Access::RC_W0, uart4::Lbd, false> uart4_sr_lbd{0x40004C00u, 0x00000100u, 8, 0x00000000u, 0x00C00160u};
constexpr Field<Access::RO, uart4::Txe> uart4_sr_txe{0x40004C00u, 0x00000080u, 7};
constexpr Field<Access::RC_W0, uart4::Tc, false> uart4_sr_tc{0x40004C00u, 0x00000040u, 6, 0x00000000u, 0x00C00160u};
constexpr Field<Access::RC_W0, uart4::Rxne, false> uart4_sr_rxne{0x40004C00u, 0x00000020u, 5, 0x00000000u, 0x00C00160u};
constexpr Field<Access::RO, uart4::Idle> uart4_sr_idle{0x40004C00u, 0x00000010u, 4};
constexpr Field<Access::RO, uart4::Ore> uart4_sr_ore{0x40004C00u, 0x00000008u, 3};
constexpr Field<Access::RO, uart4::Ne> uart4_sr_nf{0x40004C00u, 0x00000004u, 2};
constexpr Field<Access::RO, uart4::Fe> uart4_sr_fe{0x40004C00u, 0x00000002u, 1};
constexpr Field<Access::RO, uart4::Pe> uart4_sr_pe{0x40004C00u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> uart4_dr_dr{0x40004C04u, 0x000001FFu, 0};
constexpr Field<Access::RW> uart4_brr_div_mantissa{0x40004C08u, 0x0000FFF0u, 4};
constexpr Field<Access::RW> uart4_brr_div_fraction{0x40004C08u, 0x0000000Fu, 0};
constexpr Field<Access::RW, uart4::Ue, true, true> uart4_cr1_ue{0x40004C0Cu, 0x00002000u, 13};
constexpr Field<Access::RW, uart4::M, true, true> uart4_cr1_m{0x40004C0Cu, 0x00001000u, 12};
constexpr Field<Access::RW, uart4::Wake, true, true> uart4_cr1_wake{0x40004C0Cu, 0x00000800u, 11};
constexpr Field<Access::RW, uart4::Pce, true, true> uart4_cr1_pce{0x40004C0Cu, 0x00000400u, 10};
constexpr Field<Access::RW, uart4::Ps, true, true> uart4_cr1_ps{0x40004C0Cu, 0x00000200u, 9};
constexpr Field<Access::RW, uart4::Peie, true, true> uart4_cr1_peie{0x40004C0Cu, 0x00000100u, 8};
constexpr Field<Access::RW, uart4::Txeie, true, true> uart4_cr1_txeie{0x40004C0Cu, 0x00000080u, 7};
constexpr Field<Access::RW, uart4::Tcie, true, true> uart4_cr1_tcie{0x40004C0Cu, 0x00000040u, 6};
constexpr Field<Access::RW, uart4::Rxneie, true, true> uart4_cr1_rxneie{0x40004C0Cu, 0x00000020u, 5};
constexpr Field<Access::RW, uart4::Idleie, true, true> uart4_cr1_idleie{0x40004C0Cu, 0x00000010u, 4};
constexpr Field<Access::RW, uart4::Te, true, true> uart4_cr1_te{0x40004C0Cu, 0x00000008u, 3};
constexpr Field<Access::RW, uart4::Re, true, true> uart4_cr1_re{0x40004C0Cu, 0x00000004u, 2};
constexpr Field<Access::RW, uart4::Rwu, true, true> uart4_cr1_rwu{0x40004C0Cu, 0x00000002u, 1};
constexpr Field<Access::RW, uart4::Sbk, true, true> uart4_cr1_sbk{0x40004C0Cu, 0x00000001u, 0};
constexpr Field<Access::RW, uart4::Over8, true, true> uart4_cr1_over8{0x40004C0Cu, 0x00008000u, 15};
constexpr Field<Access::RW, uart4::Linen, true, true> uart4_cr2_linen{0x40004C10u, 0x00004000u, 14};
constexpr Field<Access::RW, uart4::Stop> uart4_cr2_stop{0x40004C10u, 0x00003000u, 12};
constexpr Field<Access::RW, uart4::Lbdie, true, true> uart4_cr2_lbdie{0x40004C10u, 0x00000040u, 6};
constexpr Field<Access::RW, uart4::Lbdl, true, true> uart4_cr2_lbdl{0x40004C10u, 0x00000020u, 5};
constexpr Field<Access::RW> uart4_cr2_add{0x40004C10u, 0x0000000Fu, 0};
constexpr Field<Access::RW, uart4::Onebit, true, true> uart4_cr3_onebit{0x40004C14u, 0x00000800u, 11};
constexpr Field<Access::RW, uart4::Dmat, true, true> uart4_cr3_dmat{0x40004C14u, 0x00000080u, 7};
constexpr Field<Access::RW, uart4::Dmar, true, true> uart4_cr3_dmar{0x40004C14u, 0x00000040u, 6};
constexpr Field<Access::RW, uart4::Hdsel, true, true> uart4_cr3_hdsel{0x40004C14u, 0x00000008u, 3};
constexpr Field<Access::RW, uart4::Irlp, true, true> uart4_cr3_irlp{0x40004C14u, 0x00000004u, 2};
constexpr Field<Access::RW, uart4::Iren, true, true> uart4_cr3_iren{0x40004C14u, 0x00000002u, 1};
constexpr Field<Access::RW, uart4::Eie, true, true> uart4_cr3_eie{0x40004C14u, 0x00000001u, 0};

#endif // STM32_UART4_HPP
