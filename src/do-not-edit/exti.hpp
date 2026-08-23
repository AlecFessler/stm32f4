// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// External interrupt/event controller
#ifndef STM32_EXTI_HPP
#define STM32_EXTI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace exti {
enum class Eventmask : uint32_t {
    masked = 0,
    unmasked = 1,
};
enum class Fallingtrigger : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Interruptmask : uint32_t {
    masked = 0,
    unmasked = 1,
};
enum class Pif : uint32_t {
    notpending = 0,
    pending = 1,
};
enum class Pr : uint32_t {
    notpending = 0,
    pending = 1,
};
enum class Risingtrigger : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Swi : uint32_t {
    pend = 1,
};
enum class Swier : uint32_t {
    pend = 1,
};
} // namespace exti

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t EXTI_BASE = 0x40013C00;
struct ExtiRegs {
    volatile uint32_t imr; // Interrupt mask register (EXTI_IMR)
    volatile uint32_t emr; // Event mask register (EXTI_EMR)
    volatile uint32_t rtsr; // Rising Trigger selection register (EXTI_RTSR)
    volatile uint32_t ftsr; // Falling Trigger selection register (EXTI_FTSR)
    volatile uint32_t swier; // Software interrupt event register (EXTI_SWIER)
    volatile uint32_t pr; // Pending register (EXTI_PR)
};
static_assert(offsetof(ExtiRegs, imr) == 0);
static_assert(offsetof(ExtiRegs, emr) == 4);
static_assert(offsetof(ExtiRegs, rtsr) == 8);
static_assert(offsetof(ExtiRegs, ftsr) == 12);
static_assert(offsetof(ExtiRegs, swier) == 16);
static_assert(offsetof(ExtiRegs, pr) == 20);

