// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Cryptographic processor
#ifndef CRYP_HPP
#define CRYP_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t CRYP_BASE = 0x50060000;
struct CrypRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t sr; // status register
    volatile uint32_t din; // data input register
    volatile uint32_t dout; // data output register
    volatile uint32_t dmacr; // DMA control register
    volatile uint32_t imscr; // interrupt mask set/clear register
    volatile uint32_t risr; // raw interrupt status register
    volatile uint32_t misr; // masked interrupt status register
    volatile uint32_t k0lr; // key registers
    volatile uint32_t k0rr; // key registers
    volatile uint32_t k1lr; // key registers
    volatile uint32_t k1rr; // key registers
    volatile uint32_t k2lr; // key registers
    volatile uint32_t k2rr; // key registers
    volatile uint32_t k3lr; // key registers
    volatile uint32_t k3rr; // key registers
    volatile uint32_t iv0lr; // initialization vector registers
    volatile uint32_t iv0rr; // initialization vector registers
    volatile uint32_t iv1lr; // initialization vector registers
    volatile uint32_t iv1rr; // initialization vector registers
    volatile uint32_t csgcmccm0r; // context swap register
    volatile uint32_t csgcmccm1r; // context swap register
    volatile uint32_t csgcmccm2r; // context swap register
    volatile uint32_t csgcmccm3r; // context swap register
    volatile uint32_t csgcmccm4r; // context swap register
    volatile uint32_t csgcmccm5r; // context swap register
    volatile uint32_t csgcmccm6r; // context swap register
    volatile uint32_t csgcmccm7r; // context swap register
    volatile uint32_t csgcm0r; // context swap register
    volatile uint32_t csgcm1r; // context swap register
    volatile uint32_t csgcm2r; // context swap register
    volatile uint32_t csgcm3r; // context swap register
    volatile uint32_t csgcm4r; // context swap register
    volatile uint32_t csgcm5r; // context swap register
    volatile uint32_t csgcm6r; // context swap register
    volatile uint32_t csgcm7r; // context swap register
};

static_assert(offsetof(CrypRegs, cr) == 0);
static_assert(offsetof(CrypRegs, sr) == 4);
static_assert(offsetof(CrypRegs, din) == 8);
static_assert(offsetof(CrypRegs, dout) == 12);
static_assert(offsetof(CrypRegs, dmacr) == 16);
static_assert(offsetof(CrypRegs, imscr) == 20);
static_assert(offsetof(CrypRegs, risr) == 24);
static_assert(offsetof(CrypRegs, misr) == 28);
static_assert(offsetof(CrypRegs, k0lr) == 32);
static_assert(offsetof(CrypRegs, k0rr) == 36);
static_assert(offsetof(CrypRegs, k1lr) == 40);
static_assert(offsetof(CrypRegs, k1rr) == 44);
static_assert(offsetof(CrypRegs, k2lr) == 48);
static_assert(offsetof(CrypRegs, k2rr) == 52);
static_assert(offsetof(CrypRegs, k3lr) == 56);
static_assert(offsetof(CrypRegs, k3rr) == 60);
static_assert(offsetof(CrypRegs, iv0lr) == 64);
static_assert(offsetof(CrypRegs, iv0rr) == 68);
static_assert(offsetof(CrypRegs, iv1lr) == 72);
static_assert(offsetof(CrypRegs, iv1rr) == 76);
static_assert(offsetof(CrypRegs, csgcmccm0r) == 80);
static_assert(offsetof(CrypRegs, csgcmccm1r) == 84);
static_assert(offsetof(CrypRegs, csgcmccm2r) == 88);
static_assert(offsetof(CrypRegs, csgcmccm3r) == 92);
static_assert(offsetof(CrypRegs, csgcmccm4r) == 96);
static_assert(offsetof(CrypRegs, csgcmccm5r) == 100);
static_assert(offsetof(CrypRegs, csgcmccm6r) == 104);
static_assert(offsetof(CrypRegs, csgcmccm7r) == 108);
static_assert(offsetof(CrypRegs, csgcm0r) == 112);
static_assert(offsetof(CrypRegs, csgcm1r) == 116);
static_assert(offsetof(CrypRegs, csgcm2r) == 120);
static_assert(offsetof(CrypRegs, csgcm3r) == 124);
static_assert(offsetof(CrypRegs, csgcm4r) == 128);
static_assert(offsetof(CrypRegs, csgcm5r) == 132);
static_assert(offsetof(CrypRegs, csgcm6r) == 136);
static_assert(offsetof(CrypRegs, csgcm7r) == 140);

