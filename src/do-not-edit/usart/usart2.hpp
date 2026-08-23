// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Universal synchronous asynchronous receiver transmitter
#ifndef STM32_USART2_HPP
#define STM32_USART2_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace usart2 {
enum class Clken : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cpha : uint32_t {
    first = 0,
    second = 1,
};
enum class Cpol : uint32_t {
    low = 0,
    high = 1,
};
enum class Cts : uint32_t {
    notchanged = 0,
    changed = 1,
};
enum class Ctse : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ctsie : uint32_t {
    disabled = 0,
    enabled = 1,
};
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
enum class Lbcl : uint32_t {
    disabled = 0,
    enabled = 1,
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
enum class Nack : uint32_t {
    disabled = 0,
    enabled = 1,
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
enum class Rtse : uint32_t {
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
enum class Scen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Stop : uint32_t {
    stop1 = 0,
    stop0p5 = 1,
    stop2 = 2,
    stop1p5 = 3,
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
} // namespace usart2

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t USART2_BASE = 0x40004400;
struct Usart2Regs {
    volatile uint32_t sr; // Status register
    volatile uint32_t dr; // Data register
    volatile uint32_t brr; // Baud rate register
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t cr3; // Control register 3
    volatile uint32_t gtpr; // Guard time and prescaler register
};
static_assert(offsetof(Usart2Regs, sr) == 0);
static_assert(offsetof(Usart2Regs, dr) == 4);
static_assert(offsetof(Usart2Regs, brr) == 8);
static_assert(offsetof(Usart2Regs, cr1) == 12);
static_assert(offsetof(Usart2Regs, cr2) == 16);
static_assert(offsetof(Usart2Regs, cr3) == 20);
static_assert(offsetof(Usart2Regs, gtpr) == 24);

constexpr Field<Access::RC_W0, usart2::Cts, 0x00000000u, 0x00000360u, false> usart2_sr_cts{0x40004400u, 0x00000200u, 9};
constexpr Field<Access::RC_W0, usart2::Lbd, 0x00000000u, 0x00000360u, false> usart2_sr_lbd{0x40004400u, 0x00000100u, 8};
constexpr Field<Access::RO, usart2::Txe> usart2_sr_txe{0x40004400u, 0x00000080u, 7};
constexpr Field<Access::RC_W0, usart2::Tc, 0x00000000u, 0x00000360u, false> usart2_sr_tc{0x40004400u, 0x00000040u, 6};
constexpr Field<Access::RC_W0, usart2::Rxne, 0x00000000u, 0x00000360u, false> usart2_sr_rxne{0x40004400u, 0x00000020u, 5};
constexpr Field<Access::RO, usart2::Idle> usart2_sr_idle{0x40004400u, 0x00000010u, 4};
constexpr Field<Access::RO, usart2::Ore> usart2_sr_ore{0x40004400u, 0x00000008u, 3};
constexpr Field<Access::RO, usart2::Ne> usart2_sr_nf{0x40004400u, 0x00000004u, 2};
constexpr Field<Access::RO, usart2::Fe> usart2_sr_fe{0x40004400u, 0x00000002u, 1};
constexpr Field<Access::RO, usart2::Pe> usart2_sr_pe{0x40004400u, 0x00000001u, 0};
constexpr Field<Access::RW> usart2_dr_dr{0x40004404u, 0x000001FFu, 0};
constexpr Field<Access::RW> usart2_brr_div_mantissa{0x40004408u, 0x0000FFF0u, 4};
constexpr Field<Access::RW> usart2_brr_div_fraction{0x40004408u, 0x0000000Fu, 0};
constexpr Field<Access::RW, usart2::Ue> usart2_cr1_ue{0x4000440Cu, 0x00002000u, 13};
constexpr Field<Access::RW, usart2::M> usart2_cr1_m{0x4000440Cu, 0x00001000u, 12};
constexpr Field<Access::RW, usart2::Wake> usart2_cr1_wake{0x4000440Cu, 0x00000800u, 11};
constexpr Field<Access::RW, usart2::Pce> usart2_cr1_pce{0x4000440Cu, 0x00000400u, 10};
constexpr Field<Access::RW, usart2::Ps> usart2_cr1_ps{0x4000440Cu, 0x00000200u, 9};
constexpr Field<Access::RW, usart2::Peie> usart2_cr1_peie{0x4000440Cu, 0x00000100u, 8};
constexpr Field<Access::RW, usart2::Txeie> usart2_cr1_txeie{0x4000440Cu, 0x00000080u, 7};
constexpr Field<Access::RW, usart2::Tcie> usart2_cr1_tcie{0x4000440Cu, 0x00000040u, 6};
constexpr Field<Access::RW, usart2::Rxneie> usart2_cr1_rxneie{0x4000440Cu, 0x00000020u, 5};
constexpr Field<Access::RW, usart2::Idleie> usart2_cr1_idleie{0x4000440Cu, 0x00000010u, 4};
constexpr Field<Access::RW, usart2::Te> usart2_cr1_te{0x4000440Cu, 0x00000008u, 3};
constexpr Field<Access::RW, usart2::Re> usart2_cr1_re{0x4000440Cu, 0x00000004u, 2};
constexpr Field<Access::RW, usart2::Rwu> usart2_cr1_rwu{0x4000440Cu, 0x00000002u, 1};
constexpr Field<Access::RW, usart2::Sbk> usart2_cr1_sbk{0x4000440Cu, 0x00000001u, 0};
constexpr Field<Access::RW, usart2::Over8> usart2_cr1_over8{0x4000440Cu, 0x00008000u, 15};
constexpr Field<Access::RW, usart2::Linen> usart2_cr2_linen{0x40004410u, 0x00004000u, 14};
constexpr Field<Access::RW, usart2::Stop> usart2_cr2_stop{0x40004410u, 0x00003000u, 12};
constexpr Field<Access::RW, usart2::Clken> usart2_cr2_clken{0x40004410u, 0x00000800u, 11};
constexpr Field<Access::RW, usart2::Cpol> usart2_cr2_cpol{0x40004410u, 0x00000400u, 10};
constexpr Field<Access::RW, usart2::Cpha> usart2_cr2_cpha{0x40004410u, 0x00000200u, 9};
constexpr Field<Access::RW, usart2::Lbcl> usart2_cr2_lbcl{0x40004410u, 0x00000100u, 8};
constexpr Field<Access::RW, usart2::Lbdie> usart2_cr2_lbdie{0x40004410u, 0x00000040u, 6};
constexpr Field<Access::RW, usart2::Lbdl> usart2_cr2_lbdl{0x40004410u, 0x00000020u, 5};
constexpr Field<Access::RW> usart2_cr2_add{0x40004410u, 0x0000000Fu, 0};
constexpr Field<Access::RW, usart2::Onebit> usart2_cr3_onebit{0x40004414u, 0x00000800u, 11};
constexpr Field<Access::RW, usart2::Ctsie> usart2_cr3_ctsie{0x40004414u, 0x00000400u, 10};
constexpr Field<Access::RW, usart2::Ctse> usart2_cr3_ctse{0x40004414u, 0x00000200u, 9};
constexpr Field<Access::RW, usart2::Rtse> usart2_cr3_rtse{0x40004414u, 0x00000100u, 8};
constexpr Field<Access::RW, usart2::Dmat> usart2_cr3_dmat{0x40004414u, 0x00000080u, 7};
constexpr Field<Access::RW, usart2::Dmar> usart2_cr3_dmar{0x40004414u, 0x00000040u, 6};
constexpr Field<Access::RW, usart2::Scen> usart2_cr3_scen{0x40004414u, 0x00000020u, 5};
constexpr Field<Access::RW, usart2::Nack> usart2_cr3_nack{0x40004414u, 0x00000010u, 4};
constexpr Field<Access::RW, usart2::Hdsel> usart2_cr3_hdsel{0x40004414u, 0x00000008u, 3};
constexpr Field<Access::RW, usart2::Irlp> usart2_cr3_irlp{0x40004414u, 0x00000004u, 2};
constexpr Field<Access::RW, usart2::Iren> usart2_cr3_iren{0x40004414u, 0x00000002u, 1};
constexpr Field<Access::RW, usart2::Eie> usart2_cr3_eie{0x40004414u, 0x00000001u, 0};
constexpr Field<Access::RW> usart2_gtpr_gt{0x40004418u, 0x0000FF00u, 8};
constexpr Field<Access::RW> usart2_gtpr_psc{0x40004418u, 0x000000FFu, 0};

#endif // STM32_USART2_HPP
