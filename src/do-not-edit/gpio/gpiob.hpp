// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose I/Os
#ifndef STM32_GPIOB_HPP
#define STM32_GPIOB_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

#include "values.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t GPIOB_BASE = 0x40020400;
struct GpiobRegs {
    volatile uint32_t moder; // GPIO port mode register
    volatile uint32_t otyper; // GPIO port output type register
    volatile uint32_t ospeedr; // GPIO port output speed register
    volatile uint32_t pupdr; // GPIO port pull-up/pull-down register
    volatile uint32_t idr; // GPIO port input data register
    volatile uint32_t odr; // GPIO port output data register
    volatile uint32_t bsrr; // GPIO port bit set/reset register
    volatile uint32_t lckr; // GPIO port configuration lock register
    volatile uint32_t afrl; // GPIO alternate function low register
    volatile uint32_t afrh; // GPIO alternate function high register
};
static_assert(offsetof(GpiobRegs, moder) == 0);
static_assert(offsetof(GpiobRegs, otyper) == 4);
static_assert(offsetof(GpiobRegs, ospeedr) == 8);
static_assert(offsetof(GpiobRegs, pupdr) == 12);
static_assert(offsetof(GpiobRegs, idr) == 16);
static_assert(offsetof(GpiobRegs, odr) == 20);
static_assert(offsetof(GpiobRegs, bsrr) == 24);
static_assert(offsetof(GpiobRegs, lckr) == 28);
static_assert(offsetof(GpiobRegs, afrl) == 32);
static_assert(offsetof(GpiobRegs, afrh) == 36);