constexpr Field<Access::RW> cryp_cr_algodir{0x50060000u, 0x00000004u, 2};
constexpr Field<Access::RW> cryp_cr_algomode0{0x50060000u, 0x00000038u, 3};
constexpr Field<Access::RW> cryp_cr_datatype{0x50060000u, 0x000000C0u, 6};
constexpr Field<Access::RW> cryp_cr_keysize{0x50060000u, 0x00000300u, 8};
constexpr Field<Access::WO> cryp_cr_fflush{0x50060000u, 0x00004000u, 14};
constexpr Field<Access::RW> cryp_cr_crypen{0x50060000u, 0x00008000u, 15};
constexpr Field<Access::RW> cryp_cr_gcm_ccmph{0x50060000u, 0x00030000u, 16};
constexpr Field<Access::RW> cryp_cr_algomode3{0x50060000u, 0x00080000u, 19};
constexpr Field<Access::RO> cryp_sr_busy{0x50060004u, 0x00000010u, 4};
constexpr Field<Access::RO> cryp_sr_offu{0x50060004u, 0x00000008u, 3};
constexpr Field<Access::RO> cryp_sr_ofne{0x50060004u, 0x00000004u, 2};
constexpr Field<Access::RO> cryp_sr_ifnf{0x50060004u, 0x00000002u, 1};
constexpr Field<Access::RO> cryp_sr_ifem{0x50060004u, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_din_datain{0x50060008u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RO> cryp_dout_dataout{0x5006000Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_dmacr_doen{0x50060010u, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_dmacr_dien{0x50060010u, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_imscr_outim{0x50060014u, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_imscr_inim{0x50060014u, 0x00000001u, 0};
constexpr Field<Access::RO> cryp_risr_outris{0x50060018u, 0x00000002u, 1};
constexpr Field<Access::RO> cryp_risr_inris{0x50060018u, 0x00000001u, 0};
constexpr Field<Access::RO> cryp_misr_outmis{0x5006001Cu, 0x00000002u, 1};
constexpr Field<Access::RO> cryp_misr_inmis{0x5006001Cu, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k0lr_b224{0x50060020u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k0lr_b225{0x50060020u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k0lr_b226{0x50060020u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k0lr_b227{0x50060020u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k0lr_b228{0x50060020u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k0lr_b229{0x50060020u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k0lr_b230{0x50060020u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k0lr_b231{0x50060020u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k0lr_b232{0x50060020u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k0lr_b233{0x50060020u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k0lr_b234{0x50060020u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k0lr_b235{0x50060020u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k0lr_b236{0x50060020u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k0lr_b237{0x50060020u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k0lr_b238{0x50060020u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k0lr_b239{0x50060020u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k0lr_b240{0x50060020u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k0lr_b241{0x50060020u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k0lr_b242{0x50060020u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k0lr_b243{0x50060020u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k0lr_b244{0x50060020u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k0lr_b245{0x50060020u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k0lr_b246{0x50060020u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k0lr_b247{0x50060020u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k0lr_b248{0x50060020u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k0lr_b249{0x50060020u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k0lr_b250{0x50060020u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k0lr_b251{0x50060020u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k0lr_b252{0x50060020u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k0lr_b253{0x50060020u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k0lr_b254{0x50060020u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k0lr_b255{0x50060020u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k0rr_b192{0x50060024u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k0rr_b193{0x50060024u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k0rr_b194{0x50060024u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k0rr_b195{0x50060024u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k0rr_b196{0x50060024u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k0rr_b197{0x50060024u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k0rr_b198{0x50060024u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k0rr_b199{0x50060024u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k0rr_b200{0x50060024u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k0rr_b201{0x50060024u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k0rr_b202{0x50060024u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k0rr_b203{0x50060024u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k0rr_b204{0x50060024u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k0rr_b205{0x50060024u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k0rr_b206{0x50060024u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k0rr_b207{0x50060024u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k0rr_b208{0x50060024u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k0rr_b209{0x50060024u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k0rr_b210{0x50060024u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k0rr_b211{0x50060024u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k0rr_b212{0x50060024u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k0rr_b213{0x50060024u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k0rr_b214{0x50060024u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k0rr_b215{0x50060024u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k0rr_b216{0x50060024u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k0rr_b217{0x50060024u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k0rr_b218{0x50060024u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k0rr_b219{0x50060024u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k0rr_b220{0x50060024u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k0rr_b221{0x50060024u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k0rr_b222{0x50060024u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k0rr_b223{0x50060024u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k1lr_b160{0x50060028u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k1lr_b161{0x50060028u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k1lr_b162{0x50060028u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k1lr_b163{0x50060028u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k1lr_b164{0x50060028u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k1lr_b165{0x50060028u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k1lr_b166{0x50060028u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k1lr_b167{0x50060028u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k1lr_b168{0x50060028u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k1lr_b169{0x50060028u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k1lr_b170{0x50060028u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k1lr_b171{0x50060028u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k1lr_b172{0x50060028u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k1lr_b173{0x50060028u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k1lr_b174{0x50060028u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k1lr_b175{0x50060028u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k1lr_b176{0x50060028u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k1lr_b177{0x50060028u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k1lr_b178{0x50060028u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k1lr_b179{0x50060028u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k1lr_b180{0x50060028u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k1lr_b181{0x50060028u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k1lr_b182{0x50060028u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k1lr_b183{0x50060028u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k1lr_b184{0x50060028u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k1lr_b185{0x50060028u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k1lr_b186{0x50060028u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k1lr_b187{0x50060028u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k1lr_b188{0x50060028u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k1lr_b189{0x50060028u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k1lr_b190{0x50060028u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k1lr_b191{0x50060028u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k1rr_b128{0x5006002Cu, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k1rr_b129{0x5006002Cu, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k1rr_b130{0x5006002Cu, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k1rr_b131{0x5006002Cu, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k1rr_b132{0x5006002Cu, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k1rr_b133{0x5006002Cu, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k1rr_b134{0x5006002Cu, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k1rr_b135{0x5006002Cu, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k1rr_b136{0x5006002Cu, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k1rr_b137{0x5006002Cu, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k1rr_b138{0x5006002Cu, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k1rr_b139{0x5006002Cu, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k1rr_b140{0x5006002Cu, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k1rr_b141{0x5006002Cu, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k1rr_b142{0x5006002Cu, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k1rr_b143{0x5006002Cu, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k1rr_b144{0x5006002Cu, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k1rr_b145{0x5006002Cu, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k1rr_b146{0x5006002Cu, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k1rr_b147{0x5006002Cu, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k1rr_b148{0x5006002Cu, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k1rr_b149{0x5006002Cu, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k1rr_b150{0x5006002Cu, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k1rr_b151{0x5006002Cu, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k1rr_b152{0x5006002Cu, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k1rr_b153{0x5006002Cu, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k1rr_b154{0x5006002Cu, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k1rr_b155{0x5006002Cu, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k1rr_b156{0x5006002Cu, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k1rr_b157{0x5006002Cu, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k1rr_b158{0x5006002Cu, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k1rr_b159{0x5006002Cu, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k2lr_b96{0x50060030u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k2lr_b97{0x50060030u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k2lr_b98{0x50060030u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k2lr_b99{0x50060030u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k2lr_b100{0x50060030u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k2lr_b101{0x50060030u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k2lr_b102{0x50060030u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k2lr_b103{0x50060030u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k2lr_b104{0x50060030u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k2lr_b105{0x50060030u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k2lr_b106{0x50060030u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k2lr_b107{0x50060030u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k2lr_b108{0x50060030u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k2lr_b109{0x50060030u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k2lr_b110{0x50060030u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k2lr_b111{0x50060030u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k2lr_b112{0x50060030u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k2lr_b113{0x50060030u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k2lr_b114{0x50060030u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k2lr_b115{0x50060030u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k2lr_b116{0x50060030u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k2lr_b117{0x50060030u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k2lr_b118{0x50060030u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k2lr_b119{0x50060030u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k2lr_b120{0x50060030u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k2lr_b121{0x50060030u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k2lr_b122{0x50060030u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k2lr_b123{0x50060030u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k2lr_b124{0x50060030u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k2lr_b125{0x50060030u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k2lr_b126{0x50060030u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k2lr_b127{0x50060030u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k2rr_b64{0x50060034u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k2rr_b65{0x50060034u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k2rr_b66{0x50060034u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k2rr_b67{0x50060034u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k2rr_b68{0x50060034u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k2rr_b69{0x50060034u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k2rr_b70{0x50060034u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k2rr_b71{0x50060034u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k2rr_b72{0x50060034u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k2rr_b73{0x50060034u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k2rr_b74{0x50060034u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k2rr_b75{0x50060034u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k2rr_b76{0x50060034u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k2rr_b77{0x50060034u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k2rr_b78{0x50060034u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k2rr_b79{0x50060034u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k2rr_b80{0x50060034u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k2rr_b81{0x50060034u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k2rr_b82{0x50060034u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k2rr_b83{0x50060034u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k2rr_b84{0x50060034u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k2rr_b85{0x50060034u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k2rr_b86{0x50060034u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k2rr_b87{0x50060034u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k2rr_b88{0x50060034u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k2rr_b89{0x50060034u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k2rr_b90{0x50060034u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k2rr_b91{0x50060034u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k2rr_b92{0x50060034u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k2rr_b93{0x50060034u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k2rr_b94{0x50060034u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k2rr_b95{0x50060034u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k3lr_b32{0x50060038u, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k3lr_b33{0x50060038u, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k3lr_b34{0x50060038u, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k3lr_b35{0x50060038u, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k3lr_b36{0x50060038u, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k3lr_b37{0x50060038u, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k3lr_b38{0x50060038u, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k3lr_b39{0x50060038u, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k3lr_b40{0x50060038u, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k3lr_b41{0x50060038u, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k3lr_b42{0x50060038u, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k3lr_b43{0x50060038u, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k3lr_b44{0x50060038u, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k3lr_b45{0x50060038u, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k3lr_b46{0x50060038u, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k3lr_b47{0x50060038u, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k3lr_b48{0x50060038u, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k3lr_b49{0x50060038u, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k3lr_b50{0x50060038u, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k3lr_b51{0x50060038u, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k3lr_b52{0x50060038u, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k3lr_b53{0x50060038u, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k3lr_b54{0x50060038u, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k3lr_b55{0x50060038u, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k3lr_b56{0x50060038u, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k3lr_b57{0x50060038u, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k3lr_b58{0x50060038u, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k3lr_b59{0x50060038u, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k3lr_b60{0x50060038u, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k3lr_b61{0x50060038u, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k3lr_b62{0x50060038u, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k3lr_b63{0x50060038u, 0x80000000u, 31};
constexpr Field<Access::WO> cryp_k3rr_b0{0x5006003Cu, 0x00000001u, 0};
constexpr Field<Access::WO> cryp_k3rr_b1{0x5006003Cu, 0x00000002u, 1};
constexpr Field<Access::WO> cryp_k3rr_b2{0x5006003Cu, 0x00000004u, 2};
constexpr Field<Access::WO> cryp_k3rr_b3{0x5006003Cu, 0x00000008u, 3};
constexpr Field<Access::WO> cryp_k3rr_b4{0x5006003Cu, 0x00000010u, 4};
constexpr Field<Access::WO> cryp_k3rr_b5{0x5006003Cu, 0x00000020u, 5};
constexpr Field<Access::WO> cryp_k3rr_b6{0x5006003Cu, 0x00000040u, 6};
constexpr Field<Access::WO> cryp_k3rr_b7{0x5006003Cu, 0x00000080u, 7};
constexpr Field<Access::WO> cryp_k3rr_b8{0x5006003Cu, 0x00000100u, 8};
constexpr Field<Access::WO> cryp_k3rr_b9{0x5006003Cu, 0x00000200u, 9};
constexpr Field<Access::WO> cryp_k3rr_b10{0x5006003Cu, 0x00000400u, 10};
constexpr Field<Access::WO> cryp_k3rr_b11{0x5006003Cu, 0x00000800u, 11};
constexpr Field<Access::WO> cryp_k3rr_b12{0x5006003Cu, 0x00001000u, 12};
constexpr Field<Access::WO> cryp_k3rr_b13{0x5006003Cu, 0x00002000u, 13};
constexpr Field<Access::WO> cryp_k3rr_b14{0x5006003Cu, 0x00004000u, 14};
constexpr Field<Access::WO> cryp_k3rr_b15{0x5006003Cu, 0x00008000u, 15};
constexpr Field<Access::WO> cryp_k3rr_b16{0x5006003Cu, 0x00010000u, 16};
constexpr Field<Access::WO> cryp_k3rr_b17{0x5006003Cu, 0x00020000u, 17};
constexpr Field<Access::WO> cryp_k3rr_b18{0x5006003Cu, 0x00040000u, 18};
constexpr Field<Access::WO> cryp_k3rr_b19{0x5006003Cu, 0x00080000u, 19};
constexpr Field<Access::WO> cryp_k3rr_b20{0x5006003Cu, 0x00100000u, 20};
constexpr Field<Access::WO> cryp_k3rr_b21{0x5006003Cu, 0x00200000u, 21};
constexpr Field<Access::WO> cryp_k3rr_b22{0x5006003Cu, 0x00400000u, 22};
constexpr Field<Access::WO> cryp_k3rr_b23{0x5006003Cu, 0x00800000u, 23};
constexpr Field<Access::WO> cryp_k3rr_b24{0x5006003Cu, 0x01000000u, 24};
constexpr Field<Access::WO> cryp_k3rr_b25{0x5006003Cu, 0x02000000u, 25};
constexpr Field<Access::WO> cryp_k3rr_b26{0x5006003Cu, 0x04000000u, 26};
constexpr Field<Access::WO> cryp_k3rr_b27{0x5006003Cu, 0x08000000u, 27};
constexpr Field<Access::WO> cryp_k3rr_b28{0x5006003Cu, 0x10000000u, 28};
constexpr Field<Access::WO> cryp_k3rr_b29{0x5006003Cu, 0x20000000u, 29};
constexpr Field<Access::WO> cryp_k3rr_b30{0x5006003Cu, 0x40000000u, 30};
constexpr Field<Access::WO> cryp_k3rr_b31{0x5006003Cu, 0x80000000u, 31};
constexpr Field<Access::RW> cryp_iv0lr_iv31{0x50060040u, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_iv0lr_iv30{0x50060040u, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_iv0lr_iv29{0x50060040u, 0x00000004u, 2};
constexpr Field<Access::RW> cryp_iv0lr_iv28{0x50060040u, 0x00000008u, 3};
constexpr Field<Access::RW> cryp_iv0lr_iv27{0x50060040u, 0x00000010u, 4};
constexpr Field<Access::RW> cryp_iv0lr_iv26{0x50060040u, 0x00000020u, 5};
constexpr Field<Access::RW> cryp_iv0lr_iv25{0x50060040u, 0x00000040u, 6};
constexpr Field<Access::RW> cryp_iv0lr_iv24{0x50060040u, 0x00000080u, 7};
constexpr Field<Access::RW> cryp_iv0lr_iv23{0x50060040u, 0x00000100u, 8};
constexpr Field<Access::RW> cryp_iv0lr_iv22{0x50060040u, 0x00000200u, 9};
constexpr Field<Access::RW> cryp_iv0lr_iv21{0x50060040u, 0x00000400u, 10};
constexpr Field<Access::RW> cryp_iv0lr_iv20{0x50060040u, 0x00000800u, 11};
constexpr Field<Access::RW> cryp_iv0lr_iv19{0x50060040u, 0x00001000u, 12};
constexpr Field<Access::RW> cryp_iv0lr_iv18{0x50060040u, 0x00002000u, 13};
constexpr Field<Access::RW> cryp_iv0lr_iv17{0x50060040u, 0x00004000u, 14};
constexpr Field<Access::RW> cryp_iv0lr_iv16{0x50060040u, 0x00008000u, 15};
constexpr Field<Access::RW> cryp_iv0lr_iv15{0x50060040u, 0x00010000u, 16};
constexpr Field<Access::RW> cryp_iv0lr_iv14{0x50060040u, 0x00020000u, 17};
constexpr Field<Access::RW> cryp_iv0lr_iv13{0x50060040u, 0x00040000u, 18};
constexpr Field<Access::RW> cryp_iv0lr_iv12{0x50060040u, 0x00080000u, 19};
constexpr Field<Access::RW> cryp_iv0lr_iv11{0x50060040u, 0x00100000u, 20};
constexpr Field<Access::RW> cryp_iv0lr_iv10{0x50060040u, 0x00200000u, 21};
constexpr Field<Access::RW> cryp_iv0lr_iv9{0x50060040u, 0x00400000u, 22};
constexpr Field<Access::RW> cryp_iv0lr_iv8{0x50060040u, 0x00800000u, 23};
constexpr Field<Access::RW> cryp_iv0lr_iv7{0x50060040u, 0x01000000u, 24};
constexpr Field<Access::RW> cryp_iv0lr_iv6{0x50060040u, 0x02000000u, 25};
constexpr Field<Access::RW> cryp_iv0lr_iv5{0x50060040u, 0x04000000u, 26};
constexpr Field<Access::RW> cryp_iv0lr_iv4{0x50060040u, 0x08000000u, 27};
constexpr Field<Access::RW> cryp_iv0lr_iv3{0x50060040u, 0x10000000u, 28};
constexpr Field<Access::RW> cryp_iv0lr_iv2{0x50060040u, 0x20000000u, 29};
constexpr Field<Access::RW> cryp_iv0lr_iv1{0x50060040u, 0x40000000u, 30};
constexpr Field<Access::RW> cryp_iv0lr_iv0{0x50060040u, 0x80000000u, 31};
constexpr Field<Access::RW> cryp_iv0rr_iv63{0x50060044u, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_iv0rr_iv62{0x50060044u, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_iv0rr_iv61{0x50060044u, 0x00000004u, 2};
constexpr Field<Access::RW> cryp_iv0rr_iv60{0x50060044u, 0x00000008u, 3};
constexpr Field<Access::RW> cryp_iv0rr_iv59{0x50060044u, 0x00000010u, 4};
constexpr Field<Access::RW> cryp_iv0rr_iv58{0x50060044u, 0x00000020u, 5};
constexpr Field<Access::RW> cryp_iv0rr_iv57{0x50060044u, 0x00000040u, 6};
constexpr Field<Access::RW> cryp_iv0rr_iv56{0x50060044u, 0x00000080u, 7};
constexpr Field<Access::RW> cryp_iv0rr_iv55{0x50060044u, 0x00000100u, 8};
constexpr Field<Access::RW> cryp_iv0rr_iv54{0x50060044u, 0x00000200u, 9};
constexpr Field<Access::RW> cryp_iv0rr_iv53{0x50060044u, 0x00000400u, 10};
constexpr Field<Access::RW> cryp_iv0rr_iv52{0x50060044u, 0x00000800u, 11};
constexpr Field<Access::RW> cryp_iv0rr_iv51{0x50060044u, 0x00001000u, 12};
constexpr Field<Access::RW> cryp_iv0rr_iv50{0x50060044u, 0x00002000u, 13};
constexpr Field<Access::RW> cryp_iv0rr_iv49{0x50060044u, 0x00004000u, 14};
constexpr Field<Access::RW> cryp_iv0rr_iv48{0x50060044u, 0x00008000u, 15};
constexpr Field<Access::RW> cryp_iv0rr_iv47{0x50060044u, 0x00010000u, 16};
constexpr Field<Access::RW> cryp_iv0rr_iv46{0x50060044u, 0x00020000u, 17};
constexpr Field<Access::RW> cryp_iv0rr_iv45{0x50060044u, 0x00040000u, 18};
constexpr Field<Access::RW> cryp_iv0rr_iv44{0x50060044u, 0x00080000u, 19};
constexpr Field<Access::RW> cryp_iv0rr_iv43{0x50060044u, 0x00100000u, 20};
constexpr Field<Access::RW> cryp_iv0rr_iv42{0x50060044u, 0x00200000u, 21};
constexpr Field<Access::RW> cryp_iv0rr_iv41{0x50060044u, 0x00400000u, 22};
constexpr Field<Access::RW> cryp_iv0rr_iv40{0x50060044u, 0x00800000u, 23};
constexpr Field<Access::RW> cryp_iv0rr_iv39{0x50060044u, 0x01000000u, 24};
constexpr Field<Access::RW> cryp_iv0rr_iv38{0x50060044u, 0x02000000u, 25};
constexpr Field<Access::RW> cryp_iv0rr_iv37{0x50060044u, 0x04000000u, 26};
constexpr Field<Access::RW> cryp_iv0rr_iv36{0x50060044u, 0x08000000u, 27};
constexpr Field<Access::RW> cryp_iv0rr_iv35{0x50060044u, 0x10000000u, 28};
constexpr Field<Access::RW> cryp_iv0rr_iv34{0x50060044u, 0x20000000u, 29};
constexpr Field<Access::RW> cryp_iv0rr_iv33{0x50060044u, 0x40000000u, 30};
constexpr Field<Access::RW> cryp_iv0rr_iv32{0x50060044u, 0x80000000u, 31};
constexpr Field<Access::RW> cryp_iv1lr_iv95{0x50060048u, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_iv1lr_iv94{0x50060048u, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_iv1lr_iv93{0x50060048u, 0x00000004u, 2};
constexpr Field<Access::RW> cryp_iv1lr_iv92{0x50060048u, 0x00000008u, 3};
constexpr Field<Access::RW> cryp_iv1lr_iv91{0x50060048u, 0x00000010u, 4};
constexpr Field<Access::RW> cryp_iv1lr_iv90{0x50060048u, 0x00000020u, 5};
constexpr Field<Access::RW> cryp_iv1lr_iv89{0x50060048u, 0x00000040u, 6};
constexpr Field<Access::RW> cryp_iv1lr_iv88{0x50060048u, 0x00000080u, 7};
constexpr Field<Access::RW> cryp_iv1lr_iv87{0x50060048u, 0x00000100u, 8};
constexpr Field<Access::RW> cryp_iv1lr_iv86{0x50060048u, 0x00000200u, 9};
constexpr Field<Access::RW> cryp_iv1lr_iv85{0x50060048u, 0x00000400u, 10};
constexpr Field<Access::RW> cryp_iv1lr_iv84{0x50060048u, 0x00000800u, 11};
constexpr Field<Access::RW> cryp_iv1lr_iv83{0x50060048u, 0x00001000u, 12};
constexpr Field<Access::RW> cryp_iv1lr_iv82{0x50060048u, 0x00002000u, 13};
constexpr Field<Access::RW> cryp_iv1lr_iv81{0x50060048u, 0x00004000u, 14};
constexpr Field<Access::RW> cryp_iv1lr_iv80{0x50060048u, 0x00008000u, 15};
constexpr Field<Access::RW> cryp_iv1lr_iv79{0x50060048u, 0x00010000u, 16};
constexpr Field<Access::RW> cryp_iv1lr_iv78{0x50060048u, 0x00020000u, 17};
constexpr Field<Access::RW> cryp_iv1lr_iv77{0x50060048u, 0x00040000u, 18};
constexpr Field<Access::RW> cryp_iv1lr_iv76{0x50060048u, 0x00080000u, 19};
constexpr Field<Access::RW> cryp_iv1lr_iv75{0x50060048u, 0x00100000u, 20};
constexpr Field<Access::RW> cryp_iv1lr_iv74{0x50060048u, 0x00200000u, 21};
constexpr Field<Access::RW> cryp_iv1lr_iv73{0x50060048u, 0x00400000u, 22};
constexpr Field<Access::RW> cryp_iv1lr_iv72{0x50060048u, 0x00800000u, 23};
constexpr Field<Access::RW> cryp_iv1lr_iv71{0x50060048u, 0x01000000u, 24};
constexpr Field<Access::RW> cryp_iv1lr_iv70{0x50060048u, 0x02000000u, 25};
constexpr Field<Access::RW> cryp_iv1lr_iv69{0x50060048u, 0x04000000u, 26};
constexpr Field<Access::RW> cryp_iv1lr_iv68{0x50060048u, 0x08000000u, 27};
constexpr Field<Access::RW> cryp_iv1lr_iv67{0x50060048u, 0x10000000u, 28};
constexpr Field<Access::RW> cryp_iv1lr_iv66{0x50060048u, 0x20000000u, 29};
constexpr Field<Access::RW> cryp_iv1lr_iv65{0x50060048u, 0x40000000u, 30};
constexpr Field<Access::RW> cryp_iv1lr_iv64{0x50060048u, 0x80000000u, 31};
constexpr Field<Access::RW> cryp_iv1rr_iv127{0x5006004Cu, 0x00000001u, 0};
constexpr Field<Access::RW> cryp_iv1rr_iv126{0x5006004Cu, 0x00000002u, 1};
constexpr Field<Access::RW> cryp_iv1rr_iv125{0x5006004Cu, 0x00000004u, 2};
constexpr Field<Access::RW> cryp_iv1rr_iv124{0x5006004Cu, 0x00000008u, 3};
constexpr Field<Access::RW> cryp_iv1rr_iv123{0x5006004Cu, 0x00000010u, 4};
constexpr Field<Access::RW> cryp_iv1rr_iv122{0x5006004Cu, 0x00000020u, 5};
constexpr Field<Access::RW> cryp_iv1rr_iv121{0x5006004Cu, 0x00000040u, 6};
constexpr Field<Access::RW> cryp_iv1rr_iv120{0x5006004Cu, 0x00000080u, 7};
constexpr Field<Access::RW> cryp_iv1rr_iv119{0x5006004Cu, 0x00000100u, 8};
constexpr Field<Access::RW> cryp_iv1rr_iv118{0x5006004Cu, 0x00000200u, 9};
constexpr Field<Access::RW> cryp_iv1rr_iv117{0x5006004Cu, 0x00000400u, 10};
constexpr Field<Access::RW> cryp_iv1rr_iv116{0x5006004Cu, 0x00000800u, 11};
constexpr Field<Access::RW> cryp_iv1rr_iv115{0x5006004Cu, 0x00001000u, 12};
constexpr Field<Access::RW> cryp_iv1rr_iv114{0x5006004Cu, 0x00002000u, 13};
constexpr Field<Access::RW> cryp_iv1rr_iv113{0x5006004Cu, 0x00004000u, 14};
constexpr Field<Access::RW> cryp_iv1rr_iv112{0x5006004Cu, 0x00008000u, 15};
constexpr Field<Access::RW> cryp_iv1rr_iv111{0x5006004Cu, 0x00010000u, 16};
constexpr Field<Access::RW> cryp_iv1rr_iv110{0x5006004Cu, 0x00020000u, 17};
constexpr Field<Access::RW> cryp_iv1rr_iv109{0x5006004Cu, 0x00040000u, 18};
constexpr Field<Access::RW> cryp_iv1rr_iv108{0x5006004Cu, 0x00080000u, 19};
constexpr Field<Access::RW> cryp_iv1rr_iv107{0x5006004Cu, 0x00100000u, 20};
constexpr Field<Access::RW> cryp_iv1rr_iv106{0x5006004Cu, 0x00200000u, 21};
constexpr Field<Access::RW> cryp_iv1rr_iv105{0x5006004Cu, 0x00400000u, 22};
constexpr Field<Access::RW> cryp_iv1rr_iv104{0x5006004Cu, 0x00800000u, 23};
constexpr Field<Access::RW> cryp_iv1rr_iv103{0x5006004Cu, 0x01000000u, 24};
constexpr Field<Access::RW> cryp_iv1rr_iv102{0x5006004Cu, 0x02000000u, 25};
constexpr Field<Access::RW> cryp_iv1rr_iv101{0x5006004Cu, 0x04000000u, 26};
constexpr Field<Access::RW> cryp_iv1rr_iv100{0x5006004Cu, 0x08000000u, 27};
constexpr Field<Access::RW> cryp_iv1rr_iv99{0x5006004Cu, 0x10000000u, 28};
constexpr Field<Access::RW> cryp_iv1rr_iv98{0x5006004Cu, 0x20000000u, 29};
constexpr Field<Access::RW> cryp_iv1rr_iv97{0x5006004Cu, 0x40000000u, 30};
constexpr Field<Access::RW> cryp_iv1rr_iv96{0x5006004Cu, 0x80000000u, 31};
constexpr Field<Access::RW> cryp_csgcmccm0r_csgcmccm0r{0x50060050u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm1r_csgcmccm1r{0x50060054u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm2r_csgcmccm2r{0x50060058u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm3r_csgcmccm3r{0x5006005Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm4r_csgcmccm4r{0x50060060u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm5r_csgcmccm5r{0x50060064u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm6r_csgcmccm6r{0x50060068u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcmccm7r_csgcmccm7r{0x5006006Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm0r_csgcm0r{0x50060070u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm1r_csgcm1r{0x50060074u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm2r_csgcm2r{0x50060078u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm3r_csgcm3r{0x5006007Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm4r_csgcm4r{0x50060080u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm5r_csgcm5r{0x50060084u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm6r_csgcm6r{0x50060088u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> cryp_csgcm7r_csgcm7r{0x5006008Cu, 0xFFFFFFFFu, 0};

#endif // CRYP_HPP