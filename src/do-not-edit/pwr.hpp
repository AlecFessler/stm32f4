// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Power control
#ifndef STM32_PWR_HPP
#define STM32_PWR_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace pwr {
enum class Bre : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Brr : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Csbf : uint32_t {
    zero = 0,
    clear = 1,
};
enum class Cwuf : uint32_t {
    zero = 0,
    clear = 1,
};
enum class Dbp : uint32_t {
    protected_ = 0,
    writable = 1,
};
enum class Ewup : uint32_t {
    gpio = 0,
    wakeup = 1,
};
enum class Fpds : uint32_t {
    idle = 0,
    powerdown = 1,
};
enum class Lpds : uint32_t {
    main = 0,
    lowpower = 1,
};
enum class Lpuds : uint32_t {
    on = 0,
    underdrive = 1,
};
enum class Mruds : uint32_t {
    on = 0,
    underdrive = 1,
};
enum class Oden : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Odrdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Odswen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Odswrdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Pdds : uint32_t {
    enterstop = 0,
    enterstandby = 1,
};
enum class Pvde : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pvdo : uint32_t {
    higher = 0,
    lower = 1,
};
enum class Sbf : uint32_t {
    instandby = 0,
    notinstandby = 1,
};
enum class Uden : uint32_t {
    disabled = 0,
    enabled = 3,
};
enum class Udrdy : uint32_t {
    notready = 0,
    ready = 3,
};
enum class Vos : uint32_t {
    scale3 = 1,
    scale2 = 2,
    scale1 = 3,
};
enum class Vosrdy : uint32_t {
    notready = 0,
    ready = 1,
};
enum class Wuf : uint32_t {
    notoccurred = 0,
    occurred = 1,
};
} // namespace pwr

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t PWR_BASE = 0x40007000;
struct PwrRegs {
    volatile uint32_t cr; // power control register
    volatile uint32_t csr; // power control/status register
};
static_assert(offsetof(PwrRegs, cr) == 0);
static_assert(offsetof(PwrRegs, csr) == 4);

constexpr Field<Access::RW, pwr::Lpds> pwr_cr_lpds{0x40007000u, 0x00000001u, 0, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Pdds> pwr_cr_pdds{0x40007000u, 0x00000002u, 1, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RC_W1, pwr::Cwuf> pwr_cr_cwuf{0x40007000u, 0x00000004u, 2, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RC_W1, pwr::Csbf> pwr_cr_csbf{0x40007000u, 0x00000008u, 3, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Pvde> pwr_cr_pvde{0x40007000u, 0x00000010u, 4, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW> pwr_cr_pls{0x40007000u, 0x000000E0u, 5, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Dbp> pwr_cr_dbp{0x40007000u, 0x00000100u, 8, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Fpds> pwr_cr_fpds{0x40007000u, 0x00000200u, 9, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW> pwr_cr_lplvds{0x40007000u, 0x00000400u, 10, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW> pwr_cr_mrlvds{0x40007000u, 0x00000800u, 11, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Vos> pwr_cr_vos{0x40007000u, 0x0000C000u, 14, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Oden> pwr_cr_oden{0x40007000u, 0x00010000u, 16, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Odswen> pwr_cr_odswen{0x40007000u, 0x00020000u, 17, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RW, pwr::Uden> pwr_cr_uden{0x40007000u, 0x000C0000u, 18, 0x0000000Cu, 0x00000000u};
constexpr Field<Access::RO, pwr::Wuf, true> pwr_csr_wuf{0x40007004u, 0x00000001u, 0};
constexpr Field<Access::RO, pwr::Sbf, true> pwr_csr_sbf{0x40007004u, 0x00000002u, 1};
constexpr Field<Access::RO, pwr::Pvdo, true> pwr_csr_pvdo{0x40007004u, 0x00000004u, 2};
constexpr Field<Access::RO, pwr::Brr, true> pwr_csr_brr{0x40007004u, 0x00000008u, 3};
constexpr Field<Access::RW, pwr::Ewup> pwr_csr_ewup{0x40007004u, 0x00000100u, 8, 0x000C0000u, 0x00000000u};
constexpr Field<Access::RW, pwr::Bre> pwr_csr_bre{0x40007004u, 0x00000200u, 9, 0x000C0000u, 0x00000000u};
constexpr Field<Access::RO, pwr::Vosrdy, true> pwr_csr_vosrdy{0x40007004u, 0x00004000u, 14, 0x000C0000u, 0x00000000u};
constexpr Field<Access::RO, pwr::Odrdy, true> pwr_csr_odrdy{0x40007004u, 0x00010000u, 16};
constexpr Field<Access::RO, pwr::Odswrdy, true> pwr_csr_odswrdy{0x40007004u, 0x00020000u, 17};
constexpr Field<Access::RC_W1, pwr::Udrdy> pwr_csr_udrdy{0x40007004u, 0x000C0000u, 18, 0x000C0000u, 0x00000000u};

#endif // STM32_PWR_HPP
