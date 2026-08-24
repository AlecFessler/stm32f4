// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Flexible memory controller
#ifndef STM32_FMC_HPP
#define STM32_FMC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace fmc {
enum class Accmod : uint32_t {
    a = 0,
    b = 1,
    c = 2,
    d = 3,
};
enum class Asyncwait : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Bursten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Busy : uint32_t {
    notbusy = 0,
    busy = 1,
};
enum class Cas : uint32_t {
    clocks1 = 1,
    clocks2 = 2,
    clocks3 = 3,
};
enum class Cburstrw : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Clk : uint32_t {
    disabled = 0,
    div2 = 2,
    div3 = 3,
};
enum class Cpsize : uint32_t {
    noburstsplit = 0,
    bytes128 = 1,
    bytes256 = 2,
    bytes512 = 3,
    bytes1024 = 4,
};
enum class Cre : uint32_t {
    clear = 1,
};
enum class Ctb : uint32_t {
    notissued = 0,
    issued = 1,
};
enum class Eccen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Eccps : uint32_t {
    bytes256 = 0,
    bytes512 = 1,
    bytes1024 = 2,
    bytes2048 = 3,
    bytes4096 = 4,
    bytes8192 = 5,
};
enum class Extmod : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Faccen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fempt : uint32_t {
    notempty = 0,
    empty = 1,
};
enum class Ifen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ifs : uint32_t {
    didnotoccur = 0,
    occurred = 1,
};
enum class Ilen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ils : uint32_t {
    didnotoccur = 0,
    occurred = 1,
};
enum class Iren : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Irs : uint32_t {
    didnotoccur = 0,
    occurred = 1,
};
enum class Mbken : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Mode : uint32_t {
    normal = 0,
    clockconfigurationenable = 1,
    pall = 2,
    autorefreshcommand = 3,
    loadmoderegister = 4,
    selfrefreshcommand = 5,
    powerdowncommand = 6,
};
enum class Modes : uint32_t {
    normal = 0,
    selfrefresh = 1,
    powerdown = 2,
};
enum class Mtyp : uint32_t {
    sram = 0,
    psram = 1,
    flash = 2,
};
enum class Muxen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Mwid : uint32_t {
    bits8 = 0,
    bits16 = 1,
    bits32 = 2,
};
enum class Nb : uint32_t {
    nb2 = 0,
    nb4 = 1,
};
enum class Nc : uint32_t {
    bits8 = 0,
    bits9 = 1,
    bits10 = 2,
    bits11 = 3,
};
enum class Nr : uint32_t {
    bits11 = 0,
    bits12 = 1,
    bits13 = 2,
};
enum class Pbken : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ptyp : uint32_t {
    nandflash = 1,
};
enum class Pwaiten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pwid : uint32_t {
    bits8 = 0,
    bits16 = 1,
};
enum class Rburst : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Re : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Reie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rpipe : uint32_t {
    nodelay = 0,
    clocks1 = 1,
    clocks2 = 2,
};
enum class Sdclk : uint32_t {
    disabled = 0,
    div2 = 2,
    div3 = 3,
};
enum class Waitcfg : uint32_t {
    beforewaitstate = 0,
    duringwaitstate = 1,
};
enum class Waiten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Waitpol : uint32_t {
    activelow = 0,
    activehigh = 1,
};
enum class Wp : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wrapmod : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wren : uint32_t {
    disabled = 0,
    enabled = 1,
};
} // namespace fmc

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t FMC_BASE = 0xA0000000;
struct FmcRegs {
    volatile uint32_t bcr1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t btr1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t bcr2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t btr2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t bcr3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t btr3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t bcr4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t btr4; // SRAM/NOR-Flash chip-select timing register 4
    uint32_t _reserved0[16];
    volatile uint32_t pcr2; // PC Card/NAND Flash control register 2
    volatile uint32_t sr2; // FIFO status and interrupt register 2
    volatile uint32_t pmem2; // Common memory space timing register 2
    volatile uint32_t patt2; // Attribute memory space timing register 2
    uint32_t _reserved1[1];
    volatile uint32_t eccr2; // ECC result register 2
    uint32_t _reserved2[2];
    volatile uint32_t pcr3; // PC Card/NAND Flash control register 3
    volatile uint32_t sr3; // FIFO status and interrupt register 3
    volatile uint32_t pmem3; // Common memory space timing register 3
    volatile uint32_t patt3; // Attribute memory space timing register 3
    uint32_t _reserved3[1];
    volatile uint32_t eccr3; // ECC result register 3
    uint32_t _reserved4[2];
    volatile uint32_t pcr4; // PC Card/NAND Flash control register 4
    volatile uint32_t sr4; // FIFO status and interrupt register 4
    volatile uint32_t pmem4; // Common memory space timing register 4
    volatile uint32_t patt4; // Attribute memory space timing register 4
    volatile uint32_t pio4; // I/O space timing register 4
    uint32_t _reserved5[20];
    volatile uint32_t bwtr1; // SRAM/NOR-Flash write timing registers 1
    uint32_t _reserved6[1];
    volatile uint32_t bwtr2; // SRAM/NOR-Flash write timing registers 2
    uint32_t _reserved7[1];
    volatile uint32_t bwtr3; // SRAM/NOR-Flash write timing registers 3
    uint32_t _reserved8[1];
    volatile uint32_t bwtr4; // SRAM/NOR-Flash write timing registers 4
    uint32_t _reserved9[8];
    volatile uint32_t sdcr1; // SDRAM Control Register 1
    volatile uint32_t sdcr2; // SDRAM Control Register 2
    volatile uint32_t sdtr1; // SDRAM Timing register 1
    volatile uint32_t sdtr2; // SDRAM Timing register 2
    volatile uint32_t sdcmr; // SDRAM Command Mode register
    volatile uint32_t sdrtr; // SDRAM Refresh Timer register
    volatile uint32_t sdsr; // SDRAM Status register
};
static_assert(offsetof(FmcRegs, bcr1) == 0);
static_assert(offsetof(FmcRegs, btr1) == 4);
static_assert(offsetof(FmcRegs, bcr2) == 8);
static_assert(offsetof(FmcRegs, btr2) == 12);
static_assert(offsetof(FmcRegs, bcr3) == 16);
static_assert(offsetof(FmcRegs, btr3) == 20);
static_assert(offsetof(FmcRegs, bcr4) == 24);
static_assert(offsetof(FmcRegs, btr4) == 28);
static_assert(offsetof(FmcRegs, pcr2) == 96);
static_assert(offsetof(FmcRegs, sr2) == 100);
static_assert(offsetof(FmcRegs, pmem2) == 104);
static_assert(offsetof(FmcRegs, patt2) == 108);
static_assert(offsetof(FmcRegs, eccr2) == 116);
static_assert(offsetof(FmcRegs, pcr3) == 128);
static_assert(offsetof(FmcRegs, sr3) == 132);
static_assert(offsetof(FmcRegs, pmem3) == 136);
static_assert(offsetof(FmcRegs, patt3) == 140);
static_assert(offsetof(FmcRegs, eccr3) == 148);
static_assert(offsetof(FmcRegs, pcr4) == 160);
static_assert(offsetof(FmcRegs, sr4) == 164);
static_assert(offsetof(FmcRegs, pmem4) == 168);
static_assert(offsetof(FmcRegs, patt4) == 172);
static_assert(offsetof(FmcRegs, pio4) == 176);
static_assert(offsetof(FmcRegs, bwtr1) == 260);
static_assert(offsetof(FmcRegs, bwtr2) == 268);
static_assert(offsetof(FmcRegs, bwtr3) == 276);
static_assert(offsetof(FmcRegs, bwtr4) == 284);
static_assert(offsetof(FmcRegs, sdcr1) == 320);
static_assert(offsetof(FmcRegs, sdcr2) == 324);
static_assert(offsetof(FmcRegs, sdtr1) == 328);
static_assert(offsetof(FmcRegs, sdtr2) == 332);
static_assert(offsetof(FmcRegs, sdcmr) == 336);
static_assert(offsetof(FmcRegs, sdrtr) == 340);
static_assert(offsetof(FmcRegs, sdsr) == 344);

