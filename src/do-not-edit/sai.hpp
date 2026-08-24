// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Serial audio interface
#ifndef STM32_SAI_HPP
#define STM32_SAI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace sai {
enum class Afsdet : uint32_t {
    noerror = 0,
    earlysync = 1,
};
enum class Afsdetie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cafsdet : uint32_t {
    clear = 1,
};
enum class Ccnrdy : uint32_t {
    clear = 1,
};
enum class Ckstr : uint32_t {
    fallingedge = 0,
    risingedge = 1,
};
enum class Clfsdet : uint32_t {
    clear = 1,
};
enum class Cmutedet : uint32_t {
    clear = 1,
};
enum class Cnrdy : uint32_t {
    ready = 0,
    notready = 1,
};
enum class Cnrdyie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Comp : uint32_t {
    nocompanding = 0,
    mulaw = 2,
    alaw = 3,
};
enum class Covrudr : uint32_t {
    clear = 1,
};
enum class Cpl : uint32_t {
    onescomplement = 0,
    twoscomplement = 1,
};
enum class Cwckcfg : uint32_t {
    clear = 1,
};
enum class Dmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ds : uint32_t {
    bit8 = 2,
    bit10 = 3,
    bit16 = 4,
    bit20 = 5,
    bit24 = 6,
    bit32 = 7,
};
enum class Fflush : uint32_t {
    noflush = 0,
    flush = 1,
};
enum class Flth : uint32_t {
    empty = 0,
    quarter1 = 1,
    quarter2 = 2,
    quarter3 = 3,
    quarter4 = 4,
    full = 5,
};
enum class Flvl : uint32_t {
    empty = 0,
    quarter1 = 1,
    quarter2 = 2,
    quarter3 = 3,
    quarter4 = 4,
    full = 5,
};
enum class Freq : uint32_t {
    norequest = 0,
    request = 1,
};
enum class Freqie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fsoff : uint32_t {
    onfirst = 0,
    beforefirst = 1,
};
enum class Fspol : uint32_t {
    fallingedge = 0,
    risingedge = 1,
};
enum class Fth : uint32_t {
    empty = 0,
    quarter1 = 1,
    quarter2 = 2,
    quarter3 = 3,
    full = 4,
};
enum class Lfsdet : uint32_t {
    noerror = 0,
    nosync = 1,
};
enum class Lfsdetie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Lsbfirst : uint32_t {
    msbfirst = 0,
    lsbfirst = 1,
};
enum class Mode : uint32_t {
    mastertx = 0,
    masterrx = 1,
    slavetx = 2,
    slaverx = 3,
};
enum class Mono : uint32_t {
    stereo = 0,
    mono = 1,
};
enum class Mute : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Mutedet : uint32_t {
    nomute = 0,
    mute = 1,
};
enum class Mutedetie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Muteval : uint32_t {
    sendzero = 0,
    sendlast = 1,
};
enum class Nodiv : uint32_t {
    masterclock = 0,
    nodiv = 1,
};
enum class Nomck : uint32_t {
    masterclock = 0,
    nodiv = 1,
};
enum class Outdriv : uint32_t {
    onstart = 0,
    immediately = 1,
};
enum class Ovrudr : uint32_t {
    noerror = 0,
    overrun = 1,
};
enum class Ovrudrie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Prtcfg : uint32_t {
    free = 0,
    spdif = 1,
    ac97 = 2,
};
enum class Saien : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Sloten : uint32_t {
    inactive = 0,
    active = 1,
};
enum class Slotsz : uint32_t {
    datasize = 0,
    bit16 = 1,
    bit32 = 2,
};
enum class Syncen : uint32_t {
    asynchronous = 0,
    internal = 1,
    external = 2,
};
enum class Wckcfg : uint32_t {
    correct = 0,
    wrong = 1,
};
enum class Wckcfgie : uint32_t {
    disabled = 0,
    enabled = 1,
};
} // namespace sai

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t SAI_BASE = 0x40015800;
struct SaiRegs {
    uint32_t _reserved0[1];
    volatile uint32_t acr1; // AConfiguration register 1
    volatile uint32_t acr2; // AConfiguration register 2
    volatile uint32_t afrcr; // AFRCR
    volatile uint32_t aslotr; // ASlot register
    volatile uint32_t aim; // AInterrupt mask register2
    volatile uint32_t asr; // AStatus register
    volatile uint32_t aclrfr; // AClear flag register
    volatile uint32_t adr; // AData register
    volatile uint32_t bcr1; // BConfiguration register 1
    volatile uint32_t bcr2; // BConfiguration register 2
    volatile uint32_t bfrcr; // BFRCR
    volatile uint32_t bslotr; // BSlot register
    volatile uint32_t bim; // BInterrupt mask register2
    volatile uint32_t bsr; // BStatus register
    volatile uint32_t bclrfr; // BClear flag register
    volatile uint32_t bdr; // BData register
};
static_assert(offsetof(SaiRegs, acr1) == 4);
static_assert(offsetof(SaiRegs, acr2) == 8);
static_assert(offsetof(SaiRegs, afrcr) == 12);
static_assert(offsetof(SaiRegs, aslotr) == 16);
static_assert(offsetof(SaiRegs, aim) == 20);
static_assert(offsetof(SaiRegs, asr) == 24);
static_assert(offsetof(SaiRegs, aclrfr) == 28);
static_assert(offsetof(SaiRegs, adr) == 32);
static_assert(offsetof(SaiRegs, bcr1) == 36);
static_assert(offsetof(SaiRegs, bcr2) == 40);
static_assert(offsetof(SaiRegs, bfrcr) == 44);
static_assert(offsetof(SaiRegs, bslotr) == 48);
static_assert(offsetof(SaiRegs, bim) == 52);
static_assert(offsetof(SaiRegs, bsr) == 56);
static_assert(offsetof(SaiRegs, bclrfr) == 60);
static_assert(offsetof(SaiRegs, bdr) == 64);

