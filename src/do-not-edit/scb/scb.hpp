// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// System control block
#ifndef STM32_SCB_HPP
#define STM32_SCB_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SCB_BASE = 0xE000ED00;
struct ScbRegs {
    volatile uint32_t cpuid; // CPUID base register
    volatile uint32_t icsr; // Interrupt control and state register
    volatile uint32_t vtor; // Vector table offset register
    volatile uint32_t aircr; // Application interrupt and reset control register
    volatile uint32_t scr; // System control register
    volatile uint32_t ccr; // Configuration and control register
    volatile uint32_t shpr1; // System handler priority registers
    volatile uint32_t shpr2; // System handler priority registers
    volatile uint32_t shpr3; // System handler priority registers
    volatile uint32_t shcrs; // System handler control and state register
    volatile uint32_t cfsr_ufsr_bfsr_mmfsr; // Configurable fault status register
    volatile uint32_t hfsr; // Hard fault status register
    uint32_t _reserved0[1];
    volatile uint32_t mmfar; // Memory management fault address register
    volatile uint32_t bfar; // Bus fault address register
    volatile uint32_t afsr; // Auxiliary fault status register
};
static_assert(offsetof(ScbRegs, cpuid) == 0);
static_assert(offsetof(ScbRegs, icsr) == 4);
static_assert(offsetof(ScbRegs, vtor) == 8);
static_assert(offsetof(ScbRegs, aircr) == 12);
static_assert(offsetof(ScbRegs, scr) == 16);
static_assert(offsetof(ScbRegs, ccr) == 20);
static_assert(offsetof(ScbRegs, shpr1) == 24);
static_assert(offsetof(ScbRegs, shpr2) == 28);
static_assert(offsetof(ScbRegs, shpr3) == 32);
static_assert(offsetof(ScbRegs, shcrs) == 36);
static_assert(offsetof(ScbRegs, cfsr_ufsr_bfsr_mmfsr) == 40);
static_assert(offsetof(ScbRegs, hfsr) == 44);
static_assert(offsetof(ScbRegs, mmfar) == 52);
static_assert(offsetof(ScbRegs, bfar) == 56);
static_assert(offsetof(ScbRegs, afsr) == 60);

