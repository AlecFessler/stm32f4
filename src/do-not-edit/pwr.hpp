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

namespace pwr::bre {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace pwr::brr {
    constexpr uint32_t notready = 0;
    constexpr uint32_t ready = 1;
}
namespace pwr::csbf {
    constexpr uint32_t zero = 0;
    constexpr uint32_t clear = 1;
}
namespace pwr::cwuf {
    constexpr uint32_t zero = 0;
    constexpr uint32_t clear = 1;
}
namespace pwr::dbp {
    constexpr uint32_t protected_ = 0;
    constexpr uint32_t writable = 1;
}
namespace pwr::ewup {
    constexpr uint32_t gpio = 0;
    constexpr uint32_t wakeup = 1;
}
namespace pwr::fpds {
    constexpr uint32_t idle = 0;
    constexpr uint32_t powerdown = 1;
}
namespace pwr::lpds {
    constexpr uint32_t main = 0;
    constexpr uint32_t lowpower = 1;
}
namespace pwr::lpuds {
    constexpr uint32_t on = 0;
    constexpr uint32_t underdrive = 1;
}
namespace pwr::mruds {
    constexpr uint32_t on = 0;
    constexpr uint32_t underdrive = 1;
}
namespace pwr::oden {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace pwr::odrdy {
    constexpr uint32_t notready = 0;
    constexpr uint32_t ready = 1;
}
namespace pwr::odswen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace pwr::odswrdy {
    constexpr uint32_t notready = 0;
    constexpr uint32_t ready = 1;
}
namespace pwr::pdds {
    constexpr uint32_t enterstop = 0;
    constexpr uint32_t enterstandby = 1;
}
namespace pwr::pvde {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace pwr::pvdo {
    constexpr uint32_t higher = 0;
    constexpr uint32_t lower = 1;
}
namespace pwr::sbf {
    constexpr uint32_t instandby = 0;
    constexpr uint32_t notinstandby = 1;
}
namespace pwr::uden {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 3;
}
namespace pwr::udrdy {
    constexpr uint32_t notready = 0;
    constexpr uint32_t ready = 3;
}
namespace pwr::vos {
    constexpr uint32_t scale3 = 1;
    constexpr uint32_t scale2 = 2;
    constexpr uint32_t scale1 = 3;
}
namespace pwr::vosrdy {
    constexpr uint32_t notready = 0;
    constexpr uint32_t ready = 1;
}
namespace pwr::wuf {
    constexpr uint32_t notoccurred = 0;
    constexpr uint32_t occurred = 1;
}

#endif // STM32_PWR_HPP
