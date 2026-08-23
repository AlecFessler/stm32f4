// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// FLASH
#ifndef FLASH_HPP
#define FLASH_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
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

constexpr Field<Access::RW> flash_acr_latency{0x40023C00u, 0x00000007u, 0};
constexpr Field<Access::RW> flash_acr_prften{0x40023C00u, 0x00000100u, 8};
constexpr Field<Access::RW> flash_acr_icen{0x40023C00u, 0x00000200u, 9};
constexpr Field<Access::RW> flash_acr_dcen{0x40023C00u, 0x00000400u, 10};
constexpr Field<Access::WO> flash_acr_icrst{0x40023C00u, 0x00000800u, 11};
constexpr Field<Access::RW> flash_acr_dcrst{0x40023C00u, 0x00001000u, 12};
constexpr Field<Access::WO> flash_keyr_key{0x40023C04u, 0xFFFFFFFFu, 0};
constexpr Field<Access::WO> flash_optkeyr_optkey{0x40023C08u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> flash_sr_eop{0x40023C0Cu, 0x00000001u, 0};
constexpr Field<Access::RW> flash_sr_operr{0x40023C0Cu, 0x00000002u, 1};
constexpr Field<Access::RW> flash_sr_wrperr{0x40023C0Cu, 0x00000010u, 4};
constexpr Field<Access::RW> flash_sr_pgaerr{0x40023C0Cu, 0x00000020u, 5};
constexpr Field<Access::RW> flash_sr_pgperr{0x40023C0Cu, 0x00000040u, 6};
constexpr Field<Access::RW> flash_sr_pgserr{0x40023C0Cu, 0x00000080u, 7};
constexpr Field<Access::RO> flash_sr_bsy{0x40023C0Cu, 0x00010000u, 16};
constexpr Field<Access::RW> flash_cr_pg{0x40023C10u, 0x00000001u, 0};
constexpr Field<Access::RW> flash_cr_ser{0x40023C10u, 0x00000002u, 1};
constexpr Field<Access::RW> flash_cr_mer{0x40023C10u, 0x00000004u, 2};
constexpr Field<Access::RW> flash_cr_snb{0x40023C10u, 0x000000F8u, 3};
constexpr Field<Access::RW> flash_cr_psize{0x40023C10u, 0x00000300u, 8};
constexpr Field<Access::RW> flash_cr_strt{0x40023C10u, 0x00010000u, 16};
constexpr Field<Access::RW> flash_cr_eopie{0x40023C10u, 0x01000000u, 24};
constexpr Field<Access::RW> flash_cr_errie{0x40023C10u, 0x02000000u, 25};
constexpr Field<Access::RW> flash_cr_lock{0x40023C10u, 0x80000000u, 31};
constexpr Field<Access::RW> flash_cr_mer1{0x40023C10u, 0x00008000u, 15};
constexpr Field<Access::RW> flash_optcr_optlock{0x40023C14u, 0x00000001u, 0};
constexpr Field<Access::RW> flash_optcr_optstrt{0x40023C14u, 0x00000002u, 1};
constexpr Field<Access::RW> flash_optcr_bor_lev{0x40023C14u, 0x0000000Cu, 2};
constexpr Field<Access::RW> flash_optcr_wdg_sw{0x40023C14u, 0x00000020u, 5};
constexpr Field<Access::RW> flash_optcr_nrst_stop{0x40023C14u, 0x00000040u, 6};
constexpr Field<Access::RW> flash_optcr_nrst_stdby{0x40023C14u, 0x00000080u, 7};
constexpr Field<Access::RW> flash_optcr_rdp{0x40023C14u, 0x0000FF00u, 8};
constexpr Field<Access::RW> flash_optcr_nwrp{0x40023C14u, 0x0FFF0000u, 16};
constexpr Field<Access::RW> flash_optcr1_nwrp{0x40023C18u, 0x0FFF0000u, 16};

#endif // FLASH_HPP