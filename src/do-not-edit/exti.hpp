// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// External interrupt/event controller
#ifndef EXTI_HPP
#define EXTI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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

constexpr Field<Access::RW> exti_imr_mr0{0x40013C00u, 0x00000001u, 0};
constexpr Field<Access::RW> exti_imr_mr1{0x40013C00u, 0x00000002u, 1};
constexpr Field<Access::RW> exti_imr_mr2{0x40013C00u, 0x00000004u, 2};
constexpr Field<Access::RW> exti_imr_mr3{0x40013C00u, 0x00000008u, 3};
constexpr Field<Access::RW> exti_imr_mr4{0x40013C00u, 0x00000010u, 4};
constexpr Field<Access::RW> exti_imr_mr5{0x40013C00u, 0x00000020u, 5};
constexpr Field<Access::RW> exti_imr_mr6{0x40013C00u, 0x00000040u, 6};
constexpr Field<Access::RW> exti_imr_mr7{0x40013C00u, 0x00000080u, 7};
constexpr Field<Access::RW> exti_imr_mr8{0x40013C00u, 0x00000100u, 8};
constexpr Field<Access::RW> exti_imr_mr9{0x40013C00u, 0x00000200u, 9};
constexpr Field<Access::RW> exti_imr_mr10{0x40013C00u, 0x00000400u, 10};
constexpr Field<Access::RW> exti_imr_mr11{0x40013C00u, 0x00000800u, 11};
constexpr Field<Access::RW> exti_imr_mr12{0x40013C00u, 0x00001000u, 12};
constexpr Field<Access::RW> exti_imr_mr13{0x40013C00u, 0x00002000u, 13};
constexpr Field<Access::RW> exti_imr_mr14{0x40013C00u, 0x00004000u, 14};
constexpr Field<Access::RW> exti_imr_mr15{0x40013C00u, 0x00008000u, 15};
constexpr Field<Access::RW> exti_imr_mr16{0x40013C00u, 0x00010000u, 16};
constexpr Field<Access::RW> exti_imr_mr17{0x40013C00u, 0x00020000u, 17};
constexpr Field<Access::RW> exti_imr_mr18{0x40013C00u, 0x00040000u, 18};
constexpr Field<Access::RW> exti_imr_mr19{0x40013C00u, 0x00080000u, 19};
constexpr Field<Access::RW> exti_imr_mr20{0x40013C00u, 0x00100000u, 20};
constexpr Field<Access::RW> exti_imr_mr21{0x40013C00u, 0x00200000u, 21};
constexpr Field<Access::RW> exti_imr_mr22{0x40013C00u, 0x00400000u, 22};
constexpr Field<Access::RW> exti_emr_mr0{0x40013C04u, 0x00000001u, 0};
constexpr Field<Access::RW> exti_emr_mr1{0x40013C04u, 0x00000002u, 1};
constexpr Field<Access::RW> exti_emr_mr2{0x40013C04u, 0x00000004u, 2};
constexpr Field<Access::RW> exti_emr_mr3{0x40013C04u, 0x00000008u, 3};
constexpr Field<Access::RW> exti_emr_mr4{0x40013C04u, 0x00000010u, 4};
constexpr Field<Access::RW> exti_emr_mr5{0x40013C04u, 0x00000020u, 5};
constexpr Field<Access::RW> exti_emr_mr6{0x40013C04u, 0x00000040u, 6};
constexpr Field<Access::RW> exti_emr_mr7{0x40013C04u, 0x00000080u, 7};
constexpr Field<Access::RW> exti_emr_mr8{0x40013C04u, 0x00000100u, 8};
constexpr Field<Access::RW> exti_emr_mr9{0x40013C04u, 0x00000200u, 9};
constexpr Field<Access::RW> exti_emr_mr10{0x40013C04u, 0x00000400u, 10};
constexpr Field<Access::RW> exti_emr_mr11{0x40013C04u, 0x00000800u, 11};
constexpr Field<Access::RW> exti_emr_mr12{0x40013C04u, 0x00001000u, 12};
constexpr Field<Access::RW> exti_emr_mr13{0x40013C04u, 0x00002000u, 13};
constexpr Field<Access::RW> exti_emr_mr14{0x40013C04u, 0x00004000u, 14};
constexpr Field<Access::RW> exti_emr_mr15{0x40013C04u, 0x00008000u, 15};
constexpr Field<Access::RW> exti_emr_mr16{0x40013C04u, 0x00010000u, 16};
constexpr Field<Access::RW> exti_emr_mr17{0x40013C04u, 0x00020000u, 17};
constexpr Field<Access::RW> exti_emr_mr18{0x40013C04u, 0x00040000u, 18};
constexpr Field<Access::RW> exti_emr_mr19{0x40013C04u, 0x00080000u, 19};
constexpr Field<Access::RW> exti_emr_mr20{0x40013C04u, 0x00100000u, 20};
constexpr Field<Access::RW> exti_emr_mr21{0x40013C04u, 0x00200000u, 21};
constexpr Field<Access::RW> exti_emr_mr22{0x40013C04u, 0x00400000u, 22};
constexpr Field<Access::RW> exti_rtsr_tr0{0x40013C08u, 0x00000001u, 0};
constexpr Field<Access::RW> exti_rtsr_tr1{0x40013C08u, 0x00000002u, 1};
constexpr Field<Access::RW> exti_rtsr_tr2{0x40013C08u, 0x00000004u, 2};
constexpr Field<Access::RW> exti_rtsr_tr3{0x40013C08u, 0x00000008u, 3};
constexpr Field<Access::RW> exti_rtsr_tr4{0x40013C08u, 0x00000010u, 4};
constexpr Field<Access::RW> exti_rtsr_tr5{0x40013C08u, 0x00000020u, 5};
constexpr Field<Access::RW> exti_rtsr_tr6{0x40013C08u, 0x00000040u, 6};
constexpr Field<Access::RW> exti_rtsr_tr7{0x40013C08u, 0x00000080u, 7};
constexpr Field<Access::RW> exti_rtsr_tr8{0x40013C08u, 0x00000100u, 8};
constexpr Field<Access::RW> exti_rtsr_tr9{0x40013C08u, 0x00000200u, 9};
constexpr Field<Access::RW> exti_rtsr_tr10{0x40013C08u, 0x00000400u, 10};
constexpr Field<Access::RW> exti_rtsr_tr11{0x40013C08u, 0x00000800u, 11};
constexpr Field<Access::RW> exti_rtsr_tr12{0x40013C08u, 0x00001000u, 12};
constexpr Field<Access::RW> exti_rtsr_tr13{0x40013C08u, 0x00002000u, 13};
constexpr Field<Access::RW> exti_rtsr_tr14{0x40013C08u, 0x00004000u, 14};
constexpr Field<Access::RW> exti_rtsr_tr15{0x40013C08u, 0x00008000u, 15};
constexpr Field<Access::RW> exti_rtsr_tr16{0x40013C08u, 0x00010000u, 16};
constexpr Field<Access::RW> exti_rtsr_tr17{0x40013C08u, 0x00020000u, 17};
constexpr Field<Access::RW> exti_rtsr_tr18{0x40013C08u, 0x00040000u, 18};
constexpr Field<Access::RW> exti_rtsr_tr19{0x40013C08u, 0x00080000u, 19};
constexpr Field<Access::RW> exti_rtsr_tr20{0x40013C08u, 0x00100000u, 20};
constexpr Field<Access::RW> exti_rtsr_tr21{0x40013C08u, 0x00200000u, 21};
constexpr Field<Access::RW> exti_rtsr_tr22{0x40013C08u, 0x00400000u, 22};
constexpr Field<Access::RW> exti_ftsr_tr0{0x40013C0Cu, 0x00000001u, 0};
constexpr Field<Access::RW> exti_ftsr_tr1{0x40013C0Cu, 0x00000002u, 1};
constexpr Field<Access::RW> exti_ftsr_tr2{0x40013C0Cu, 0x00000004u, 2};
constexpr Field<Access::RW> exti_ftsr_tr3{0x40013C0Cu, 0x00000008u, 3};
constexpr Field<Access::RW> exti_ftsr_tr4{0x40013C0Cu, 0x00000010u, 4};
constexpr Field<Access::RW> exti_ftsr_tr5{0x40013C0Cu, 0x00000020u, 5};
constexpr Field<Access::RW> exti_ftsr_tr6{0x40013C0Cu, 0x00000040u, 6};
constexpr Field<Access::RW> exti_ftsr_tr7{0x40013C0Cu, 0x00000080u, 7};
constexpr Field<Access::RW> exti_ftsr_tr8{0x40013C0Cu, 0x00000100u, 8};
constexpr Field<Access::RW> exti_ftsr_tr9{0x40013C0Cu, 0x00000200u, 9};
constexpr Field<Access::RW> exti_ftsr_tr10{0x40013C0Cu, 0x00000400u, 10};
constexpr Field<Access::RW> exti_ftsr_tr11{0x40013C0Cu, 0x00000800u, 11};
constexpr Field<Access::RW> exti_ftsr_tr12{0x40013C0Cu, 0x00001000u, 12};
constexpr Field<Access::RW> exti_ftsr_tr13{0x40013C0Cu, 0x00002000u, 13};
constexpr Field<Access::RW> exti_ftsr_tr14{0x40013C0Cu, 0x00004000u, 14};
constexpr Field<Access::RW> exti_ftsr_tr15{0x40013C0Cu, 0x00008000u, 15};
constexpr Field<Access::RW> exti_ftsr_tr16{0x40013C0Cu, 0x00010000u, 16};
constexpr Field<Access::RW> exti_ftsr_tr17{0x40013C0Cu, 0x00020000u, 17};
constexpr Field<Access::RW> exti_ftsr_tr18{0x40013C0Cu, 0x00040000u, 18};
constexpr Field<Access::RW> exti_ftsr_tr19{0x40013C0Cu, 0x00080000u, 19};
constexpr Field<Access::RW> exti_ftsr_tr20{0x40013C0Cu, 0x00100000u, 20};
constexpr Field<Access::RW> exti_ftsr_tr21{0x40013C0Cu, 0x00200000u, 21};
constexpr Field<Access::RW> exti_ftsr_tr22{0x40013C0Cu, 0x00400000u, 22};
constexpr Field<Access::RW> exti_swier_swier0{0x40013C10u, 0x00000001u, 0};
constexpr Field<Access::RW> exti_swier_swier1{0x40013C10u, 0x00000002u, 1};
constexpr Field<Access::RW> exti_swier_swier2{0x40013C10u, 0x00000004u, 2};
constexpr Field<Access::RW> exti_swier_swier3{0x40013C10u, 0x00000008u, 3};
constexpr Field<Access::RW> exti_swier_swier4{0x40013C10u, 0x00000010u, 4};
constexpr Field<Access::RW> exti_swier_swier5{0x40013C10u, 0x00000020u, 5};
constexpr Field<Access::RW> exti_swier_swier6{0x40013C10u, 0x00000040u, 6};
constexpr Field<Access::RW> exti_swier_swier7{0x40013C10u, 0x00000080u, 7};
constexpr Field<Access::RW> exti_swier_swier8{0x40013C10u, 0x00000100u, 8};
constexpr Field<Access::RW> exti_swier_swier9{0x40013C10u, 0x00000200u, 9};
constexpr Field<Access::RW> exti_swier_swier10{0x40013C10u, 0x00000400u, 10};
constexpr Field<Access::RW> exti_swier_swier11{0x40013C10u, 0x00000800u, 11};
constexpr Field<Access::RW> exti_swier_swier12{0x40013C10u, 0x00001000u, 12};
constexpr Field<Access::RW> exti_swier_swier13{0x40013C10u, 0x00002000u, 13};
constexpr Field<Access::RW> exti_swier_swier14{0x40013C10u, 0x00004000u, 14};
constexpr Field<Access::RW> exti_swier_swier15{0x40013C10u, 0x00008000u, 15};
constexpr Field<Access::RW> exti_swier_swier16{0x40013C10u, 0x00010000u, 16};
constexpr Field<Access::RW> exti_swier_swier17{0x40013C10u, 0x00020000u, 17};
constexpr Field<Access::RW> exti_swier_swier18{0x40013C10u, 0x00040000u, 18};
constexpr Field<Access::RW> exti_swier_swier19{0x40013C10u, 0x00080000u, 19};
constexpr Field<Access::RW> exti_swier_swier20{0x40013C10u, 0x00100000u, 20};
constexpr Field<Access::RW> exti_swier_swier21{0x40013C10u, 0x00200000u, 21};
constexpr Field<Access::RW> exti_swier_swier22{0x40013C10u, 0x00400000u, 22};
constexpr Field<Access::RW> exti_pr_pr0{0x40013C14u, 0x00000001u, 0};
constexpr Field<Access::RW> exti_pr_pr1{0x40013C14u, 0x00000002u, 1};
constexpr Field<Access::RW> exti_pr_pr2{0x40013C14u, 0x00000004u, 2};
constexpr Field<Access::RW> exti_pr_pr3{0x40013C14u, 0x00000008u, 3};
constexpr Field<Access::RW> exti_pr_pr4{0x40013C14u, 0x00000010u, 4};
constexpr Field<Access::RW> exti_pr_pr5{0x40013C14u, 0x00000020u, 5};
constexpr Field<Access::RW> exti_pr_pr6{0x40013C14u, 0x00000040u, 6};
constexpr Field<Access::RW> exti_pr_pr7{0x40013C14u, 0x00000080u, 7};
constexpr Field<Access::RW> exti_pr_pr8{0x40013C14u, 0x00000100u, 8};
constexpr Field<Access::RW> exti_pr_pr9{0x40013C14u, 0x00000200u, 9};
constexpr Field<Access::RW> exti_pr_pr10{0x40013C14u, 0x00000400u, 10};
constexpr Field<Access::RW> exti_pr_pr11{0x40013C14u, 0x00000800u, 11};
constexpr Field<Access::RW> exti_pr_pr12{0x40013C14u, 0x00001000u, 12};
constexpr Field<Access::RW> exti_pr_pr13{0x40013C14u, 0x00002000u, 13};
constexpr Field<Access::RW> exti_pr_pr14{0x40013C14u, 0x00004000u, 14};
constexpr Field<Access::RW> exti_pr_pr15{0x40013C14u, 0x00008000u, 15};
constexpr Field<Access::RW> exti_pr_pr16{0x40013C14u, 0x00010000u, 16};
constexpr Field<Access::RW> exti_pr_pr17{0x40013C14u, 0x00020000u, 17};
constexpr Field<Access::RW> exti_pr_pr18{0x40013C14u, 0x00040000u, 18};
constexpr Field<Access::RW> exti_pr_pr19{0x40013C14u, 0x00080000u, 19};
constexpr Field<Access::RW> exti_pr_pr20{0x40013C14u, 0x00100000u, 20};
constexpr Field<Access::RW> exti_pr_pr21{0x40013C14u, 0x00200000u, 21};
constexpr Field<Access::RW> exti_pr_pr22{0x40013C14u, 0x00400000u, 22};

#endif // EXTI_HPP