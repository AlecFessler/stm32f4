// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Secure digital input/output interface
#ifndef SDIO_HPP
#define SDIO_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SDIO_BASE = 0x40012C00;
struct SdioRegs {
    volatile uint32_t power; // power control register
    volatile uint32_t clkcr; // SDI clock control register
    volatile uint32_t arg; // argument register
    volatile uint32_t cmd; // command register
    volatile uint32_t respcmd; // command response register
    volatile uint32_t resp1; // response 1..4 register
    volatile uint32_t resp2; // response 1..4 register
    volatile uint32_t resp3; // response 1..4 register
    volatile uint32_t resp4; // response 1..4 register
    volatile uint32_t dtimer; // data timer register
    volatile uint32_t dlen; // data length register
    volatile uint32_t dctrl; // data control register
    volatile uint32_t dcount; // data counter register
    volatile uint32_t sta; // status register
    volatile uint32_t icr; // interrupt clear register
    volatile uint32_t mask; // mask register
    uint32_t _reserved0[2];
    volatile uint32_t fifocnt; // FIFO counter register
    uint32_t _reserved1[13];
    volatile uint32_t fifo; // data FIFO register
};
static_assert(offsetof(SdioRegs, power) == 0);
static_assert(offsetof(SdioRegs, clkcr) == 4);
static_assert(offsetof(SdioRegs, arg) == 8);
static_assert(offsetof(SdioRegs, cmd) == 12);
static_assert(offsetof(SdioRegs, respcmd) == 16);
static_assert(offsetof(SdioRegs, resp1) == 20);
static_assert(offsetof(SdioRegs, resp2) == 24);
static_assert(offsetof(SdioRegs, resp3) == 28);
static_assert(offsetof(SdioRegs, resp4) == 32);
static_assert(offsetof(SdioRegs, dtimer) == 36);
static_assert(offsetof(SdioRegs, dlen) == 40);
static_assert(offsetof(SdioRegs, dctrl) == 44);
static_assert(offsetof(SdioRegs, dcount) == 48);
static_assert(offsetof(SdioRegs, sta) == 52);
static_assert(offsetof(SdioRegs, icr) == 56);
static_assert(offsetof(SdioRegs, mask) == 60);
static_assert(offsetof(SdioRegs, fifocnt) == 72);
static_assert(offsetof(SdioRegs, fifo) == 128);

