// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// DMA2D controller
#ifndef DMA2D_HPP
#define DMA2D_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t DMA2D_BASE = 0x4002B000;

struct Dma2dRegs {
    volatile uint32_t cr; // control register
    volatile uint32_t isr; // Interrupt Status Register
    volatile uint32_t ifcr; // interrupt flag clear register
    volatile uint32_t fgmar; // foreground memory address register
    volatile uint32_t fgor; // foreground offset register
    volatile uint32_t bgmar; // background memory address register
    volatile uint32_t bgor; // background offset register
    volatile uint32_t fgpfccr; // foreground PFC control register
    volatile uint32_t fgcolr; // foreground color register
    volatile uint32_t bgpfccr; // background PFC control register
    volatile uint32_t bgcolr; // background color register
    volatile uint32_t fgcmar; // foreground CLUT memory address register
    volatile uint32_t bgcmar; // background CLUT memory address register
    volatile uint32_t opfccr; // output PFC control register
    volatile uint32_t ocolr; // output color register
    volatile uint32_t omar; // output memory address register
    volatile uint32_t oor; // output offset register
    volatile uint32_t nlr; // number of line register
    volatile uint32_t lwr; // line watermark register
    volatile uint32_t amtcr; // AHB master timer configuration register
    uint32_t _reserved0[236];
    volatile uint32_t fgclut; // FGCLUT
    uint32_t _reserved1[255];
    volatile uint32_t bgclut; // BGCLUT
};

static_assert(offsetof(Dma2dRegs, cr) == 0);
static_assert(offsetof(Dma2dRegs, isr) == 4);
static_assert(offsetof(Dma2dRegs, ifcr) == 8);
static_assert(offsetof(Dma2dRegs, fgmar) == 12);
static_assert(offsetof(Dma2dRegs, fgor) == 16);
static_assert(offsetof(Dma2dRegs, bgmar) == 20);
static_assert(offsetof(Dma2dRegs, bgor) == 24);
static_assert(offsetof(Dma2dRegs, fgpfccr) == 28);
static_assert(offsetof(Dma2dRegs, fgcolr) == 32);
static_assert(offsetof(Dma2dRegs, bgpfccr) == 36);
static_assert(offsetof(Dma2dRegs, bgcolr) == 40);
static_assert(offsetof(Dma2dRegs, fgcmar) == 44);
static_assert(offsetof(Dma2dRegs, bgcmar) == 48);
static_assert(offsetof(Dma2dRegs, opfccr) == 52);
static_assert(offsetof(Dma2dRegs, ocolr) == 56);
static_assert(offsetof(Dma2dRegs, omar) == 60);
static_assert(offsetof(Dma2dRegs, oor) == 64);
static_assert(offsetof(Dma2dRegs, nlr) == 68);
static_assert(offsetof(Dma2dRegs, lwr) == 72);
static_assert(offsetof(Dma2dRegs, amtcr) == 76);
static_assert(offsetof(Dma2dRegs, fgclut) == 1024);
static_assert(offsetof(Dma2dRegs, bgclut) == 2048);

inline Dma2dRegs& dma2d() { return *reinterpret_cast<Dma2dRegs*>(DMA2D_BASE); }

