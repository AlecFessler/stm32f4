// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Universal synchronous asynchronous receiver transmitter
#ifndef UART7_HPP
#define UART7_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t UART7_BASE = 0x40007800;
struct Uart7Regs {
    volatile uint32_t sr; // Status register
    volatile uint32_t dr; // Data register
    volatile uint32_t brr; // Baud rate register
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t cr3; // Control register 3
    volatile uint32_t gtpr; // Guard time and prescaler register
};

static_assert(offsetof(Uart7Regs, sr) == 0);
static_assert(offsetof(Uart7Regs, dr) == 4);
static_assert(offsetof(Uart7Regs, brr) == 8);
static_assert(offsetof(Uart7Regs, cr1) == 12);
static_assert(offsetof(Uart7Regs, cr2) == 16);
static_assert(offsetof(Uart7Regs, cr3) == 20);
static_assert(offsetof(Uart7Regs, gtpr) == 24);

constexpr Field<Access::RW> uart7_sr_cts{0x40007800u, 0x00000200u, 9};
constexpr Field<Access::RW> uart7_sr_lbd{0x40007800u, 0x00000100u, 8};
constexpr Field<Access::RO> uart7_sr_txe{0x40007800u, 0x00000080u, 7};
constexpr Field<Access::RW> uart7_sr_tc{0x40007800u, 0x00000040u, 6};
constexpr Field<Access::RW> uart7_sr_rxne{0x40007800u, 0x00000020u, 5};
constexpr Field<Access::RO> uart7_sr_idle{0x40007800u, 0x00000010u, 4};
constexpr Field<Access::RO> uart7_sr_ore{0x40007800u, 0x00000008u, 3};
constexpr Field<Access::RO> uart7_sr_nf{0x40007800u, 0x00000004u, 2};
constexpr Field<Access::RO> uart7_sr_fe{0x40007800u, 0x00000002u, 1};
constexpr Field<Access::RO> uart7_sr_pe{0x40007800u, 0x00000001u, 0};
constexpr Field<Access::RW> uart7_dr_dr{0x40007804u, 0x000001FFu, 0};
constexpr Field<Access::RW> uart7_brr_div_mantissa{0x40007808u, 0x0000FFF0u, 4};
constexpr Field<Access::RW> uart7_brr_div_fraction{0x40007808u, 0x0000000Fu, 0};
constexpr Field<Access::RW> uart7_cr1_ue{0x4000780Cu, 0x00002000u, 13};
constexpr Field<Access::RW> uart7_cr1_m{0x4000780Cu, 0x00001000u, 12};
constexpr Field<Access::RW> uart7_cr1_wake{0x4000780Cu, 0x00000800u, 11};
constexpr Field<Access::RW> uart7_cr1_pce{0x4000780Cu, 0x00000400u, 10};
constexpr Field<Access::RW> uart7_cr1_ps{0x4000780Cu, 0x00000200u, 9};
constexpr Field<Access::RW> uart7_cr1_peie{0x4000780Cu, 0x00000100u, 8};
constexpr Field<Access::RW> uart7_cr1_txeie{0x4000780Cu, 0x00000080u, 7};
constexpr Field<Access::RW> uart7_cr1_tcie{0x4000780Cu, 0x00000040u, 6};
constexpr Field<Access::RW> uart7_cr1_rxneie{0x4000780Cu, 0x00000020u, 5};
constexpr Field<Access::RW> uart7_cr1_idleie{0x4000780Cu, 0x00000010u, 4};
constexpr Field<Access::RW> uart7_cr1_te{0x4000780Cu, 0x00000008u, 3};
constexpr Field<Access::RW> uart7_cr1_re{0x4000780Cu, 0x00000004u, 2};
constexpr Field<Access::RW> uart7_cr1_rwu{0x4000780Cu, 0x00000002u, 1};
constexpr Field<Access::RW> uart7_cr1_sbk{0x4000780Cu, 0x00000001u, 0};
constexpr Field<Access::RW> uart7_cr1_over8{0x4000780Cu, 0x00008000u, 15};
constexpr Field<Access::RW> uart7_cr2_linen{0x40007810u, 0x00004000u, 14};
constexpr Field<Access::RW> uart7_cr2_stop{0x40007810u, 0x00003000u, 12};
constexpr Field<Access::RW> uart7_cr2_clken{0x40007810u, 0x00000800u, 11};
constexpr Field<Access::RW> uart7_cr2_cpol{0x40007810u, 0x00000400u, 10};
constexpr Field<Access::RW> uart7_cr2_cpha{0x40007810u, 0x00000200u, 9};
constexpr Field<Access::RW> uart7_cr2_lbcl{0x40007810u, 0x00000100u, 8};
constexpr Field<Access::RW> uart7_cr2_lbdie{0x40007810u, 0x00000040u, 6};
constexpr Field<Access::RW> uart7_cr2_lbdl{0x40007810u, 0x00000020u, 5};
constexpr Field<Access::RW> uart7_cr2_add{0x40007810u, 0x0000000Fu, 0};
constexpr Field<Access::RW> uart7_cr3_onebit{0x40007814u, 0x00000800u, 11};
constexpr Field<Access::RW> uart7_cr3_ctsie{0x40007814u, 0x00000400u, 10};
constexpr Field<Access::RW> uart7_cr3_ctse{0x40007814u, 0x00000200u, 9};
constexpr Field<Access::RW> uart7_cr3_rtse{0x40007814u, 0x00000100u, 8};
constexpr Field<Access::RW> uart7_cr3_dmat{0x40007814u, 0x00000080u, 7};
constexpr Field<Access::RW> uart7_cr3_dmar{0x40007814u, 0x00000040u, 6};
constexpr Field<Access::RW> uart7_cr3_scen{0x40007814u, 0x00000020u, 5};
constexpr Field<Access::RW> uart7_cr3_nack{0x40007814u, 0x00000010u, 4};
constexpr Field<Access::RW> uart7_cr3_hdsel{0x40007814u, 0x00000008u, 3};
constexpr Field<Access::RW> uart7_cr3_irlp{0x40007814u, 0x00000004u, 2};
constexpr Field<Access::RW> uart7_cr3_iren{0x40007814u, 0x00000002u, 1};
constexpr Field<Access::RW> uart7_cr3_eie{0x40007814u, 0x00000001u, 0};
constexpr Field<Access::RW> uart7_gtpr_gt{0x40007818u, 0x0000FF00u, 8};
constexpr Field<Access::RW> uart7_gtpr_psc{0x40007818u, 0x000000FFu, 0};

#endif // UART7_HPP