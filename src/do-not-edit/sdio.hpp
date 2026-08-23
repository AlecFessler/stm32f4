// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Secure digital input/output interface
#ifndef STM32_SDIO_HPP
#define STM32_SDIO_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace sdio {
enum class Bypass : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class C : uint32_t {
    clear = 1,
};
enum class Ccrcfail : uint32_t {
    notfailed = 0,
    failed = 1,
};
enum class Ce_atacmd : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ceataend : uint32_t {
    notreceived = 0,
    received = 1,
};
enum class Clken : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cmdact : uint32_t {
    notinprogress = 0,
    inprogress = 1,
};
enum class Cmdrend : uint32_t {
    notdone = 0,
    done = 1,
};
enum class Cmdsent : uint32_t {
    notsent = 0,
    sent = 1,
};
enum class Cpsmen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ctimeout : uint32_t {
    notimeout = 0,
    timeout = 1,
};
enum class Dataend : uint32_t {
    notdone = 0,
    done = 1,
};
enum class Dbckend : uint32_t {
    nottransferred = 0,
    transferred = 1,
};
enum class Dcrcfail : uint32_t {
    notfailed = 0,
    failed = 1,
};
enum class Dmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dtdir : uint32_t {
    controllertocard = 0,
    cardtocontroller = 1,
};
enum class Dten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dtimeout : uint32_t {
    notimeout = 0,
    timeout = 1,
};
enum class Dtmode : uint32_t {
    blockmode = 0,
    streammode = 1,
};
enum class Encmdcompl : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Hwfc_en : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Negedge : uint32_t {
    rising = 0,
    falling = 1,
};
enum class Nien : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pwrctrl : uint32_t {
    poweroff = 0,
    poweron = 3,
};
enum class Pwrsav : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Rwmod : uint32_t {
    d2 = 0,
    ck = 1,
};
enum class Rwstart : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rwstop : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rxact : uint32_t {
    notinprogress = 0,
    inprogress = 1,
};
enum class Rxdavl : uint32_t {
    notavailable = 0,
    available = 1,
};
enum class Rxfifoe : uint32_t {
    notempty = 0,
    empty = 1,
};
enum class Rxfifof : uint32_t {
    notfull = 0,
    full = 1,
};
enum class Rxfifohf : uint32_t {
    nothalffull = 0,
    halffull = 1,
};
enum class Rxoverr : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Sdioen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Sdioit : uint32_t {
    notreceived = 0,
    received = 1,
};
enum class Sdiosuspend : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Stbiterr : uint32_t {
    detected = 0,
    notdetected = 1,
};
enum class Txact : uint32_t {
    notinprogress = 0,
    inprogress = 1,
};
enum class Txdavl : uint32_t {
    notavailable = 0,
    available = 1,
};
enum class Txfifoe : uint32_t {
    notempty = 0,
    empty = 1,
};
enum class Txfifof : uint32_t {
    notfull = 0,
    full = 1,
};
enum class Txfifohe : uint32_t {
    nothalfempty = 0,
    halfempty = 1,
};
enum class Txunderr : uint32_t {
    nounderrun = 0,
    underrun = 1,
};
enum class Waitint : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Waitpend : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Waitresp : uint32_t {
    noresponse = 0,
    shortresponse = 1,
    noresponse2 = 2,
    longresponse = 3,
};
enum class Widbus : uint32_t {
    buswidth1 = 0,
    buswidth4 = 1,
    buswidth8 = 2,
};
} // namespace sdio

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