constexpr RegField dma2d_cr_mode{0x00030000u, 16};
constexpr RegField dma2d_cr_ceie{0x00002000u, 13};
constexpr RegField dma2d_cr_ctcie{0x00001000u, 12};
constexpr RegField dma2d_cr_caeie{0x00000800u, 11};
constexpr RegField dma2d_cr_twie{0x00000400u, 10};
constexpr RegField dma2d_cr_tcie{0x00000200u, 9};
constexpr RegField dma2d_cr_teie{0x00000100u, 8};
constexpr RegField dma2d_cr_abort{0x00000004u, 2};
constexpr RegField dma2d_cr_susp{0x00000002u, 1};
constexpr RegField dma2d_cr_start{0x00000001u, 0};
constexpr RegField dma2d_isr_ceif{0x00000020u, 5};
constexpr RegField dma2d_isr_ctcif{0x00000010u, 4};
constexpr RegField dma2d_isr_caeif{0x00000008u, 3};
constexpr RegField dma2d_isr_twif{0x00000004u, 2};
constexpr RegField dma2d_isr_tcif{0x00000002u, 1};
constexpr RegField dma2d_isr_teif{0x00000001u, 0};
constexpr RegField dma2d_ifcr_cceif{0x00000020u, 5};
constexpr RegField dma2d_ifcr_cctcif{0x00000010u, 4};
constexpr RegField dma2d_ifcr_caecif{0x00000008u, 3};
constexpr RegField dma2d_ifcr_ctwif{0x00000004u, 2};
constexpr RegField dma2d_ifcr_ctcif{0x00000002u, 1};
constexpr RegField dma2d_ifcr_cteif{0x00000001u, 0};
constexpr RegField dma2d_fgmar_ma{0xFFFFFFFFu, 0};
constexpr RegField dma2d_fgor_lo{0x00003FFFu, 0};
constexpr RegField dma2d_bgmar_ma{0xFFFFFFFFu, 0};
constexpr RegField dma2d_bgor_lo{0x00003FFFu, 0};
constexpr RegField dma2d_fgpfccr_alpha{0xFF000000u, 24};
constexpr RegField dma2d_fgpfccr_am{0x00030000u, 16};
constexpr RegField dma2d_fgpfccr_cs{0x0000FF00u, 8};
constexpr RegField dma2d_fgpfccr_start{0x00000020u, 5};
constexpr RegField dma2d_fgpfccr_ccm{0x00000010u, 4};
constexpr RegField dma2d_fgpfccr_cm{0x0000000Fu, 0};
constexpr RegField dma2d_fgcolr_red{0x00FF0000u, 16};
constexpr RegField dma2d_fgcolr_green{0x0000FF00u, 8};
constexpr RegField dma2d_fgcolr_blue{0x000000FFu, 0};
constexpr RegField dma2d_bgpfccr_alpha{0xFF000000u, 24};
constexpr RegField dma2d_bgpfccr_am{0x00030000u, 16};
constexpr RegField dma2d_bgpfccr_cs{0x0000FF00u, 8};
constexpr RegField dma2d_bgpfccr_start{0x00000020u, 5};
constexpr RegField dma2d_bgpfccr_ccm{0x00000010u, 4};
constexpr RegField dma2d_bgpfccr_cm{0x0000000Fu, 0};
constexpr RegField dma2d_bgcolr_red{0x00FF0000u, 16};
constexpr RegField dma2d_bgcolr_green{0x0000FF00u, 8};
constexpr RegField dma2d_bgcolr_blue{0x000000FFu, 0};
constexpr RegField dma2d_fgcmar_ma{0xFFFFFFFFu, 0};
constexpr RegField dma2d_bgcmar_ma{0xFFFFFFFFu, 0};
constexpr RegField dma2d_opfccr_cm{0x00000007u, 0};
constexpr RegField dma2d_ocolr_aplha{0xFF000000u, 24};
constexpr RegField dma2d_ocolr_red{0x00FF0000u, 16};
constexpr RegField dma2d_ocolr_green{0x0000FF00u, 8};
constexpr RegField dma2d_ocolr_blue{0x000000FFu, 0};
constexpr RegField dma2d_omar_ma{0xFFFFFFFFu, 0};
constexpr RegField dma2d_oor_lo{0x00003FFFu, 0};
constexpr RegField dma2d_nlr_pl{0x3FFF0000u, 16};
constexpr RegField dma2d_nlr_nl{0x0000FFFFu, 0};
constexpr RegField dma2d_lwr_lw{0x0000FFFFu, 0};
constexpr RegField dma2d_amtcr_dt{0x0000FF00u, 8};
constexpr RegField dma2d_amtcr_en{0x00000001u, 0};
constexpr RegField dma2d_fgclut_aplha{0xFF000000u, 24};
constexpr RegField dma2d_fgclut_red{0x00FF0000u, 16};
constexpr RegField dma2d_fgclut_green{0x0000FF00u, 8};
constexpr RegField dma2d_fgclut_blue{0x000000FFu, 0};
constexpr RegField dma2d_bgclut_aplha{0xFF000000u, 24};
constexpr RegField dma2d_bgclut_red{0x00FF0000u, 16};
constexpr RegField dma2d_bgclut_green{0x0000FF00u, 8};
constexpr RegField dma2d_bgclut_blue{0x000000FFu, 0};

#endif // DMA2D_HPP