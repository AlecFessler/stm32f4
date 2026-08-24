// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// DMA controller
#ifndef STM32_DMA1_HPP
#define STM32_DMA1_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

#include "values.hpp"

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t DMA1_BASE = 0x40026000;
struct Dma1Regs {
    volatile uint32_t lisr; // low interrupt status register
    volatile uint32_t hisr; // high interrupt status register
    volatile uint32_t lifcr; // low interrupt flag clear register
    volatile uint32_t hifcr; // high interrupt flag clear register
    volatile uint32_t s0cr; // stream x configuration register
    volatile uint32_t s0ndtr; // stream x number of data register
    volatile uint32_t s0par; // stream x peripheral address register
    volatile uint32_t s0m0ar; // stream x memory 0 address register
    volatile uint32_t s0m1ar; // stream x memory 1 address register
    volatile uint32_t s0fcr; // stream x FIFO control register
    volatile uint32_t s1cr; // stream x configuration register
    volatile uint32_t s1ndtr; // stream x number of data register
    volatile uint32_t s1par; // stream x peripheral address register
    volatile uint32_t s1m0ar; // stream x memory 0 address register
    volatile uint32_t s1m1ar; // stream x memory 1 address register
    volatile uint32_t s1fcr; // stream x FIFO control register
    volatile uint32_t s2cr; // stream x configuration register
    volatile uint32_t s2ndtr; // stream x number of data register
    volatile uint32_t s2par; // stream x peripheral address register
    volatile uint32_t s2m0ar; // stream x memory 0 address register
    volatile uint32_t s2m1ar; // stream x memory 1 address register
    volatile uint32_t s2fcr; // stream x FIFO control register
    volatile uint32_t s3cr; // stream x configuration register
    volatile uint32_t s3ndtr; // stream x number of data register
    volatile uint32_t s3par; // stream x peripheral address register
    volatile uint32_t s3m0ar; // stream x memory 0 address register
    volatile uint32_t s3m1ar; // stream x memory 1 address register
    volatile uint32_t s3fcr; // stream x FIFO control register
    volatile uint32_t s4cr; // stream x configuration register
    volatile uint32_t s4ndtr; // stream x number of data register
    volatile uint32_t s4par; // stream x peripheral address register
    volatile uint32_t s4m0ar; // stream x memory 0 address register
    volatile uint32_t s4m1ar; // stream x memory 1 address register
    volatile uint32_t s4fcr; // stream x FIFO control register
    volatile uint32_t s5cr; // stream x configuration register
    volatile uint32_t s5ndtr; // stream x number of data register
    volatile uint32_t s5par; // stream x peripheral address register
    volatile uint32_t s5m0ar; // stream x memory 0 address register
    volatile uint32_t s5m1ar; // stream x memory 1 address register
    volatile uint32_t s5fcr; // stream x FIFO control register
    volatile uint32_t s6cr; // stream x configuration register
    volatile uint32_t s6ndtr; // stream x number of data register
    volatile uint32_t s6par; // stream x peripheral address register
    volatile uint32_t s6m0ar; // stream x memory 0 address register
    volatile uint32_t s6m1ar; // stream x memory 1 address register
    volatile uint32_t s6fcr; // stream x FIFO control register
    volatile uint32_t s7cr; // stream x configuration register
    volatile uint32_t s7ndtr; // stream x number of data register
    volatile uint32_t s7par; // stream x peripheral address register
    volatile uint32_t s7m0ar; // stream x memory 0 address register
    volatile uint32_t s7m1ar; // stream x memory 1 address register
    volatile uint32_t s7fcr; // stream x FIFO control register
};
static_assert(offsetof(Dma1Regs, lisr) == 0);
static_assert(offsetof(Dma1Regs, hisr) == 4);
static_assert(offsetof(Dma1Regs, lifcr) == 8);
static_assert(offsetof(Dma1Regs, hifcr) == 12);
static_assert(offsetof(Dma1Regs, s0cr) == 16);
static_assert(offsetof(Dma1Regs, s0ndtr) == 20);
static_assert(offsetof(Dma1Regs, s0par) == 24);
static_assert(offsetof(Dma1Regs, s0m0ar) == 28);
static_assert(offsetof(Dma1Regs, s0m1ar) == 32);
static_assert(offsetof(Dma1Regs, s0fcr) == 36);
static_assert(offsetof(Dma1Regs, s1cr) == 40);
static_assert(offsetof(Dma1Regs, s1ndtr) == 44);
static_assert(offsetof(Dma1Regs, s1par) == 48);
static_assert(offsetof(Dma1Regs, s1m0ar) == 52);
static_assert(offsetof(Dma1Regs, s1m1ar) == 56);
static_assert(offsetof(Dma1Regs, s1fcr) == 60);
static_assert(offsetof(Dma1Regs, s2cr) == 64);
static_assert(offsetof(Dma1Regs, s2ndtr) == 68);
static_assert(offsetof(Dma1Regs, s2par) == 72);
static_assert(offsetof(Dma1Regs, s2m0ar) == 76);
static_assert(offsetof(Dma1Regs, s2m1ar) == 80);
static_assert(offsetof(Dma1Regs, s2fcr) == 84);
static_assert(offsetof(Dma1Regs, s3cr) == 88);
static_assert(offsetof(Dma1Regs, s3ndtr) == 92);
static_assert(offsetof(Dma1Regs, s3par) == 96);
static_assert(offsetof(Dma1Regs, s3m0ar) == 100);
static_assert(offsetof(Dma1Regs, s3m1ar) == 104);
static_assert(offsetof(Dma1Regs, s3fcr) == 108);
static_assert(offsetof(Dma1Regs, s4cr) == 112);
static_assert(offsetof(Dma1Regs, s4ndtr) == 116);
static_assert(offsetof(Dma1Regs, s4par) == 120);
static_assert(offsetof(Dma1Regs, s4m0ar) == 124);
static_assert(offsetof(Dma1Regs, s4m1ar) == 128);
static_assert(offsetof(Dma1Regs, s4fcr) == 132);
static_assert(offsetof(Dma1Regs, s5cr) == 136);
static_assert(offsetof(Dma1Regs, s5ndtr) == 140);
static_assert(offsetof(Dma1Regs, s5par) == 144);
static_assert(offsetof(Dma1Regs, s5m0ar) == 148);
static_assert(offsetof(Dma1Regs, s5m1ar) == 152);
static_assert(offsetof(Dma1Regs, s5fcr) == 156);
static_assert(offsetof(Dma1Regs, s6cr) == 160);
static_assert(offsetof(Dma1Regs, s6ndtr) == 164);
static_assert(offsetof(Dma1Regs, s6par) == 168);
static_assert(offsetof(Dma1Regs, s6m0ar) == 172);
static_assert(offsetof(Dma1Regs, s6m1ar) == 176);
static_assert(offsetof(Dma1Regs, s6fcr) == 180);
static_assert(offsetof(Dma1Regs, s7cr) == 184);
static_assert(offsetof(Dma1Regs, s7ndtr) == 188);
static_assert(offsetof(Dma1Regs, s7par) == 192);
static_assert(offsetof(Dma1Regs, s7m0ar) == 196);
static_assert(offsetof(Dma1Regs, s7m1ar) == 200);
static_assert(offsetof(Dma1Regs, s7fcr) == 204);