constexpr Field<Access::RW, exti::Interruptmask> exti_imr_mr[23] = {
    {0x40013C00u, 0x00000001u, 0},
    {0x40013C00u, 0x00000002u, 1},
    {0x40013C00u, 0x00000004u, 2},
    {0x40013C00u, 0x00000008u, 3},
    {0x40013C00u, 0x00000010u, 4},
    {0x40013C00u, 0x00000020u, 5},
    {0x40013C00u, 0x00000040u, 6},
    {0x40013C00u, 0x00000080u, 7},
    {0x40013C00u, 0x00000100u, 8},
    {0x40013C00u, 0x00000200u, 9},
    {0x40013C00u, 0x00000400u, 10},
    {0x40013C00u, 0x00000800u, 11},
    {0x40013C00u, 0x00001000u, 12},
    {0x40013C00u, 0x00002000u, 13},
    {0x40013C00u, 0x00004000u, 14},
    {0x40013C00u, 0x00008000u, 15},
    {0x40013C00u, 0x00010000u, 16},
    {0x40013C00u, 0x00020000u, 17},
    {0x40013C00u, 0x00040000u, 18},
    {0x40013C00u, 0x00080000u, 19},
    {0x40013C00u, 0x00100000u, 20},
    {0x40013C00u, 0x00200000u, 21},
    {0x40013C00u, 0x00400000u, 22},
};
constexpr Field<Access::RW, exti::Eventmask> exti_emr_mr[23] = {
    {0x40013C04u, 0x00000001u, 0},
    {0x40013C04u, 0x00000002u, 1},
    {0x40013C04u, 0x00000004u, 2},
    {0x40013C04u, 0x00000008u, 3},
    {0x40013C04u, 0x00000010u, 4},
    {0x40013C04u, 0x00000020u, 5},
    {0x40013C04u, 0x00000040u, 6},
    {0x40013C04u, 0x00000080u, 7},
    {0x40013C04u, 0x00000100u, 8},
    {0x40013C04u, 0x00000200u, 9},
    {0x40013C04u, 0x00000400u, 10},
    {0x40013C04u, 0x00000800u, 11},
    {0x40013C04u, 0x00001000u, 12},
    {0x40013C04u, 0x00002000u, 13},
    {0x40013C04u, 0x00004000u, 14},
    {0x40013C04u, 0x00008000u, 15},
    {0x40013C04u, 0x00010000u, 16},
    {0x40013C04u, 0x00020000u, 17},
    {0x40013C04u, 0x00040000u, 18},
    {0x40013C04u, 0x00080000u, 19},
    {0x40013C04u, 0x00100000u, 20},
    {0x40013C04u, 0x00200000u, 21},
    {0x40013C04u, 0x00400000u, 22},
};
constexpr Field<Access::RW, exti::Risingtrigger> exti_rtsr_tr[23] = {
    {0x40013C08u, 0x00000001u, 0},
    {0x40013C08u, 0x00000002u, 1},
    {0x40013C08u, 0x00000004u, 2},
    {0x40013C08u, 0x00000008u, 3},
    {0x40013C08u, 0x00000010u, 4},
    {0x40013C08u, 0x00000020u, 5},
    {0x40013C08u, 0x00000040u, 6},
    {0x40013C08u, 0x00000080u, 7},
    {0x40013C08u, 0x00000100u, 8},
    {0x40013C08u, 0x00000200u, 9},
    {0x40013C08u, 0x00000400u, 10},
    {0x40013C08u, 0x00000800u, 11},
    {0x40013C08u, 0x00001000u, 12},
    {0x40013C08u, 0x00002000u, 13},
    {0x40013C08u, 0x00004000u, 14},
    {0x40013C08u, 0x00008000u, 15},
    {0x40013C08u, 0x00010000u, 16},
    {0x40013C08u, 0x00020000u, 17},
    {0x40013C08u, 0x00040000u, 18},
    {0x40013C08u, 0x00080000u, 19},
    {0x40013C08u, 0x00100000u, 20},
    {0x40013C08u, 0x00200000u, 21},
    {0x40013C08u, 0x00400000u, 22},
};
constexpr Field<Access::RW, exti::Fallingtrigger> exti_ftsr_tr[23] = {
    {0x40013C0Cu, 0x00000001u, 0},
    {0x40013C0Cu, 0x00000002u, 1},
    {0x40013C0Cu, 0x00000004u, 2},
    {0x40013C0Cu, 0x00000008u, 3},
    {0x40013C0Cu, 0x00000010u, 4},
    {0x40013C0Cu, 0x00000020u, 5},
    {0x40013C0Cu, 0x00000040u, 6},
    {0x40013C0Cu, 0x00000080u, 7},
    {0x40013C0Cu, 0x00000100u, 8},
    {0x40013C0Cu, 0x00000200u, 9},
    {0x40013C0Cu, 0x00000400u, 10},
    {0x40013C0Cu, 0x00000800u, 11},
    {0x40013C0Cu, 0x00001000u, 12},
    {0x40013C0Cu, 0x00002000u, 13},
    {0x40013C0Cu, 0x00004000u, 14},
    {0x40013C0Cu, 0x00008000u, 15},
    {0x40013C0Cu, 0x00010000u, 16},
    {0x40013C0Cu, 0x00020000u, 17},
    {0x40013C0Cu, 0x00040000u, 18},
    {0x40013C0Cu, 0x00080000u, 19},
    {0x40013C0Cu, 0x00100000u, 20},
    {0x40013C0Cu, 0x00200000u, 21},
    {0x40013C0Cu, 0x00400000u, 22},
};
constexpr Field<Access::RW, exti::Swier> exti_swier_swier[23] = {
    {0x40013C10u, 0x00000001u, 0},
    {0x40013C10u, 0x00000002u, 1},
    {0x40013C10u, 0x00000004u, 2},
    {0x40013C10u, 0x00000008u, 3},
    {0x40013C10u, 0x00000010u, 4},
    {0x40013C10u, 0x00000020u, 5},
    {0x40013C10u, 0x00000040u, 6},
    {0x40013C10u, 0x00000080u, 7},
    {0x40013C10u, 0x00000100u, 8},
    {0x40013C10u, 0x00000200u, 9},
    {0x40013C10u, 0x00000400u, 10},
    {0x40013C10u, 0x00000800u, 11},
    {0x40013C10u, 0x00001000u, 12},
    {0x40013C10u, 0x00002000u, 13},
    {0x40013C10u, 0x00004000u, 14},
    {0x40013C10u, 0x00008000u, 15},
    {0x40013C10u, 0x00010000u, 16},
    {0x40013C10u, 0x00020000u, 17},
    {0x40013C10u, 0x00040000u, 18},
    {0x40013C10u, 0x00080000u, 19},
    {0x40013C10u, 0x00100000u, 20},
    {0x40013C10u, 0x00200000u, 21},
    {0x40013C10u, 0x00400000u, 22},
};
constexpr Field<Access::RC_W1, exti::Pr, 0x007FFFFFu, 0x00000000u, false> exti_pr_pr[23] = {
    {0x40013C14u, 0x00000001u, 0},
    {0x40013C14u, 0x00000002u, 1},
    {0x40013C14u, 0x00000004u, 2},
    {0x40013C14u, 0x00000008u, 3},
    {0x40013C14u, 0x00000010u, 4},
    {0x40013C14u, 0x00000020u, 5},
    {0x40013C14u, 0x00000040u, 6},
    {0x40013C14u, 0x00000080u, 7},
    {0x40013C14u, 0x00000100u, 8},
    {0x40013C14u, 0x00000200u, 9},
    {0x40013C14u, 0x00000400u, 10},
    {0x40013C14u, 0x00000800u, 11},
    {0x40013C14u, 0x00001000u, 12},
    {0x40013C14u, 0x00002000u, 13},
    {0x40013C14u, 0x00004000u, 14},
    {0x40013C14u, 0x00008000u, 15},
    {0x40013C14u, 0x00010000u, 16},
    {0x40013C14u, 0x00020000u, 17},
    {0x40013C14u, 0x00040000u, 18},
    {0x40013C14u, 0x00080000u, 19},
    {0x40013C14u, 0x00100000u, 20},
    {0x40013C14u, 0x00200000u, 21},
    {0x40013C14u, 0x00400000u, 22},
};

#endif // STM32_EXTI_HPP
