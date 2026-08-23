// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// Real-time clock
#ifndef STM32_RTC_HPP
#define STM32_RTC_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

namespace rtc {
enum class Add1h : uint32_t {
    add1 = 1,
};
enum class Add1s : uint32_t {
    add1 = 1,
};
enum class Alrabe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Alrabf : uint32_t {
    match = 1,
};
enum class Alrabie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Alrwf : uint32_t {
    updatenotallowed = 0,
    updateallowed = 1,
};
enum class Bkp : uint32_t {
    dst_not_changed = 0,
    dst_changed = 1,
};
enum class Bypshad : uint32_t {
    shadowreg = 0,
    bypassshadowreg = 1,
};
enum class Calp : uint32_t {
    nochange = 0,
    increasefreq = 1,
};
enum class Calw16 : uint32_t {
    sixteen_second = 1,
};
enum class Calw8 : uint32_t {
    eight_second = 1,
};
enum class Coe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Cosel : uint32_t {
    calfreq_512hz = 0,
    calfreq_1hz = 1,
};
enum class Fmt : uint32_t {
    twenty_four_hour = 0,
    am_pm = 1,
};
enum class Init : uint32_t {
    freerunningmode = 0,
    initmode = 1,
};
enum class Initf : uint32_t {
    notallowed = 0,
    allowed = 1,
};
enum class Inits : uint32_t {
    notinitalized = 0,
    initalized = 1,
};
enum class Msk : uint32_t {
    mask = 0,
    notmask = 1,
};
enum class Mt : uint32_t {
    zero = 0,
    one = 1,
};
enum class Osel : uint32_t {
    disabled = 0,
    alarma = 1,
    alarmb = 2,
    wakeup = 3,
};
enum class Pm : uint32_t {
    am = 0,
    pm = 1,
};
enum class Pol : uint32_t {
    high = 0,
    low = 1,
};
enum class Recalpf : uint32_t {
    pending = 1,
};
enum class Refckon : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rsf : uint32_t {
    notsynced = 0,
    synced = 1,
};
enum class Shpf : uint32_t {
    noshiftpending = 0,
    shiftpending = 1,
};
enum class Sub1h : uint32_t {
    sub1 = 1,
};
enum class Tampf : uint32_t {
    tampered = 1,
};
enum class Tse : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tsedge : uint32_t {
    risingedge = 0,
    fallingedge = 1,
};
enum class Tsf : uint32_t {
    timestampevent = 1,
};
enum class Tsie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tsovf : uint32_t {
    overflow = 1,
};
enum class Wdsel : uint32_t {
    dateunits = 0,
    weekday = 1,
};
enum class Wucksel : uint32_t {
    div16 = 0,
    div8 = 1,
    div4 = 2,
    div2 = 3,
    clockspare = 4,
    clocksparewithoffset = 6,
};
enum class Wute : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wutf : uint32_t {
    zero = 1,
};
enum class Wutie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wutwf : uint32_t {
    updatenotallowed = 0,
    updateallowed = 1,
};
} // namespace rtc

