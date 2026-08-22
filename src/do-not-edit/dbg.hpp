// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Debug support
#ifndef DBG_HPP
#define DBG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t DBG_BASE = 0xE0042000;

struct DbgRegs {
    volatile uint32_t dbgmcu_idcode; // IDCODE
    volatile uint32_t dbgmcu_cr; // Control Register
    volatile uint32_t dbgmcu_apb1_fz; // Debug MCU APB1 Freeze registe
    volatile uint32_t dbgmcu_apb2_fz; // Debug MCU APB2 Freeze registe
};

static_assert(offsetof(DbgRegs, dbgmcu_idcode) == 0);
static_assert(offsetof(DbgRegs, dbgmcu_cr) == 4);
static_assert(offsetof(DbgRegs, dbgmcu_apb1_fz) == 8);
static_assert(offsetof(DbgRegs, dbgmcu_apb2_fz) == 12);

inline DbgRegs& dbg() { return *reinterpret_cast<DbgRegs*>(DBG_BASE); }

constexpr RegField dbg_dbgmcu_idcode_dev_id{0x00000FFFu, 0};
constexpr RegField dbg_dbgmcu_idcode_rev_id{0xFFFF0000u, 16};
constexpr RegField dbg_dbgmcu_cr_dbg_sleep{0x00000001u, 0};
constexpr RegField dbg_dbgmcu_cr_dbg_stop{0x00000002u, 1};
constexpr RegField dbg_dbgmcu_cr_dbg_standby{0x00000004u, 2};
constexpr RegField dbg_dbgmcu_cr_trace_ioen{0x00000020u, 5};
constexpr RegField dbg_dbgmcu_cr_trace_mode{0x000000C0u, 6};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim2_stop{0x00000001u, 0};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim3_stop{0x00000002u, 1};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim4_stop{0x00000004u, 2};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim5_stop{0x00000008u, 3};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim6_stop{0x00000010u, 4};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim7_stop{0x00000020u, 5};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim12_stop{0x00000040u, 6};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim13_stop{0x00000080u, 7};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_tim14_stop{0x00000100u, 8};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_wwdg_stop{0x00000800u, 11};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_iwdeg_stop{0x00001000u, 12};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_j2c1_smbus_timeout{0x00200000u, 21};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_j2c2_smbus_timeout{0x00400000u, 22};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_j2c3smbus_timeout{0x00800000u, 23};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_can1_stop{0x02000000u, 25};
constexpr RegField dbg_dbgmcu_apb1_fz_dbg_can2_stop{0x04000000u, 26};
constexpr RegField dbg_dbgmcu_apb2_fz_dbg_tim1_stop{0x00000001u, 0};
constexpr RegField dbg_dbgmcu_apb2_fz_dbg_tim8_stop{0x00000002u, 1};
constexpr RegField dbg_dbgmcu_apb2_fz_dbg_tim9_stop{0x00010000u, 16};
constexpr RegField dbg_dbgmcu_apb2_fz_dbg_tim10_stop{0x00020000u, 17};
constexpr RegField dbg_dbgmcu_apb2_fz_dbg_tim11_stop{0x00040000u, 18};

#endif // DBG_HPP