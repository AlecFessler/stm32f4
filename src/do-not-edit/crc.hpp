// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Cryptographic processor
#ifndef CRC_HPP
#define CRC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t CRC_BASE = 0x40023000;

struct CrcRegs {
    volatile uint32_t dr; // Data register
    volatile uint32_t idr; // Independent Data register
    volatile uint32_t cr; // Control register
};

static_assert(offsetof(CrcRegs, dr) == 0);
static_assert(offsetof(CrcRegs, idr) == 4);
static_assert(offsetof(CrcRegs, cr) == 8);

inline CrcRegs& crc() { return *reinterpret_cast<CrcRegs*>(CRC_BASE); }

constexpr RegField crc_dr_dr{0xFFFFFFFFu, 0};
constexpr RegField crc_idr_idr{0x000000FFu, 0};
constexpr RegField crc_cr_cr{0x00000001u, 0};

#endif // CRC_HPP