// The BASE and Regs struct are defined entirely for debug utility.
constexpr uintptr_t RTC_BASE = 0x40002800;
struct RtcRegs {
    volatile uint32_t tr; // time register
    volatile uint32_t dr; // date register
    volatile uint32_t cr; // control register
    volatile uint32_t isr; // initialization and status register
    volatile uint32_t prer; // prescaler register
    volatile uint32_t wutr; // wakeup timer register
    volatile uint32_t calibr; // calibration register
    volatile uint32_t alrmar; // alarm A register
    volatile uint32_t alrmbr; // alarm B register
    volatile uint32_t wpr; // write protection register
    volatile uint32_t ssr; // sub second register
    volatile uint32_t shiftr; // shift control register
    volatile uint32_t tstr; // time stamp time register
    volatile uint32_t tsdr; // time stamp date register
    volatile uint32_t tsssr; // timestamp sub second register
    volatile uint32_t calr; // calibration register
    volatile uint32_t tafcr; // tamper and alternate function configuration register
    volatile uint32_t alrmassr; // alarm A sub second register
    volatile uint32_t alrmbssr; // alarm B sub second register
    uint32_t _reserved0[1];
    volatile uint32_t bkp0r; // backup register
    volatile uint32_t bkp1r; // backup register
    volatile uint32_t bkp2r; // backup register
    volatile uint32_t bkp3r; // backup register
    volatile uint32_t bkp4r; // backup register
    volatile uint32_t bkp5r; // backup register
    volatile uint32_t bkp6r; // backup register
    volatile uint32_t bkp7r; // backup register
    volatile uint32_t bkp8r; // backup register
    volatile uint32_t bkp9r; // backup register
    volatile uint32_t bkp10r; // backup register
    volatile uint32_t bkp11r; // backup register
    volatile uint32_t bkp12r; // backup register
    volatile uint32_t bkp13r; // backup register
    volatile uint32_t bkp14r; // backup register
    volatile uint32_t bkp15r; // backup register
    volatile uint32_t bkp16r; // backup register
    volatile uint32_t bkp17r; // backup register
    volatile uint32_t bkp18r; // backup register
    volatile uint32_t bkp19r; // backup register
};
static_assert(offsetof(RtcRegs, tr) == 0);
static_assert(offsetof(RtcRegs, dr) == 4);
static_assert(offsetof(RtcRegs, cr) == 8);
static_assert(offsetof(RtcRegs, isr) == 12);
static_assert(offsetof(RtcRegs, prer) == 16);
static_assert(offsetof(RtcRegs, wutr) == 20);
static_assert(offsetof(RtcRegs, calibr) == 24);
static_assert(offsetof(RtcRegs, alrmar) == 28);
static_assert(offsetof(RtcRegs, alrmbr) == 32);
static_assert(offsetof(RtcRegs, wpr) == 36);
static_assert(offsetof(RtcRegs, ssr) == 40);
static_assert(offsetof(RtcRegs, shiftr) == 44);
static_assert(offsetof(RtcRegs, tstr) == 48);
static_assert(offsetof(RtcRegs, tsdr) == 52);
static_assert(offsetof(RtcRegs, tsssr) == 56);
static_assert(offsetof(RtcRegs, calr) == 60);
static_assert(offsetof(RtcRegs, tafcr) == 64);
static_assert(offsetof(RtcRegs, alrmassr) == 68);
static_assert(offsetof(RtcRegs, alrmbssr) == 72);
static_assert(offsetof(RtcRegs, bkp0r) == 80);
static_assert(offsetof(RtcRegs, bkp1r) == 84);
static_assert(offsetof(RtcRegs, bkp2r) == 88);
static_assert(offsetof(RtcRegs, bkp3r) == 92);
static_assert(offsetof(RtcRegs, bkp4r) == 96);
static_assert(offsetof(RtcRegs, bkp5r) == 100);
static_assert(offsetof(RtcRegs, bkp6r) == 104);
static_assert(offsetof(RtcRegs, bkp7r) == 108);
static_assert(offsetof(RtcRegs, bkp8r) == 112);
static_assert(offsetof(RtcRegs, bkp9r) == 116);
static_assert(offsetof(RtcRegs, bkp10r) == 120);
static_assert(offsetof(RtcRegs, bkp11r) == 124);
static_assert(offsetof(RtcRegs, bkp12r) == 128);
static_assert(offsetof(RtcRegs, bkp13r) == 132);
static_assert(offsetof(RtcRegs, bkp14r) == 136);
static_assert(offsetof(RtcRegs, bkp15r) == 140);
static_assert(offsetof(RtcRegs, bkp16r) == 144);
static_assert(offsetof(RtcRegs, bkp17r) == 148);
static_assert(offsetof(RtcRegs, bkp18r) == 152);
static_assert(offsetof(RtcRegs, bkp19r) == 156);