constexpr Field<Access::RW> fmc_bcr1_cclken{0xA0000000u, 0x00100000u, 20, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Cburstrw> fmc_bcr1_cburstrw{0xA0000000u, 0x00080000u, 19, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Asyncwait> fmc_bcr1_asyncwait{0xA0000000u, 0x00008000u, 15, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Extmod> fmc_bcr1_extmod{0xA0000000u, 0x00004000u, 14, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waiten> fmc_bcr1_waiten{0xA0000000u, 0x00002000u, 13, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wren> fmc_bcr1_wren{0xA0000000u, 0x00001000u, 12, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitcfg> fmc_bcr1_waitcfg{0xA0000000u, 0x00000800u, 11, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitpol> fmc_bcr1_waitpol{0xA0000000u, 0x00000200u, 9, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Bursten> fmc_bcr1_bursten{0xA0000000u, 0x00000100u, 8, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Faccen> fmc_bcr1_faccen{0xA0000000u, 0x00000040u, 6, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mwid> fmc_bcr1_mwid{0xA0000000u, 0x00000030u, 4, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mtyp> fmc_bcr1_mtyp{0xA0000000u, 0x0000000Cu, 2, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Muxen> fmc_bcr1_muxen{0xA0000000u, 0x00000002u, 1, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mbken> fmc_bcr1_mbken{0xA0000000u, 0x00000001u, 0, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Accmod> fmc_btr1_accmod{0xA0000004u, 0x30000000u, 28, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_datlat{0xA0000004u, 0x0F000000u, 24, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_clkdiv{0xA0000004u, 0x00F00000u, 20, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_busturn{0xA0000004u, 0x000F0000u, 16, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_datast{0xA0000004u, 0x0000FF00u, 8, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_addhld{0xA0000004u, 0x000000F0u, 4, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr1_addset{0xA0000004u, 0x0000000Fu, 0, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW, fmc::Cburstrw> fmc_bcr2_cburstrw{0xA0000008u, 0x00080000u, 19, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Asyncwait> fmc_bcr2_asyncwait{0xA0000008u, 0x00008000u, 15, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Extmod> fmc_bcr2_extmod{0xA0000008u, 0x00004000u, 14, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waiten> fmc_bcr2_waiten{0xA0000008u, 0x00002000u, 13, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wren> fmc_bcr2_wren{0xA0000008u, 0x00001000u, 12, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitcfg> fmc_bcr2_waitcfg{0xA0000008u, 0x00000800u, 11, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wrapmod> fmc_bcr2_wrapmod{0xA0000008u, 0x00000400u, 10, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitpol> fmc_bcr2_waitpol{0xA0000008u, 0x00000200u, 9, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Bursten> fmc_bcr2_bursten{0xA0000008u, 0x00000100u, 8, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Faccen> fmc_bcr2_faccen{0xA0000008u, 0x00000040u, 6, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mwid> fmc_bcr2_mwid{0xA0000008u, 0x00000030u, 4, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mtyp> fmc_bcr2_mtyp{0xA0000008u, 0x0000000Cu, 2, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Muxen> fmc_bcr2_muxen{0xA0000008u, 0x00000002u, 1, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mbken> fmc_bcr2_mbken{0xA0000008u, 0x00000001u, 0, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Accmod> fmc_btr2_accmod{0xA000000Cu, 0x30000000u, 28, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_datlat{0xA000000Cu, 0x0F000000u, 24, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_clkdiv{0xA000000Cu, 0x00F00000u, 20, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_busturn{0xA000000Cu, 0x000F0000u, 16, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_datast{0xA000000Cu, 0x0000FF00u, 8, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_addhld{0xA000000Cu, 0x000000F0u, 4, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr2_addset{0xA000000Cu, 0x0000000Fu, 0, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW, fmc::Cburstrw> fmc_bcr3_cburstrw{0xA0000010u, 0x00080000u, 19, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Asyncwait> fmc_bcr3_asyncwait{0xA0000010u, 0x00008000u, 15, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Extmod> fmc_bcr3_extmod{0xA0000010u, 0x00004000u, 14, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waiten> fmc_bcr3_waiten{0xA0000010u, 0x00002000u, 13, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wren> fmc_bcr3_wren{0xA0000010u, 0x00001000u, 12, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitcfg> fmc_bcr3_waitcfg{0xA0000010u, 0x00000800u, 11, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wrapmod> fmc_bcr3_wrapmod{0xA0000010u, 0x00000400u, 10, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitpol> fmc_bcr3_waitpol{0xA0000010u, 0x00000200u, 9, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Bursten> fmc_bcr3_bursten{0xA0000010u, 0x00000100u, 8, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Faccen> fmc_bcr3_faccen{0xA0000010u, 0x00000040u, 6, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mwid> fmc_bcr3_mwid{0xA0000010u, 0x00000030u, 4, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mtyp> fmc_bcr3_mtyp{0xA0000010u, 0x0000000Cu, 2, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Muxen> fmc_bcr3_muxen{0xA0000010u, 0x00000002u, 1, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mbken> fmc_bcr3_mbken{0xA0000010u, 0x00000001u, 0, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Accmod> fmc_btr3_accmod{0xA0000014u, 0x30000000u, 28, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_datlat{0xA0000014u, 0x0F000000u, 24, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_clkdiv{0xA0000014u, 0x00F00000u, 20, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_busturn{0xA0000014u, 0x000F0000u, 16, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_datast{0xA0000014u, 0x0000FF00u, 8, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_addhld{0xA0000014u, 0x000000F0u, 4, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr3_addset{0xA0000014u, 0x0000000Fu, 0, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW, fmc::Cburstrw> fmc_bcr4_cburstrw{0xA0000018u, 0x00080000u, 19, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Asyncwait> fmc_bcr4_asyncwait{0xA0000018u, 0x00008000u, 15, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Extmod> fmc_bcr4_extmod{0xA0000018u, 0x00004000u, 14, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waiten> fmc_bcr4_waiten{0xA0000018u, 0x00002000u, 13, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wren> fmc_bcr4_wren{0xA0000018u, 0x00001000u, 12, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitcfg> fmc_bcr4_waitcfg{0xA0000018u, 0x00000800u, 11, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Wrapmod> fmc_bcr4_wrapmod{0xA0000018u, 0x00000400u, 10, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Waitpol> fmc_bcr4_waitpol{0xA0000018u, 0x00000200u, 9, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Bursten> fmc_bcr4_bursten{0xA0000018u, 0x00000100u, 8, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Faccen> fmc_bcr4_faccen{0xA0000018u, 0x00000040u, 6, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mwid> fmc_bcr4_mwid{0xA0000018u, 0x00000030u, 4, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mtyp> fmc_bcr4_mtyp{0xA0000018u, 0x0000000Cu, 2, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Muxen> fmc_bcr4_muxen{0xA0000018u, 0x00000002u, 1, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Mbken> fmc_bcr4_mbken{0xA0000018u, 0x00000001u, 0, 0x00000000u, 0x00000080u};
constexpr Field<Access::RW, fmc::Accmod> fmc_btr4_accmod{0xA000001Cu, 0x30000000u, 28, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_datlat{0xA000001Cu, 0x0F000000u, 24, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_clkdiv{0xA000001Cu, 0x00F00000u, 20, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_busturn{0xA000001Cu, 0x000F0000u, 16, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_datast{0xA000001Cu, 0x0000FF00u, 8, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_addhld{0xA000001Cu, 0x000000F0u, 4, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW> fmc_btr4_addset{0xA000001Cu, 0x0000000Fu, 0, 0x00000000u, 0xC0000000u};
constexpr Field<Access::RW, fmc::Eccps> fmc_pcr2_eccps{0xA0000060u, 0x000E0000u, 17};
constexpr Field<Access::RW> fmc_pcr2_tar{0xA0000060u, 0x0001E000u, 13};
constexpr Field<Access::RW> fmc_pcr2_tclr{0xA0000060u, 0x00001E00u, 9};
constexpr Field<Access::RW, fmc::Eccen> fmc_pcr2_eccen{0xA0000060u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Pwid> fmc_pcr2_pwid{0xA0000060u, 0x00000030u, 4};
constexpr Field<Access::RW, fmc::Ptyp> fmc_pcr2_ptyp{0xA0000060u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Pbken> fmc_pcr2_pbken{0xA0000060u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Pwaiten> fmc_pcr2_pwaiten{0xA0000060u, 0x00000002u, 1};
constexpr Field<Access::RO, fmc::Fempt> fmc_sr2_fempt{0xA0000064u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Ifen> fmc_sr2_ifen{0xA0000064u, 0x00000020u, 5};
constexpr Field<Access::RW, fmc::Ilen> fmc_sr2_ilen{0xA0000064u, 0x00000010u, 4};
constexpr Field<Access::RW, fmc::Iren> fmc_sr2_iren{0xA0000064u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Ifs> fmc_sr2_ifs{0xA0000064u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Ils> fmc_sr2_ils{0xA0000064u, 0x00000002u, 1};
constexpr Field<Access::RW, fmc::Irs> fmc_sr2_irs{0xA0000064u, 0x00000001u, 0};
constexpr Field<Access::RW> fmc_pmem2_memhizx{0xA0000068u, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_pmem2_memholdx{0xA0000068u, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_pmem2_memwaitx{0xA0000068u, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_pmem2_memsetx{0xA0000068u, 0x000000FFu, 0};
constexpr Field<Access::RW> fmc_patt2_atthizx{0xA000006Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_patt2_attholdx{0xA000006Cu, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_patt2_attwaitx{0xA000006Cu, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_patt2_attsetx{0xA000006Cu, 0x000000FFu, 0};
constexpr Field<Access::RO> fmc_eccr2_eccx{0xA0000074u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, fmc::Eccps> fmc_pcr3_eccps{0xA0000080u, 0x000E0000u, 17};
constexpr Field<Access::RW> fmc_pcr3_tar{0xA0000080u, 0x0001E000u, 13};
constexpr Field<Access::RW> fmc_pcr3_tclr{0xA0000080u, 0x00001E00u, 9};
constexpr Field<Access::RW, fmc::Eccen> fmc_pcr3_eccen{0xA0000080u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Pwid> fmc_pcr3_pwid{0xA0000080u, 0x00000030u, 4};
constexpr Field<Access::RW, fmc::Ptyp> fmc_pcr3_ptyp{0xA0000080u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Pbken> fmc_pcr3_pbken{0xA0000080u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Pwaiten> fmc_pcr3_pwaiten{0xA0000080u, 0x00000002u, 1};
constexpr Field<Access::RO, fmc::Fempt> fmc_sr3_fempt{0xA0000084u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Ifen> fmc_sr3_ifen{0xA0000084u, 0x00000020u, 5};
constexpr Field<Access::RW, fmc::Ilen> fmc_sr3_ilen{0xA0000084u, 0x00000010u, 4};
constexpr Field<Access::RW, fmc::Iren> fmc_sr3_iren{0xA0000084u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Ifs> fmc_sr3_ifs{0xA0000084u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Ils> fmc_sr3_ils{0xA0000084u, 0x00000002u, 1};
constexpr Field<Access::RW, fmc::Irs> fmc_sr3_irs{0xA0000084u, 0x00000001u, 0};
constexpr Field<Access::RW> fmc_pmem3_memhizx{0xA0000088u, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_pmem3_memholdx{0xA0000088u, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_pmem3_memwaitx{0xA0000088u, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_pmem3_memsetx{0xA0000088u, 0x000000FFu, 0};
constexpr Field<Access::RW> fmc_patt3_atthizx{0xA000008Cu, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_patt3_attholdx{0xA000008Cu, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_patt3_attwaitx{0xA000008Cu, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_patt3_attsetx{0xA000008Cu, 0x000000FFu, 0};
constexpr Field<Access::RO> fmc_eccr3_eccx{0xA0000094u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, fmc::Eccps> fmc_pcr4_eccps{0xA00000A0u, 0x000E0000u, 17};
constexpr Field<Access::RW> fmc_pcr4_tar{0xA00000A0u, 0x0001E000u, 13};
constexpr Field<Access::RW> fmc_pcr4_tclr{0xA00000A0u, 0x00001E00u, 9};
constexpr Field<Access::RW, fmc::Eccen> fmc_pcr4_eccen{0xA00000A0u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Pwid> fmc_pcr4_pwid{0xA00000A0u, 0x00000030u, 4};
constexpr Field<Access::RW, fmc::Ptyp> fmc_pcr4_ptyp{0xA00000A0u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Pbken> fmc_pcr4_pbken{0xA00000A0u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Pwaiten> fmc_pcr4_pwaiten{0xA00000A0u, 0x00000002u, 1};
constexpr Field<Access::RO, fmc::Fempt> fmc_sr4_fempt{0xA00000A4u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Ifen> fmc_sr4_ifen{0xA00000A4u, 0x00000020u, 5};
constexpr Field<Access::RW, fmc::Ilen> fmc_sr4_ilen{0xA00000A4u, 0x00000010u, 4};
constexpr Field<Access::RW, fmc::Iren> fmc_sr4_iren{0xA00000A4u, 0x00000008u, 3};
constexpr Field<Access::RW, fmc::Ifs> fmc_sr4_ifs{0xA00000A4u, 0x00000004u, 2};
constexpr Field<Access::RW, fmc::Ils> fmc_sr4_ils{0xA00000A4u, 0x00000002u, 1};
constexpr Field<Access::RW, fmc::Irs> fmc_sr4_irs{0xA00000A4u, 0x00000001u, 0};
constexpr Field<Access::RW> fmc_pmem4_memhizx{0xA00000A8u, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_pmem4_memholdx{0xA00000A8u, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_pmem4_memwaitx{0xA00000A8u, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_pmem4_memsetx{0xA00000A8u, 0x000000FFu, 0};
constexpr Field<Access::RW> fmc_patt4_atthizx{0xA00000ACu, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_patt4_attholdx{0xA00000ACu, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_patt4_attwaitx{0xA00000ACu, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_patt4_attsetx{0xA00000ACu, 0x000000FFu, 0};
constexpr Field<Access::RW> fmc_pio4_iohizx{0xA00000B0u, 0xFF000000u, 24};
constexpr Field<Access::RW> fmc_pio4_ioholdx{0xA00000B0u, 0x00FF0000u, 16};
constexpr Field<Access::RW> fmc_pio4_iowaitx{0xA00000B0u, 0x0000FF00u, 8};
constexpr Field<Access::RW> fmc_pio4_iosetx{0xA00000B0u, 0x000000FFu, 0};
constexpr Field<Access::RW, fmc::Accmod> fmc_bwtr1_accmod{0xA0000104u, 0x30000000u, 28, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr1_datlat{0xA0000104u, 0x0F000000u, 24, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr1_clkdiv{0xA0000104u, 0x00F00000u, 20, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr1_datast{0xA0000104u, 0x0000FF00u, 8, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr1_addhld{0xA0000104u, 0x000000F0u, 4, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr1_addset{0xA0000104u, 0x0000000Fu, 0, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW, fmc::Accmod> fmc_bwtr2_accmod{0xA000010Cu, 0x30000000u, 28, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr2_datlat{0xA000010Cu, 0x0F000000u, 24, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr2_clkdiv{0xA000010Cu, 0x00F00000u, 20, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr2_datast{0xA000010Cu, 0x0000FF00u, 8, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr2_addhld{0xA000010Cu, 0x000000F0u, 4, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr2_addset{0xA000010Cu, 0x0000000Fu, 0, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW, fmc::Accmod> fmc_bwtr3_accmod{0xA0000114u, 0x30000000u, 28, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr3_datlat{0xA0000114u, 0x0F000000u, 24, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr3_clkdiv{0xA0000114u, 0x00F00000u, 20, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr3_datast{0xA0000114u, 0x0000FF00u, 8, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr3_addhld{0xA0000114u, 0x000000F0u, 4, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr3_addset{0xA0000114u, 0x0000000Fu, 0, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW, fmc::Accmod> fmc_bwtr4_accmod{0xA000011Cu, 0x30000000u, 28, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr4_datlat{0xA000011Cu, 0x0F000000u, 24, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr4_clkdiv{0xA000011Cu, 0x00F00000u, 20, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr4_datast{0xA000011Cu, 0x0000FF00u, 8, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr4_addhld{0xA000011Cu, 0x000000F0u, 4, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW> fmc_bwtr4_addset{0xA000011Cu, 0x0000000Fu, 0, 0x00000000u, 0x000F0000u};
constexpr Field<Access::RW, fmc::Nc> fmc_sdcr1_nc{0xA0000140u, 0x00000003u, 0};
constexpr Field<Access::RW, fmc::Nr> fmc_sdcr1_nr{0xA0000140u, 0x0000000Cu, 2};
constexpr Field<Access::RW, fmc::Mwid> fmc_sdcr1_mwid{0xA0000140u, 0x00000030u, 4};
constexpr Field<Access::RW, fmc::Nb> fmc_sdcr1_nb{0xA0000140u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Cas> fmc_sdcr1_cas{0xA0000140u, 0x00000180u, 7};
constexpr Field<Access::RW, fmc::Wp> fmc_sdcr1_wp{0xA0000140u, 0x00000200u, 9};
constexpr Field<Access::RW, fmc::Sdclk> fmc_sdcr1_sdclk{0xA0000140u, 0x00000C00u, 10};
constexpr Field<Access::RW, fmc::Rburst> fmc_sdcr1_rburst{0xA0000140u, 0x00001000u, 12};
constexpr Field<Access::RW, fmc::Rpipe> fmc_sdcr1_rpipe{0xA0000140u, 0x00006000u, 13};
constexpr Field<Access::RW, fmc::Nc> fmc_sdcr2_nc{0xA0000144u, 0x00000003u, 0};
constexpr Field<Access::RW, fmc::Nr> fmc_sdcr2_nr{0xA0000144u, 0x0000000Cu, 2};
constexpr Field<Access::RW, fmc::Mwid> fmc_sdcr2_mwid{0xA0000144u, 0x00000030u, 4};
constexpr Field<Access::RW, fmc::Nb> fmc_sdcr2_nb{0xA0000144u, 0x00000040u, 6};
constexpr Field<Access::RW, fmc::Cas> fmc_sdcr2_cas{0xA0000144u, 0x00000180u, 7};
constexpr Field<Access::RW, fmc::Wp> fmc_sdcr2_wp{0xA0000144u, 0x00000200u, 9};
constexpr Field<Access::RW, fmc::Sdclk> fmc_sdcr2_sdclk{0xA0000144u, 0x00000C00u, 10};
constexpr Field<Access::RW, fmc::Rburst> fmc_sdcr2_rburst{0xA0000144u, 0x00001000u, 12};
constexpr Field<Access::RW, fmc::Rpipe> fmc_sdcr2_rpipe{0xA0000144u, 0x00006000u, 13};
constexpr Field<Access::RW> fmc_sdtr1_tmrd{0xA0000148u, 0x0000000Fu, 0};
constexpr Field<Access::RW> fmc_sdtr1_txsr{0xA0000148u, 0x000000F0u, 4};
constexpr Field<Access::RW> fmc_sdtr1_tras{0xA0000148u, 0x00000F00u, 8};
constexpr Field<Access::RW> fmc_sdtr1_trc{0xA0000148u, 0x0000F000u, 12};
constexpr Field<Access::RW> fmc_sdtr1_twr{0xA0000148u, 0x000F0000u, 16};
constexpr Field<Access::RW> fmc_sdtr1_trp{0xA0000148u, 0x00F00000u, 20};
constexpr Field<Access::RW> fmc_sdtr1_trcd{0xA0000148u, 0x0F000000u, 24};
constexpr Field<Access::RW> fmc_sdtr2_tmrd{0xA000014Cu, 0x0000000Fu, 0};
constexpr Field<Access::RW> fmc_sdtr2_txsr{0xA000014Cu, 0x000000F0u, 4};
constexpr Field<Access::RW> fmc_sdtr2_tras{0xA000014Cu, 0x00000F00u, 8};
constexpr Field<Access::RW> fmc_sdtr2_trc{0xA000014Cu, 0x0000F000u, 12};
constexpr Field<Access::RW> fmc_sdtr2_twr{0xA000014Cu, 0x000F0000u, 16};
constexpr Field<Access::RW> fmc_sdtr2_trp{0xA000014Cu, 0x00F00000u, 20};
constexpr Field<Access::RW> fmc_sdtr2_trcd{0xA000014Cu, 0x0F000000u, 24};
constexpr Field<Access::WO, fmc::Mode> fmc_sdcmr_mode{0xA0000150u, 0x00000007u, 0};
constexpr Field<Access::RW> fmc_sdcmr_nrfs{0xA0000150u, 0x000001E0u, 5};
constexpr Field<Access::RW> fmc_sdcmr_mrd{0xA0000150u, 0x003FFE00u, 9};
constexpr Field<Access::WO, fmc::Ctb> fmc_sdcmr_ctb2{0xA0000150u, 0x00000008u, 3};
constexpr Field<Access::WO, fmc::Ctb> fmc_sdcmr_ctb1{0xA0000150u, 0x00000010u, 4};
constexpr Field<Access::WO, fmc::Cre> fmc_sdrtr_cre{0xA0000154u, 0x00000001u, 0};
constexpr Field<Access::RW> fmc_sdrtr_count{0xA0000154u, 0x00003FFEu, 1};
constexpr Field<Access::RW, fmc::Reie> fmc_sdrtr_reie{0xA0000154u, 0x00004000u, 14};
constexpr Field<Access::RO, fmc::Re> fmc_sdsr_re{0xA0000158u, 0x00000001u, 0};
constexpr Field<Access::RO, fmc::Busy> fmc_sdsr_busy{0xA0000158u, 0x00000020u, 5};
constexpr Field<Access::RO, fmc::Modes> fmc_sdsr_modes1{0xA0000158u, 0x00000006u, 1};
constexpr Field<Access::RO, fmc::Modes> fmc_sdsr_modes2{0xA0000158u, 0x00000018u, 3};

#endif // STM32_FMC_HPP
