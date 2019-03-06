rtk_core :=	core/rtw_cmd.o \
		core/rtw_security.o \
		core/rtw_debug.o \
		core/rtw_io.o \
		core/rtw_ioctl_query.o \
		core/rtw_ioctl_set.o \
		core/rtw_ieee80211.o \
		core/rtw_mlme.o \
		core/rtw_mlme_ext.o \
		core/rtw_mi.o \
		core/rtw_wlan_util.o \
		core/rtw_vht.o \
		core/rtw_pwrctrl.o \
		core/rtw_rf.o \
		core/rtw_recv.o \
		core/rtw_sta_mgt.o \
		core/rtw_ap.o \
		core/rtw_xmit.o	\
		core/rtw_p2p.o \
		core/rtw_rson.o \
		core/rtw_tdls.o \
		core/rtw_br_ext.o \
		core/rtw_iol.o \
		core/rtw_sreset.o \
		core/rtw_btcoex_wifionly.o \
		core/rtw_btcoex.o \
		core/rtw_beamforming.o \
		core/rtw_odm.o \
		core/efuse/rtw_efuse.o

ifeq ($(CONFIG_SDIO_HCI), y)
rtk_core += core/rtw_sdio.o
endif

rtl8812au-y += $(rtk_core)

rtl8812au-$(CONFIG_INTEL_WIDI) += core/rtw_intel_widi.o

rtl8812au-$(CONFIG_WAPI_SUPPORT) += core/rtw_wapi.o	\
					core/rtw_wapi_sms4.o

rtl8812au-y += $(_OS_INTFS_FILES)
rtl8812au-y += $(_HAL_INTFS_FILES)
rtl8812au-y += $(_PHYDM_FILES)
rtl8812au-y += $(_BTC_FILES)
rtl8812au-y += $(_PLATFORM_FILES)

rtl8812au-$(CONFIG_MP_INCLUDED) += core/rtw_mp.o

ifeq ($(CONFIG_RTL8723B), y)
rtl8812au-$(CONFIG_MP_INCLUDED)+= core/rtw_bt_mp.o
endif

obj-$(CONFIG_RTL8812AU) := rtl8812au.o

ccflags-y += -Idrivers/net/wireless/rtl8812au/include