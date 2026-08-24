// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Hash processor
#ifndef STM32_HASH_HPP
#define STM32_HASH_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t HASH_BASE = 0x50060400;
struct HashRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t din; // data input register
    volatile uint32_t str; // start register
    volatile uint32_t hr0; // digest registers
    volatile uint32_t hr1; // digest registers
    volatile uint32_t hr2; // digest registers
    volatile uint32_t hr3; // digest registers
    volatile uint32_t hr4; // digest registers
    volatile uint32_t imr; // interrupt enable register
    volatile uint32_t sr; // status register
    uint32_t _reserved0[52];
    volatile uint32_t csr0; // context swap registers
    volatile uint32_t csr1; // context swap registers
    volatile uint32_t csr2; // context swap registers
    volatile uint32_t csr3; // context swap registers
    volatile uint32_t csr4; // context swap registers
    volatile uint32_t csr5; // context swap registers
    volatile uint32_t csr6; // context swap registers
    volatile uint32_t csr7; // context swap registers
    volatile uint32_t csr8; // context swap registers
    volatile uint32_t csr9; // context swap registers
    volatile uint32_t csr10; // context swap registers
    volatile uint32_t csr11; // context swap registers
    volatile uint32_t csr12; // context swap registers
    volatile uint32_t csr13; // context swap registers
    volatile uint32_t csr14; // context swap registers
    volatile uint32_t csr15; // context swap registers
    volatile uint32_t csr16; // context swap registers
    volatile uint32_t csr17; // context swap registers
    volatile uint32_t csr18; // context swap registers
    volatile uint32_t csr19; // context swap registers
    volatile uint32_t csr20; // context swap registers
    volatile uint32_t csr21; // context swap registers
    volatile uint32_t csr22; // context swap registers
    volatile uint32_t csr23; // context swap registers
    volatile uint32_t csr24; // context swap registers
    volatile uint32_t csr25; // context swap registers
    volatile uint32_t csr26; // context swap registers
    volatile uint32_t csr27; // context swap registers
    volatile uint32_t csr28; // context swap registers
    volatile uint32_t csr29; // context swap registers
    volatile uint32_t csr30; // context swap registers
    volatile uint32_t csr31; // context swap registers
    volatile uint32_t csr32; // context swap registers
    volatile uint32_t csr33; // context swap registers
    volatile uint32_t csr34; // context swap registers
    volatile uint32_t csr35; // context swap registers
    volatile uint32_t csr36; // context swap registers
    volatile uint32_t csr37; // context swap registers
    volatile uint32_t csr38; // context swap registers
    volatile uint32_t csr39; // context swap registers
    volatile uint32_t csr40; // context swap registers
    volatile uint32_t csr41; // context swap registers
    volatile uint32_t csr42; // context swap registers
    volatile uint32_t csr43; // context swap registers
    volatile uint32_t csr44; // context swap registers
    volatile uint32_t csr45; // context swap registers
    volatile uint32_t csr46; // context swap registers
    volatile uint32_t csr47; // context swap registers
    volatile uint32_t csr48; // context swap registers
    volatile uint32_t csr49; // context swap registers
    volatile uint32_t csr50; // context swap registers
    volatile uint32_t csr51; // context swap registers
    volatile uint32_t csr52; // context swap registers
    volatile uint32_t csr53; // context swap registers
    uint32_t _reserved1[80];
    volatile uint32_t hash_hr0; // HASH digest register
    volatile uint32_t hash_hr1; // read-only
    volatile uint32_t hash_hr2; // read-only
    volatile uint32_t hash_hr3; // read-only
    volatile uint32_t hash_hr4; // read-only
    volatile uint32_t hash_hr5; // read-only
    volatile uint32_t hash_hr6; // read-only
    volatile uint32_t hash_hr7; // read-only
};
static_assert(offsetof(HashRegs, cr) == 0);
static_assert(offsetof(HashRegs, din) == 4);
static_assert(offsetof(HashRegs, str) == 8);
static_assert(offsetof(HashRegs, hr0) == 12);
static_assert(offsetof(HashRegs, hr1) == 16);
static_assert(offsetof(HashRegs, hr2) == 20);
static_assert(offsetof(HashRegs, hr3) == 24);
static_assert(offsetof(HashRegs, hr4) == 28);
static_assert(offsetof(HashRegs, imr) == 32);
static_assert(offsetof(HashRegs, sr) == 36);
static_assert(offsetof(HashRegs, csr0) == 248);
static_assert(offsetof(HashRegs, csr1) == 252);
static_assert(offsetof(HashRegs, csr2) == 256);
static_assert(offsetof(HashRegs, csr3) == 260);
static_assert(offsetof(HashRegs, csr4) == 264);
static_assert(offsetof(HashRegs, csr5) == 268);
static_assert(offsetof(HashRegs, csr6) == 272);
static_assert(offsetof(HashRegs, csr7) == 276);
static_assert(offsetof(HashRegs, csr8) == 280);
static_assert(offsetof(HashRegs, csr9) == 284);
static_assert(offsetof(HashRegs, csr10) == 288);
static_assert(offsetof(HashRegs, csr11) == 292);
static_assert(offsetof(HashRegs, csr12) == 296);
static_assert(offsetof(HashRegs, csr13) == 300);
static_assert(offsetof(HashRegs, csr14) == 304);
static_assert(offsetof(HashRegs, csr15) == 308);
static_assert(offsetof(HashRegs, csr16) == 312);
static_assert(offsetof(HashRegs, csr17) == 316);
static_assert(offsetof(HashRegs, csr18) == 320);
static_assert(offsetof(HashRegs, csr19) == 324);
static_assert(offsetof(HashRegs, csr20) == 328);
static_assert(offsetof(HashRegs, csr21) == 332);
static_assert(offsetof(HashRegs, csr22) == 336);
static_assert(offsetof(HashRegs, csr23) == 340);
static_assert(offsetof(HashRegs, csr24) == 344);
static_assert(offsetof(HashRegs, csr25) == 348);
static_assert(offsetof(HashRegs, csr26) == 352);
static_assert(offsetof(HashRegs, csr27) == 356);
static_assert(offsetof(HashRegs, csr28) == 360);
static_assert(offsetof(HashRegs, csr29) == 364);
static_assert(offsetof(HashRegs, csr30) == 368);
static_assert(offsetof(HashRegs, csr31) == 372);
static_assert(offsetof(HashRegs, csr32) == 376);
static_assert(offsetof(HashRegs, csr33) == 380);
static_assert(offsetof(HashRegs, csr34) == 384);
static_assert(offsetof(HashRegs, csr35) == 388);
static_assert(offsetof(HashRegs, csr36) == 392);
static_assert(offsetof(HashRegs, csr37) == 396);
static_assert(offsetof(HashRegs, csr38) == 400);
static_assert(offsetof(HashRegs, csr39) == 404);
static_assert(offsetof(HashRegs, csr40) == 408);
static_assert(offsetof(HashRegs, csr41) == 412);
static_assert(offsetof(HashRegs, csr42) == 416);
static_assert(offsetof(HashRegs, csr43) == 420);
static_assert(offsetof(HashRegs, csr44) == 424);
static_assert(offsetof(HashRegs, csr45) == 428);
static_assert(offsetof(HashRegs, csr46) == 432);
static_assert(offsetof(HashRegs, csr47) == 436);
static_assert(offsetof(HashRegs, csr48) == 440);
static_assert(offsetof(HashRegs, csr49) == 444);
static_assert(offsetof(HashRegs, csr50) == 448);
static_assert(offsetof(HashRegs, csr51) == 452);
static_assert(offsetof(HashRegs, csr52) == 456);
static_assert(offsetof(HashRegs, csr53) == 460);
static_assert(offsetof(HashRegs, hash_hr0) == 784);
static_assert(offsetof(HashRegs, hash_hr1) == 788);
static_assert(offsetof(HashRegs, hash_hr2) == 792);
static_assert(offsetof(HashRegs, hash_hr3) == 796);
static_assert(offsetof(HashRegs, hash_hr4) == 800);
static_assert(offsetof(HashRegs, hash_hr5) == 804);
static_assert(offsetof(HashRegs, hash_hr6) == 808);
static_assert(offsetof(HashRegs, hash_hr7) == 812);