constexpr Field<Access::RW> sai_acr1_mcjdiv{0x40015804u, 0x00F00000u, 20};
constexpr Field<Access::RW, sai::Nodiv, true, true> sai_acr1_nodiv{0x40015804u, 0x00080000u, 19};
constexpr Field<Access::RW, sai::Dmaen, true, true> sai_acr1_dmaen{0x40015804u, 0x00020000u, 17};
constexpr Field<Access::RW, sai::Saien, true, true> sai_acr1_saiaen{0x40015804u, 0x00010000u, 16};
constexpr Field<Access::RW, uint32_t, true, true> sai_acr1_outdri{0x40015804u, 0x00002000u, 13};
constexpr Field<Access::RW, sai::Mono, true, true> sai_acr1_mono{0x40015804u, 0x00001000u, 12};
constexpr Field<Access::RW, sai::Syncen> sai_acr1_syncen{0x40015804u, 0x00000C00u, 10};
constexpr Field<Access::RW, sai::Ckstr, true, true> sai_acr1_ckstr{0x40015804u, 0x00000200u, 9};
constexpr Field<Access::RW, sai::Lsbfirst, true, true> sai_acr1_lsbfirst{0x40015804u, 0x00000100u, 8};
constexpr Field<Access::RW, sai::Ds> sai_acr1_ds{0x40015804u, 0x000000E0u, 5};
constexpr Field<Access::RW, sai::Prtcfg> sai_acr1_prtcfg{0x40015804u, 0x0000000Cu, 2};
constexpr Field<Access::RW, sai::Mode> sai_acr1_mode{0x40015804u, 0x00000003u, 0};
constexpr Field<Access::RW, sai::Comp> sai_acr2_comp{0x40015808u, 0x0000C000u, 14};
constexpr Field<Access::RW, sai::Cpl, true, true> sai_acr2_cpl{0x40015808u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_acr2_mutecn{0x40015808u, 0x00001F80u, 7};
constexpr Field<Access::RW, sai::Muteval, true, true> sai_acr2_muteval{0x40015808u, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Mute, true, true> sai_acr2_mute{0x40015808u, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true, true> sai_acr2_tris{0x40015808u, 0x00000010u, 4};
constexpr Field<Access::RW, uint32_t, true, true> sai_acr2_fflus{0x40015808u, 0x00000008u, 3};
constexpr Field<Access::RW, sai::Fth> sai_acr2_fth{0x40015808u, 0x00000007u, 0};
constexpr Field<Access::RW, sai::Fsoff, true, true> sai_afrcr_fsoff{0x4001580Cu, 0x00040000u, 18};
constexpr Field<Access::RW, sai::Fspol, true, true> sai_afrcr_fspol{0x4001580Cu, 0x00020000u, 17};
constexpr Field<Access::RW, uint32_t, true, true> sai_afrcr_fsdef{0x4001580Cu, 0x00010000u, 16};
constexpr Field<Access::RW> sai_afrcr_fsall{0x4001580Cu, 0x00007F00u, 8};
constexpr Field<Access::RW> sai_afrcr_frl{0x4001580Cu, 0x000000FFu, 0};
constexpr Field<Access::RW, sai::Sloten> sai_aslotr_sloten{0x40015810u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> sai_aslotr_nbslot{0x40015810u, 0x00000F00u, 8};
constexpr Field<Access::RW, sai::Slotsz> sai_aslotr_slotsz{0x40015810u, 0x000000C0u, 6};
constexpr Field<Access::RW> sai_aslotr_fboff{0x40015810u, 0x0000001Fu, 0};
constexpr Field<Access::RW, uint32_t, true, true> sai_aim_lfsdet{0x40015814u, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Afsdetie, true, true> sai_aim_afsdetie{0x40015814u, 0x00000020u, 5};
constexpr Field<Access::RW, sai::Cnrdyie, true, true> sai_aim_cnrdyie{0x40015814u, 0x00000010u, 4};
constexpr Field<Access::RW, sai::Freqie, true, true> sai_aim_freqie{0x40015814u, 0x00000008u, 3};
constexpr Field<Access::RW, uint32_t, true, true> sai_aim_wckcfg{0x40015814u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, true, true> sai_aim_mutedet{0x40015814u, 0x00000002u, 1};
constexpr Field<Access::RW, sai::Ovrudrie, true, true> sai_aim_ovrudrie{0x40015814u, 0x00000001u, 0};
constexpr Field<Access::RW, sai::Flth> sai_asr_flvl{0x40015818u, 0x00070000u, 16};
constexpr Field<Access::RW, sai::Lfsdet, true, true> sai_asr_lfsdet{0x40015818u, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Afsdet, true, true> sai_asr_afsdet{0x40015818u, 0x00000020u, 5};
constexpr Field<Access::RW, sai::Cnrdy, true, true> sai_asr_cnrdy{0x40015818u, 0x00000010u, 4};
constexpr Field<Access::RW, sai::Freq, true, true> sai_asr_freq{0x40015818u, 0x00000008u, 3};
constexpr Field<Access::RW, sai::Wckcfg, true, true> sai_asr_wckcfg{0x40015818u, 0x00000004u, 2};
constexpr Field<Access::RW, sai::Mutedet, true, true> sai_asr_mutedet{0x40015818u, 0x00000002u, 1};
constexpr Field<Access::RW, sai::Ovrudr, true, true> sai_asr_ovrudr{0x40015818u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, true, true> sai_aclrfr_lfsdet{0x4001581Cu, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Cafsdet, true, true> sai_aclrfr_cafsdet{0x4001581Cu, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true, true> sai_aclrfr_cnrdy{0x4001581Cu, 0x00000010u, 4};
constexpr Field<Access::RW, uint32_t, true, true> sai_aclrfr_wckcfg{0x4001581Cu, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, true, true> sai_aclrfr_mutedet{0x4001581Cu, 0x00000002u, 1};
constexpr Field<Access::RW, uint32_t, true, true> sai_aclrfr_ovrudr{0x4001581Cu, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> sai_adr_data{0x40015820u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sai_bcr1_mcjdiv{0x40015824u, 0x00F00000u, 20};
constexpr Field<Access::RW, sai::Nodiv, true, true> sai_bcr1_nodiv{0x40015824u, 0x00080000u, 19};
constexpr Field<Access::RW, sai::Dmaen, true, true> sai_bcr1_dmaen{0x40015824u, 0x00020000u, 17};
constexpr Field<Access::RW, sai::Saien, true, true> sai_bcr1_saiben{0x40015824u, 0x00010000u, 16};
constexpr Field<Access::RW, uint32_t, true, true> sai_bcr1_outdri{0x40015824u, 0x00002000u, 13};
constexpr Field<Access::RW, sai::Mono, true, true> sai_bcr1_mono{0x40015824u, 0x00001000u, 12};
constexpr Field<Access::RW, sai::Syncen> sai_bcr1_syncen{0x40015824u, 0x00000C00u, 10};
constexpr Field<Access::RW, sai::Ckstr, true, true> sai_bcr1_ckstr{0x40015824u, 0x00000200u, 9};
constexpr Field<Access::RW, sai::Lsbfirst, true, true> sai_bcr1_lsbfirst{0x40015824u, 0x00000100u, 8};
constexpr Field<Access::RW, sai::Ds> sai_bcr1_ds{0x40015824u, 0x000000E0u, 5};
constexpr Field<Access::RW, sai::Prtcfg> sai_bcr1_prtcfg{0x40015824u, 0x0000000Cu, 2};
constexpr Field<Access::RW, sai::Mode> sai_bcr1_mode{0x40015824u, 0x00000003u, 0};
constexpr Field<Access::RW, sai::Comp> sai_bcr2_comp{0x40015828u, 0x0000C000u, 14};
constexpr Field<Access::RW, sai::Cpl, true, true> sai_bcr2_cpl{0x40015828u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_bcr2_mutecn{0x40015828u, 0x00001F80u, 7};
constexpr Field<Access::RW, sai::Muteval, true, true> sai_bcr2_muteval{0x40015828u, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Mute, true, true> sai_bcr2_mute{0x40015828u, 0x00000020u, 5};
constexpr Field<Access::RW, uint32_t, true, true> sai_bcr2_tris{0x40015828u, 0x00000010u, 4};
constexpr Field<Access::RW, uint32_t, true, true> sai_bcr2_fflus{0x40015828u, 0x00000008u, 3};
constexpr Field<Access::RW, sai::Fth> sai_bcr2_fth{0x40015828u, 0x00000007u, 0};
constexpr Field<Access::RW, sai::Fsoff, true, true> sai_bfrcr_fsoff{0x4001582Cu, 0x00040000u, 18};
constexpr Field<Access::RW, sai::Fspol, true, true> sai_bfrcr_fspol{0x4001582Cu, 0x00020000u, 17};
constexpr Field<Access::RW, uint32_t, true, true> sai_bfrcr_fsdef{0x4001582Cu, 0x00010000u, 16};
constexpr Field<Access::RW> sai_bfrcr_fsall{0x4001582Cu, 0x00007F00u, 8};
constexpr Field<Access::RW> sai_bfrcr_frl{0x4001582Cu, 0x000000FFu, 0};
constexpr Field<Access::RW, sai::Sloten> sai_bslotr_sloten{0x40015830u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> sai_bslotr_nbslot{0x40015830u, 0x00000F00u, 8};
constexpr Field<Access::RW, sai::Slotsz> sai_bslotr_slotsz{0x40015830u, 0x000000C0u, 6};
constexpr Field<Access::RW> sai_bslotr_fboff{0x40015830u, 0x0000001Fu, 0};
constexpr Field<Access::RW, sai::Lfsdetie, true, true> sai_bim_lfsdetie{0x40015834u, 0x00000040u, 6};
constexpr Field<Access::RW, sai::Afsdetie, true, true> sai_bim_afsdetie{0x40015834u, 0x00000020u, 5};
constexpr Field<Access::RW, sai::Cnrdyie, true, true> sai_bim_cnrdyie{0x40015834u, 0x00000010u, 4};
constexpr Field<Access::RW, sai::Freqie, true, true> sai_bim_freqie{0x40015834u, 0x00000008u, 3};
constexpr Field<Access::RW, uint32_t, true, true> sai_bim_wckcfg{0x40015834u, 0x00000004u, 2};
constexpr Field<Access::RW, uint32_t, true, true> sai_bim_mutedet{0x40015834u, 0x00000002u, 1};
constexpr Field<Access::RW, sai::Ovrudrie, true, true> sai_bim_ovrudrie{0x40015834u, 0x00000001u, 0};
constexpr Field<Access::RO, sai::Flth> sai_bsr_flvl{0x40015838u, 0x00070000u, 16};
constexpr Field<Access::RO, sai::Lfsdet> sai_bsr_lfsdet{0x40015838u, 0x00000040u, 6};
constexpr Field<Access::RO, sai::Afsdet> sai_bsr_afsdet{0x40015838u, 0x00000020u, 5};
constexpr Field<Access::RO, sai::Cnrdy> sai_bsr_cnrdy{0x40015838u, 0x00000010u, 4};
constexpr Field<Access::RO, sai::Freq> sai_bsr_freq{0x40015838u, 0x00000008u, 3};
constexpr Field<Access::RO, sai::Wckcfg> sai_bsr_wckcfg{0x40015838u, 0x00000004u, 2};
constexpr Field<Access::RO, sai::Mutedet> sai_bsr_mutedet{0x40015838u, 0x00000002u, 1};
constexpr Field<Access::RO, sai::Ovrudr> sai_bsr_ovrudr{0x40015838u, 0x00000001u, 0};
constexpr Field<Access::WO> sai_bclrfr_lfsdet{0x4001583Cu, 0x00000040u, 6};
constexpr Field<Access::WO, sai::Cafsdet> sai_bclrfr_cafsdet{0x4001583Cu, 0x00000020u, 5};
constexpr Field<Access::WO> sai_bclrfr_cnrdy{0x4001583Cu, 0x00000010u, 4};
constexpr Field<Access::WO> sai_bclrfr_wckcfg{0x4001583Cu, 0x00000004u, 2};
constexpr Field<Access::WO> sai_bclrfr_mutedet{0x4001583Cu, 0x00000002u, 1};
constexpr Field<Access::WO> sai_bclrfr_ovrudr{0x4001583Cu, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> sai_bdr_data{0x40015840u, 0xFFFFFFFFu, 0};

#endif // STM32_SAI_HPP