constexpr Field<Access::RO> scb_cpuid_revision{0xE000ED00u, 0x0000000Fu, 0};
constexpr Field<Access::RO> scb_cpuid_partno{0xE000ED00u, 0x0000FFF0u, 4};
constexpr Field<Access::RO> scb_cpuid_constant{0xE000ED00u, 0x000F0000u, 16};
constexpr Field<Access::RO> scb_cpuid_variant{0xE000ED00u, 0x00F00000u, 20};
constexpr Field<Access::RO> scb_cpuid_implementer{0xE000ED00u, 0xFF000000u, 24};
constexpr Field<Access::RW> scb_icsr_vectactive{0xE000ED04u, 0x000001FFu, 0};
constexpr Field<Access::RW> scb_icsr_rettobase{0xE000ED04u, 0x00000800u, 11};
constexpr Field<Access::RW> scb_icsr_vectpending{0xE000ED04u, 0x0007F000u, 12};
constexpr Field<Access::RW> scb_icsr_isrpending{0xE000ED04u, 0x00400000u, 22};
constexpr Field<Access::RW> scb_icsr_pendstclr{0xE000ED04u, 0x02000000u, 25};
constexpr Field<Access::RW> scb_icsr_pendstset{0xE000ED04u, 0x04000000u, 26};
constexpr Field<Access::RW> scb_icsr_pendsvclr{0xE000ED04u, 0x08000000u, 27};
constexpr Field<Access::RW> scb_icsr_pendsvset{0xE000ED04u, 0x10000000u, 28};
constexpr Field<Access::RW> scb_icsr_nmipendset{0xE000ED04u, 0x80000000u, 31};
constexpr Field<Access::RW> scb_vtor_tbloff{0xE000ED08u, 0x3FFFFE00u, 9};
constexpr Field<Access::RW> scb_aircr_vectreset{0xE000ED0Cu, 0x00000001u, 0};
constexpr Field<Access::RW> scb_aircr_vectclractive{0xE000ED0Cu, 0x00000002u, 1};
constexpr Field<Access::RW> scb_aircr_sysresetreq{0xE000ED0Cu, 0x00000004u, 2};
constexpr Field<Access::RW> scb_aircr_prigroup{0xE000ED0Cu, 0x00000700u, 8};
constexpr Field<Access::RW> scb_aircr_endianess{0xE000ED0Cu, 0x00008000u, 15};
constexpr Field<Access::RW> scb_aircr_vectkeystat{0xE000ED0Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW> scb_scr_sleeponexit{0xE000ED10u, 0x00000002u, 1};
constexpr Field<Access::RW> scb_scr_sleepdeep{0xE000ED10u, 0x00000004u, 2};
constexpr Field<Access::RW> scb_scr_seveonpend{0xE000ED10u, 0x00000010u, 4};
constexpr Field<Access::RW> scb_ccr_nonbasethrdena{0xE000ED14u, 0x00000001u, 0};
constexpr Field<Access::RW> scb_ccr_usersetmpend{0xE000ED14u, 0x00000002u, 1};
constexpr Field<Access::RW> scb_ccr_unalign__trp{0xE000ED14u, 0x00000008u, 3};
constexpr Field<Access::RW> scb_ccr_div_0_trp{0xE000ED14u, 0x00000010u, 4};
constexpr Field<Access::RW> scb_ccr_bfhfnmign{0xE000ED14u, 0x00000100u, 8};
constexpr Field<Access::RW> scb_ccr_stkalign{0xE000ED14u, 0x00000200u, 9};
constexpr Field<Access::RW> scb_shpr1_pri_4{0xE000ED18u, 0x000000FFu, 0};
constexpr Field<Access::RW> scb_shpr1_pri_5{0xE000ED18u, 0x0000FF00u, 8};
constexpr Field<Access::RW> scb_shpr1_pri_6{0xE000ED18u, 0x00FF0000u, 16};
constexpr Field<Access::RW> scb_shpr2_pri_11{0xE000ED1Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> scb_shpr3_pri_14{0xE000ED20u, 0x00FF0000u, 16};
constexpr Field<Access::RW> scb_shpr3_pri_15{0xE000ED20u, 0xFF000000u, 24};
constexpr Field<Access::RW> scb_shcrs_memfaultact{0xE000ED24u, 0x00000001u, 0};
constexpr Field<Access::RW> scb_shcrs_busfaultact{0xE000ED24u, 0x00000002u, 1};
constexpr Field<Access::RW> scb_shcrs_usgfaultact{0xE000ED24u, 0x00000008u, 3};
constexpr Field<Access::RW> scb_shcrs_svcallact{0xE000ED24u, 0x00000080u, 7};
constexpr Field<Access::RW> scb_shcrs_monitoract{0xE000ED24u, 0x00000100u, 8};
constexpr Field<Access::RW> scb_shcrs_pendsvact{0xE000ED24u, 0x00000400u, 10};
constexpr Field<Access::RW> scb_shcrs_systickact{0xE000ED24u, 0x00000800u, 11};
constexpr Field<Access::RW> scb_shcrs_usgfaultpended{0xE000ED24u, 0x00001000u, 12};
constexpr Field<Access::RW> scb_shcrs_memfaultpended{0xE000ED24u, 0x00002000u, 13};
constexpr Field<Access::RW> scb_shcrs_busfaultpended{0xE000ED24u, 0x00004000u, 14};
constexpr Field<Access::RW> scb_shcrs_svcallpended{0xE000ED24u, 0x00008000u, 15};
constexpr Field<Access::RW> scb_shcrs_memfaultena{0xE000ED24u, 0x00010000u, 16};
constexpr Field<Access::RW> scb_shcrs_busfaultena{0xE000ED24u, 0x00020000u, 17};
constexpr Field<Access::RW> scb_shcrs_usgfaultena{0xE000ED24u, 0x00040000u, 18};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_iaccviol{0xE000ED28u, 0x00000002u, 1};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_munstkerr{0xE000ED28u, 0x00000008u, 3};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_mstkerr{0xE000ED28u, 0x00000010u, 4};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_mlsperr{0xE000ED28u, 0x00000020u, 5};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_mmarvalid{0xE000ED28u, 0x00000080u, 7};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_ibuserr{0xE000ED28u, 0x00000100u, 8};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_preciserr{0xE000ED28u, 0x00000200u, 9};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_impreciserr{0xE000ED28u, 0x00000400u, 10};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_unstkerr{0xE000ED28u, 0x00000800u, 11};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_stkerr{0xE000ED28u, 0x00001000u, 12};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_lsperr{0xE000ED28u, 0x00002000u, 13};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_bfarvalid{0xE000ED28u, 0x00008000u, 15};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_undefinstr{0xE000ED28u, 0x00010000u, 16};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_invstate{0xE000ED28u, 0x00020000u, 17};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_invpc{0xE000ED28u, 0x00040000u, 18};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_nocp{0xE000ED28u, 0x00080000u, 19};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_unaligned{0xE000ED28u, 0x01000000u, 24};
constexpr Field<Access::RW> scb_cfsr_ufsr_bfsr_mmfsr_divbyzero{0xE000ED28u, 0x02000000u, 25};
constexpr Field<Access::RW> scb_hfsr_vecttbl{0xE000ED2Cu, 0x00000002u, 1};
constexpr Field<Access::RW> scb_hfsr_forced{0xE000ED2Cu, 0x40000000u, 30};
constexpr Field<Access::RW> scb_hfsr_debug_vt{0xE000ED2Cu, 0x80000000u, 31};
constexpr Field<Access::RW> scb_mmfar_mmfar{0xE000ED34u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> scb_bfar_bfar{0xE000ED38u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> scb_afsr_impdef{0xE000ED3Cu, 0xFFFFFFFFu, 0};

#endif // STM32_SCB_HPP