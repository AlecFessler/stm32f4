// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Random number generator
#ifndef RNG_HPP
#define RNG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t RNG_BASE = 0x50060800;
struct RngRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t sr; // status register
    volatile uint32_t dr; // data register
};
static_assert(offsetof(RngRegs, cr) == 0);
static_assert(offsetof(RngRegs, sr) == 4);
static_assert(offsetof(RngRegs, dr) == 8);

constexpr Field<Access::RW> rng_cr_ie{0x50060800u, 0x00000008u, 3};
constexpr Field<Access::RW> rng_cr_rngen{0x50060800u, 0x00000004u, 2};
constexpr Field<Access::RW> rng_sr_seis{0x50060804u, 0x00000040u, 6};
constexpr Field<Access::RW> rng_sr_ceis{0x50060804u, 0x00000020u, 5};
constexpr Field<Access::RO> rng_sr_secs{0x50060804u, 0x00000004u, 2};
constexpr Field<Access::RO> rng_sr_cecs{0x50060804u, 0x00000002u, 1};
constexpr Field<Access::RO> rng_sr_drdy{0x50060804u, 0x00000001u, 0};
constexpr Field<Access::RO> rng_dr_rndata{0x50060808u, 0xFFFFFFFFu, 0};

#endif // RNG_HPP