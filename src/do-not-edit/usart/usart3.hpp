// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Universal synchronous asynchronous receiver transmitter
#ifndef STM32_USART3_HPP
#define STM32_USART3_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t USART3_BASE = 0x40004800;
struct Usart3Regs {
    volatile uint32_t sr; // Status register
    volatile uint32_t dr; // Data register
    volatile uint32_t brr; // Baud rate register
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t cr3; // Control register 3
    volatile uint32_t gtpr; // Guard time and prescaler register
};
static_assert(offsetof(Usart3Regs, sr) == 0);
static_assert(offsetof(Usart3Regs, dr) == 4);
static_assert(offsetof(Usart3Regs, brr) == 8);
static_assert(offsetof(Usart3Regs, cr1) == 12);
static_assert(offsetof(Usart3Regs, cr2) == 16);
static_assert(offsetof(Usart3Regs, cr3) == 20);
static_assert(offsetof(Usart3Regs, gtpr) == 24);

constexpr Field<Access::RW> usart3_sr_cts{0x40004800u, 0x00000200u, 9};
constexpr Field<Access::RW> usart3_sr_lbd{0x40004800u, 0x00000100u, 8};
constexpr Field<Access::RO> usart3_sr_txe{0x40004800u, 0x00000080u, 7};
constexpr Field<Access::RW> usart3_sr_tc{0x40004800u, 0x00000040u, 6};
constexpr Field<Access::RW> usart3_sr_rxne{0x40004800u, 0x00000020u, 5};
constexpr Field<Access::RO> usart3_sr_idle{0x40004800u, 0x00000010u, 4};
constexpr Field<Access::RO> usart3_sr_ore{0x40004800u, 0x00000008u, 3};
constexpr Field<Access::RO> usart3_sr_nf{0x40004800u, 0x00000004u, 2};
constexpr Field<Access::RO> usart3_sr_fe{0x40004800u, 0x00000002u, 1};
constexpr Field<Access::RO> usart3_sr_pe{0x40004800u, 0x00000001u, 0};
constexpr Field<Access::RW> usart3_dr_dr{0x40004804u, 0x000001FFu, 0};
constexpr Field<Access::RW> usart3_brr_div_mantissa{0x40004808u, 0x0000FFF0u, 4};
constexpr Field<Access::RW> usart3_brr_div_fraction{0x40004808u, 0x0000000Fu, 0};
constexpr Field<Access::RW> usart3_cr1_ue{0x4000480Cu, 0x00002000u, 13};
constexpr Field<Access::RW> usart3_cr1_m{0x4000480Cu, 0x00001000u, 12};
constexpr Field<Access::RW> usart3_cr1_wake{0x4000480Cu, 0x00000800u, 11};
constexpr Field<Access::RW> usart3_cr1_pce{0x4000480Cu, 0x00000400u, 10};
constexpr Field<Access::RW> usart3_cr1_ps{0x4000480Cu, 0x00000200u, 9};
constexpr Field<Access::RW> usart3_cr1_peie{0x4000480Cu, 0x00000100u, 8};
constexpr Field<Access::RW> usart3_cr1_txeie{0x4000480Cu, 0x00000080u, 7};
constexpr Field<Access::RW> usart3_cr1_tcie{0x4000480Cu, 0x00000040u, 6};
constexpr Field<Access::RW> usart3_cr1_rxneie{0x4000480Cu, 0x00000020u, 5};
constexpr Field<Access::RW> usart3_cr1_idleie{0x4000480Cu, 0x00000010u, 4};
constexpr Field<Access::RW> usart3_cr1_te{0x4000480Cu, 0x00000008u, 3};
constexpr Field<Access::RW> usart3_cr1_re{0x4000480Cu, 0x00000004u, 2};
constexpr Field<Access::RW> usart3_cr1_rwu{0x4000480Cu, 0x00000002u, 1};
constexpr Field<Access::RW> usart3_cr1_sbk{0x4000480Cu, 0x00000001u, 0};
constexpr Field<Access::RW> usart3_cr1_over8{0x4000480Cu, 0x00008000u, 15};
constexpr Field<Access::RW> usart3_cr2_linen{0x40004810u, 0x00004000u, 14};
constexpr Field<Access::RW> usart3_cr2_stop{0x40004810u, 0x00003000u, 12};
constexpr Field<Access::RW> usart3_cr2_clken{0x40004810u, 0x00000800u, 11};
constexpr Field<Access::RW> usart3_cr2_cpol{0x40004810u, 0x00000400u, 10};
constexpr Field<Access::RW> usart3_cr2_cpha{0x40004810u, 0x00000200u, 9};
constexpr Field<Access::RW> usart3_cr2_lbcl{0x40004810u, 0x00000100u, 8};
constexpr Field<Access::RW> usart3_cr2_lbdie{0x40004810u, 0x00000040u, 6};
constexpr Field<Access::RW> usart3_cr2_lbdl{0x40004810u, 0x00000020u, 5};
constexpr Field<Access::RW> usart3_cr2_add{0x40004810u, 0x0000000Fu, 0};
constexpr Field<Access::RW> usart3_cr3_onebit{0x40004814u, 0x00000800u, 11};
constexpr Field<Access::RW> usart3_cr3_ctsie{0x40004814u, 0x00000400u, 10};
constexpr Field<Access::RW> usart3_cr3_ctse{0x40004814u, 0x00000200u, 9};
constexpr Field<Access::RW> usart3_cr3_rtse{0x40004814u, 0x00000100u, 8};
constexpr Field<Access::RW> usart3_cr3_dmat{0x40004814u, 0x00000080u, 7};
constexpr Field<Access::RW> usart3_cr3_dmar{0x40004814u, 0x00000040u, 6};
constexpr Field<Access::RW> usart3_cr3_scen{0x40004814u, 0x00000020u, 5};
constexpr Field<Access::RW> usart3_cr3_nack{0x40004814u, 0x00000010u, 4};
constexpr Field<Access::RW> usart3_cr3_hdsel{0x40004814u, 0x00000008u, 3};
constexpr Field<Access::RW> usart3_cr3_irlp{0x40004814u, 0x00000004u, 2};
constexpr Field<Access::RW> usart3_cr3_iren{0x40004814u, 0x00000002u, 1};
constexpr Field<Access::RW> usart3_cr3_eie{0x40004814u, 0x00000001u, 0};
constexpr Field<Access::RW> usart3_gtpr_gt{0x40004818u, 0x0000FF00u, 8};
constexpr Field<Access::RW> usart3_gtpr_psc{0x40004818u, 0x000000FFu, 0};