constexpr Field<Access::RW, sdio::Pwrctrl> sdio_power_pwrctrl{0x40012C00u, 0x00000003u, 0};
constexpr Field<Access::RW, sdio::Hwfc_en> sdio_clkcr_hwfc_en{0x40012C04u, 0x00004000u, 14};
constexpr Field<Access::RW, sdio::Negedge> sdio_clkcr_negedge{0x40012C04u, 0x00002000u, 13};
constexpr Field<Access::RW, sdio::Widbus> sdio_clkcr_widbus{0x40012C04u, 0x00001800u, 11};
constexpr Field<Access::RW, sdio::Bypass> sdio_clkcr_bypass{0x40012C04u, 0x00000400u, 10};
constexpr Field<Access::RW, sdio::Pwrsav> sdio_clkcr_pwrsav{0x40012C04u, 0x00000200u, 9};
constexpr Field<Access::RW, sdio::Clken> sdio_clkcr_clken{0x40012C04u, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_clkcr_clkdiv{0x40012C04u, 0x000000FFu, 0};
constexpr Field<Access::RW> sdio_arg_cmdarg{0x40012C08u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, sdio::Ce_atacmd> sdio_cmd_ce_atacmd{0x40012C0Cu, 0x00004000u, 14};
constexpr Field<Access::RW, sdio::Nien> sdio_cmd_nien{0x40012C0Cu, 0x00002000u, 13};
constexpr Field<Access::RW, sdio::Encmdcompl> sdio_cmd_encmdcompl{0x40012C0Cu, 0x00001000u, 12};
constexpr Field<Access::RW, sdio::Sdiosuspend> sdio_cmd_sdiosuspend{0x40012C0Cu, 0x00000800u, 11};
constexpr Field<Access::RW, sdio::Cpsmen> sdio_cmd_cpsmen{0x40012C0Cu, 0x00000400u, 10};
constexpr Field<Access::RW, sdio::Waitpend> sdio_cmd_waitpend{0x40012C0Cu, 0x00000200u, 9};
constexpr Field<Access::RW, sdio::Waitint> sdio_cmd_waitint{0x40012C0Cu, 0x00000100u, 8};
constexpr Field<Access::RW, sdio::Waitresp> sdio_cmd_waitresp{0x40012C0Cu, 0x000000C0u, 6};
constexpr Field<Access::RW> sdio_cmd_cmdindex{0x40012C0Cu, 0x0000003Fu, 0};
constexpr Field<Access::RO> sdio_respcmd_respcmd{0x40012C10u, 0x0000003Fu, 0};
constexpr Field<Access::RO> sdio_resp1_cardstatus1{0x40012C14u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp2_cardstatus2{0x40012C18u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp3_cardstatus3{0x40012C1Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> sdio_resp4_cardstatus4{0x40012C20u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sdio_dtimer_datatime{0x40012C24u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sdio_dlen_datalength{0x40012C28u, 0x01FFFFFFu, 0};
constexpr Field<Access::RW, sdio::Sdioen> sdio_dctrl_sdioen{0x40012C2Cu, 0x00000800u, 11};
constexpr Field<Access::RW, sdio::Rwmod> sdio_dctrl_rwmod{0x40012C2Cu, 0x00000400u, 10};
constexpr Field<Access::RW, sdio::Rwstop> sdio_dctrl_rwstop{0x40012C2Cu, 0x00000200u, 9};
constexpr Field<Access::RW, sdio::Rwstart> sdio_dctrl_rwstart{0x40012C2Cu, 0x00000100u, 8};
constexpr Field<Access::RW> sdio_dctrl_dblocksize{0x40012C2Cu, 0x000000F0u, 4};
constexpr Field<Access::RW, sdio::Dmaen> sdio_dctrl_dmaen{0x40012C2Cu, 0x00000008u, 3};
constexpr Field<Access::RW, sdio::Dtmode> sdio_dctrl_dtmode{0x40012C2Cu, 0x00000004u, 2};
constexpr Field<Access::RW, sdio::Dtdir> sdio_dctrl_dtdir{0x40012C2Cu, 0x00000002u, 1};
constexpr Field<Access::RW, sdio::Dten> sdio_dctrl_dten{0x40012C2Cu, 0x00000001u, 0};
constexpr Field<Access::RO> sdio_dcount_datacount{0x40012C30u, 0x01FFFFFFu, 0};
constexpr Field<Access::RO, sdio::Ceataend> sdio_sta_ceataend{0x40012C34u, 0x00800000u, 23};
constexpr Field<Access::RO, sdio::Sdioit> sdio_sta_sdioit{0x40012C34u, 0x00400000u, 22};
constexpr Field<Access::RO, sdio::Rxdavl> sdio_sta_rxdavl{0x40012C34u, 0x00200000u, 21};
constexpr Field<Access::RO, sdio::Txdavl> sdio_sta_txdavl{0x40012C34u, 0x00100000u, 20};
constexpr Field<Access::RO, sdio::Rxfifoe> sdio_sta_rxfifoe{0x40012C34u, 0x00080000u, 19};
constexpr Field<Access::RO, sdio::Txfifoe> sdio_sta_txfifoe{0x40012C34u, 0x00040000u, 18};
constexpr Field<Access::RO, sdio::Rxfifof> sdio_sta_rxfifof{0x40012C34u, 0x00020000u, 17};
constexpr Field<Access::RO, sdio::Txfifof> sdio_sta_txfifof{0x40012C34u, 0x00010000u, 16};
constexpr Field<Access::RO, sdio::Rxfifohf> sdio_sta_rxfifohf{0x40012C34u, 0x00008000u, 15};
constexpr Field<Access::RO, sdio::Txfifohe> sdio_sta_txfifohe{0x40012C34u, 0x00004000u, 14};
constexpr Field<Access::RO, sdio::Rxact> sdio_sta_rxact{0x40012C34u, 0x00002000u, 13};
constexpr Field<Access::RO, sdio::Txact> sdio_sta_txact{0x40012C34u, 0x00001000u, 12};
constexpr Field<Access::RO, sdio::Cmdact> sdio_sta_cmdact{0x40012C34u, 0x00000800u, 11};
constexpr Field<Access::RO, sdio::Dbckend> sdio_sta_dbckend{0x40012C34u, 0x00000400u, 10};
constexpr Field<Access::RO, sdio::Stbiterr> sdio_sta_stbiterr{0x40012C34u, 0x00000200u, 9};
constexpr Field<Access::RO, sdio::Dataend> sdio_sta_dataend{0x40012C34u, 0x00000100u, 8};
constexpr Field<Access::RO, sdio::Cmdsent> sdio_sta_cmdsent{0x40012C34u, 0x00000080u, 7};
constexpr Field<Access::RO, sdio::Cmdrend> sdio_sta_cmdrend{0x40012C34u, 0x00000040u, 6};
constexpr Field<Access::RO, sdio::Rxoverr> sdio_sta_rxoverr{0x40012C34u, 0x00000020u, 5};
constexpr Field<Access::RO, sdio::Txunderr> sdio_sta_txunderr{0x40012C34u, 0x00000010u, 4};
constexpr Field<Access::RO, sdio::Dtimeout> sdio_sta_dtimeout{0x40012C34u, 0x00000008u, 3};
constexpr Field<Access::RO, sdio::Ctimeout> sdio_sta_ctimeout{0x40012C34u, 0x00000004u, 2};
constexpr Field<Access::RO, sdio::Dcrcfail> sdio_sta_dcrcfail{0x40012C34u, 0x00000002u, 1};
constexpr Field<Access::RO, sdio::Ccrcfail> sdio_sta_ccrcfail{0x40012C34u, 0x00000001u, 0};
constexpr Field<Access::RW, sdio::C> sdio_icr_ceataendc{0x40012C38u, 0x00800000u, 23};
constexpr Field<Access::RW, sdio::C> sdio_icr_sdioitc{0x40012C38u, 0x00400000u, 22};
constexpr Field<Access::RW, sdio::C> sdio_icr_dbckendc{0x40012C38u, 0x00000400u, 10};
constexpr Field<Access::RW, sdio::C> sdio_icr_stbiterrc{0x40012C38u, 0x00000200u, 9};
constexpr Field<Access::RW, sdio::C> sdio_icr_dataendc{0x40012C38u, 0x00000100u, 8};
constexpr Field<Access::RW, sdio::C> sdio_icr_cmdsentc{0x40012C38u, 0x00000080u, 7};
constexpr Field<Access::RW, sdio::C> sdio_icr_cmdrendc{0x40012C38u, 0x00000040u, 6};
constexpr Field<Access::RW, sdio::C> sdio_icr_rxoverrc{0x40012C38u, 0x00000020u, 5};
constexpr Field<Access::RW, sdio::C> sdio_icr_txunderrc{0x40012C38u, 0x00000010u, 4};
constexpr Field<Access::RW, sdio::C> sdio_icr_dtimeoutc{0x40012C38u, 0x00000008u, 3};
constexpr Field<Access::RW, sdio::C> sdio_icr_ctimeoutc{0x40012C38u, 0x00000004u, 2};
constexpr Field<Access::RW, sdio::C> sdio_icr_dcrcfailc{0x40012C38u, 0x00000002u, 1};
constexpr Field<Access::RW, sdio::C> sdio_icr_ccrcfailc{0x40012C38u, 0x00000001u, 0};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_ceataendie{0x40012C3Cu, 0x00800000u, 23};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_sdioitie{0x40012C3Cu, 0x00400000u, 22};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxdavlie{0x40012C3Cu, 0x00200000u, 21};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txdavlie{0x40012C3Cu, 0x00100000u, 20};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxfifoeie{0x40012C3Cu, 0x00080000u, 19};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txfifoeie{0x40012C3Cu, 0x00040000u, 18};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxfifofie{0x40012C3Cu, 0x00020000u, 17};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txfifofie{0x40012C3Cu, 0x00010000u, 16};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxfifohfie{0x40012C3Cu, 0x00008000u, 15};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txfifoheie{0x40012C3Cu, 0x00004000u, 14};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxactie{0x40012C3Cu, 0x00002000u, 13};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txactie{0x40012C3Cu, 0x00001000u, 12};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_cmdactie{0x40012C3Cu, 0x00000800u, 11};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_dbckendie{0x40012C3Cu, 0x00000400u, 10};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_stbiterrie{0x40012C3Cu, 0x00000200u, 9};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_dataendie{0x40012C3Cu, 0x00000100u, 8};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_cmdsentie{0x40012C3Cu, 0x00000080u, 7};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_cmdrendie{0x40012C3Cu, 0x00000040u, 6};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_rxoverrie{0x40012C3Cu, 0x00000020u, 5};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_txunderrie{0x40012C3Cu, 0x00000010u, 4};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_dtimeoutie{0x40012C3Cu, 0x00000008u, 3};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_ctimeoutie{0x40012C3Cu, 0x00000004u, 2};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_dcrcfailie{0x40012C3Cu, 0x00000002u, 1};
constexpr Field<Access::RW, sdio::Ie> sdio_mask_ccrcfailie{0x40012C3Cu, 0x00000001u, 0};
constexpr Field<Access::RO> sdio_fifocnt_fifocount{0x40012C48u, 0x00FFFFFFu, 0};
constexpr Field<Access::RW> sdio_fifo_fifodata{0x40012C80u, 0xFFFFFFFFu, 0};

#endif // STM32_SDIO_HPP
