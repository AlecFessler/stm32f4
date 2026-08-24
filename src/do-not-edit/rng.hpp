// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Random number generator
#ifndef STM32_RNG_HPP
#define STM32_RNG_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace rng {
enum class Cecs : uint32_t {
    correct = 0,
    slow = 1,
};
enum class Ced : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Ceis : uint32_t {
    correct = 0,
    slow = 1,
};
enum class Drdy : uint32_t {
    invalid = 0,
    valid = 1,
};
enum class Ie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rngen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Secs : uint32_t {
    nofault = 0,
    fault = 1,
};
enum class Seis : uint32_t {
    nofault = 0,
    fault = 1,
};
} // namespace rng

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

constexpr Field<Access::RW, rng::Ie> rng_cr_ie{0x50060800u, 0x00000008u, 3};
constexpr Field<Access::RW, rng::Rngen> rng_cr_rngen{0x50060800u, 0x00000004u, 2};
constexpr Field<Access::RC_W0, rng::Seis, false> rng_sr_seis{0x50060804u, 0x00000040u, 6, 0x00000000u, 0x00000060u};
constexpr Field<Access::RC_W0, rng::Ceis, false> rng_sr_ceis{0x50060804u, 0x00000020u, 5, 0x00000000u, 0x00000060u};
constexpr Field<Access::RO, rng::Secs> rng_sr_secs{0x50060804u, 0x00000004u, 2};
constexpr Field<Access::RO, rng::Cecs> rng_sr_cecs{0x50060804u, 0x00000002u, 1};
constexpr Field<Access::RO, rng::Drdy> rng_sr_drdy{0x50060804u, 0x00000001u, 0};
constexpr Field<Access::RO> rng_dr_rndata{0x50060808u, 0xFFFFFFFFu, 0};

#endif // STM32_RNG_HPP
