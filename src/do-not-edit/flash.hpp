// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// FLASH
#ifndef STM32_FLASH_HPP
#define STM32_FLASH_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace flash {
enum class Bfb2 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Bor_lev : uint32_t {
    bor_off = 0,
    bor_level1 = 1,
    bor_level2 = 2,
    bor_level3 = 3,
};
enum class Bsy : uint32_t {
    notbusy = 0,
    busy = 1,
};
enum class Db1m : uint32_t {
    singlebank = 0,
    dualbank = 1,
};
enum class Dcen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dcrst : uint32_t {
    noreset = 0,
    reset = 1,
};
enum class Eop : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Eopie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Errie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Icen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Icrst : uint32_t {
    noreset = 0,
    reset = 1,
};
enum class Latency : uint32_t {
    ws0 = 0,
    ws1 = 1,
    ws2 = 2,
    ws3 = 3,
    ws4 = 4,
    ws5 = 5,
    ws6 = 6,
    ws7 = 7,
    ws8 = 8,
    ws9 = 9,
    ws10 = 10,
    ws11 = 11,
    ws12 = 12,
    ws13 = 13,
    ws14 = 14,
    ws15 = 15,
};
enum class Lock : uint32_t {
    unlocked = 0,
    locked = 1,
};
enum class Mer : uint32_t {
    masserase = 1,
};
enum class Mer1 : uint32_t {
    masserase = 1,
};
enum class Nrst_stdby : uint32_t {
    reset = 0,
    noreset = 1,
};
enum class Nrst_stop : uint32_t {
    reset = 0,
    noreset = 1,
};
enum class Nwrp : uint32_t {
    active = 0,
    inactive = 1,
};
enum class Operr : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Optlock : uint32_t {
    unlocked = 0,
    locked = 1,
    set = 1,
};
enum class Optstrt : uint32_t {
    complete = 0,
    requested = 1,
    set = 1,
};
enum class Pg : uint32_t {
    program = 1,
};
enum class Pgaerr : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Pgperr : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Pgserr : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Prften : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Psize : uint32_t {
    psize8 = 0,
    psize16 = 1,
    psize32 = 2,
    psize64 = 3,
};
enum class Rderr : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Rdp : uint32_t {
    level0 = 170,
    level2 = 204,
};
enum class Ser : uint32_t {
    sectorerase = 1,
};
enum class Sprmod : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Strt : uint32_t {
    start = 1,
};
enum class Wdg_sw : uint32_t {
    hardware = 0,
    software = 1,
};
enum class Wrperr : uint32_t {
    inactive = 0,
    active = 1,
};
} // namespace flash

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

constexpr Field<Access::RW, flash::Latency> flash_acr_latency{0x40023C00u, 0x00000007u, 0};
constexpr Field<Access::RW, flash::Prften> flash_acr_prften{0x40023C00u, 0x00000100u, 8};
constexpr Field<Access::RW, flash::Icen> flash_acr_icen{0x40023C00u, 0x00000200u, 9};
constexpr Field<Access::RW, flash::Dcen> flash_acr_dcen{0x40023C00u, 0x00000400u, 10};
constexpr Field<Access::WO, flash::Icrst> flash_acr_icrst{0x40023C00u, 0x00000800u, 11};
constexpr Field<Access::RW, flash::Dcrst> flash_acr_dcrst{0x40023C00u, 0x00001000u, 12};
constexpr Field<Access::WO> flash_keyr_key{0x40023C04u, 0xFFFFFFFFu, 0};
constexpr Field<Access::WO> flash_optkeyr_optkey{0x40023C08u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RC_W1, flash::Eop, 0x000000F3u, 0x00000000u, false> flash_sr_eop{0x40023C0Cu, 0x00000001u, 0};
constexpr Field<Access::RC_W1, flash::Operr, 0x000000F3u, 0x00000000u, false> flash_sr_operr{0x40023C0Cu, 0x00000002u, 1};
constexpr Field<Access::RC_W1, flash::Wrperr, 0x000000F3u, 0x00000000u, false> flash_sr_wrperr{0x40023C0Cu, 0x00000010u, 4};
constexpr Field<Access::RC_W1, flash::Pgaerr, 0x000000F3u, 0x00000000u, false> flash_sr_pgaerr{0x40023C0Cu, 0x00000020u, 5};
constexpr Field<Access::RC_W1, flash::Pgperr, 0x000000F3u, 0x00000000u, false> flash_sr_pgperr{0x40023C0Cu, 0x00000040u, 6};
constexpr Field<Access::RC_W1, flash::Pgserr, 0x000000F3u, 0x00000000u, false> flash_sr_pgserr{0x40023C0Cu, 0x00000080u, 7};
constexpr Field<Access::RO, flash::Bsy> flash_sr_bsy{0x40023C0Cu, 0x00010000u, 16};
constexpr Field<Access::RW, flash::Pg> flash_cr_pg{0x40023C10u, 0x00000001u, 0};
constexpr Field<Access::RW, flash::Ser> flash_cr_ser{0x40023C10u, 0x00000002u, 1};
constexpr Field<Access::RW, flash::Mer> flash_cr_mer{0x40023C10u, 0x00000004u, 2};
constexpr Field<Access::RW> flash_cr_snb{0x40023C10u, 0x000000F8u, 3};
constexpr Field<Access::RW, flash::Psize> flash_cr_psize{0x40023C10u, 0x00000300u, 8};
constexpr Field<Access::RW, flash::Strt> flash_cr_strt{0x40023C10u, 0x00010000u, 16};
constexpr Field<Access::RW, flash::Eopie> flash_cr_eopie{0x40023C10u, 0x01000000u, 24};
constexpr Field<Access::RW, flash::Errie> flash_cr_errie{0x40023C10u, 0x02000000u, 25};
constexpr Field<Access::RW, flash::Lock> flash_cr_lock{0x40023C10u, 0x80000000u, 31};
constexpr Field<Access::RW, flash::Mer1> flash_cr_mer1{0x40023C10u, 0x00008000u, 15};
constexpr Field<Access::RW, flash::Optlock> flash_optcr_optlock{0x40023C14u, 0x00000001u, 0};
constexpr Field<Access::RW, flash::Optstrt> flash_optcr_optstrt{0x40023C14u, 0x00000002u, 1};
constexpr Field<Access::RW, flash::Bor_lev> flash_optcr_bor_lev{0x40023C14u, 0x0000000Cu, 2};
constexpr Field<Access::RW, flash::Wdg_sw> flash_optcr_wdg_sw{0x40023C14u, 0x00000020u, 5};
constexpr Field<Access::RW, flash::Nrst_stop> flash_optcr_nrst_stop{0x40023C14u, 0x00000040u, 6};
constexpr Field<Access::RW, flash::Nrst_stdby> flash_optcr_nrst_stdby{0x40023C14u, 0x00000080u, 7};
constexpr Field<Access::RW, flash::Rdp> flash_optcr_rdp{0x40023C14u, 0x0000FF00u, 8};
constexpr Field<Access::RW, flash::Nwrp> flash_optcr_nwrp{0x40023C14u, 0x0FFF0000u, 16};
constexpr Field<Access::RW, flash::Nwrp> flash_optcr1_nwrp{0x40023C18u, 0x0FFF0000u, 16};

#endif // STM32_FLASH_HPP
