// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Random number generator
#ifndef RNG_HPP
#define RNG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t RNG_BASE = 0x50060800;

struct RngRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t sr; // status register
    volatile uint32_t dr; // data register
};

static_assert(offsetof(RngRegs, cr) == 0);
static_assert(offsetof(RngRegs, sr) == 4);
static_assert(offsetof(RngRegs, dr) == 8);

inline RngRegs& rng() { return *reinterpret_cast<RngRegs*>(RNG_BASE); }

constexpr RegField rng_cr_ie{0x00000008u, 3};
constexpr RegField rng_cr_rngen{0x00000004u, 2};
constexpr RegField rng_sr_seis{0x00000040u, 6};
constexpr RegField rng_sr_ceis{0x00000020u, 5};
constexpr RegField rng_sr_secs{0x00000004u, 2};
constexpr RegField rng_sr_cecs{0x00000002u, 1};
constexpr RegField rng_sr_drdy{0x00000001u, 0};
constexpr RegField rng_dr_rndata{0xFFFFFFFFu, 0};

#endif // RNG_HPP