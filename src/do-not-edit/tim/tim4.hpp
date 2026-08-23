// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// General purpose timers
#ifndef TIM4_HPP
#define TIM4_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Tim4Regs omitted: overlapping registers
constexpr Field<Access::RW> tim4_cr1_ckd{0x40000800u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_cr1_arpe{0x40000800u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_cr1_cms{0x40000800u, 0x00000060u, 5};
constexpr Field<Access::RW> tim4_cr1_dir{0x40000800u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_cr1_opm{0x40000800u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_cr1_urs{0x40000800u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_cr1_udis{0x40000800u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_cr1_cen{0x40000800u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_cr2_ti1s{0x40000804u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_cr2_mms{0x40000804u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_cr2_ccds{0x40000804u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_smcr_etp{0x40000808u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_smcr_ece{0x40000808u, 0x00004000u, 14};
constexpr Field<Access::RW> tim4_smcr_etps{0x40000808u, 0x00003000u, 12};
constexpr Field<Access::RW> tim4_smcr_etf{0x40000808u, 0x00000F00u, 8};
constexpr Field<Access::RW> tim4_smcr_msm{0x40000808u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_smcr_ts{0x40000808u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_smcr_sms{0x40000808u, 0x00000007u, 0};
constexpr Field<Access::RW> tim4_dier_tde{0x4000080Cu, 0x00004000u, 14};
constexpr Field<Access::RW> tim4_dier_cc4de{0x4000080Cu, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_dier_cc3de{0x4000080Cu, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_dier_cc2de{0x4000080Cu, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_dier_cc1de{0x4000080Cu, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_dier_ude{0x4000080Cu, 0x00000100u, 8};
constexpr Field<Access::RW> tim4_dier_tie{0x4000080Cu, 0x00000040u, 6};
constexpr Field<Access::RW> tim4_dier_cc4ie{0x4000080Cu, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_dier_cc3ie{0x4000080Cu, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_dier_cc2ie{0x4000080Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_dier_cc1ie{0x4000080Cu, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_dier_uie{0x4000080Cu, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_sr_cc4of{0x40000810u, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_sr_cc3of{0x40000810u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_sr_cc2of{0x40000810u, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_sr_cc1of{0x40000810u, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_sr_tif{0x40000810u, 0x00000040u, 6};
constexpr Field<Access::RW> tim4_sr_cc4if{0x40000810u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_sr_cc3if{0x40000810u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_sr_cc2if{0x40000810u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_sr_cc1if{0x40000810u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_sr_uif{0x40000810u, 0x00000001u, 0};
constexpr Field<Access::WO> tim4_egr_tg{0x40000814u, 0x00000040u, 6};
constexpr Field<Access::WO> tim4_egr_cc4g{0x40000814u, 0x00000010u, 4};
constexpr Field<Access::WO> tim4_egr_cc3g{0x40000814u, 0x00000008u, 3};
constexpr Field<Access::WO> tim4_egr_cc2g{0x40000814u, 0x00000004u, 2};
constexpr Field<Access::WO> tim4_egr_cc1g{0x40000814u, 0x00000002u, 1};
constexpr Field<Access::WO> tim4_egr_ug{0x40000814u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2ce{0x40000818u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2m{0x40000818u, 0x00007000u, 12};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2pe{0x40000818u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccmr1_output_oc2fe{0x40000818u, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_ccmr1_output_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1ce{0x40000818u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1m{0x40000818u, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1pe{0x40000818u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccmr1_output_oc1fe{0x40000818u, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_ccmr1_output_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr1_input_ic2f{0x40000818u, 0x0000F000u, 12};
constexpr Field<Access::RW> tim4_ccmr1_input_ic2pcs{0x40000818u, 0x00000C00u, 10};
constexpr Field<Access::RW> tim4_ccmr1_input_cc2s{0x40000818u, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr1_input_ic1f{0x40000818u, 0x000000F0u, 4};
constexpr Field<Access::RW> tim4_ccmr1_input_icpcs{0x40000818u, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim4_ccmr1_input_cc1s{0x40000818u, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr2_output_o24ce{0x4000081Cu, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4m{0x4000081Cu, 0x00007000u, 12};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4pe{0x4000081Cu, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccmr2_output_oc4fe{0x4000081Cu, 0x00000400u, 10};
constexpr Field<Access::RW> tim4_ccmr2_output_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3ce{0x4000081Cu, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3m{0x4000081Cu, 0x00000070u, 4};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3pe{0x4000081Cu, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccmr2_output_oc3fe{0x4000081Cu, 0x00000004u, 2};
constexpr Field<Access::RW> tim4_ccmr2_output_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccmr2_input_ic4f{0x4000081Cu, 0x0000F000u, 12};
constexpr Field<Access::RW> tim4_ccmr2_input_ic4psc{0x4000081Cu, 0x00000C00u, 10};
constexpr Field<Access::RW> tim4_ccmr2_input_cc4s{0x4000081Cu, 0x00000300u, 8};
constexpr Field<Access::RW> tim4_ccmr2_input_ic3f{0x4000081Cu, 0x000000F0u, 4};
constexpr Field<Access::RW> tim4_ccmr2_input_ic3psc{0x4000081Cu, 0x0000000Cu, 2};
constexpr Field<Access::RW> tim4_ccmr2_input_cc3s{0x4000081Cu, 0x00000003u, 0};
constexpr Field<Access::RW> tim4_ccer_cc4np{0x40000820u, 0x00008000u, 15};
constexpr Field<Access::RW> tim4_ccer_cc4p{0x40000820u, 0x00002000u, 13};
constexpr Field<Access::RW> tim4_ccer_cc4e{0x40000820u, 0x00001000u, 12};
constexpr Field<Access::RW> tim4_ccer_cc3np{0x40000820u, 0x00000800u, 11};
constexpr Field<Access::RW> tim4_ccer_cc3p{0x40000820u, 0x00000200u, 9};
constexpr Field<Access::RW> tim4_ccer_cc3e{0x40000820u, 0x00000100u, 8};
constexpr Field<Access::RW> tim4_ccer_cc2np{0x40000820u, 0x00000080u, 7};
constexpr Field<Access::RW> tim4_ccer_cc2p{0x40000820u, 0x00000020u, 5};
constexpr Field<Access::RW> tim4_ccer_cc2e{0x40000820u, 0x00000010u, 4};
constexpr Field<Access::RW> tim4_ccer_cc1np{0x40000820u, 0x00000008u, 3};
constexpr Field<Access::RW> tim4_ccer_cc1p{0x40000820u, 0x00000002u, 1};
constexpr Field<Access::RW> tim4_ccer_cc1e{0x40000820u, 0x00000001u, 0};
constexpr Field<Access::RW> tim4_cnt_cnt_h{0x40000824u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_cnt_cnt_l{0x40000824u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_psc_psc{0x40000828u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_arr_arr_h{0x4000082Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_arr_arr_l{0x4000082Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr1_ccr1_h{0x40000834u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr1_ccr1_l{0x40000834u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr2_ccr2_h{0x40000838u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr2_ccr2_l{0x40000838u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr3_ccr3_h{0x4000083Cu, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr3_ccr3_l{0x4000083Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_ccr4_ccr4_h{0x40000840u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> tim4_ccr4_ccr4_l{0x40000840u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> tim4_dcr_dbl{0x40000848u, 0x00001F00u, 8};
constexpr Field<Access::RW> tim4_dcr_dba{0x40000848u, 0x0000001Fu, 0};
constexpr Field<Access::RW> tim4_dmar_dmab{0x4000084Cu, 0x0000FFFFu, 0};

#endif // TIM4_HPP