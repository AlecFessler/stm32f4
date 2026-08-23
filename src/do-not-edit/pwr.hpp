// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Power control
#ifndef STM32_PWR_HPP
#define STM32_PWR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t PWR_BASE = 0x40007000;
struct PwrRegs {
    volatile uint32_t cr; // power control register
    volatile uint32_t csr; // power control/status register
};
static_assert(offsetof(PwrRegs, cr) == 0);
static_assert(offsetof(PwrRegs, csr) == 4);

constexpr Field<Access::RW> pwr_cr_lpds{0x40007000u, 0x00000001u, 0};
constexpr Field<Access::RW> pwr_cr_pdds{0x40007000u, 0x00000002u, 1};
constexpr Field<Access::RW> pwr_cr_cwuf{0x40007000u, 0x00000004u, 2};
constexpr Field<Access::RW> pwr_cr_csbf{0x40007000u, 0x00000008u, 3};
constexpr Field<Access::RW> pwr_cr_pvde{0x40007000u, 0x00000010u, 4};
constexpr Field<Access::RW> pwr_cr_pls{0x40007000u, 0x000000E0u, 5};
constexpr Field<Access::RW> pwr_cr_dbp{0x40007000u, 0x00000100u, 8};
constexpr Field<Access::RW> pwr_cr_fpds{0x40007000u, 0x00000200u, 9};
constexpr Field<Access::RW> pwr_cr_lplvds{0x40007000u, 0x00000400u, 10};
constexpr Field<Access::RW> pwr_cr_mrlvds{0x40007000u, 0x00000800u, 11};
constexpr Field<Access::RW> pwr_cr_vos{0x40007000u, 0x0000C000u, 14};
constexpr Field<Access::RW> pwr_cr_oden{0x40007000u, 0x00010000u, 16};
constexpr Field<Access::RW> pwr_cr_odswen{0x40007000u, 0x00020000u, 17};
constexpr Field<Access::RW> pwr_cr_uden{0x40007000u, 0x000C0000u, 18};
constexpr Field<Access::RO> pwr_csr_wuf{0x40007004u, 0x00000001u, 0};
constexpr Field<Access::RO> pwr_csr_sbf{0x40007004u, 0x00000002u, 1};
constexpr Field<Access::RO> pwr_csr_pvdo{0x40007004u, 0x00000004u, 2};
constexpr Field<Access::RO> pwr_csr_brr{0x40007004u, 0x00000008u, 3};
constexpr Field<Access::RW> pwr_csr_ewup{0x40007004u, 0x00000100u, 8};
constexpr Field<Access::RW> pwr_csr_bre{0x40007004u, 0x00000200u, 9};
constexpr Field<Access::RW> pwr_csr_vosrdy{0x40007004u, 0x00004000u, 14};
constexpr Field<Access::RO> pwr_csr_odrdy{0x40007004u, 0x00010000u, 16};
constexpr Field<Access::RO> pwr_csr_odswrdy{0x40007004u, 0x00020000u, 17};
constexpr Field<Access::RW> pwr_csr_udrdy{0x40007004u, 0x000C0000u, 18};

#endif // STM32_PWR_HPP