// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Power control
#ifndef PWR_HPP
#define PWR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t PWR_BASE = 0x40007000;

struct PwrRegs {
    volatile uint32_t cr; // power control register
    volatile uint32_t csr; // power control/status register
};

static_assert(offsetof(PwrRegs, cr) == 0);
static_assert(offsetof(PwrRegs, csr) == 4);

inline PwrRegs& pwr() { return *reinterpret_cast<PwrRegs*>(PWR_BASE); }

constexpr RegField pwr_cr_lpds{0x00000001u, 0};
constexpr RegField pwr_cr_pdds{0x00000002u, 1};
constexpr RegField pwr_cr_cwuf{0x00000004u, 2};
constexpr RegField pwr_cr_csbf{0x00000008u, 3};
constexpr RegField pwr_cr_pvde{0x00000010u, 4};
constexpr RegField pwr_cr_pls{0x000000E0u, 5};
constexpr RegField pwr_cr_dbp{0x00000100u, 8};
constexpr RegField pwr_cr_fpds{0x00000200u, 9};
constexpr RegField pwr_cr_lplvds{0x00000400u, 10};
constexpr RegField pwr_cr_mrlvds{0x00000800u, 11};
constexpr RegField pwr_cr_vos{0x0000C000u, 14};
constexpr RegField pwr_cr_oden{0x00010000u, 16};
constexpr RegField pwr_cr_odswen{0x00020000u, 17};
constexpr RegField pwr_cr_uden{0x000C0000u, 18};
constexpr RegField pwr_csr_wuf{0x00000001u, 0};
constexpr RegField pwr_csr_sbf{0x00000002u, 1};
constexpr RegField pwr_csr_pvdo{0x00000004u, 2};
constexpr RegField pwr_csr_brr{0x00000008u, 3};
constexpr RegField pwr_csr_ewup{0x00000100u, 8};
constexpr RegField pwr_csr_bre{0x00000200u, 9};
constexpr RegField pwr_csr_vosrdy{0x00004000u, 14};
constexpr RegField pwr_csr_odrdy{0x00010000u, 16};
constexpr RegField pwr_csr_odswrdy{0x00020000u, 17};
constexpr RegField pwr_csr_udrdy{0x000C0000u, 18};

#endif // PWR_HPP