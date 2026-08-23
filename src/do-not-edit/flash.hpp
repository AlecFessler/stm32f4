// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// FLASH
#ifndef STM32_FLASH_HPP
#define STM32_FLASH_HPP

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

namespace flash::bfb2 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::bor_lev {
    constexpr uint32_t bor_off = 0;
    constexpr uint32_t bor_level1 = 1;
    constexpr uint32_t bor_level2 = 2;
    constexpr uint32_t bor_level3 = 3;
}
namespace flash::bsy {
    constexpr uint32_t notbusy = 0;
    constexpr uint32_t busy = 1;
}
namespace flash::db1m {
    constexpr uint32_t singlebank = 0;
    constexpr uint32_t dualbank = 1;
}
namespace flash::dcen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::dcrst {
    constexpr uint32_t noreset = 0;
    constexpr uint32_t reset = 1;
}
namespace flash::eop {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::eopie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::errie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::icen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::icrst {
    constexpr uint32_t noreset = 0;
    constexpr uint32_t reset = 1;
}
namespace flash::latency {
    constexpr uint32_t ws0 = 0;
    constexpr uint32_t ws1 = 1;
    constexpr uint32_t ws2 = 2;
    constexpr uint32_t ws3 = 3;
    constexpr uint32_t ws4 = 4;
    constexpr uint32_t ws5 = 5;
    constexpr uint32_t ws6 = 6;
    constexpr uint32_t ws7 = 7;
    constexpr uint32_t ws8 = 8;
    constexpr uint32_t ws9 = 9;
    constexpr uint32_t ws10 = 10;
    constexpr uint32_t ws11 = 11;
    constexpr uint32_t ws12 = 12;
    constexpr uint32_t ws13 = 13;
    constexpr uint32_t ws14 = 14;
    constexpr uint32_t ws15 = 15;
}
namespace flash::lock {
    constexpr uint32_t unlocked = 0;
    constexpr uint32_t locked = 1;
}
namespace flash::mer {
    constexpr uint32_t masserase = 1;
}
namespace flash::mer1 {
    constexpr uint32_t masserase = 1;
}
namespace flash::nrst_stdby {
    constexpr uint32_t reset = 0;
    constexpr uint32_t noreset = 1;
}
namespace flash::nrst_stop {
    constexpr uint32_t reset = 0;
    constexpr uint32_t noreset = 1;
}
namespace flash::nwrp {
    constexpr uint32_t active = 0;
    constexpr uint32_t inactive = 1;
}
namespace flash::operr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::optlock {
    constexpr uint32_t unlocked = 0;
    constexpr uint32_t locked = 1;
    constexpr uint32_t set = 1;
}
namespace flash::optstrt {
    constexpr uint32_t complete = 0;
    constexpr uint32_t requested = 1;
    constexpr uint32_t set = 1;
}
namespace flash::pg {
    constexpr uint32_t program = 1;
}
namespace flash::pgaerr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::pgperr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::pgserr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::prften {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::psize {
    constexpr uint32_t psize8 = 0;
    constexpr uint32_t psize16 = 1;
    constexpr uint32_t psize32 = 2;
    constexpr uint32_t psize64 = 3;
}
namespace flash::rderr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace flash::rdp {
    constexpr uint32_t level1 = -1;
    constexpr uint32_t level0 = 170;
    constexpr uint32_t level2 = 204;
}
namespace flash::ser {
    constexpr uint32_t sectorerase = 1;
}
namespace flash::sprmod {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace flash::strt {
    constexpr uint32_t start = 1;
}
namespace flash::wdg_sw {
    constexpr uint32_t hardware = 0;
    constexpr uint32_t software = 1;
}
namespace flash::wrperr {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}

#endif // STM32_FLASH_HPP