constexpr Field<Access::RW, gpio::Mode> gpiob_moder_moder[16] = {
    {0x40020400u, 0x00000003u, 0},
    {0x40020400u, 0x0000000Cu, 2},
    {0x40020400u, 0x00000030u, 4},
    {0x40020400u, 0x000000C0u, 6},
    {0x40020400u, 0x00000300u, 8},
    {0x40020400u, 0x00000C00u, 10},
    {0x40020400u, 0x00003000u, 12},
    {0x40020400u, 0x0000C000u, 14},
    {0x40020400u, 0x00030000u, 16},
    {0x40020400u, 0x000C0000u, 18},
    {0x40020400u, 0x00300000u, 20},
    {0x40020400u, 0x00C00000u, 22},
    {0x40020400u, 0x03000000u, 24},
    {0x40020400u, 0x0C000000u, 26},
    {0x40020400u, 0x30000000u, 28},
    {0x40020400u, 0xC0000000u, 30},
};
constexpr Field<Access::RW, gpio::Outputtype, true, true> gpiob_otyper_ot[16] = {
    {0x40020404u, 0x00000001u, 0},
    {0x40020404u, 0x00000002u, 1},
    {0x40020404u, 0x00000004u, 2},
    {0x40020404u, 0x00000008u, 3},
    {0x40020404u, 0x00000010u, 4},
    {0x40020404u, 0x00000020u, 5},
    {0x40020404u, 0x00000040u, 6},
    {0x40020404u, 0x00000080u, 7},
    {0x40020404u, 0x00000100u, 8},
    {0x40020404u, 0x00000200u, 9},
    {0x40020404u, 0x00000400u, 10},
    {0x40020404u, 0x00000800u, 11},
    {0x40020404u, 0x00001000u, 12},
    {0x40020404u, 0x00002000u, 13},
    {0x40020404u, 0x00004000u, 14},
    {0x40020404u, 0x00008000u, 15},
};
constexpr Field<Access::RW, gpio::Outputspeed> gpiob_ospeedr_ospeedr[16] = {
    {0x40020408u, 0x00000003u, 0},
    {0x40020408u, 0x0000000Cu, 2},
    {0x40020408u, 0x00000030u, 4},
    {0x40020408u, 0x000000C0u, 6},
    {0x40020408u, 0x00000300u, 8},
    {0x40020408u, 0x00000C00u, 10},
    {0x40020408u, 0x00003000u, 12},
    {0x40020408u, 0x0000C000u, 14},
    {0x40020408u, 0x00030000u, 16},
    {0x40020408u, 0x000C0000u, 18},
    {0x40020408u, 0x00300000u, 20},
    {0x40020408u, 0x00C00000u, 22},
    {0x40020408u, 0x03000000u, 24},
    {0x40020408u, 0x0C000000u, 26},
    {0x40020408u, 0x30000000u, 28},
    {0x40020408u, 0xC0000000u, 30},
};
constexpr Field<Access::RW, gpio::Pull> gpiob_pupdr_pupdr[16] = {
    {0x4002040Cu, 0x00000003u, 0},
    {0x4002040Cu, 0x0000000Cu, 2},
    {0x4002040Cu, 0x00000030u, 4},
    {0x4002040Cu, 0x000000C0u, 6},
    {0x4002040Cu, 0x00000300u, 8},
    {0x4002040Cu, 0x00000C00u, 10},
    {0x4002040Cu, 0x00003000u, 12},
    {0x4002040Cu, 0x0000C000u, 14},
    {0x4002040Cu, 0x00030000u, 16},
    {0x4002040Cu, 0x000C0000u, 18},
    {0x4002040Cu, 0x00300000u, 20},
    {0x4002040Cu, 0x00C00000u, 22},
    {0x4002040Cu, 0x03000000u, 24},
    {0x4002040Cu, 0x0C000000u, 26},
    {0x4002040Cu, 0x30000000u, 28},
    {0x4002040Cu, 0xC0000000u, 30},
};
constexpr Field<Access::RO, gpio::Inputdata> gpiob_idr_idr[16] = {
    {0x40020410u, 0x00000001u, 0},
    {0x40020410u, 0x00000002u, 1},
    {0x40020410u, 0x00000004u, 2},
    {0x40020410u, 0x00000008u, 3},
    {0x40020410u, 0x00000010u, 4},
    {0x40020410u, 0x00000020u, 5},
    {0x40020410u, 0x00000040u, 6},
    {0x40020410u, 0x00000080u, 7},
    {0x40020410u, 0x00000100u, 8},
    {0x40020410u, 0x00000200u, 9},
    {0x40020410u, 0x00000400u, 10},
    {0x40020410u, 0x00000800u, 11},
    {0x40020410u, 0x00001000u, 12},
    {0x40020410u, 0x00002000u, 13},
    {0x40020410u, 0x00004000u, 14},
    {0x40020410u, 0x00008000u, 15},
};
constexpr Field<Access::RW, gpio::Outputdata, true, true> gpiob_odr_odr[16] = {
    {0x40020414u, 0x00000001u, 0},
    {0x40020414u, 0x00000002u, 1},
    {0x40020414u, 0x00000004u, 2},
    {0x40020414u, 0x00000008u, 3},
    {0x40020414u, 0x00000010u, 4},
    {0x40020414u, 0x00000020u, 5},
    {0x40020414u, 0x00000040u, 6},
    {0x40020414u, 0x00000080u, 7},
    {0x40020414u, 0x00000100u, 8},
    {0x40020414u, 0x00000200u, 9},
    {0x40020414u, 0x00000400u, 10},
    {0x40020414u, 0x00000800u, 11},
    {0x40020414u, 0x00001000u, 12},
    {0x40020414u, 0x00002000u, 13},
    {0x40020414u, 0x00004000u, 14},
    {0x40020414u, 0x00008000u, 15},
};
constexpr Field<Access::WO, gpio::Br> gpiob_bsrr_br[16] = {
    {0x40020418u, 0x00010000u, 16},
    {0x40020418u, 0x00020000u, 17},
    {0x40020418u, 0x00040000u, 18},
    {0x40020418u, 0x00080000u, 19},
    {0x40020418u, 0x00100000u, 20},
    {0x40020418u, 0x00200000u, 21},
    {0x40020418u, 0x00400000u, 22},
    {0x40020418u, 0x00800000u, 23},
    {0x40020418u, 0x01000000u, 24},
    {0x40020418u, 0x02000000u, 25},
    {0x40020418u, 0x04000000u, 26},
    {0x40020418u, 0x08000000u, 27},
    {0x40020418u, 0x10000000u, 28},
    {0x40020418u, 0x20000000u, 29},
    {0x40020418u, 0x40000000u, 30},
    {0x40020418u, 0x80000000u, 31},
};
constexpr Field<Access::WO, gpio::Bs> gpiob_bsrr_bs[16] = {
    {0x40020418u, 0x00000001u, 0},
    {0x40020418u, 0x00000002u, 1},
    {0x40020418u, 0x00000004u, 2},
    {0x40020418u, 0x00000008u, 3},
    {0x40020418u, 0x00000010u, 4},
    {0x40020418u, 0x00000020u, 5},
    {0x40020418u, 0x00000040u, 6},
    {0x40020418u, 0x00000080u, 7},
    {0x40020418u, 0x00000100u, 8},
    {0x40020418u, 0x00000200u, 9},
    {0x40020418u, 0x00000400u, 10},
    {0x40020418u, 0x00000800u, 11},
    {0x40020418u, 0x00001000u, 12},
    {0x40020418u, 0x00002000u, 13},
    {0x40020418u, 0x00004000u, 14},
    {0x40020418u, 0x00008000u, 15},
};
constexpr Field<Access::RW, gpio::Lock, true, true> gpiob_lckr_lck[16] = {
    {0x4002041Cu, 0x00000001u, 0},
    {0x4002041Cu, 0x00000002u, 1},
    {0x4002041Cu, 0x00000004u, 2},
    {0x4002041Cu, 0x00000008u, 3},
    {0x4002041Cu, 0x00000010u, 4},
    {0x4002041Cu, 0x00000020u, 5},
    {0x4002041Cu, 0x00000040u, 6},
    {0x4002041Cu, 0x00000080u, 7},
    {0x4002041Cu, 0x00000100u, 8},
    {0x4002041Cu, 0x00000200u, 9},
    {0x4002041Cu, 0x00000400u, 10},
    {0x4002041Cu, 0x00000800u, 11},
    {0x4002041Cu, 0x00001000u, 12},
    {0x4002041Cu, 0x00002000u, 13},
    {0x4002041Cu, 0x00004000u, 14},
    {0x4002041Cu, 0x00008000u, 15},
};
constexpr Field<Access::RW, gpio::Lockkey, true, true> gpiob_lckr_lckk{0x4002041Cu, 0x00010000u, 16};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrl_afrl[8] = {
    {0x40020420u, 0x0000000Fu, 0},
    {0x40020420u, 0x000000F0u, 4},
    {0x40020420u, 0x00000F00u, 8},
    {0x40020420u, 0x0000F000u, 12},
    {0x40020420u, 0x000F0000u, 16},
    {0x40020420u, 0x00F00000u, 20},
    {0x40020420u, 0x0F000000u, 24},
    {0x40020420u, 0xF0000000u, 28},
};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh15{0x40020424u, 0xF0000000u, 28};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh14{0x40020424u, 0x0F000000u, 24};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh13{0x40020424u, 0x00F00000u, 20};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh12{0x40020424u, 0x000F0000u, 16};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh11{0x40020424u, 0x0000F000u, 12};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh10{0x40020424u, 0x00000F00u, 8};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh9{0x40020424u, 0x000000F0u, 4};
constexpr Field<Access::RW, gpio::Alternatefunction> gpiob_afrh_afrh8{0x40020424u, 0x0000000Fu, 0};

#endif // STM32_GPIOB_HPP