constexpr Field<Access::RW> sdio_power_pwrctrl{0x40012C00u, 0x00000003u, 0};
constexpr Field<Access::RW> sdio_clkcr_hwfc_en{0x40012C04u, 0x00004000u, 14};
constexpr Field<Access::RW> sdio_clkcr_negedge{0x40012C04u, 0x00002000u, 13};
constexpr Field<Access::RW> sdio_clkcr_widbus{0x40012C04u, 0x00001800u, 11};
constexpr Field<Access::RW> sdio_clkcr_bypass{0x40012C04u, 0x00000400u, 10};
constexpr Field<Access::RW> sdio_clkcr_pwrsav{0x40012C04u, 0x00000200u, 9};
constexpr Field<Access::RW> sdio_clkcr_clken{0x40012C04u, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_clkcr_clkdiv{0x40012C04u, 0x000000FFu, 0};
constexpr Field<Access::RW> sdio_arg_cmdarg{0x40012C08u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sdio_cmd_ce_atacmd{0x40012C0Cu, 0x00004000u, 14};
constexpr Field<Access::RW> sdio_cmd_nien{0x40012C0Cu, 0x00002000u, 13};
constexpr Field<Access::RW> sdio_cmd_encmdcompl{0x40012C0Cu, 0x00001000u, 12};
constexpr Field<Access::RW> sdio_cmd_sdiosuspend{0x40012C0Cu, 0x00000800u, 11};
constexpr Field<Access::RW> sdio_cmd_cpsmen{0x40012C0Cu, 0x00000400u, 10};
constexpr Field<Access::RW> sdio_cmd_waitpend{0x40012C0Cu, 0x00000200u, 9};
constexpr Field<Access::RW> sdio_cmd_waitint{0x40012C0Cu, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_cmd_waitresp{0x40012C0Cu, 0x000000C0u, 6};
constexpr Field<Access::RW> sdio_cmd_cmdindex{0x40012C0Cu, 0x0000003Fu, 0};
constexpr Field<Access::RO> sdio_respcmd_respcmd{0x40012C10u, 0x0000003Fu, 0};
constexpr Field<Access::RO> sdio_resp1_cardstatus1{0x40012C14u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp2_cardstatus2{0x40012C18u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp3_cardstatus3{0x40012C1Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp4_cardstatus4{0x40012C20u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sdio_dtimer_datatime{0x40012C24u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sdio_dlen_datalength{0x40012C28u, 0x01FFFFFFu, 0};
constexpr Field<Access::RW> sdio_dctrl_sdioen{0x40012C2Cu, 0x00000800u, 11};
constexpr Field<Access::RW> sdio_dctrl_rwmod{0x40012C2Cu, 0x00000400u, 10};
constexpr Field<Access::RW> sdio_dctrl_rwstop{0x40012C2Cu, 0x00000200u, 9};
constexpr Field<Access::RW> sdio_dctrl_rwstart{0x40012C2Cu, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_dctrl_dblocksize{0x40012C2Cu, 0x000000F0u, 4};
constexpr Field<Access::RW> sdio_dctrl_dmaen{0x40012C2Cu, 0x00000008u, 3};
constexpr Field<Access::RW> sdio_dctrl_dtmode{0x40012C2Cu, 0x00000004u, 2};
constexpr Field<Access::RW> sdio_dctrl_dtdir{0x40012C2Cu, 0x00000002u, 1};
constexpr Field<Access::RW> sdio_dctrl_dten{0x40012C2Cu, 0x00000001u, 0};
constexpr Field<Access::RO> sdio_dcount_datacount{0x40012C30u, 0x01FFFFFFu, 0};
constexpr Field<Access::RO> sdio_sta_ceataend{0x40012C34u, 0x00800000u, 23};
constexpr Field<Access::RO> sdio_sta_sdioit{0x40012C34u, 0x00400000u, 22};
constexpr Field<Access::RO> sdio_sta_rxdavl{0x40012C34u, 0x00200000u, 21};
constexpr Field<Access::RO> sdio_sta_txdavl{0x40012C34u, 0x00100000u, 20};
constexpr Field<Access::RO> sdio_sta_rxfifoe{0x40012C34u, 0x00080000u, 19};
constexpr Field<Access::RO> sdio_sta_txfifoe{0x40012C34u, 0x00040000u, 18};
constexpr Field<Access::RO> sdio_sta_rxfifof{0x40012C34u, 0x00020000u, 17};
constexpr Field<Access::RO> sdio_sta_txfifof{0x40012C34u, 0x00010000u, 16};
constexpr Field<Access::RO> sdio_sta_rxfifohf{0x40012C34u, 0x00008000u, 15};
constexpr Field<Access::RO> sdio_sta_txfifohe{0x40012C34u, 0x00004000u, 14};
constexpr Field<Access::RO> sdio_sta_rxact{0x40012C34u, 0x00002000u, 13};
constexpr Field<Access::RO> sdio_sta_txact{0x40012C34u, 0x00001000u, 12};
constexpr Field<Access::RO> sdio_sta_cmdact{0x40012C34u, 0x00000800u, 11};
constexpr Field<Access::RO> sdio_sta_dbckend{0x40012C34u, 0x00000400u, 10};
constexpr Field<Access::RO> sdio_sta_stbiterr{0x40012C34u, 0x00000200u, 9};
constexpr Field<Access::RO> sdio_sta_dataend{0x40012C34u, 0x00000100u, 8};
constexpr Field<Access::RO> sdio_sta_cmdsent{0x40012C34u, 0x00000080u, 7};
constexpr Field<Access::RO> sdio_sta_cmdrend{0x40012C34u, 0x00000040u, 6};
constexpr Field<Access::RO> sdio_sta_rxoverr{0x40012C34u, 0x00000020u, 5};
constexpr Field<Access::RO> sdio_sta_txunderr{0x40012C34u, 0x00000010u, 4};
constexpr Field<Access::RO> sdio_sta_dtimeout{0x40012C34u, 0x00000008u, 3};
constexpr Field<Access::RO> sdio_sta_ctimeout{0x40012C34u, 0x00000004u, 2};
constexpr Field<Access::RO> sdio_sta_dcrcfail{0x40012C34u, 0x00000002u, 1};
constexpr Field<Access::RO> sdio_sta_ccrcfail{0x40012C34u, 0x00000001u, 0};
constexpr Field<Access::RW> sdio_icr_ceataendc{0x40012C38u, 0x00800000u, 23};
constexpr Field<Access::RW> sdio_icr_sdioitc{0x40012C38u, 0x00400000u, 22};
constexpr Field<Access::RW> sdio_icr_dbckendc{0x40012C38u, 0x00000400u, 10};
constexpr Field<Access::RW> sdio_icr_stbiterrc{0x40012C38u, 0x00000200u, 9};
constexpr Field<Access::RW> sdio_icr_dataendc{0x40012C38u, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_icr_cmdsentc{0x40012C38u, 0x00000080u, 7};
constexpr Field<Access::RW> sdio_icr_cmdrendc{0x40012C38u, 0x00000040u, 6};
constexpr Field<Access::RW> sdio_icr_rxoverrc{0x40012C38u, 0x00000020u, 5};
constexpr Field<Access::RW> sdio_icr_txunderrc{0x40012C38u, 0x00000010u, 4};
constexpr Field<Access::RW> sdio_icr_dtimeoutc{0x40012C38u, 0x00000008u, 3};
constexpr Field<Access::RW> sdio_icr_ctimeoutc{0x40012C38u, 0x00000004u, 2};
constexpr Field<Access::RW> sdio_icr_dcrcfailc{0x40012C38u, 0x00000002u, 1};
constexpr Field<Access::RW> sdio_icr_ccrcfailc{0x40012C38u, 0x00000001u, 0};
constexpr Field<Access::RW> sdio_mask_ceataendie{0x40012C3Cu, 0x00800000u, 23};
constexpr Field<Access::RW> sdio_mask_sdioitie{0x40012C3Cu, 0x00400000u, 22};
constexpr Field<Access::RW> sdio_mask_rxdavlie{0x40012C3Cu, 0x00200000u, 21};
constexpr Field<Access::RW> sdio_mask_txdavlie{0x40012C3Cu, 0x00100000u, 20};
constexpr Field<Access::RW> sdio_mask_rxfifoeie{0x40012C3Cu, 0x00080000u, 19};
constexpr Field<Access::RW> sdio_mask_txfifoeie{0x40012C3Cu, 0x00040000u, 18};
constexpr Field<Access::RW> sdio_mask_rxfifofie{0x40012C3Cu, 0x00020000u, 17};
constexpr Field<Access::RW> sdio_mask_txfifofie{0x40012C3Cu, 0x00010000u, 16};
constexpr Field<Access::RW> sdio_mask_rxfifohfie{0x40012C3Cu, 0x00008000u, 15};
constexpr Field<Access::RW> sdio_mask_txfifoheie{0x40012C3Cu, 0x00004000u, 14};
constexpr Field<Access::RW> sdio_mask_rxactie{0x40012C3Cu, 0x00002000u, 13};
constexpr Field<Access::RW> sdio_mask_txactie{0x40012C3Cu, 0x00001000u, 12};
constexpr Field<Access::RW> sdio_mask_cmdactie{0x40012C3Cu, 0x00000800u, 11};
constexpr Field<Access::RW> sdio_mask_dbckendie{0x40012C3Cu, 0x00000400u, 10};
constexpr Field<Access::RW> sdio_mask_stbiterrie{0x40012C3Cu, 0x00000200u, 9};
constexpr Field<Access::RW> sdio_mask_dataendie{0x40012C3Cu, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_mask_cmdsentie{0x40012C3Cu, 0x00000080u, 7};
constexpr Field<Access::RW> sdio_mask_cmdrendie{0x40012C3Cu, 0x00000040u, 6};
constexpr Field<Access::RW> sdio_mask_rxoverrie{0x40012C3Cu, 0x00000020u, 5};
constexpr Field<Access::RW> sdio_mask_txunderrie{0x40012C3Cu, 0x00000010u, 4};
constexpr Field<Access::RW> sdio_mask_dtimeoutie{0x40012C3Cu, 0x00000008u, 3};
constexpr Field<Access::RW> sdio_mask_ctimeoutie{0x40012C3Cu, 0x00000004u, 2};
constexpr Field<Access::RW> sdio_mask_dcrcfailie{0x40012C3Cu, 0x00000002u, 1};
constexpr Field<Access::RW> sdio_mask_ccrcfailie{0x40012C3Cu, 0x00000001u, 0};
constexpr Field<Access::RO> sdio_fifocnt_fifocount{0x40012C48u, 0x00FFFFFFu, 0};
constexpr Field<Access::RW> sdio_fifo_fifodata{0x40012C80u, 0xFFFFFFFFu, 0};

#endif // SDIO_HPP