// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Cryptographic processor
#ifndef CRC_HPP
#define CRC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t CRC_BASE = 0x40023000;
struct CrcRegs {
    volatile uint32_t dr; // Data register
    volatile uint32_t idr; // Independent Data register
    volatile uint32_t cr; // Control register
};

static_assert(offsetof(CrcRegs, dr) == 0);
static_assert(offsetof(CrcRegs, idr) == 4);
static_assert(offsetof(CrcRegs, cr) == 8);

constexpr Field<Access::RW> crc_dr_dr{0x40023000u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> crc_idr_idr{0x40023004u, 0x000000FFu, 0};
constexpr Field<Access::WO> crc_cr_cr{0x40023008u, 0x00000001u, 0};

#endif // CRC_HPP