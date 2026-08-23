// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Digital camera interface
#ifndef STM32_DCMI_HPP
#define STM32_DCMI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t DCMI_BASE = 0x50050000;
struct DcmiRegs {
    volatile uint32_t cr; // control register 1
    volatile uint32_t sr; // status register
    volatile uint32_t ris; // raw interrupt status register
    volatile uint32_t ier; // interrupt enable register
    volatile uint32_t mis; // masked interrupt status register
    volatile uint32_t icr; // interrupt clear register
    volatile uint32_t escr; // embedded synchronization code register
    volatile uint32_t esur; // embedded synchronization unmask register
    volatile uint32_t cwstrt; // crop window start
    volatile uint32_t cwsize; // crop window size
    volatile uint32_t dr; // data register
};
static_assert(offsetof(DcmiRegs, cr) == 0);
static_assert(offsetof(DcmiRegs, sr) == 4);
static_assert(offsetof(DcmiRegs, ris) == 8);
static_assert(offsetof(DcmiRegs, ier) == 12);
static_assert(offsetof(DcmiRegs, mis) == 16);
static_assert(offsetof(DcmiRegs, icr) == 20);
static_assert(offsetof(DcmiRegs, escr) == 24);
static_assert(offsetof(DcmiRegs, esur) == 28);
static_assert(offsetof(DcmiRegs, cwstrt) == 32);
static_assert(offsetof(DcmiRegs, cwsize) == 36);
static_assert(offsetof(DcmiRegs, dr) == 40);

