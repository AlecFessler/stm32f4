// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Universal synchronous asynchronous receiver transmitter
#ifndef UART5_HPP
#define UART5_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t UART5_BASE = 0x40005000;

struct Uart5Regs {
    volatile uint32_t sr; // Status register
    volatile uint32_t dr; // Data register
    volatile uint32_t brr; // Baud rate register
    volatile uint32_t cr1; // Control register 1
    volatile uint32_t cr2; // Control register 2
    volatile uint32_t cr3; // Control register 3
};

static_assert(offsetof(Uart5Regs, sr) == 0);
static_assert(offsetof(Uart5Regs, dr) == 4);
static_assert(offsetof(Uart5Regs, brr) == 8);
static_assert(offsetof(Uart5Regs, cr1) == 12);
static_assert(offsetof(Uart5Regs, cr2) == 16);
static_assert(offsetof(Uart5Regs, cr3) == 20);

inline Uart5Regs& uart5() { return *reinterpret_cast<Uart5Regs*>(UART5_BASE); }

constexpr RegField uart5_sr_lbd{0x00000100u, 8};
constexpr RegField uart5_sr_txe{0x00000080u, 7};
constexpr RegField uart5_sr_tc{0x00000040u, 6};
constexpr RegField uart5_sr_rxne{0x00000020u, 5};
constexpr RegField uart5_sr_idle{0x00000010u, 4};
constexpr RegField uart5_sr_ore{0x00000008u, 3};
constexpr RegField uart5_sr_nf{0x00000004u, 2};
constexpr RegField uart5_sr_fe{0x00000002u, 1};
constexpr RegField uart5_sr_pe{0x00000001u, 0};
constexpr RegField uart5_dr_dr{0x000001FFu, 0};
constexpr RegField uart5_brr_div_mantissa{0x0000FFF0u, 4};
constexpr RegField uart5_brr_div_fraction{0x0000000Fu, 0};
constexpr RegField uart5_cr1_over8{0x00008000u, 15};
constexpr RegField uart5_cr1_ue{0x00002000u, 13};
constexpr RegField uart5_cr1_m{0x00001000u, 12};
constexpr RegField uart5_cr1_wake{0x00000800u, 11};
constexpr RegField uart5_cr1_pce{0x00000400u, 10};
constexpr RegField uart5_cr1_ps{0x00000200u, 9};
constexpr RegField uart5_cr1_peie{0x00000100u, 8};
constexpr RegField uart5_cr1_txeie{0x00000080u, 7};
constexpr RegField uart5_cr1_tcie{0x00000040u, 6};
constexpr RegField uart5_cr1_rxneie{0x00000020u, 5};
constexpr RegField uart5_cr1_idleie{0x00000010u, 4};
constexpr RegField uart5_cr1_te{0x00000008u, 3};
constexpr RegField uart5_cr1_re{0x00000004u, 2};
constexpr RegField uart5_cr1_rwu{0x00000002u, 1};
constexpr RegField uart5_cr1_sbk{0x00000001u, 0};
constexpr RegField uart5_cr2_linen{0x00004000u, 14};
constexpr RegField uart5_cr2_stop{0x00003000u, 12};
constexpr RegField uart5_cr2_lbdie{0x00000040u, 6};
constexpr RegField uart5_cr2_lbdl{0x00000020u, 5};
constexpr RegField uart5_cr2_add{0x0000000Fu, 0};
constexpr RegField uart5_cr3_onebit{0x00000800u, 11};
constexpr RegField uart5_cr3_dmat{0x00000080u, 7};
constexpr RegField uart5_cr3_dmar{0x00000040u, 6};
constexpr RegField uart5_cr3_hdsel{0x00000008u, 3};
constexpr RegField uart5_cr3_irlp{0x00000004u, 2};
constexpr RegField uart5_cr3_iren{0x00000002u, 1};
constexpr RegField uart5_cr3_eie{0x00000001u, 0};

#endif // UART5_HPP