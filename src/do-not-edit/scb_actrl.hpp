// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// System control block ACTLR
#ifndef SCB_ACTRL_HPP
#define SCB_ACTRL_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t SCB_ACTRL_BASE = 0xE000E008;

struct Scb_actrlRegs {
    volatile uint32_t actrl; // Auxiliary control register
};

static_assert(offsetof(Scb_actrlRegs, actrl) == 0);

inline Scb_actrlRegs& scb_actrl() { return *reinterpret_cast<Scb_actrlRegs*>(SCB_ACTRL_BASE); }

constexpr RegField scb_actrl_actrl_dismcycint{0x00000001u, 0};
constexpr RegField scb_actrl_actrl_disdefwbuf{0x00000002u, 1};
constexpr RegField scb_actrl_actrl_disfold{0x00000004u, 2};
constexpr RegField scb_actrl_actrl_disfpca{0x00000100u, 8};
constexpr RegField scb_actrl_actrl_disoofp{0x00000200u, 9};

#endif // SCB_ACTRL_HPP