constexpr Field<Access::WO> hash_cr_init{0x50060400u, 0x00000004u, 2};
constexpr Field<Access::RW> hash_cr_dmae{0x50060400u, 0x00000008u, 3};
constexpr Field<Access::RW> hash_cr_datatype{0x50060400u, 0x00000030u, 4};
constexpr Field<Access::RW> hash_cr_mode{0x50060400u, 0x00000040u, 6};
constexpr Field<Access::RO> hash_cr_nbw{0x50060400u, 0x00000F00u, 8};
constexpr Field<Access::RO> hash_cr_dinne{0x50060400u, 0x00001000u, 12};
constexpr Field<Access::RW> hash_cr_mdmat{0x50060400u, 0x00002000u, 13};
constexpr Field<Access::RW> hash_cr_lkey{0x50060400u, 0x00010000u, 16};
constexpr Field<Access::RW> hash_cr_algo0{0x50060400u, 0x00000080u, 7};
constexpr Field<Access::RW> hash_cr_algo1{0x50060400u, 0x00040000u, 18};
constexpr Field<Access::RW, uint32_t, false> hash_din_datain{0x50060404u, 0xFFFFFFFFu, 0};
constexpr Field<Access::WO> hash_str_dcal{0x50060408u, 0x00000100u, 8};
constexpr Field<Access::RW, uint32_t, false> hash_str_nblw{0x50060408u, 0x0000001Fu, 0};
constexpr Field<Access::RO> hash_hr0_h0{0x5006040Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hr1_h1{0x50060410u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hr2_h2{0x50060414u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hr3_h3{0x50060418u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hr4_h4{0x5006041Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> hash_imr_dcie{0x50060420u, 0x00000002u, 1};
constexpr Field<Access::RW> hash_imr_dinie{0x50060420u, 0x00000001u, 0};
constexpr Field<Access::RO> hash_sr_busy{0x50060424u, 0x00000008u, 3};
constexpr Field<Access::RO> hash_sr_dmas{0x50060424u, 0x00000004u, 2};
constexpr Field<Access::RC_W0, uint32_t, false> hash_sr_dcis{0x50060424u, 0x00000002u, 1, 0x00000000u, 0x00000003u};
constexpr Field<Access::RC_W0, uint32_t, false> hash_sr_dinis{0x50060424u, 0x00000001u, 0, 0x00000000u, 0x00000003u};
constexpr Field<Access::RW, uint32_t, false> hash_csr0_csr0{0x500604F8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr1_csr1{0x500604FCu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr2_csr2{0x50060500u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr3_csr3{0x50060504u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr4_csr4{0x50060508u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr5_csr5{0x5006050Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr6_csr6{0x50060510u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr7_csr7{0x50060514u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr8_csr8{0x50060518u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr9_csr9{0x5006051Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr10_csr10{0x50060520u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr11_csr11{0x50060524u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr12_csr12{0x50060528u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr13_csr13{0x5006052Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr14_csr14{0x50060530u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr15_csr15{0x50060534u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr16_csr16{0x50060538u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr17_csr17{0x5006053Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr18_csr18{0x50060540u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr19_csr19{0x50060544u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr20_csr20{0x50060548u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr21_csr21{0x5006054Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr22_csr22{0x50060550u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr23_csr23{0x50060554u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr24_csr24{0x50060558u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr25_csr25{0x5006055Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr26_csr26{0x50060560u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr27_csr27{0x50060564u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr28_csr28{0x50060568u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr29_csr29{0x5006056Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr30_csr30{0x50060570u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr31_csr31{0x50060574u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr32_csr32{0x50060578u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr33_csr33{0x5006057Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr34_csr34{0x50060580u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr35_csr35{0x50060584u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr36_csr36{0x50060588u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr37_csr37{0x5006058Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr38_csr38{0x50060590u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr39_csr39{0x50060594u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr40_csr40{0x50060598u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr41_csr41{0x5006059Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr42_csr42{0x500605A0u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr43_csr43{0x500605A4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr44_csr44{0x500605A8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr45_csr45{0x500605ACu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr46_csr46{0x500605B0u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr47_csr47{0x500605B4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr48_csr48{0x500605B8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr49_csr49{0x500605BCu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr50_csr50{0x500605C0u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr51_csr51{0x500605C4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr52_csr52{0x500605C8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> hash_csr53_csr53{0x500605CCu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr0_h0{0x50060710u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr1_h1{0x50060714u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr2_h2{0x50060718u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr3_h3{0x5006071Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr4_h4{0x50060720u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr5_h5{0x50060724u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr6_h6{0x50060728u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> hash_hash_hr7_h7{0x5006072Cu, 0xFFFFFFFFu, 0};

#endif // STM32_HASH_HPP
