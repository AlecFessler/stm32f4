// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Nested Vectored Interrupt Controller
#ifndef STM32_NVIC_HPP
#define STM32_NVIC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t NVIC_BASE = 0xE000E100;
struct NvicRegs {
    volatile uint32_t iser0; // Interrupt Set-Enable Register
    volatile uint32_t iser1; // Interrupt Set-Enable Register
    volatile uint32_t iser2; // Interrupt Set-Enable Register
    uint32_t _reserved0[29];
    volatile uint32_t icer0; // Interrupt Clear-Enable Register
    volatile uint32_t icer1; // Interrupt Clear-Enable Register
    volatile uint32_t icer2; // Interrupt Clear-Enable Register
    uint32_t _reserved1[29];
    volatile uint32_t ispr0; // Interrupt Set-Pending Register
    volatile uint32_t ispr1; // Interrupt Set-Pending Register
    volatile uint32_t ispr2; // Interrupt Set-Pending Register
    uint32_t _reserved2[29];
    volatile uint32_t icpr0; // Interrupt Clear-Pending Register
    volatile uint32_t icpr1; // Interrupt Clear-Pending Register
    volatile uint32_t icpr2; // Interrupt Clear-Pending Register
    uint32_t _reserved3[29];
    volatile uint32_t iabr0; // Interrupt Active Bit Register
    volatile uint32_t iabr1; // Interrupt Active Bit Register
    volatile uint32_t iabr2; // Interrupt Active Bit Register
    uint32_t _reserved4[61];
    volatile uint32_t ipr0; // Interrupt Priority Register
    volatile uint32_t ipr1; // Interrupt Priority Register
    volatile uint32_t ipr2; // Interrupt Priority Register
    volatile uint32_t ipr3; // Interrupt Priority Register
    volatile uint32_t ipr4; // Interrupt Priority Register
    volatile uint32_t ipr5; // Interrupt Priority Register
    volatile uint32_t ipr6; // Interrupt Priority Register
    volatile uint32_t ipr7; // Interrupt Priority Register
    volatile uint32_t ipr8; // Interrupt Priority Register
    volatile uint32_t ipr9; // Interrupt Priority Register
    volatile uint32_t ipr10; // Interrupt Priority Register
    volatile uint32_t ipr11; // Interrupt Priority Register
    volatile uint32_t ipr12; // Interrupt Priority Register
    volatile uint32_t ipr13; // Interrupt Priority Register
    volatile uint32_t ipr14; // Interrupt Priority Register
    volatile uint32_t ipr15; // Interrupt Priority Register
    volatile uint32_t ipr16; // Interrupt Priority Register
    volatile uint32_t ipr17; // Interrupt Priority Register
    volatile uint32_t ipr18; // Interrupt Priority Register
    volatile uint32_t ipr19; // Interrupt Priority Register
    volatile uint32_t ipr20; // Interrupt Priority Register
};
static_assert(offsetof(NvicRegs, iser0) == 0);
static_assert(offsetof(NvicRegs, iser1) == 4);
static_assert(offsetof(NvicRegs, iser2) == 8);
static_assert(offsetof(NvicRegs, icer0) == 128);
static_assert(offsetof(NvicRegs, icer1) == 132);
static_assert(offsetof(NvicRegs, icer2) == 136);
static_assert(offsetof(NvicRegs, ispr0) == 256);
static_assert(offsetof(NvicRegs, ispr1) == 260);
static_assert(offsetof(NvicRegs, ispr2) == 264);
static_assert(offsetof(NvicRegs, icpr0) == 384);
static_assert(offsetof(NvicRegs, icpr1) == 388);
static_assert(offsetof(NvicRegs, icpr2) == 392);
static_assert(offsetof(NvicRegs, iabr0) == 512);
static_assert(offsetof(NvicRegs, iabr1) == 516);
static_assert(offsetof(NvicRegs, iabr2) == 520);
static_assert(offsetof(NvicRegs, ipr0) == 768);
static_assert(offsetof(NvicRegs, ipr1) == 772);
static_assert(offsetof(NvicRegs, ipr2) == 776);
static_assert(offsetof(NvicRegs, ipr3) == 780);
static_assert(offsetof(NvicRegs, ipr4) == 784);
static_assert(offsetof(NvicRegs, ipr5) == 788);
static_assert(offsetof(NvicRegs, ipr6) == 792);
static_assert(offsetof(NvicRegs, ipr7) == 796);
static_assert(offsetof(NvicRegs, ipr8) == 800);
static_assert(offsetof(NvicRegs, ipr9) == 804);
static_assert(offsetof(NvicRegs, ipr10) == 808);
static_assert(offsetof(NvicRegs, ipr11) == 812);
static_assert(offsetof(NvicRegs, ipr12) == 816);
static_assert(offsetof(NvicRegs, ipr13) == 820);
static_assert(offsetof(NvicRegs, ipr14) == 824);
static_assert(offsetof(NvicRegs, ipr15) == 828);
static_assert(offsetof(NvicRegs, ipr16) == 832);
static_assert(offsetof(NvicRegs, ipr17) == 836);
static_assert(offsetof(NvicRegs, ipr18) == 840);
static_assert(offsetof(NvicRegs, ipr19) == 844);
static_assert(offsetof(NvicRegs, ipr20) == 848);

