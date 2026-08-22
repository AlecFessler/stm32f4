// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// FLASH
#ifndef FLASH_HPP
#define FLASH_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t FLASH_BASE = 0x40023C00;

struct FlashRegs {
    volatile uint32_t acr; // Flash access control register
    volatile uint32_t keyr; // Flash key register
    volatile uint32_t optkeyr; // Flash option key register
    volatile uint32_t sr; // Status register
    volatile uint32_t cr; // Control register
    volatile uint32_t optcr; // Flash option control register
    volatile uint32_t optcr1; // Flash option control register 1
};

static_assert(offsetof(FlashRegs, acr) == 0);
static_assert(offsetof(FlashRegs, keyr) == 4);
static_assert(offsetof(FlashRegs, optkeyr) == 8);
static_assert(offsetof(FlashRegs, sr) == 12);
static_assert(offsetof(FlashRegs, cr) == 16);
static_assert(offsetof(FlashRegs, optcr) == 20);
static_assert(offsetof(FlashRegs, optcr1) == 24);

inline FlashRegs& flash() { return *reinterpret_cast<FlashRegs*>(FLASH_BASE); }

constexpr RegField flash_acr_latency{0x00000007u, 0};
constexpr RegField flash_acr_prften{0x00000100u, 8};
constexpr RegField flash_acr_icen{0x00000200u, 9};
constexpr RegField flash_acr_dcen{0x00000400u, 10};
constexpr RegField flash_acr_icrst{0x00000800u, 11};
constexpr RegField flash_acr_dcrst{0x00001000u, 12};
constexpr RegField flash_keyr_key{0xFFFFFFFFu, 0};
constexpr RegField flash_optkeyr_optkey{0xFFFFFFFFu, 0};
constexpr RegField flash_sr_eop{0x00000001u, 0};
constexpr RegField flash_sr_operr{0x00000002u, 1};
constexpr RegField flash_sr_wrperr{0x00000010u, 4};
constexpr RegField flash_sr_pgaerr{0x00000020u, 5};
constexpr RegField flash_sr_pgperr{0x00000040u, 6};
constexpr RegField flash_sr_pgserr{0x00000080u, 7};
constexpr RegField flash_sr_bsy{0x00010000u, 16};
constexpr RegField flash_cr_pg{0x00000001u, 0};
constexpr RegField flash_cr_ser{0x00000002u, 1};
constexpr RegField flash_cr_mer{0x00000004u, 2};
constexpr RegField flash_cr_snb{0x000000F8u, 3};
constexpr RegField flash_cr_psize{0x00000300u, 8};
constexpr RegField flash_cr_mer1{0x00008000u, 15};
constexpr RegField flash_cr_strt{0x00010000u, 16};
constexpr RegField flash_cr_eopie{0x01000000u, 24};
constexpr RegField flash_cr_errie{0x02000000u, 25};
constexpr RegField flash_cr_lock{0x80000000u, 31};
constexpr RegField flash_optcr_optlock{0x00000001u, 0};
constexpr RegField flash_optcr_optstrt{0x00000002u, 1};
constexpr RegField flash_optcr_bor_lev{0x0000000Cu, 2};
constexpr RegField flash_optcr_wdg_sw{0x00000020u, 5};
constexpr RegField flash_optcr_nrst_stop{0x00000040u, 6};
constexpr RegField flash_optcr_nrst_stdby{0x00000080u, 7};
constexpr RegField flash_optcr_rdp{0x0000FF00u, 8};
constexpr RegField flash_optcr_nwrp{0x0FFF0000u, 16};
constexpr RegField flash_optcr1_nwrp{0x0FFF0000u, 16};

#endif // FLASH_HPP