constexpr Field<Access::RW> dcmi_cr_enable{0x50050000u, 0x00004000u, 14};
constexpr Field<Access::RW> dcmi_cr_edm{0x50050000u, 0x00000C00u, 10};
constexpr Field<Access::RW> dcmi_cr_fcrc{0x50050000u, 0x00000300u, 8};
constexpr Field<Access::RW> dcmi_cr_vspol{0x50050000u, 0x00000080u, 7};
constexpr Field<Access::RW> dcmi_cr_hspol{0x50050000u, 0x00000040u, 6};
constexpr Field<Access::RW> dcmi_cr_pckpol{0x50050000u, 0x00000020u, 5};
constexpr Field<Access::RW> dcmi_cr_ess{0x50050000u, 0x00000010u, 4};
constexpr Field<Access::RW> dcmi_cr_jpeg{0x50050000u, 0x00000008u, 3};
constexpr Field<Access::RW> dcmi_cr_crop{0x50050000u, 0x00000004u, 2};
constexpr Field<Access::RW> dcmi_cr_cm{0x50050000u, 0x00000002u, 1};
constexpr Field<Access::RW> dcmi_cr_capture{0x50050000u, 0x00000001u, 0};
constexpr Field<Access::RO> dcmi_sr_fne{0x50050004u, 0x00000004u, 2};
constexpr Field<Access::RO> dcmi_sr_vsync{0x50050004u, 0x00000002u, 1};
constexpr Field<Access::RO> dcmi_sr_hsync{0x50050004u, 0x00000001u, 0};
constexpr Field<Access::RO> dcmi_ris_line_ris{0x50050008u, 0x00000010u, 4};
constexpr Field<Access::RO> dcmi_ris_vsync_ris{0x50050008u, 0x00000008u, 3};
constexpr Field<Access::RO> dcmi_ris_err_ris{0x50050008u, 0x00000004u, 2};
constexpr Field<Access::RO> dcmi_ris_ovr_ris{0x50050008u, 0x00000002u, 1};
constexpr Field<Access::RO> dcmi_ris_frame_ris{0x50050008u, 0x00000001u, 0};
constexpr Field<Access::RW> dcmi_ier_line_ie{0x5005000Cu, 0x00000010u, 4};
constexpr Field<Access::RW> dcmi_ier_vsync_ie{0x5005000Cu, 0x00000008u, 3};
constexpr Field<Access::RW> dcmi_ier_err_ie{0x5005000Cu, 0x00000004u, 2};
constexpr Field<Access::RW> dcmi_ier_ovr_ie{0x5005000Cu, 0x00000002u, 1};
constexpr Field<Access::RW> dcmi_ier_frame_ie{0x5005000Cu, 0x00000001u, 0};
constexpr Field<Access::RO> dcmi_mis_line_mis{0x50050010u, 0x00000010u, 4};
constexpr Field<Access::RO> dcmi_mis_vsync_mis{0x50050010u, 0x00000008u, 3};
constexpr Field<Access::RO> dcmi_mis_err_mis{0x50050010u, 0x00000004u, 2};
constexpr Field<Access::RO> dcmi_mis_ovr_mis{0x50050010u, 0x00000002u, 1};
constexpr Field<Access::RO> dcmi_mis_frame_mis{0x50050010u, 0x00000001u, 0};
constexpr Field<Access::WO> dcmi_icr_line_isc{0x50050014u, 0x00000010u, 4};
constexpr Field<Access::WO> dcmi_icr_vsync_isc{0x50050014u, 0x00000008u, 3};
constexpr Field<Access::WO> dcmi_icr_err_isc{0x50050014u, 0x00000004u, 2};
constexpr Field<Access::WO> dcmi_icr_ovr_isc{0x50050014u, 0x00000002u, 1};
constexpr Field<Access::WO> dcmi_icr_frame_isc{0x50050014u, 0x00000001u, 0};
constexpr Field<Access::RW> dcmi_escr_fec{0x50050018u, 0xFF000000u, 24};
constexpr Field<Access::RW> dcmi_escr_lec{0x50050018u, 0x00FF0000u, 16};
constexpr Field<Access::RW> dcmi_escr_lsc{0x50050018u, 0x0000FF00u, 8};
constexpr Field<Access::RW> dcmi_escr_fsc{0x50050018u, 0x000000FFu, 0};
constexpr Field<Access::RW> dcmi_esur_feu{0x5005001Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> dcmi_esur_leu{0x5005001Cu, 0x00FF0000u, 16};
constexpr Field<Access::RW> dcmi_esur_lsu{0x5005001Cu, 0x0000FF00u, 8};
constexpr Field<Access::RW> dcmi_esur_fsu{0x5005001Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> dcmi_cwstrt_vst{0x50050020u, 0x1FFF0000u, 16};
constexpr Field<Access::RW> dcmi_cwstrt_hoffcnt{0x50050020u, 0x00003FFFu, 0};
constexpr Field<Access::RW> dcmi_cwsize_vline{0x50050024u, 0x3FFF0000u, 16};
constexpr Field<Access::RW> dcmi_cwsize_capcnt{0x50050024u, 0x00003FFFu, 0};
constexpr Field<Access::RO> dcmi_dr_byte[4] = {
    {0x50050028u, 0x000000FFu, 0},
    {0x50050028u, 0x0000FF00u, 8},
    {0x50050028u, 0x00FF0000u, 16},
    {0x50050028u, 0xFF000000u, 24},
};

namespace dcmi::capture {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::cm {
    constexpr uint32_t continuous = 0;
    constexpr uint32_t snapshot = 1;
}
namespace dcmi::crop {
    constexpr uint32_t full = 0;
    constexpr uint32_t cropped = 1;
}
namespace dcmi::edm {
    constexpr uint32_t bitwidth8 = 0;
    constexpr uint32_t bitwidth10 = 1;
    constexpr uint32_t bitwidth12 = 2;
    constexpr uint32_t bitwidth14 = 3;
}
namespace dcmi::enable {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::err_ie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::err_isc {
    constexpr uint32_t clear = 1;
}
namespace dcmi::err_mis {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::err_ris {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t synchronizationerror = 1;
}
namespace dcmi::ess {
    constexpr uint32_t hardware = 0;
    constexpr uint32_t embedded = 1;
}
namespace dcmi::fcrc {
    constexpr uint32_t all = 0;
    constexpr uint32_t alternate = 1;
    constexpr uint32_t oneoffour = 2;
}
namespace dcmi::fne {
    constexpr uint32_t notempty = 0;
    constexpr uint32_t empty = 1;
}
namespace dcmi::frame_ie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::frame_isc {
    constexpr uint32_t clear = 1;
}
namespace dcmi::frame_mis {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::frame_ris {
    constexpr uint32_t nonewcapture = 0;
    constexpr uint32_t framecaptured = 1;
}
namespace dcmi::hspol {
    constexpr uint32_t activelow = 0;
    constexpr uint32_t activehigh = 1;
}
namespace dcmi::hsync {
    constexpr uint32_t activeline = 0;
    constexpr uint32_t betweenlines = 1;
}
namespace dcmi::jpeg {
    constexpr uint32_t uncompressed = 0;
    constexpr uint32_t jpeg = 1;
}
namespace dcmi::line_ie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::line_isc {
    constexpr uint32_t clear = 1;
}
namespace dcmi::line_mis {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::line_ris {
    constexpr uint32_t cleared = 0;
    constexpr uint32_t set = 1;
}
namespace dcmi::ovr_ie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::ovr_isc {
    constexpr uint32_t clear = 1;
}
namespace dcmi::ovr_mis {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::ovr_ris {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrunoccured = 1;
}
namespace dcmi::pckpol {
    constexpr uint32_t fallingedge = 0;
    constexpr uint32_t risingedge = 1;
}
namespace dcmi::vspol {
    constexpr uint32_t activelow = 0;
    constexpr uint32_t activehigh = 1;
}
namespace dcmi::vsync {
    constexpr uint32_t activeframe = 0;
    constexpr uint32_t betweenframes = 1;
}
namespace dcmi::vsync_ie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::vsync_isc {
    constexpr uint32_t clear = 1;
}
namespace dcmi::vsync_mis {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dcmi::vsync_ris {
    constexpr uint32_t cleared = 0;
    constexpr uint32_t set = 1;
}

#endif // STM32_DCMI_HPP
