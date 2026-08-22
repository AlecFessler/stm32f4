// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Ethernet: Precision time protocol
#ifndef ETHERNET_PTP_HPP
#define ETHERNET_PTP_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

constexpr uintptr_t ETHERNET_PTP_BASE = 0x40028700;

struct Ethernet_ptpRegs {
    volatile uint32_t ptptscr; // Ethernet PTP time stamp control register
    volatile uint32_t ptpssir; // Ethernet PTP subsecond increment register
    volatile uint32_t ptptshr; // Ethernet PTP time stamp high register
    volatile uint32_t ptptslr; // Ethernet PTP time stamp low register
    volatile uint32_t ptptshur; // Ethernet PTP time stamp high update register
    volatile uint32_t ptptslur; // Ethernet PTP time stamp low update register
    volatile uint32_t ptptsar; // Ethernet PTP time stamp addend register
    volatile uint32_t ptptthr; // Ethernet PTP target time high register
    volatile uint32_t ptpttlr; // Ethernet PTP target time low register
    uint32_t _reserved0[1];
    volatile uint32_t ptptssr; // Ethernet PTP time stamp status register
    volatile uint32_t ptpppscr; // Ethernet PTP PPS control register
};

static_assert(offsetof(Ethernet_ptpRegs, ptptscr) == 0);
static_assert(offsetof(Ethernet_ptpRegs, ptpssir) == 4);
static_assert(offsetof(Ethernet_ptpRegs, ptptshr) == 8);
static_assert(offsetof(Ethernet_ptpRegs, ptptslr) == 12);
static_assert(offsetof(Ethernet_ptpRegs, ptptshur) == 16);
static_assert(offsetof(Ethernet_ptpRegs, ptptslur) == 20);
static_assert(offsetof(Ethernet_ptpRegs, ptptsar) == 24);
static_assert(offsetof(Ethernet_ptpRegs, ptptthr) == 28);
static_assert(offsetof(Ethernet_ptpRegs, ptpttlr) == 32);
static_assert(offsetof(Ethernet_ptpRegs, ptptssr) == 40);
static_assert(offsetof(Ethernet_ptpRegs, ptpppscr) == 44);

inline Ethernet_ptpRegs& ethernet_ptp() { return *reinterpret_cast<Ethernet_ptpRegs*>(ETHERNET_PTP_BASE); }

constexpr RegField ethernet_ptp_ptptscr_tse{0x00000001u, 0};
constexpr RegField ethernet_ptp_ptptscr_tsfcu{0x00000002u, 1};
constexpr RegField ethernet_ptp_ptptscr_tsptppsv2e{0x00000400u, 10};
constexpr RegField ethernet_ptp_ptptscr_tssptpoefe{0x00000800u, 11};
constexpr RegField ethernet_ptp_ptptscr_tssipv6fe{0x00001000u, 12};
constexpr RegField ethernet_ptp_ptptscr_tssipv4fe{0x00002000u, 13};
constexpr RegField ethernet_ptp_ptptscr_tsseme{0x00004000u, 14};
constexpr RegField ethernet_ptp_ptptscr_tssmrme{0x00008000u, 15};
constexpr RegField ethernet_ptp_ptptscr_tscnt{0x00030000u, 16};
constexpr RegField ethernet_ptp_ptptscr_tspffmae{0x00040000u, 18};
constexpr RegField ethernet_ptp_ptptscr_tssti{0x00000004u, 2};
constexpr RegField ethernet_ptp_ptptscr_tsstu{0x00000008u, 3};
constexpr RegField ethernet_ptp_ptptscr_tsite{0x00000010u, 4};
constexpr RegField ethernet_ptp_ptptscr_ttsaru{0x00000020u, 5};
constexpr RegField ethernet_ptp_ptptscr_tssarfe{0x00000100u, 8};
constexpr RegField ethernet_ptp_ptptscr_tsssr{0x00000200u, 9};
constexpr RegField ethernet_ptp_ptpssir_stssi{0x000000FFu, 0};
constexpr RegField ethernet_ptp_ptptshr_sts{0xFFFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptslr_stss{0x7FFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptslr_stpns{0x80000000u, 31};
constexpr RegField ethernet_ptp_ptptshur_tsus{0xFFFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptslur_tsuss{0x7FFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptslur_tsupns{0x80000000u, 31};
constexpr RegField ethernet_ptp_ptptsar_tsa{0xFFFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptthr_ttsh{0xFFFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptpttlr_ttsl{0xFFFFFFFFu, 0};
constexpr RegField ethernet_ptp_ptptssr_tsso{0x00000001u, 0};
constexpr RegField ethernet_ptp_ptptssr_tsttr{0x00000002u, 1};
constexpr RegField ethernet_ptp_ptpppscr_tsso{0x00000001u, 0};
constexpr RegField ethernet_ptp_ptpppscr_tsttr{0x00000002u, 1};

#endif // ETHERNET_PTP_HPP