namespace usart3::clken {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::cpha {
    constexpr uint32_t first = 0;
    constexpr uint32_t second = 1;
}
namespace usart3::cpol {
    constexpr uint32_t low = 0;
    constexpr uint32_t high = 1;
}
namespace usart3::cts {
    constexpr uint32_t notchanged = 0;
    constexpr uint32_t changed = 1;
}
namespace usart3::ctse {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::ctsie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::dmar {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::dmat {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::eie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::fe {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace usart3::hdsel {
    constexpr uint32_t fullduplex = 0;
    constexpr uint32_t halfduplex = 1;
}
namespace usart3::idle {
    constexpr uint32_t noidle = 0;
    constexpr uint32_t idle = 1;
}
namespace usart3::idleie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::iren {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::irlp {
    constexpr uint32_t normal = 0;
    constexpr uint32_t lowpower = 1;
}
namespace usart3::lbcl {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::lbd {
    constexpr uint32_t notdetected = 0;
    constexpr uint32_t detected = 1;
}
namespace usart3::lbdie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::lbdl {
    constexpr uint32_t lbdl10 = 0;
    constexpr uint32_t lbdl11 = 1;
}
namespace usart3::linen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::m {
    constexpr uint32_t m8 = 0;
    constexpr uint32_t m9 = 1;
}
namespace usart3::nack {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::ne {
    constexpr uint32_t nonoise = 0;
    constexpr uint32_t noise = 1;
}
namespace usart3::nf {
    constexpr uint32_t nonoise = 0;
    constexpr uint32_t noise = 1;
}
namespace usart3::onebit {
    constexpr uint32_t sample3 = 0;
    constexpr uint32_t sample1 = 1;
}
namespace usart3::ore {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
}
namespace usart3::over8 {
    constexpr uint32_t oversample16 = 0;
    constexpr uint32_t oversample8 = 1;
}
namespace usart3::pce {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::pe {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace usart3::peie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::ps {
    constexpr uint32_t even = 0;
    constexpr uint32_t odd = 1;
}
namespace usart3::re {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::rtse {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::rwu {
    constexpr uint32_t active = 0;
    constexpr uint32_t mute = 1;
}
namespace usart3::rxne {
    constexpr uint32_t nodata = 0;
    constexpr uint32_t dataready = 1;
}
namespace usart3::rxneie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::sbk {
    constexpr uint32_t nobreak = 0;
    constexpr uint32_t break_ = 1;
}
namespace usart3::scen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::stop {
    constexpr uint32_t stop1 = 0;
    constexpr uint32_t stop0p5 = 1;
    constexpr uint32_t stop2 = 2;
    constexpr uint32_t stop1p5 = 3;
}
namespace usart3::tc {
    constexpr uint32_t txnotcomplete = 0;
    constexpr uint32_t txcomplete = 1;
}
namespace usart3::tcie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::te {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::txe {
    constexpr uint32_t txnotempty = 0;
    constexpr uint32_t txempty = 1;
}
namespace usart3::txeie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::ue {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace usart3::wake {
    constexpr uint32_t idleline = 0;
    constexpr uint32_t addressmark = 1;
}

#endif // STM32_USART3_HPP
