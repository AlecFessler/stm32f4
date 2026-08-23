// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// USB on the go full speed
#ifndef STM32_OTG_FS_GLOBAL_HPP
#define STM32_OTG_FS_GLOBAL_HPP

#include <cstddef>
#include <cstdint>

#include "mmio.hpp"

// Otg_fs_globalRegs omitted: overlapping registers
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_srqscs{0x50000000u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_global_fs_gotgctl_srq{0x50000000u, 0x00000002u, 1};
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_hngscs{0x50000000u, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_global_fs_gotgctl_hnprq{0x50000000u, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_global_fs_gotgctl_hshnpen{0x50000000u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_global_fs_gotgctl_dhnpen{0x50000000u, 0x00000800u, 11};
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_cidsts{0x50000000u, 0x00010000u, 16};
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_dbct{0x50000000u, 0x00020000u, 17};
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_asvld{0x50000000u, 0x00040000u, 18};
constexpr Field<Access::RO> otg_fs_global_fs_gotgctl_bsvld{0x50000000u, 0x00080000u, 19};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_sedet{0x50000004u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_srsschg{0x50000004u, 0x00000100u, 8};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_hnsschg{0x50000004u, 0x00000200u, 9};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_hngdet{0x50000004u, 0x00020000u, 17};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_adtochg{0x50000004u, 0x00040000u, 18};
constexpr Field<Access::RC_W1, uint32_t, 0x000E0304u, 0x00000000u, false> otg_fs_global_fs_gotgint_dbcdne{0x50000004u, 0x00080000u, 19};
constexpr Field<Access::RW> otg_fs_global_fs_gahbcfg_gint{0x50000008u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_global_fs_gahbcfg_txfelvl{0x50000008u, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_global_fs_gahbcfg_ptxfelvl{0x50000008u, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_tocal{0x5000000Cu, 0x00000007u, 0};
constexpr Field<Access::WO> otg_fs_global_fs_gusbcfg_physel{0x5000000Cu, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_srpcap{0x5000000Cu, 0x00000100u, 8};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_hnpcap{0x5000000Cu, 0x00000200u, 9};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_trdt{0x5000000Cu, 0x00003C00u, 10};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_fhmod{0x5000000Cu, 0x20000000u, 29};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_fdmod{0x5000000Cu, 0x40000000u, 30};
constexpr Field<Access::RW> otg_fs_global_fs_gusbcfg_ctxpkt{0x5000000Cu, 0x80000000u, 31};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_csrst{0x50000010u, 0x00000001u, 0};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_hsrst{0x50000010u, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_fcrst{0x50000010u, 0x00000004u, 2};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_rxfflsh{0x50000010u, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_txfflsh{0x50000010u, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_global_fs_grstctl_txfnum{0x50000010u, 0x000007C0u, 6};
constexpr Field<Access::RO> otg_fs_global_fs_grstctl_ahbidl{0x50000010u, 0x80000000u, 31};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_cmod{0x50000014u, 0x00000001u, 0};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_mmis{0x50000014u, 0x00000002u, 1};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_otgint{0x50000014u, 0x00000004u, 2};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_sof{0x50000014u, 0x00000008u, 3};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_rxflvl{0x50000014u, 0x00000010u, 4};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_nptxfe{0x50000014u, 0x00000020u, 5};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_ginakeff{0x50000014u, 0x00000040u, 6};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_goutnakeff{0x50000014u, 0x00000080u, 7};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_esusp{0x50000014u, 0x00000400u, 10};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_usbsusp{0x50000014u, 0x00000800u, 11};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_usbrst{0x50000014u, 0x00001000u, 12};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_enumdne{0x50000014u, 0x00002000u, 13};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_isoodrp{0x50000014u, 0x00004000u, 14};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_eopf{0x50000014u, 0x00008000u, 15};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_iepint{0x50000014u, 0x00040000u, 18};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_oepint{0x50000014u, 0x00080000u, 19};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_iisoixfr{0x50000014u, 0x00100000u, 20};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_ipxfr_incompisoout{0x50000014u, 0x00200000u, 21};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_hprtint{0x50000014u, 0x01000000u, 24};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_hcint{0x50000014u, 0x02000000u, 25};
constexpr Field<Access::RO> otg_fs_global_fs_gintsts_ptxfe{0x50000014u, 0x04000000u, 26};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_cidschg{0x50000014u, 0x10000000u, 28};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_discint{0x50000014u, 0x20000000u, 29};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_srqint{0x50000014u, 0x40000000u, 30};
constexpr Field<Access::RC_W1, uint32_t, 0xF030FC0Au, 0x00000000u, false> otg_fs_global_fs_gintsts_wkupint{0x50000014u, 0x80000000u, 31};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_mmism{0x50000018u, 0x00000002u, 1};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_otgint{0x50000018u, 0x00000004u, 2};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_sofm{0x50000018u, 0x00000008u, 3};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_rxflvlm{0x50000018u, 0x00000010u, 4};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_nptxfem{0x50000018u, 0x00000020u, 5};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_ginakeffm{0x50000018u, 0x00000040u, 6};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_gonakeffm{0x50000018u, 0x00000080u, 7};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_esuspm{0x50000018u, 0x00000400u, 10};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_usbsuspm{0x50000018u, 0x00000800u, 11};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_usbrst{0x50000018u, 0x00001000u, 12};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_enumdnem{0x50000018u, 0x00002000u, 13};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_isoodrpm{0x50000018u, 0x00004000u, 14};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_eopfm{0x50000018u, 0x00008000u, 15};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_epmism{0x50000018u, 0x00020000u, 17};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_iepint{0x50000018u, 0x00040000u, 18};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_oepint{0x50000018u, 0x00080000u, 19};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_iisoixfrm{0x50000018u, 0x00100000u, 20};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_ipxfrm_iisooxfrm{0x50000018u, 0x00200000u, 21};
constexpr Field<Access::RO> otg_fs_global_fs_gintmsk_prtim{0x50000018u, 0x01000000u, 24};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_hcim{0x50000018u, 0x02000000u, 25};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_ptxfem{0x50000018u, 0x04000000u, 26};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_cidschgm{0x50000018u, 0x10000000u, 28};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_discint{0x50000018u, 0x20000000u, 29};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_srqim{0x50000018u, 0x40000000u, 30};
constexpr Field<Access::RW> otg_fs_global_fs_gintmsk_wuim{0x50000018u, 0x80000000u, 31};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_device_epnum{0x5000001Cu, 0x0000000Fu, 0};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_device_bcnt{0x5000001Cu, 0x00007FF0u, 4};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_device_dpid{0x5000001Cu, 0x00018000u, 15};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_device_pktsts{0x5000001Cu, 0x001E0000u, 17};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_device_frmnum{0x5000001Cu, 0x01E00000u, 21};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_host_epnum{0x5000001Cu, 0x0000000Fu, 0};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_host_bcnt{0x5000001Cu, 0x00007FF0u, 4};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_host_dpid{0x5000001Cu, 0x00018000u, 15};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_host_pktsts{0x5000001Cu, 0x001E0000u, 17};
constexpr Field<Access::RO> otg_fs_global_fs_grxstsr_host_frmnum{0x5000001Cu, 0x01E00000u, 21};
constexpr Field<Access::RW> otg_fs_global_fs_grxfsiz_rxfd{0x50000024u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_gnptxfsiz_device_tx0fsa{0x50000028u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_gnptxfsiz_device_tx0fd{0x50000028u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_fs_global_fs_gnptxfsiz_host_nptxfsa{0x50000028u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_gnptxfsiz_host_nptxfd{0x50000028u, 0xFFFF0000u, 16};
constexpr Field<Access::RO> otg_fs_global_fs_gnptxsts_nptxfsav{0x5000002Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RO> otg_fs_global_fs_gnptxsts_nptqxsav{0x5000002Cu, 0x00FF0000u, 16};
constexpr Field<Access::RO> otg_fs_global_fs_gnptxsts_nptxqtop{0x5000002Cu, 0x7F000000u, 24};
constexpr Field<Access::RW> otg_fs_global_fs_gccfg_pwrdwn{0x50000038u, 0x00010000u, 16};
constexpr Field<Access::RW> otg_fs_global_fs_gccfg_vbusasen{0x50000038u, 0x00040000u, 18};
constexpr Field<Access::RW> otg_fs_global_fs_gccfg_vbusbsen{0x50000038u, 0x00080000u, 19};
constexpr Field<Access::RW> otg_fs_global_fs_gccfg_sofouten{0x50000038u, 0x00100000u, 20};
constexpr Field<Access::RW> otg_fs_global_fs_cid_product_id{0x5000003Cu, 0xFFFFFFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_hptxfsiz_ptxsa{0x50000100u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_hptxfsiz_ptxfsiz{0x50000100u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf1_ineptxsa{0x50000104u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf1_ineptxfd{0x50000104u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf2_ineptxsa{0x50000108u, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf2_ineptxfd{0x50000108u, 0xFFFF0000u, 16};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf3_ineptxsa{0x5000010Cu, 0x0000FFFFu, 0};
constexpr Field<Access::RW> otg_fs_global_fs_dieptxf3_ineptxfd{0x5000010Cu, 0xFFFF0000u, 16};

#endif // STM32_OTG_FS_GLOBAL_HPP