constexpr Field<Access::RO, dma::Tcif> dma1_lisr_tcif[4] = {
    {0x40026000u, 0x00000020u, 5},
    {0x40026000u, 0x00000800u, 11},
    {0x40026000u, 0x00200000u, 21},
    {0x40026000u, 0x08000000u, 27},
};
constexpr Field<Access::RO, dma::Htif> dma1_lisr_htif[4] = {
    {0x40026000u, 0x00000010u, 4},
    {0x40026000u, 0x00000400u, 10},
    {0x40026000u, 0x00100000u, 20},
    {0x40026000u, 0x04000000u, 26},
};
constexpr Field<Access::RO, dma::Teif> dma1_lisr_teif[4] = {
    {0x40026000u, 0x00000008u, 3},
    {0x40026000u, 0x00000200u, 9},
    {0x40026000u, 0x00080000u, 19},
    {0x40026000u, 0x02000000u, 25},
};
constexpr Field<Access::RO, dma::Dmeif> dma1_lisr_dmeif[4] = {
    {0x40026000u, 0x00000004u, 2},
    {0x40026000u, 0x00000100u, 8},
    {0x40026000u, 0x00040000u, 18},
    {0x40026000u, 0x01000000u, 24},
};
constexpr Field<Access::RO, dma::Feif> dma1_lisr_feif[4] = {
    {0x40026000u, 0x00000001u, 0},
    {0x40026000u, 0x00000040u, 6},
    {0x40026000u, 0x00010000u, 16},
    {0x40026000u, 0x00400000u, 22},
};
constexpr Field<Access::RO, dma::Tcif> dma1_hisr_tcif7{0x40026004u, 0x08000000u, 27};
constexpr Field<Access::RO, dma::Tcif> dma1_hisr_tcif6{0x40026004u, 0x00200000u, 21};
constexpr Field<Access::RO, dma::Tcif> dma1_hisr_tcif5{0x40026004u, 0x00000800u, 11};
constexpr Field<Access::RO, dma::Tcif> dma1_hisr_tcif4{0x40026004u, 0x00000020u, 5};
constexpr Field<Access::RO, dma::Htif> dma1_hisr_htif7{0x40026004u, 0x04000000u, 26};
constexpr Field<Access::RO, dma::Htif> dma1_hisr_htif6{0x40026004u, 0x00100000u, 20};
constexpr Field<Access::RO, dma::Htif> dma1_hisr_htif5{0x40026004u, 0x00000400u, 10};
constexpr Field<Access::RO, dma::Htif> dma1_hisr_htif4{0x40026004u, 0x00000010u, 4};
constexpr Field<Access::RO, dma::Teif> dma1_hisr_teif7{0x40026004u, 0x02000000u, 25};
constexpr Field<Access::RO, dma::Teif> dma1_hisr_teif6{0x40026004u, 0x00080000u, 19};
constexpr Field<Access::RO, dma::Teif> dma1_hisr_teif5{0x40026004u, 0x00000200u, 9};
constexpr Field<Access::RO, dma::Teif> dma1_hisr_teif4{0x40026004u, 0x00000008u, 3};
constexpr Field<Access::RO, dma::Dmeif> dma1_hisr_dmeif7{0x40026004u, 0x01000000u, 24};
constexpr Field<Access::RO, dma::Dmeif> dma1_hisr_dmeif6{0x40026004u, 0x00040000u, 18};
constexpr Field<Access::RO, dma::Dmeif> dma1_hisr_dmeif5{0x40026004u, 0x00000100u, 8};
constexpr Field<Access::RO, dma::Dmeif> dma1_hisr_dmeif4{0x40026004u, 0x00000004u, 2};
constexpr Field<Access::RO, dma::Feif> dma1_hisr_feif7{0x40026004u, 0x00400000u, 22};
constexpr Field<Access::RO, dma::Feif> dma1_hisr_feif6{0x40026004u, 0x00010000u, 16};
constexpr Field<Access::RO, dma::Feif> dma1_hisr_feif5{0x40026004u, 0x00000040u, 6};
constexpr Field<Access::RO, dma::Feif> dma1_hisr_feif4{0x40026004u, 0x00000001u, 0};
constexpr Field<Access::RW, dma::Ctcif, true, true> dma1_lifcr_ctcif[4] = {
    {0x40026008u, 0x00000020u, 5},
    {0x40026008u, 0x00000800u, 11},
    {0x40026008u, 0x00200000u, 21},
    {0x40026008u, 0x08000000u, 27},
};
constexpr Field<Access::RW, dma::Chtif, true, true> dma1_lifcr_chtif[4] = {
    {0x40026008u, 0x00000010u, 4},
    {0x40026008u, 0x00000400u, 10},
    {0x40026008u, 0x00100000u, 20},
    {0x40026008u, 0x04000000u, 26},
};
constexpr Field<Access::RW, dma::Cteif, true, true> dma1_lifcr_cteif[4] = {
    {0x40026008u, 0x00000008u, 3},
    {0x40026008u, 0x00000200u, 9},
    {0x40026008u, 0x00080000u, 19},
    {0x40026008u, 0x02000000u, 25},
};
constexpr Field<Access::RW, dma::Cdmeif, true, true> dma1_lifcr_cdmeif[4] = {
    {0x40026008u, 0x00000004u, 2},
    {0x40026008u, 0x00000100u, 8},
    {0x40026008u, 0x00040000u, 18},
    {0x40026008u, 0x01000000u, 24},
};
constexpr Field<Access::RW, dma::Cfeif, true, true> dma1_lifcr_cfeif[4] = {
    {0x40026008u, 0x00000001u, 0},
    {0x40026008u, 0x00000040u, 6},
    {0x40026008u, 0x00010000u, 16},
    {0x40026008u, 0x00400000u, 22},
};
constexpr Field<Access::RW, dma::Ctcif, true, true> dma1_hifcr_ctcif7{0x4002600Cu, 0x08000000u, 27};
constexpr Field<Access::RW, dma::Ctcif, true, true> dma1_hifcr_ctcif6{0x4002600Cu, 0x00200000u, 21};
constexpr Field<Access::RW, dma::Ctcif, true, true> dma1_hifcr_ctcif5{0x4002600Cu, 0x00000800u, 11};
constexpr Field<Access::RW, dma::Ctcif, true, true> dma1_hifcr_ctcif4{0x4002600Cu, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Chtif, true, true> dma1_hifcr_chtif7{0x4002600Cu, 0x04000000u, 26};
constexpr Field<Access::RW, dma::Chtif, true, true> dma1_hifcr_chtif6{0x4002600Cu, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Chtif, true, true> dma1_hifcr_chtif5{0x4002600Cu, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Chtif, true, true> dma1_hifcr_chtif4{0x4002600Cu, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Cteif, true, true> dma1_hifcr_cteif7{0x4002600Cu, 0x02000000u, 25};
constexpr Field<Access::RW, dma::Cteif, true, true> dma1_hifcr_cteif6{0x4002600Cu, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Cteif, true, true> dma1_hifcr_cteif5{0x4002600Cu, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Cteif, true, true> dma1_hifcr_cteif4{0x4002600Cu, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Cdmeif, true, true> dma1_hifcr_cdmeif7{0x4002600Cu, 0x01000000u, 24};
constexpr Field<Access::RW, dma::Cdmeif, true, true> dma1_hifcr_cdmeif6{0x4002600Cu, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Cdmeif, true, true> dma1_hifcr_cdmeif5{0x4002600Cu, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Cdmeif, true, true> dma1_hifcr_cdmeif4{0x4002600Cu, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Cfeif, true, true> dma1_hifcr_cfeif7{0x4002600Cu, 0x00400000u, 22};
constexpr Field<Access::RW, dma::Cfeif, true, true> dma1_hifcr_cfeif6{0x4002600Cu, 0x00010000u, 16};
constexpr Field<Access::RW, dma::Cfeif, true, true> dma1_hifcr_cfeif5{0x4002600Cu, 0x00000040u, 6};
constexpr Field<Access::RW, dma::Cfeif, true, true> dma1_hifcr_cfeif4{0x4002600Cu, 0x00000001u, 0};
constexpr Field<Access::RW> dma1_s0cr_chsel{0x40026010u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s0cr_mburst{0x40026010u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s0cr_pburst{0x40026010u, 0x00600000u, 21};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s0cr_ct{0x40026010u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s0cr_dbm{0x40026010u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s0cr_pl{0x40026010u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s0cr_pincos{0x40026010u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s0cr_msize{0x40026010u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s0cr_psize{0x40026010u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s0cr_minc{0x40026010u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s0cr_pinc{0x40026010u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s0cr_circ{0x40026010u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s0cr_dir{0x40026010u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s0cr_pfctrl{0x40026010u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s0cr_tcie{0x40026010u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s0cr_htie{0x40026010u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s0cr_teie{0x40026010u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s0cr_dmeie{0x40026010u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s0cr_en{0x40026010u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s0ndtr_ndt{0x40026014u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s0par_pa{0x40026018u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s0m0ar_m0a{0x4002601Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s0m1ar_m1a{0x40026020u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s0fcr_feie{0x40026024u, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s0fcr_fs{0x40026024u, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s0fcr_dmdis{0x40026024u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s0fcr_fth{0x40026024u, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s1cr_chsel{0x40026028u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s1cr_mburst{0x40026028u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s1cr_pburst{0x40026028u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s1cr_ack{0x40026028u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s1cr_ct{0x40026028u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s1cr_dbm{0x40026028u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s1cr_pl{0x40026028u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s1cr_pincos{0x40026028u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s1cr_msize{0x40026028u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s1cr_psize{0x40026028u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s1cr_minc{0x40026028u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s1cr_pinc{0x40026028u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s1cr_circ{0x40026028u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s1cr_dir{0x40026028u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s1cr_pfctrl{0x40026028u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s1cr_tcie{0x40026028u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s1cr_htie{0x40026028u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s1cr_teie{0x40026028u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s1cr_dmeie{0x40026028u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s1cr_en{0x40026028u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s1ndtr_ndt{0x4002602Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s1par_pa{0x40026030u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s1m0ar_m0a{0x40026034u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s1m1ar_m1a{0x40026038u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s1fcr_feie{0x4002603Cu, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s1fcr_fs{0x4002603Cu, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s1fcr_dmdis{0x4002603Cu, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s1fcr_fth{0x4002603Cu, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s2cr_chsel{0x40026040u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s2cr_mburst{0x40026040u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s2cr_pburst{0x40026040u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s2cr_ack{0x40026040u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s2cr_ct{0x40026040u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s2cr_dbm{0x40026040u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s2cr_pl{0x40026040u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s2cr_pincos{0x40026040u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s2cr_msize{0x40026040u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s2cr_psize{0x40026040u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s2cr_minc{0x40026040u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s2cr_pinc{0x40026040u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s2cr_circ{0x40026040u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s2cr_dir{0x40026040u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s2cr_pfctrl{0x40026040u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s2cr_tcie{0x40026040u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s2cr_htie{0x40026040u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s2cr_teie{0x40026040u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s2cr_dmeie{0x40026040u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s2cr_en{0x40026040u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s2ndtr_ndt{0x40026044u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s2par_pa{0x40026048u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s2m0ar_m0a{0x4002604Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s2m1ar_m1a{0x40026050u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s2fcr_feie{0x40026054u, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s2fcr_fs{0x40026054u, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s2fcr_dmdis{0x40026054u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s2fcr_fth{0x40026054u, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s3cr_chsel{0x40026058u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s3cr_mburst{0x40026058u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s3cr_pburst{0x40026058u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s3cr_ack{0x40026058u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s3cr_ct{0x40026058u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s3cr_dbm{0x40026058u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s3cr_pl{0x40026058u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s3cr_pincos{0x40026058u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s3cr_msize{0x40026058u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s3cr_psize{0x40026058u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s3cr_minc{0x40026058u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s3cr_pinc{0x40026058u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s3cr_circ{0x40026058u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s3cr_dir{0x40026058u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s3cr_pfctrl{0x40026058u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s3cr_tcie{0x40026058u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s3cr_htie{0x40026058u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s3cr_teie{0x40026058u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s3cr_dmeie{0x40026058u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s3cr_en{0x40026058u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s3ndtr_ndt{0x4002605Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s3par_pa{0x40026060u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s3m0ar_m0a{0x40026064u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s3m1ar_m1a{0x40026068u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s3fcr_feie{0x4002606Cu, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s3fcr_fs{0x4002606Cu, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s3fcr_dmdis{0x4002606Cu, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s3fcr_fth{0x4002606Cu, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s4cr_chsel{0x40026070u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s4cr_mburst{0x40026070u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s4cr_pburst{0x40026070u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s4cr_ack{0x40026070u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s4cr_ct{0x40026070u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s4cr_dbm{0x40026070u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s4cr_pl{0x40026070u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s4cr_pincos{0x40026070u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s4cr_msize{0x40026070u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s4cr_psize{0x40026070u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s4cr_minc{0x40026070u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s4cr_pinc{0x40026070u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s4cr_circ{0x40026070u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s4cr_dir{0x40026070u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s4cr_pfctrl{0x40026070u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s4cr_tcie{0x40026070u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s4cr_htie{0x40026070u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s4cr_teie{0x40026070u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s4cr_dmeie{0x40026070u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s4cr_en{0x40026070u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s4ndtr_ndt{0x40026074u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s4par_pa{0x40026078u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s4m0ar_m0a{0x4002607Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s4m1ar_m1a{0x40026080u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s4fcr_feie{0x40026084u, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s4fcr_fs{0x40026084u, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s4fcr_dmdis{0x40026084u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s4fcr_fth{0x40026084u, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s5cr_chsel{0x40026088u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s5cr_mburst{0x40026088u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s5cr_pburst{0x40026088u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s5cr_ack{0x40026088u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s5cr_ct{0x40026088u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s5cr_dbm{0x40026088u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s5cr_pl{0x40026088u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s5cr_pincos{0x40026088u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s5cr_msize{0x40026088u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s5cr_psize{0x40026088u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s5cr_minc{0x40026088u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s5cr_pinc{0x40026088u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s5cr_circ{0x40026088u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s5cr_dir{0x40026088u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s5cr_pfctrl{0x40026088u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s5cr_tcie{0x40026088u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s5cr_htie{0x40026088u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s5cr_teie{0x40026088u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s5cr_dmeie{0x40026088u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s5cr_en{0x40026088u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s5ndtr_ndt{0x4002608Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s5par_pa{0x40026090u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s5m0ar_m0a{0x40026094u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s5m1ar_m1a{0x40026098u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s5fcr_feie{0x4002609Cu, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s5fcr_fs{0x4002609Cu, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s5fcr_dmdis{0x4002609Cu, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s5fcr_fth{0x4002609Cu, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s6cr_chsel{0x400260A0u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s6cr_mburst{0x400260A0u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s6cr_pburst{0x400260A0u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s6cr_ack{0x400260A0u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s6cr_ct{0x400260A0u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s6cr_dbm{0x400260A0u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s6cr_pl{0x400260A0u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s6cr_pincos{0x400260A0u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s6cr_msize{0x400260A0u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s6cr_psize{0x400260A0u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s6cr_minc{0x400260A0u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s6cr_pinc{0x400260A0u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s6cr_circ{0x400260A0u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s6cr_dir{0x400260A0u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s6cr_pfctrl{0x400260A0u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s6cr_tcie{0x400260A0u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s6cr_htie{0x400260A0u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s6cr_teie{0x400260A0u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s6cr_dmeie{0x400260A0u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s6cr_en{0x400260A0u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s6ndtr_ndt{0x400260A4u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s6par_pa{0x400260A8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s6m0ar_m0a{0x400260ACu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s6m1ar_m1a{0x400260B0u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s6fcr_feie{0x400260B4u, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s6fcr_fs{0x400260B4u, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s6fcr_dmdis{0x400260B4u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s6fcr_fth{0x400260B4u, 0x00000003u, 0};
constexpr Field<Access::RW> dma1_s7cr_chsel{0x400260B8u, 0x0E000000u, 25};
constexpr Field<Access::RW, dma::Mpburst> dma1_s7cr_mburst{0x400260B8u, 0x01800000u, 23};
constexpr Field<Access::RW, dma::Mpburst> dma1_s7cr_pburst{0x400260B8u, 0x00600000u, 21};
constexpr Field<Access::RW, uint32_t, true, true> dma1_s7cr_ack{0x400260B8u, 0x00100000u, 20};
constexpr Field<Access::RW, dma::Ct, true, true> dma1_s7cr_ct{0x400260B8u, 0x00080000u, 19};
constexpr Field<Access::RW, dma::Dbm, true, true> dma1_s7cr_dbm{0x400260B8u, 0x00040000u, 18};
constexpr Field<Access::RW, dma::Pl> dma1_s7cr_pl{0x400260B8u, 0x00030000u, 16};
constexpr Field<Access::RW, dma::Pincos, true, true> dma1_s7cr_pincos{0x400260B8u, 0x00008000u, 15};
constexpr Field<Access::RW, dma::Mpsize> dma1_s7cr_msize{0x400260B8u, 0x00006000u, 13};
constexpr Field<Access::RW, dma::Mpsize> dma1_s7cr_psize{0x400260B8u, 0x00001800u, 11};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s7cr_minc{0x400260B8u, 0x00000400u, 10};
constexpr Field<Access::RW, dma::Mpinc, true, true> dma1_s7cr_pinc{0x400260B8u, 0x00000200u, 9};
constexpr Field<Access::RW, dma::Circ, true, true> dma1_s7cr_circ{0x400260B8u, 0x00000100u, 8};
constexpr Field<Access::RW, dma::Dir> dma1_s7cr_dir{0x400260B8u, 0x000000C0u, 6};
constexpr Field<Access::RW, dma::Pfctrl, true, true> dma1_s7cr_pfctrl{0x400260B8u, 0x00000020u, 5};
constexpr Field<Access::RW, dma::Tcie, true, true> dma1_s7cr_tcie{0x400260B8u, 0x00000010u, 4};
constexpr Field<Access::RW, dma::Htie, true, true> dma1_s7cr_htie{0x400260B8u, 0x00000008u, 3};
constexpr Field<Access::RW, dma::Teie, true, true> dma1_s7cr_teie{0x400260B8u, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Dmeie, true, true> dma1_s7cr_dmeie{0x400260B8u, 0x00000002u, 1};
constexpr Field<Access::RW, dma::En, true, true> dma1_s7cr_en{0x400260B8u, 0x00000001u, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s7ndtr_ndt{0x400260BCu, 0x0000FFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s7par_pa{0x400260C0u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s7m0ar_m0a{0x400260C4u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, uint32_t, false> dma1_s7m1ar_m1a{0x400260C8u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW, dma::Feie, true, true> dma1_s7fcr_feie{0x400260CCu, 0x00000080u, 7};
constexpr Field<Access::RO, dma::Fs> dma1_s7fcr_fs{0x400260CCu, 0x00000038u, 3};
constexpr Field<Access::RW, dma::Dmdis, true, true> dma1_s7fcr_dmdis{0x400260CCu, 0x00000004u, 2};
constexpr Field<Access::RW, dma::Fth> dma1_s7fcr_fth{0x400260CCu, 0x00000003u, 0};

#endif // STM32_DMA1_HPP
