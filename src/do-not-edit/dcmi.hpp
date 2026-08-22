// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Digital camera interface
#ifndef DCMI_HPP
#define DCMI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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

inline DcmiRegs& dcmi() { return *reinterpret_cast<DcmiRegs*>(DCMI_BASE); }

constexpr RegField dcmi_cr_enable{0x00004000u, 14};
constexpr RegField dcmi_cr_edm{0x00000C00u, 10};
constexpr RegField dcmi_cr_fcrc{0x00000300u, 8};
constexpr RegField dcmi_cr_vspol{0x00000080u, 7};
constexpr RegField dcmi_cr_hspol{0x00000040u, 6};
constexpr RegField dcmi_cr_pckpol{0x00000020u, 5};
constexpr RegField dcmi_cr_ess{0x00000010u, 4};
constexpr RegField dcmi_cr_jpeg{0x00000008u, 3};
constexpr RegField dcmi_cr_crop{0x00000004u, 2};
constexpr RegField dcmi_cr_cm{0x00000002u, 1};
constexpr RegField dcmi_cr_capture{0x00000001u, 0};
constexpr RegField dcmi_sr_fne{0x00000004u, 2};
constexpr RegField dcmi_sr_vsync{0x00000002u, 1};
constexpr RegField dcmi_sr_hsync{0x00000001u, 0};
constexpr RegField dcmi_ris_line_ris{0x00000010u, 4};
constexpr RegField dcmi_ris_vsync_ris{0x00000008u, 3};
constexpr RegField dcmi_ris_err_ris{0x00000004u, 2};
constexpr RegField dcmi_ris_ovr_ris{0x00000002u, 1};
constexpr RegField dcmi_ris_frame_ris{0x00000001u, 0};
constexpr RegField dcmi_ier_line_ie{0x00000010u, 4};
constexpr RegField dcmi_ier_vsync_ie{0x00000008u, 3};
constexpr RegField dcmi_ier_err_ie{0x00000004u, 2};
constexpr RegField dcmi_ier_ovr_ie{0x00000002u, 1};
constexpr RegField dcmi_ier_frame_ie{0x00000001u, 0};
constexpr RegField dcmi_mis_line_mis{0x00000010u, 4};
constexpr RegField dcmi_mis_vsync_mis{0x00000008u, 3};
constexpr RegField dcmi_mis_err_mis{0x00000004u, 2};
constexpr RegField dcmi_mis_ovr_mis{0x00000002u, 1};
constexpr RegField dcmi_mis_frame_mis{0x00000001u, 0};
constexpr RegField dcmi_icr_line_isc{0x00000010u, 4};
constexpr RegField dcmi_icr_vsync_isc{0x00000008u, 3};
constexpr RegField dcmi_icr_err_isc{0x00000004u, 2};
constexpr RegField dcmi_icr_ovr_isc{0x00000002u, 1};
constexpr RegField dcmi_icr_frame_isc{0x00000001u, 0};
constexpr RegField dcmi_escr_fec{0xFF000000u, 24};
constexpr RegField dcmi_escr_lec{0x00FF0000u, 16};
constexpr RegField dcmi_escr_lsc{0x0000FF00u, 8};
constexpr RegField dcmi_escr_fsc{0x000000FFu, 0};
constexpr RegField dcmi_esur_feu{0xFF000000u, 24};
constexpr RegField dcmi_esur_leu{0x00FF0000u, 16};
constexpr RegField dcmi_esur_lsu{0x0000FF00u, 8};
constexpr RegField dcmi_esur_fsu{0x000000FFu, 0};
constexpr RegField dcmi_cwstrt_vst{0x1FFF0000u, 16};
constexpr RegField dcmi_cwstrt_hoffcnt{0x00003FFFu, 0};
constexpr RegField dcmi_cwsize_vline{0x3FFF0000u, 16};
constexpr RegField dcmi_cwsize_capcnt{0x00003FFFu, 0};
constexpr RegField dcmi_dr_byte3{0xFF000000u, 24};
constexpr RegField dcmi_dr_byte2{0x00FF0000u, 16};
constexpr RegField dcmi_dr_byte1{0x0000FF00u, 8};
constexpr RegField dcmi_dr_byte0{0x000000FFu, 0};

#endif // DCMI_HPP