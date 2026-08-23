// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General-purpose I/Os
#ifndef GPIOC_HPP
#define GPIOC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t GPIOC_BASE = 0x40020800;
struct GpiocRegs {
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

static_assert(offsetof(GpiocRegs, moder) == 0);
static_assert(offsetof(GpiocRegs, otyper) == 4);
static_assert(offsetof(GpiocRegs, ospeedr) == 8);
static_assert(offsetof(GpiocRegs, pupdr) == 12);
static_assert(offsetof(GpiocRegs, idr) == 16);
static_assert(offsetof(GpiocRegs, odr) == 20);
static_assert(offsetof(GpiocRegs, bsrr) == 24);
static_assert(offsetof(GpiocRegs, lckr) == 28);
static_assert(offsetof(GpiocRegs, afrl) == 32);
static_assert(offsetof(GpiocRegs, afrh) == 36);

constexpr Field<Access::RW> gpioc_moder_moder15{0x40020800u, 0xC0000000u, 30};
constexpr Field<Access::RW> gpioc_moder_moder14{0x40020800u, 0x30000000u, 28};
constexpr Field<Access::RW> gpioc_moder_moder13{0x40020800u, 0x0C000000u, 26};
constexpr Field<Access::RW> gpioc_moder_moder12{0x40020800u, 0x03000000u, 24};
constexpr Field<Access::RW> gpioc_moder_moder11{0x40020800u, 0x00C00000u, 22};
constexpr Field<Access::RW> gpioc_moder_moder10{0x40020800u, 0x00300000u, 20};
constexpr Field<Access::RW> gpioc_moder_moder9{0x40020800u, 0x000C0000u, 18};
constexpr Field<Access::RW> gpioc_moder_moder8{0x40020800u, 0x00030000u, 16};
constexpr Field<Access::RW> gpioc_moder_moder7{0x40020800u, 0x0000C000u, 14};
constexpr Field<Access::RW> gpioc_moder_moder6{0x40020800u, 0x00003000u, 12};
constexpr Field<Access::RW> gpioc_moder_moder5{0x40020800u, 0x00000C00u, 10};
constexpr Field<Access::RW> gpioc_moder_moder4{0x40020800u, 0x00000300u, 8};
constexpr Field<Access::RW> gpioc_moder_moder3{0x40020800u, 0x000000C0u, 6};
constexpr Field<Access::RW> gpioc_moder_moder2{0x40020800u, 0x00000030u, 4};
constexpr Field<Access::RW> gpioc_moder_moder1{0x40020800u, 0x0000000Cu, 2};
constexpr Field<Access::RW> gpioc_moder_moder0{0x40020800u, 0x00000003u, 0};
constexpr Field<Access::RW> gpioc_otyper_ot15{0x40020804u, 0x00008000u, 15};
constexpr Field<Access::RW> gpioc_otyper_ot14{0x40020804u, 0x00004000u, 14};
constexpr Field<Access::RW> gpioc_otyper_ot13{0x40020804u, 0x00002000u, 13};
constexpr Field<Access::RW> gpioc_otyper_ot12{0x40020804u, 0x00001000u, 12};
constexpr Field<Access::RW> gpioc_otyper_ot11{0x40020804u, 0x00000800u, 11};
constexpr Field<Access::RW> gpioc_otyper_ot10{0x40020804u, 0x00000400u, 10};
constexpr Field<Access::RW> gpioc_otyper_ot9{0x40020804u, 0x00000200u, 9};
constexpr Field<Access::RW> gpioc_otyper_ot8{0x40020804u, 0x00000100u, 8};
constexpr Field<Access::RW> gpioc_otyper_ot7{0x40020804u, 0x00000080u, 7};
constexpr Field<Access::RW> gpioc_otyper_ot6{0x40020804u, 0x00000040u, 6};
constexpr Field<Access::RW> gpioc_otyper_ot5{0x40020804u, 0x00000020u, 5};
constexpr Field<Access::RW> gpioc_otyper_ot4{0x40020804u, 0x00000010u, 4};
constexpr Field<Access::RW> gpioc_otyper_ot3{0x40020804u, 0x00000008u, 3};
constexpr Field<Access::RW> gpioc_otyper_ot2{0x40020804u, 0x00000004u, 2};
constexpr Field<Access::RW> gpioc_otyper_ot1{0x40020804u, 0x00000002u, 1};
constexpr Field<Access::RW> gpioc_otyper_ot0{0x40020804u, 0x00000001u, 0};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr15{0x40020808u, 0xC0000000u, 30};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr14{0x40020808u, 0x30000000u, 28};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr13{0x40020808u, 0x0C000000u, 26};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr12{0x40020808u, 0x03000000u, 24};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr11{0x40020808u, 0x00C00000u, 22};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr10{0x40020808u, 0x00300000u, 20};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr9{0x40020808u, 0x000C0000u, 18};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr8{0x40020808u, 0x00030000u, 16};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr7{0x40020808u, 0x0000C000u, 14};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr6{0x40020808u, 0x00003000u, 12};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr5{0x40020808u, 0x00000C00u, 10};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr4{0x40020808u, 0x00000300u, 8};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr3{0x40020808u, 0x000000C0u, 6};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr2{0x40020808u, 0x00000030u, 4};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr1{0x40020808u, 0x0000000Cu, 2};
constexpr Field<Access::RW> gpioc_ospeedr_ospeedr0{0x40020808u, 0x00000003u, 0};
constexpr Field<Access::RW> gpioc_pupdr_pupdr15{0x4002080Cu, 0xC0000000u, 30};
constexpr Field<Access::RW> gpioc_pupdr_pupdr14{0x4002080Cu, 0x30000000u, 28};
constexpr Field<Access::RW> gpioc_pupdr_pupdr13{0x4002080Cu, 0x0C000000u, 26};
constexpr Field<Access::RW> gpioc_pupdr_pupdr12{0x4002080Cu, 0x03000000u, 24};
constexpr Field<Access::RW> gpioc_pupdr_pupdr11{0x4002080Cu, 0x00C00000u, 22};
constexpr Field<Access::RW> gpioc_pupdr_pupdr10{0x4002080Cu, 0x00300000u, 20};
constexpr Field<Access::RW> gpioc_pupdr_pupdr9{0x4002080Cu, 0x000C0000u, 18};
constexpr Field<Access::RW> gpioc_pupdr_pupdr8{0x4002080Cu, 0x00030000u, 16};
constexpr Field<Access::RW> gpioc_pupdr_pupdr7{0x4002080Cu, 0x0000C000u, 14};
constexpr Field<Access::RW> gpioc_pupdr_pupdr6{0x4002080Cu, 0x00003000u, 12};
constexpr Field<Access::RW> gpioc_pupdr_pupdr5{0x4002080Cu, 0x00000C00u, 10};
constexpr Field<Access::RW> gpioc_pupdr_pupdr4{0x4002080Cu, 0x00000300u, 8};
constexpr Field<Access::RW> gpioc_pupdr_pupdr3{0x4002080Cu, 0x000000C0u, 6};
constexpr Field<Access::RW> gpioc_pupdr_pupdr2{0x4002080Cu, 0x00000030u, 4};
constexpr Field<Access::RW> gpioc_pupdr_pupdr1{0x4002080Cu, 0x0000000Cu, 2};
constexpr Field<Access::RW> gpioc_pupdr_pupdr0{0x4002080Cu, 0x00000003u, 0};
constexpr Field<Access::RO> gpioc_idr_idr15{0x40020810u, 0x00008000u, 15};
constexpr Field<Access::RO> gpioc_idr_idr14{0x40020810u, 0x00004000u, 14};
constexpr Field<Access::RO> gpioc_idr_idr13{0x40020810u, 0x00002000u, 13};
constexpr Field<Access::RO> gpioc_idr_idr12{0x40020810u, 0x00001000u, 12};
constexpr Field<Access::RO> gpioc_idr_idr11{0x40020810u, 0x00000800u, 11};
constexpr Field<Access::RO> gpioc_idr_idr10{0x40020810u, 0x00000400u, 10};
constexpr Field<Access::RO> gpioc_idr_idr9{0x40020810u, 0x00000200u, 9};
constexpr Field<Access::RO> gpioc_idr_idr8{0x40020810u, 0x00000100u, 8};
constexpr Field<Access::RO> gpioc_idr_idr7{0x40020810u, 0x00000080u, 7};
constexpr Field<Access::RO> gpioc_idr_idr6{0x40020810u, 0x00000040u, 6};
constexpr Field<Access::RO> gpioc_idr_idr5{0x40020810u, 0x00000020u, 5};
constexpr Field<Access::RO> gpioc_idr_idr4{0x40020810u, 0x00000010u, 4};
constexpr Field<Access::RO> gpioc_idr_idr3{0x40020810u, 0x00000008u, 3};
constexpr Field<Access::RO> gpioc_idr_idr2{0x40020810u, 0x00000004u, 2};
constexpr Field<Access::RO> gpioc_idr_idr1{0x40020810u, 0x00000002u, 1};
constexpr Field<Access::RO> gpioc_idr_idr0{0x40020810u, 0x00000001u, 0};
constexpr Field<Access::RW> gpioc_odr_odr15{0x40020814u, 0x00008000u, 15};
constexpr Field<Access::RW> gpioc_odr_odr14{0x40020814u, 0x00004000u, 14};
constexpr Field<Access::RW> gpioc_odr_odr13{0x40020814u, 0x00002000u, 13};
constexpr Field<Access::RW> gpioc_odr_odr12{0x40020814u, 0x00001000u, 12};
constexpr Field<Access::RW> gpioc_odr_odr11{0x40020814u, 0x00000800u, 11};
constexpr Field<Access::RW> gpioc_odr_odr10{0x40020814u, 0x00000400u, 10};
constexpr Field<Access::RW> gpioc_odr_odr9{0x40020814u, 0x00000200u, 9};
constexpr Field<Access::RW> gpioc_odr_odr8{0x40020814u, 0x00000100u, 8};
constexpr Field<Access::RW> gpioc_odr_odr7{0x40020814u, 0x00000080u, 7};
constexpr Field<Access::RW> gpioc_odr_odr6{0x40020814u, 0x00000040u, 6};
constexpr Field<Access::RW> gpioc_odr_odr5{0x40020814u, 0x00000020u, 5};
constexpr Field<Access::RW> gpioc_odr_odr4{0x40020814u, 0x00000010u, 4};
constexpr Field<Access::RW> gpioc_odr_odr3{0x40020814u, 0x00000008u, 3};
constexpr Field<Access::RW> gpioc_odr_odr2{0x40020814u, 0x00000004u, 2};
constexpr Field<Access::RW> gpioc_odr_odr1{0x40020814u, 0x00000002u, 1};
constexpr Field<Access::RW> gpioc_odr_odr0{0x40020814u, 0x00000001u, 0};
constexpr Field<Access::WO> gpioc_bsrr_br15{0x40020818u, 0x80000000u, 31};
constexpr Field<Access::WO> gpioc_bsrr_br14{0x40020818u, 0x40000000u, 30};
constexpr Field<Access::WO> gpioc_bsrr_br13{0x40020818u, 0x20000000u, 29};
constexpr Field<Access::WO> gpioc_bsrr_br12{0x40020818u, 0x10000000u, 28};
constexpr Field<Access::WO> gpioc_bsrr_br11{0x40020818u, 0x08000000u, 27};
constexpr Field<Access::WO> gpioc_bsrr_br10{0x40020818u, 0x04000000u, 26};
constexpr Field<Access::WO> gpioc_bsrr_br9{0x40020818u, 0x02000000u, 25};
constexpr Field<Access::WO> gpioc_bsrr_br8{0x40020818u, 0x01000000u, 24};
constexpr Field<Access::WO> gpioc_bsrr_br7{0x40020818u, 0x00800000u, 23};
constexpr Field<Access::WO> gpioc_bsrr_br6{0x40020818u, 0x00400000u, 22};
constexpr Field<Access::WO> gpioc_bsrr_br5{0x40020818u, 0x00200000u, 21};
constexpr Field<Access::WO> gpioc_bsrr_br4{0x40020818u, 0x00100000u, 20};
constexpr Field<Access::WO> gpioc_bsrr_br3{0x40020818u, 0x00080000u, 19};
constexpr Field<Access::WO> gpioc_bsrr_br2{0x40020818u, 0x00040000u, 18};
constexpr Field<Access::WO> gpioc_bsrr_br1{0x40020818u, 0x00020000u, 17};
constexpr Field<Access::WO> gpioc_bsrr_br0{0x40020818u, 0x00010000u, 16};
constexpr Field<Access::WO> gpioc_bsrr_bs15{0x40020818u, 0x00008000u, 15};
constexpr Field<Access::WO> gpioc_bsrr_bs14{0x40020818u, 0x00004000u, 14};
constexpr Field<Access::WO> gpioc_bsrr_bs13{0x40020818u, 0x00002000u, 13};
constexpr Field<Access::WO> gpioc_bsrr_bs12{0x40020818u, 0x00001000u, 12};
constexpr Field<Access::WO> gpioc_bsrr_bs11{0x40020818u, 0x00000800u, 11};
constexpr Field<Access::WO> gpioc_bsrr_bs10{0x40020818u, 0x00000400u, 10};
constexpr Field<Access::WO> gpioc_bsrr_bs9{0x40020818u, 0x00000200u, 9};
constexpr Field<Access::WO> gpioc_bsrr_bs8{0x40020818u, 0x00000100u, 8};
constexpr Field<Access::WO> gpioc_bsrr_bs7{0x40020818u, 0x00000080u, 7};
constexpr Field<Access::WO> gpioc_bsrr_bs6{0x40020818u, 0x00000040u, 6};
constexpr Field<Access::WO> gpioc_bsrr_bs5{0x40020818u, 0x00000020u, 5};
constexpr Field<Access::WO> gpioc_bsrr_bs4{0x40020818u, 0x00000010u, 4};
constexpr Field<Access::WO> gpioc_bsrr_bs3{0x40020818u, 0x00000008u, 3};
constexpr Field<Access::WO> gpioc_bsrr_bs2{0x40020818u, 0x00000004u, 2};
constexpr Field<Access::WO> gpioc_bsrr_bs1{0x40020818u, 0x00000002u, 1};
constexpr Field<Access::WO> gpioc_bsrr_bs0{0x40020818u, 0x00000001u, 0};
constexpr Field<Access::RW> gpioc_lckr_lckk{0x4002081Cu, 0x00010000u, 16};
constexpr Field<Access::RW> gpioc_lckr_lck15{0x4002081Cu, 0x00008000u, 15};
constexpr Field<Access::RW> gpioc_lckr_lck14{0x4002081Cu, 0x00004000u, 14};
constexpr Field<Access::RW> gpioc_lckr_lck13{0x4002081Cu, 0x00002000u, 13};
constexpr Field<Access::RW> gpioc_lckr_lck12{0x4002081Cu, 0x00001000u, 12};
constexpr Field<Access::RW> gpioc_lckr_lck11{0x4002081Cu, 0x00000800u, 11};
constexpr Field<Access::RW> gpioc_lckr_lck10{0x4002081Cu, 0x00000400u, 10};
constexpr Field<Access::RW> gpioc_lckr_lck9{0x4002081Cu, 0x00000200u, 9};
constexpr Field<Access::RW> gpioc_lckr_lck8{0x4002081Cu, 0x00000100u, 8};
constexpr Field<Access::RW> gpioc_lckr_lck7{0x4002081Cu, 0x00000080u, 7};
constexpr Field<Access::RW> gpioc_lckr_lck6{0x4002081Cu, 0x00000040u, 6};
constexpr Field<Access::RW> gpioc_lckr_lck5{0x4002081Cu, 0x00000020u, 5};
constexpr Field<Access::RW> gpioc_lckr_lck4{0x4002081Cu, 0x00000010u, 4};
constexpr Field<Access::RW> gpioc_lckr_lck3{0x4002081Cu, 0x00000008u, 3};
constexpr Field<Access::RW> gpioc_lckr_lck2{0x4002081Cu, 0x00000004u, 2};
constexpr Field<Access::RW> gpioc_lckr_lck1{0x4002081Cu, 0x00000002u, 1};
constexpr Field<Access::RW> gpioc_lckr_lck0{0x4002081Cu, 0x00000001u, 0};
constexpr Field<Access::RW> gpioc_afrl_afrl7{0x40020820u, 0xF0000000u, 28};
constexpr Field<Access::RW> gpioc_afrl_afrl6{0x40020820u, 0x0F000000u, 24};
constexpr Field<Access::RW> gpioc_afrl_afrl5{0x40020820u, 0x00F00000u, 20};
constexpr Field<Access::RW> gpioc_afrl_afrl4{0x40020820u, 0x000F0000u, 16};
constexpr Field<Access::RW> gpioc_afrl_afrl3{0x40020820u, 0x0000F000u, 12};
constexpr Field<Access::RW> gpioc_afrl_afrl2{0x40020820u, 0x00000F00u, 8};
constexpr Field<Access::RW> gpioc_afrl_afrl1{0x40020820u, 0x000000F0u, 4};
constexpr Field<Access::RW> gpioc_afrl_afrl0{0x40020820u, 0x0000000Fu, 0};
constexpr Field<Access::RW> gpioc_afrh_afrh15{0x40020824u, 0xF0000000u, 28};
constexpr Field<Access::RW> gpioc_afrh_afrh14{0x40020824u, 0x0F000000u, 24};
constexpr Field<Access::RW> gpioc_afrh_afrh13{0x40020824u, 0x00F00000u, 20};
constexpr Field<Access::RW> gpioc_afrh_afrh12{0x40020824u, 0x000F0000u, 16};
constexpr Field<Access::RW> gpioc_afrh_afrh11{0x40020824u, 0x0000F000u, 12};
constexpr Field<Access::RW> gpioc_afrh_afrh10{0x40020824u, 0x00000F00u, 8};
constexpr Field<Access::RW> gpioc_afrh_afrh9{0x40020824u, 0x000000F0u, 4};
constexpr Field<Access::RW> gpioc_afrh_afrh8{0x40020824u, 0x0000000Fu, 0};

#endif // GPIOC_HPP