constexpr Field<Access::RW, rtc::Pm> rtc_tr_pm{0x40002800u, 0x00400000u, 22};
constexpr Field<Access::RW> rtc_tr_ht{0x40002800u, 0x00300000u, 20};
constexpr Field<Access::RW> rtc_tr_hu{0x40002800u, 0x000F0000u, 16};
constexpr Field<Access::RW> rtc_tr_mnt{0x40002800u, 0x00007000u, 12};
constexpr Field<Access::RW> rtc_tr_mnu{0x40002800u, 0x00000F00u, 8};
constexpr Field<Access::RW> rtc_tr_st{0x40002800u, 0x00000070u, 4};
constexpr Field<Access::RW> rtc_tr_su{0x40002800u, 0x0000000Fu, 0};
constexpr Field<Access::RW> rtc_dr_yt{0x40002804u, 0x00F00000u, 20};
constexpr Field<Access::RW> rtc_dr_yu{0x40002804u, 0x000F0000u, 16};
constexpr Field<Access::RW> rtc_dr_wdu{0x40002804u, 0x0000E000u, 13};
constexpr Field<Access::RW, rtc::Mt> rtc_dr_mt{0x40002804u, 0x00001000u, 12};
constexpr Field<Access::RW> rtc_dr_mu{0x40002804u, 0x00000F00u, 8};
constexpr Field<Access::RW> rtc_dr_dt{0x40002804u, 0x00000030u, 4};
constexpr Field<Access::RW> rtc_dr_du{0x40002804u, 0x0000000Fu, 0};
constexpr Field<Access::RW, rtc::Coe> rtc_cr_coe{0x40002808u, 0x00800000u, 23};
constexpr Field<Access::RW, rtc::Osel> rtc_cr_osel{0x40002808u, 0x00600000u, 21};
constexpr Field<Access::RW, rtc::Pol> rtc_cr_pol{0x40002808u, 0x00100000u, 20};
constexpr Field<Access::RW, rtc::Bkp> rtc_cr_bkp{0x40002808u, 0x00040000u, 18};
constexpr Field<Access::RW, rtc::Sub1h> rtc_cr_sub1h{0x40002808u, 0x00020000u, 17};
constexpr Field<Access::RW, rtc::Add1h> rtc_cr_add1h{0x40002808u, 0x00010000u, 16};
constexpr Field<Access::RW, rtc::Tsie> rtc_cr_tsie{0x40002808u, 0x00008000u, 15};
constexpr Field<Access::RW, rtc::Wutie> rtc_cr_wutie{0x40002808u, 0x00004000u, 14};
constexpr Field<Access::RW, rtc::Alrabie> rtc_cr_alrbie{0x40002808u, 0x00002000u, 13};
constexpr Field<Access::RW, rtc::Alrabie> rtc_cr_alraie{0x40002808u, 0x00001000u, 12};
constexpr Field<Access::RW, rtc::Tse> rtc_cr_tse{0x40002808u, 0x00000800u, 11};
constexpr Field<Access::RW, rtc::Wute> rtc_cr_wute{0x40002808u, 0x00000400u, 10};
constexpr Field<Access::RW, rtc::Alrabe> rtc_cr_alrbe{0x40002808u, 0x00000200u, 9};
constexpr Field<Access::RW, rtc::Alrabe> rtc_cr_alrae{0x40002808u, 0x00000100u, 8};
constexpr Field<Access::RW> rtc_cr_dce{0x40002808u, 0x00000080u, 7};
constexpr Field<Access::RW, rtc::Fmt> rtc_cr_fmt{0x40002808u, 0x00000040u, 6};
constexpr Field<Access::RW, rtc::Refckon> rtc_cr_refckon{0x40002808u, 0x00000010u, 4};
constexpr Field<Access::RW, rtc::Tsedge> rtc_cr_tsedge{0x40002808u, 0x00000008u, 3};
constexpr Field<Access::RW> rtc_cr_wcksel{0x40002808u, 0x00000007u, 0};
constexpr Field<Access::RO, rtc::Alrwf> rtc_isr_alrawf{0x4000280Cu, 0x00000001u, 0};
constexpr Field<Access::RO, rtc::Alrwf> rtc_isr_alrbwf{0x4000280Cu, 0x00000002u, 1};
constexpr Field<Access::RO, rtc::Wutwf> rtc_isr_wutwf{0x4000280Cu, 0x00000004u, 2};
constexpr Field<Access::RW, rtc::Shpf> rtc_isr_shpf{0x4000280Cu, 0x00000008u, 3};
constexpr Field<Access::RO, rtc::Inits> rtc_isr_inits{0x4000280Cu, 0x00000010u, 4};
constexpr Field<Access::RW, rtc::Rsf> rtc_isr_rsf{0x4000280Cu, 0x00000020u, 5};
constexpr Field<Access::RO, rtc::Initf> rtc_isr_initf{0x4000280Cu, 0x00000040u, 6};
constexpr Field<Access::RW, rtc::Init> rtc_isr_init{0x4000280Cu, 0x00000080u, 7};
constexpr Field<Access::RW, rtc::Alrabf> rtc_isr_alraf{0x4000280Cu, 0x00000100u, 8};
constexpr Field<Access::RW, rtc::Alrabf> rtc_isr_alrbf{0x4000280Cu, 0x00000200u, 9};
constexpr Field<Access::RW, rtc::Wutf> rtc_isr_wutf{0x4000280Cu, 0x00000400u, 10};
constexpr Field<Access::RW, rtc::Tsf> rtc_isr_tsf{0x4000280Cu, 0x00000800u, 11};
constexpr Field<Access::RW, rtc::Tsovf> rtc_isr_tsovf{0x4000280Cu, 0x00001000u, 12};
constexpr Field<Access::RW, rtc::Tampf> rtc_isr_tamp1f{0x4000280Cu, 0x00002000u, 13};
constexpr Field<Access::RW, rtc::Tampf> rtc_isr_tamp2f{0x4000280Cu, 0x00004000u, 14};
constexpr Field<Access::RO, rtc::Recalpf> rtc_isr_recalpf{0x4000280Cu, 0x00010000u, 16};
constexpr Field<Access::RW> rtc_prer_prediv_a{0x40002810u, 0x007F0000u, 16};
constexpr Field<Access::RW> rtc_prer_prediv_s{0x40002810u, 0x00007FFFu, 0};
constexpr Field<Access::RW> rtc_wutr_wut{0x40002814u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> rtc_calibr_dcs{0x40002818u, 0x00000080u, 7};
constexpr Field<Access::RW> rtc_calibr_dc{0x40002818u, 0x0000001Fu, 0};
constexpr Field<Access::RW, rtc::Wdsel> rtc_alrmar_wdsel{0x4000281Cu, 0x40000000u, 30};
constexpr Field<Access::RW> rtc_alrmar_dt{0x4000281Cu, 0x30000000u, 28};
constexpr Field<Access::RW> rtc_alrmar_du{0x4000281Cu, 0x0F000000u, 24};
constexpr Field<Access::RW, rtc::Pm> rtc_alrmar_pm{0x4000281Cu, 0x00400000u, 22};
constexpr Field<Access::RW> rtc_alrmar_ht{0x4000281Cu, 0x00300000u, 20};
constexpr Field<Access::RW> rtc_alrmar_hu{0x4000281Cu, 0x000F0000u, 16};
constexpr Field<Access::RW> rtc_alrmar_mnt{0x4000281Cu, 0x00007000u, 12};
constexpr Field<Access::RW> rtc_alrmar_mnu{0x4000281Cu, 0x00000F00u, 8};
constexpr Field<Access::RW> rtc_alrmar_st{0x4000281Cu, 0x00000070u, 4};
constexpr Field<Access::RW> rtc_alrmar_su{0x4000281Cu, 0x0000000Fu, 0};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmar_msk4{0x4000281Cu, 0x80000000u, 31};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmar_msk3{0x4000281Cu, 0x00800000u, 23};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmar_msk2{0x4000281Cu, 0x00008000u, 15};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmar_msk1{0x4000281Cu, 0x00000080u, 7};
constexpr Field<Access::RW, rtc::Wdsel> rtc_alrmbr_wdsel{0x40002820u, 0x40000000u, 30};
constexpr Field<Access::RW> rtc_alrmbr_dt{0x40002820u, 0x30000000u, 28};
constexpr Field<Access::RW> rtc_alrmbr_du{0x40002820u, 0x0F000000u, 24};
constexpr Field<Access::RW, rtc::Pm> rtc_alrmbr_pm{0x40002820u, 0x00400000u, 22};
constexpr Field<Access::RW> rtc_alrmbr_ht{0x40002820u, 0x00300000u, 20};
constexpr Field<Access::RW> rtc_alrmbr_hu{0x40002820u, 0x000F0000u, 16};
constexpr Field<Access::RW> rtc_alrmbr_mnt{0x40002820u, 0x00007000u, 12};
constexpr Field<Access::RW> rtc_alrmbr_mnu{0x40002820u, 0x00000F00u, 8};
constexpr Field<Access::RW> rtc_alrmbr_st{0x40002820u, 0x00000070u, 4};
constexpr Field<Access::RW> rtc_alrmbr_su{0x40002820u, 0x0000000Fu, 0};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmbr_msk4{0x40002820u, 0x80000000u, 31};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmbr_msk3{0x40002820u, 0x00800000u, 23};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmbr_msk2{0x40002820u, 0x00008000u, 15};
constexpr Field<Access::RW, rtc::Msk> rtc_alrmbr_msk1{0x40002820u, 0x00000080u, 7};
constexpr Field<Access::WO> rtc_wpr_key{0x40002824u, 0x000000FFu, 0};
constexpr Field<Access::RO> rtc_ssr_ss{0x40002828u, 0x0000FFFFu, 0};
constexpr Field<Access::WO, rtc::Add1s> rtc_shiftr_add1s{0x4000282Cu, 0x80000000u, 31};
constexpr Field<Access::WO> rtc_shiftr_subfs{0x4000282Cu, 0x00007FFFu, 0};
constexpr Field<Access::RO> rtc_tstr_alarmouttype{0x40002830u, 0x00040000u, 18};
constexpr Field<Access::RO> rtc_tstr_tsinsel{0x40002830u, 0x00020000u, 17};
constexpr Field<Access::RO> rtc_tstr_tamp1insel{0x40002830u, 0x00010000u, 16};
constexpr Field<Access::RO> rtc_tstr_tampie{0x40002830u, 0x00000004u, 2};
constexpr Field<Access::RO> rtc_tstr_tamp1trg{0x40002830u, 0x00000002u, 1};
constexpr Field<Access::RO> rtc_tstr_tamp1e{0x40002830u, 0x00000001u, 0};
constexpr Field<Access::RO> rtc_tsdr_wdu{0x40002834u, 0x0000E000u, 13};
constexpr Field<Access::RO, rtc::Mt> rtc_tsdr_mt{0x40002834u, 0x00001000u, 12};
constexpr Field<Access::RO> rtc_tsdr_mu{0x40002834u, 0x00000F00u, 8};
constexpr Field<Access::RO> rtc_tsdr_dt{0x40002834u, 0x00000030u, 4};
constexpr Field<Access::RO> rtc_tsdr_du{0x40002834u, 0x0000000Fu, 0};
constexpr Field<Access::RO> rtc_tsssr_ss{0x40002838u, 0x0000FFFFu, 0};
constexpr Field<Access::RW, rtc::Calp> rtc_calr_calp{0x4000283Cu, 0x00008000u, 15};
constexpr Field<Access::RW> rtc_calr_calm{0x4000283Cu, 0x000001FFu, 0};
constexpr Field<Access::RW, rtc::Calw8> rtc_calr_calw8{0x4000283Cu, 0x00004000u, 14};
constexpr Field<Access::RW, rtc::Calw16> rtc_calr_calw16{0x4000283Cu, 0x00002000u, 13};
constexpr Field<Access::RW> rtc_tafcr_alarmouttype{0x40002840u, 0x00040000u, 18};
constexpr Field<Access::RW> rtc_tafcr_tsinsel{0x40002840u, 0x00020000u, 17};
constexpr Field<Access::RW> rtc_tafcr_tamp1insel{0x40002840u, 0x00010000u, 16};
constexpr Field<Access::RW> rtc_tafcr_tamppudis{0x40002840u, 0x00008000u, 15};
constexpr Field<Access::RW> rtc_tafcr_tampprch{0x40002840u, 0x00006000u, 13};
constexpr Field<Access::RW> rtc_tafcr_tampflt{0x40002840u, 0x00001800u, 11};
constexpr Field<Access::RW> rtc_tafcr_tampfreq{0x40002840u, 0x00000700u, 8};
constexpr Field<Access::RW> rtc_tafcr_tampts{0x40002840u, 0x00000080u, 7};
constexpr Field<Access::RW> rtc_tafcr_tamp2trg{0x40002840u, 0x00000010u, 4};
constexpr Field<Access::RW> rtc_tafcr_tamp2e{0x40002840u, 0x00000008u, 3};
constexpr Field<Access::RW> rtc_tafcr_tampie{0x40002840u, 0x00000004u, 2};
constexpr Field<Access::RW> rtc_tafcr_tamp1trg{0x40002840u, 0x00000002u, 1};
constexpr Field<Access::RW> rtc_tafcr_tamp1e{0x40002840u, 0x00000001u, 0};
constexpr Field<Access::RW> rtc_alrmassr_maskss{0x40002844u, 0x0F000000u, 24};
constexpr Field<Access::RW> rtc_alrmassr_ss{0x40002844u, 0x00007FFFu, 0};
constexpr Field<Access::RW> rtc_alrmbssr_maskss{0x40002848u, 0x0F000000u, 24};
constexpr Field<Access::RW> rtc_alrmbssr_ss{0x40002848u, 0x00007FFFu, 0};
constexpr Field<Access::RW> rtc_bkp0r_bkp{0x40002850u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp1r_bkp{0x40002854u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp2r_bkp{0x40002858u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp3r_bkp{0x4000285Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp4r_bkp{0x40002860u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp5r_bkp{0x40002864u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp6r_bkp{0x40002868u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp7r_bkp{0x4000286Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp8r_bkp{0x40002870u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp9r_bkp{0x40002874u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp10r_bkp{0x40002878u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp11r_bkp{0x4000287Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp12r_bkp{0x40002880u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp13r_bkp{0x40002884u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp14r_bkp{0x40002888u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp15r_bkp{0x4000288Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp16r_bkp{0x40002890u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp17r_bkp{0x40002894u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp18r_bkp{0x40002898u, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> rtc_bkp19r_bkp{0x4000289Cu, 0xFFFFFFFFu, 0};

#endif // STM32_RTC_HPP