constexpr Field<Access::RW, uint32_t, false, false> nvic_iser0_setena{0xE000E100u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_iser1_setena{0xE000E104u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_iser2_setena{0xE000E108u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icer0_clrena{0xE000E180u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icer1_clrena{0xE000E184u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icer2_clrena{0xE000E188u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_ispr0_setpend{0xE000E200u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_ispr1_setpend{0xE000E204u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_ispr2_setpend{0xE000E208u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icpr0_clrpend{0xE000E280u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icpr1_clrpend{0xE000E284u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false, false> nvic_icpr2_clrpend{0xE000E288u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> nvic_iabr0_active{0xE000E300u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> nvic_iabr1_active{0xE000E304u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> nvic_iabr2_active{0xE000E308u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> nvic_ipr0_ipr_n[4] = {
    {0xE000E400u, 0x000000FFu, 0},
    {0xE000E400u, 0x0000FF00u, 8},
    {0xE000E400u, 0x00FF0000u, 16},
    {0xE000E400u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr1_ipr_n[4] = {
    {0xE000E404u, 0x000000FFu, 0},
    {0xE000E404u, 0x0000FF00u, 8},
    {0xE000E404u, 0x00FF0000u, 16},
    {0xE000E404u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr2_ipr_n[4] = {
    {0xE000E408u, 0x000000FFu, 0},
    {0xE000E408u, 0x0000FF00u, 8},
    {0xE000E408u, 0x00FF0000u, 16},
    {0xE000E408u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr3_ipr_n[4] = {
    {0xE000E40Cu, 0x000000FFu, 0},
    {0xE000E40Cu, 0x0000FF00u, 8},
    {0xE000E40Cu, 0x00FF0000u, 16},
    {0xE000E40Cu, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr4_ipr_n[4] = {
    {0xE000E410u, 0x000000FFu, 0},
    {0xE000E410u, 0x0000FF00u, 8},
    {0xE000E410u, 0x00FF0000u, 16},
    {0xE000E410u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr5_ipr_n[4] = {
    {0xE000E414u, 0x000000FFu, 0},
    {0xE000E414u, 0x0000FF00u, 8},
    {0xE000E414u, 0x00FF0000u, 16},
    {0xE000E414u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr6_ipr_n[4] = {
    {0xE000E418u, 0x000000FFu, 0},
    {0xE000E418u, 0x0000FF00u, 8},
    {0xE000E418u, 0x00FF0000u, 16},
    {0xE000E418u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr7_ipr_n[4] = {
    {0xE000E41Cu, 0x000000FFu, 0},
    {0xE000E41Cu, 0x0000FF00u, 8},
    {0xE000E41Cu, 0x00FF0000u, 16},
    {0xE000E41Cu, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr8_ipr_n[4] = {
    {0xE000E420u, 0x000000FFu, 0},
    {0xE000E420u, 0x0000FF00u, 8},
    {0xE000E420u, 0x00FF0000u, 16},
    {0xE000E420u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr9_ipr_n[4] = {
    {0xE000E424u, 0x000000FFu, 0},
    {0xE000E424u, 0x0000FF00u, 8},
    {0xE000E424u, 0x00FF0000u, 16},
    {0xE000E424u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr10_ipr_n[4] = {
    {0xE000E428u, 0x000000FFu, 0},
    {0xE000E428u, 0x0000FF00u, 8},
    {0xE000E428u, 0x00FF0000u, 16},
    {0xE000E428u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr11_ipr_n[4] = {
    {0xE000E42Cu, 0x000000FFu, 0},
    {0xE000E42Cu, 0x0000FF00u, 8},
    {0xE000E42Cu, 0x00FF0000u, 16},
    {0xE000E42Cu, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr12_ipr_n[4] = {
    {0xE000E430u, 0x000000FFu, 0},
    {0xE000E430u, 0x0000FF00u, 8},
    {0xE000E430u, 0x00FF0000u, 16},
    {0xE000E430u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr13_ipr_n[4] = {
    {0xE000E434u, 0x000000FFu, 0},
    {0xE000E434u, 0x0000FF00u, 8},
    {0xE000E434u, 0x00FF0000u, 16},
    {0xE000E434u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr14_ipr_n[4] = {
    {0xE000E438u, 0x000000FFu, 0},
    {0xE000E438u, 0x0000FF00u, 8},
    {0xE000E438u, 0x00FF0000u, 16},
    {0xE000E438u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr15_ipr_n[4] = {
    {0xE000E43Cu, 0x000000FFu, 0},
    {0xE000E43Cu, 0x0000FF00u, 8},
    {0xE000E43Cu, 0x00FF0000u, 16},
    {0xE000E43Cu, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr16_ipr_n[4] = {
    {0xE000E440u, 0x000000FFu, 0},
    {0xE000E440u, 0x0000FF00u, 8},
    {0xE000E440u, 0x00FF0000u, 16},
    {0xE000E440u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr17_ipr_n[4] = {
    {0xE000E444u, 0x000000FFu, 0},
    {0xE000E444u, 0x0000FF00u, 8},
    {0xE000E444u, 0x00FF0000u, 16},
    {0xE000E444u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr18_ipr_n[4] = {
    {0xE000E448u, 0x000000FFu, 0},
    {0xE000E448u, 0x0000FF00u, 8},
    {0xE000E448u, 0x00FF0000u, 16},
    {0xE000E448u, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr19_ipr_n[4] = {
    {0xE000E44Cu, 0x000000FFu, 0},
    {0xE000E44Cu, 0x0000FF00u, 8},
    {0xE000E44Cu, 0x00FF0000u, 16},
    {0xE000E44Cu, 0xFF000000u, 24},
};
constexpr Field<Access::RW> nvic_ipr20_ipr_n[4] = {
    {0xE000E450u, 0x000000FFu, 0},
    {0xE000E450u, 0x0000FF00u, 8},
    {0xE000E450u, 0x00FF0000u, 16},
    {0xE000E450u, 0xFF000000u, 24},
};

#endif // STM32_NVIC_HPP
