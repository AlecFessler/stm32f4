// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Serial audio interface
#ifndef STM32_SAI_HPP
#define STM32_SAI_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

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
constexpr Field<Access::RW> sai_acr1_nodiv{0x40015804u, 0x00080000u, 19};
constexpr Field<Access::RW> sai_acr1_dmaen{0x40015804u, 0x00020000u, 17};
constexpr Field<Access::RW> sai_acr1_saiaen{0x40015804u, 0x00010000u, 16};
constexpr Field<Access::RW> sai_acr1_outdri{0x40015804u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_acr1_mono{0x40015804u, 0x00001000u, 12};
constexpr Field<Access::RW> sai_acr1_syncen{0x40015804u, 0x00000C00u, 10};
constexpr Field<Access::RW> sai_acr1_ckstr{0x40015804u, 0x00000200u, 9};
constexpr Field<Access::RW> sai_acr1_lsbfirst{0x40015804u, 0x00000100u, 8};
constexpr Field<Access::RW> sai_acr1_ds{0x40015804u, 0x000000E0u, 5};
constexpr Field<Access::RW> sai_acr1_prtcfg{0x40015804u, 0x0000000Cu, 2};
constexpr Field<Access::RW> sai_acr1_mode{0x40015804u, 0x00000003u, 0};
constexpr Field<Access::RW> sai_acr2_comp{0x40015808u, 0x0000C000u, 14};
constexpr Field<Access::RW> sai_acr2_cpl{0x40015808u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_acr2_mutecn{0x40015808u, 0x00001F80u, 7};
constexpr Field<Access::RW> sai_acr2_muteval{0x40015808u, 0x00000040u, 6};
constexpr Field<Access::RW> sai_acr2_mute{0x40015808u, 0x00000020u, 5};
constexpr Field<Access::RW> sai_acr2_tris{0x40015808u, 0x00000010u, 4};
constexpr Field<Access::RW> sai_acr2_fflus{0x40015808u, 0x00000008u, 3};
constexpr Field<Access::RW> sai_acr2_fth{0x40015808u, 0x00000007u, 0};
constexpr Field<Access::RW> sai_afrcr_fsoff{0x4001580Cu, 0x00040000u, 18};
constexpr Field<Access::RW> sai_afrcr_fspol{0x4001580Cu, 0x00020000u, 17};
constexpr Field<Access::RW> sai_afrcr_fsdef{0x4001580Cu, 0x00010000u, 16};
constexpr Field<Access::RW> sai_afrcr_fsall{0x4001580Cu, 0x00007F00u, 8};
constexpr Field<Access::RW> sai_afrcr_frl{0x4001580Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> sai_aslotr_sloten{0x40015810u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> sai_aslotr_nbslot{0x40015810u, 0x00000F00u, 8};
constexpr Field<Access::RW> sai_aslotr_slotsz{0x40015810u, 0x000000C0u, 6};
constexpr Field<Access::RW> sai_aslotr_fboff{0x40015810u, 0x0000001Fu, 0};
constexpr Field<Access::RW> sai_aim_lfsdet{0x40015814u, 0x00000040u, 6};
constexpr Field<Access::RW> sai_aim_afsdetie{0x40015814u, 0x00000020u, 5};
constexpr Field<Access::RW> sai_aim_cnrdyie{0x40015814u, 0x00000010u, 4};
constexpr Field<Access::RW> sai_aim_freqie{0x40015814u, 0x00000008u, 3};
constexpr Field<Access::RW> sai_aim_wckcfg{0x40015814u, 0x00000004u, 2};
constexpr Field<Access::RW> sai_aim_mutedet{0x40015814u, 0x00000002u, 1};
constexpr Field<Access::RW> sai_aim_ovrudrie{0x40015814u, 0x00000001u, 0};
constexpr Field<Access::RW> sai_asr_flvl{0x40015818u, 0x00070000u, 16};
constexpr Field<Access::RW> sai_asr_lfsdet{0x40015818u, 0x00000040u, 6};
constexpr Field<Access::RW> sai_asr_afsdet{0x40015818u, 0x00000020u, 5};
constexpr Field<Access::RW> sai_asr_cnrdy{0x40015818u, 0x00000010u, 4};
constexpr Field<Access::RW> sai_asr_freq{0x40015818u, 0x00000008u, 3};
constexpr Field<Access::RW> sai_asr_wckcfg{0x40015818u, 0x00000004u, 2};
constexpr Field<Access::RW> sai_asr_mutedet{0x40015818u, 0x00000002u, 1};
constexpr Field<Access::RW> sai_asr_ovrudr{0x40015818u, 0x00000001u, 0};
constexpr Field<Access::RW> sai_aclrfr_lfsdet{0x4001581Cu, 0x00000040u, 6};
constexpr Field<Access::RW> sai_aclrfr_cafsdet{0x4001581Cu, 0x00000020u, 5};
constexpr Field<Access::RW> sai_aclrfr_cnrdy{0x4001581Cu, 0x00000010u, 4};
constexpr Field<Access::RW> sai_aclrfr_wckcfg{0x4001581Cu, 0x00000004u, 2};
constexpr Field<Access::RW> sai_aclrfr_mutedet{0x4001581Cu, 0x00000002u, 1};
constexpr Field<Access::RW> sai_aclrfr_ovrudr{0x4001581Cu, 0x00000001u, 0};
constexpr Field<Access::RW> sai_adr_data{0x40015820u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> sai_bcr1_mcjdiv{0x40015824u, 0x00F00000u, 20};
constexpr Field<Access::RW> sai_bcr1_nodiv{0x40015824u, 0x00080000u, 19};
constexpr Field<Access::RW> sai_bcr1_dmaen{0x40015824u, 0x00020000u, 17};
constexpr Field<Access::RW> sai_bcr1_saiben{0x40015824u, 0x00010000u, 16};
constexpr Field<Access::RW> sai_bcr1_outdri{0x40015824u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_bcr1_mono{0x40015824u, 0x00001000u, 12};
constexpr Field<Access::RW> sai_bcr1_syncen{0x40015824u, 0x00000C00u, 10};
constexpr Field<Access::RW> sai_bcr1_ckstr{0x40015824u, 0x00000200u, 9};
constexpr Field<Access::RW> sai_bcr1_lsbfirst{0x40015824u, 0x00000100u, 8};
constexpr Field<Access::RW> sai_bcr1_ds{0x40015824u, 0x000000E0u, 5};
constexpr Field<Access::RW> sai_bcr1_prtcfg{0x40015824u, 0x0000000Cu, 2};
constexpr Field<Access::RW> sai_bcr1_mode{0x40015824u, 0x00000003u, 0};
constexpr Field<Access::RW> sai_bcr2_comp{0x40015828u, 0x0000C000u, 14};
constexpr Field<Access::RW> sai_bcr2_cpl{0x40015828u, 0x00002000u, 13};
constexpr Field<Access::RW> sai_bcr2_mutecn{0x40015828u, 0x00001F80u, 7};
constexpr Field<Access::RW> sai_bcr2_muteval{0x40015828u, 0x00000040u, 6};
constexpr Field<Access::RW> sai_bcr2_mute{0x40015828u, 0x00000020u, 5};
constexpr Field<Access::RW> sai_bcr2_tris{0x40015828u, 0x00000010u, 4};
constexpr Field<Access::RW> sai_bcr2_fflus{0x40015828u, 0x00000008u, 3};
constexpr Field<Access::RW> sai_bcr2_fth{0x40015828u, 0x00000007u, 0};
constexpr Field<Access::RW> sai_bfrcr_fsoff{0x4001582Cu, 0x00040000u, 18};
constexpr Field<Access::RW> sai_bfrcr_fspol{0x4001582Cu, 0x00020000u, 17};
constexpr Field<Access::RW> sai_bfrcr_fsdef{0x4001582Cu, 0x00010000u, 16};
constexpr Field<Access::RW> sai_bfrcr_fsall{0x4001582Cu, 0x00007F00u, 8};
constexpr Field<Access::RW> sai_bfrcr_frl{0x4001582Cu, 0x000000FFu, 0};
constexpr Field<Access::RW> sai_bslotr_sloten{0x40015830u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> sai_bslotr_nbslot{0x40015830u, 0x00000F00u, 8};
constexpr Field<Access::RW> sai_bslotr_slotsz{0x40015830u, 0x000000C0u, 6};
constexpr Field<Access::RW> sai_bslotr_fboff{0x40015830u, 0x0000001Fu, 0};
constexpr Field<Access::RW> sai_bim_lfsdetie{0x40015834u, 0x00000040u, 6};
constexpr Field<Access::RW> sai_bim_afsdetie{0x40015834u, 0x00000020u, 5};
constexpr Field<Access::RW> sai_bim_cnrdyie{0x40015834u, 0x00000010u, 4};
constexpr Field<Access::RW> sai_bim_freqie{0x40015834u, 0x00000008u, 3};
constexpr Field<Access::RW> sai_bim_wckcfg{0x40015834u, 0x00000004u, 2};
constexpr Field<Access::RW> sai_bim_mutedet{0x40015834u, 0x00000002u, 1};
constexpr Field<Access::RW> sai_bim_ovrudrie{0x40015834u, 0x00000001u, 0};
constexpr Field<Access::RO> sai_bsr_flvl{0x40015838u, 0x00070000u, 16};
constexpr Field<Access::RO> sai_bsr_lfsdet{0x40015838u, 0x00000040u, 6};
constexpr Field<Access::RO> sai_bsr_afsdet{0x40015838u, 0x00000020u, 5};
constexpr Field<Access::RO> sai_bsr_cnrdy{0x40015838u, 0x00000010u, 4};
constexpr Field<Access::RO> sai_bsr_freq{0x40015838u, 0x00000008u, 3};
constexpr Field<Access::RO> sai_bsr_wckcfg{0x40015838u, 0x00000004u, 2};
constexpr Field<Access::RO> sai_bsr_mutedet{0x40015838u, 0x00000002u, 1};
constexpr Field<Access::RO> sai_bsr_ovrudr{0x40015838u, 0x00000001u, 0};
constexpr Field<Access::WO> sai_bclrfr_lfsdet{0x4001583Cu, 0x00000040u, 6};
constexpr Field<Access::WO> sai_bclrfr_cafsdet{0x4001583Cu, 0x00000020u, 5};
constexpr Field<Access::WO> sai_bclrfr_cnrdy{0x4001583Cu, 0x00000010u, 4};
constexpr Field<Access::WO> sai_bclrfr_wckcfg{0x4001583Cu, 0x00000004u, 2};
constexpr Field<Access::WO> sai_bclrfr_mutedet{0x4001583Cu, 0x00000002u, 1};
constexpr Field<Access::WO> sai_bclrfr_ovrudr{0x4001583Cu, 0x00000001u, 0};
constexpr Field<Access::RW> sai_bdr_data{0x40015840u, 0xFFFFFFFFu, 0};

namespace sai::afsdet {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t earlysync = 1;
}
namespace sai::afsdetie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::cafsdet {
    constexpr uint32_t clear = 1;
}
namespace sai::ccnrdy {
    constexpr uint32_t clear = 1;
}
namespace sai::ckstr {
    constexpr uint32_t fallingedge = 0;
    constexpr uint32_t risingedge = 1;
}
namespace sai::clfsdet {
    constexpr uint32_t clear = 1;
}
namespace sai::cmutedet {
    constexpr uint32_t clear = 1;
}
namespace sai::cnrdy {
    constexpr uint32_t ready = 0;
    constexpr uint32_t notready = 1;
}
namespace sai::cnrdyie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::comp {
    constexpr uint32_t nocompanding = 0;
    constexpr uint32_t mulaw = 2;
    constexpr uint32_t alaw = 3;
}
namespace sai::covrudr {
    constexpr uint32_t clear = 1;
}
namespace sai::cpl {
    constexpr uint32_t onescomplement = 0;
    constexpr uint32_t twoscomplement = 1;
}
namespace sai::cwckcfg {
    constexpr uint32_t clear = 1;
}
namespace sai::dmaen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::ds {
    constexpr uint32_t bit8 = 2;
    constexpr uint32_t bit10 = 3;
    constexpr uint32_t bit16 = 4;
    constexpr uint32_t bit20 = 5;
    constexpr uint32_t bit24 = 6;
    constexpr uint32_t bit32 = 7;
}
namespace sai::fflush {
    constexpr uint32_t noflush = 0;
    constexpr uint32_t flush = 1;
}
namespace sai::flth {
    constexpr uint32_t empty = 0;
    constexpr uint32_t quarter1 = 1;
    constexpr uint32_t quarter2 = 2;
    constexpr uint32_t quarter3 = 3;
    constexpr uint32_t quarter4 = 4;
    constexpr uint32_t full = 5;
}
namespace sai::flvl {
    constexpr uint32_t empty = 0;
    constexpr uint32_t quarter1 = 1;
    constexpr uint32_t quarter2 = 2;
    constexpr uint32_t quarter3 = 3;
    constexpr uint32_t quarter4 = 4;
    constexpr uint32_t full = 5;
}
namespace sai::freq {
    constexpr uint32_t norequest = 0;
    constexpr uint32_t request = 1;
}
namespace sai::freqie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::fsoff {
    constexpr uint32_t onfirst = 0;
    constexpr uint32_t beforefirst = 1;
}
namespace sai::fspol {
    constexpr uint32_t fallingedge = 0;
    constexpr uint32_t risingedge = 1;
}
namespace sai::fth {
    constexpr uint32_t empty = 0;
    constexpr uint32_t quarter1 = 1;
    constexpr uint32_t quarter2 = 2;
    constexpr uint32_t quarter3 = 3;
    constexpr uint32_t full = 4;
}
namespace sai::lfsdet {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t nosync = 1;
}
namespace sai::lfsdetie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::lsbfirst {
    constexpr uint32_t msbfirst = 0;
    constexpr uint32_t lsbfirst = 1;
}
namespace sai::mode {
    constexpr uint32_t mastertx = 0;
    constexpr uint32_t masterrx = 1;
    constexpr uint32_t slavetx = 2;
    constexpr uint32_t slaverx = 3;
}
namespace sai::mono {
    constexpr uint32_t stereo = 0;
    constexpr uint32_t mono = 1;
}
namespace sai::mute {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::mutedet {
    constexpr uint32_t nomute = 0;
    constexpr uint32_t mute = 1;
}
namespace sai::mutedetie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::muteval {
    constexpr uint32_t sendzero = 0;
    constexpr uint32_t sendlast = 1;
}
namespace sai::nodiv {
    constexpr uint32_t masterclock = 0;
    constexpr uint32_t nodiv = 1;
}
namespace sai::nomck {
    constexpr uint32_t masterclock = 0;
    constexpr uint32_t nodiv = 1;
}
namespace sai::outdriv {
    constexpr uint32_t onstart = 0;
    constexpr uint32_t immediately = 1;
}
namespace sai::ovrudr {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t overrun = 1;
}
namespace sai::ovrudrie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::prtcfg {
    constexpr uint32_t free = 0;
    constexpr uint32_t spdif = 1;
    constexpr uint32_t ac97 = 2;
}
namespace sai::saien {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace sai::sloten {
    constexpr uint32_t inactive = 0;
    constexpr uint32_t active = 1;
}
namespace sai::slotsz {
    constexpr uint32_t datasize = 0;
    constexpr uint32_t bit16 = 1;
    constexpr uint32_t bit32 = 2;
}
namespace sai::syncen {
    constexpr uint32_t asynchronous = 0;
    constexpr uint32_t internal = 1;
    constexpr uint32_t external = 2;
}
namespace sai::wckcfg {
    constexpr uint32_t correct = 0;
    constexpr uint32_t wrong = 1;
}
namespace sai::wckcfgie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}

#endif // STM32_SAI_HPP
