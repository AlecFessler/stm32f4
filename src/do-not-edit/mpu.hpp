// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Memory protection unit
#ifndef MPU_HPP
#define MPU_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t MPU_BASE = 0xE000ED90;

struct MpuRegs {
    volatile uint32_t mpu_typer; // MPU type register
    volatile uint32_t mpu_ctrl; // MPU control register
    volatile uint32_t mpu_rnr; // MPU region number register
    volatile uint32_t mpu_rbar; // MPU region base address register
    volatile uint32_t mpu_rasr; // MPU region attribute and size register
};

static_assert(offsetof(MpuRegs, mpu_typer) == 0);
static_assert(offsetof(MpuRegs, mpu_ctrl) == 4);
static_assert(offsetof(MpuRegs, mpu_rnr) == 8);
static_assert(offsetof(MpuRegs, mpu_rbar) == 12);
static_assert(offsetof(MpuRegs, mpu_rasr) == 16);

inline MpuRegs& mpu() { return *reinterpret_cast<MpuRegs*>(MPU_BASE); }

constexpr RegField mpu_mpu_typer_separate{0x00000001u, 0};
constexpr RegField mpu_mpu_typer_dregion{0x0000FF00u, 8};
constexpr RegField mpu_mpu_typer_iregion{0x00FF0000u, 16};
constexpr RegField mpu_mpu_ctrl_enable{0x00000001u, 0};
constexpr RegField mpu_mpu_ctrl_hfnmiena{0x00000002u, 1};
constexpr RegField mpu_mpu_ctrl_privdefena{0x00000004u, 2};
constexpr RegField mpu_mpu_rnr_region{0x000000FFu, 0};
constexpr RegField mpu_mpu_rbar_region{0x0000000Fu, 0};
constexpr RegField mpu_mpu_rbar_valid{0x00000010u, 4};
constexpr RegField mpu_mpu_rbar_addr{0xFFFFFFE0u, 5};
constexpr RegField mpu_mpu_rasr_enable{0x00000001u, 0};
constexpr RegField mpu_mpu_rasr_size{0x0000003Eu, 1};
constexpr RegField mpu_mpu_rasr_srd{0x0000FF00u, 8};
constexpr RegField mpu_mpu_rasr_b{0x00010000u, 16};
constexpr RegField mpu_mpu_rasr_c{0x00020000u, 17};
constexpr RegField mpu_mpu_rasr_s{0x00040000u, 18};
constexpr RegField mpu_mpu_rasr_tex{0x00380000u, 19};
constexpr RegField mpu_mpu_rasr_ap{0x07000000u, 24};
constexpr RegField mpu_mpu_rasr_xn{0x10000000u, 28};

#endif // MPU_HPP