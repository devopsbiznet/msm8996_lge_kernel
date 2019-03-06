#ifndef _API_LEVEL_H_
#define _API_LEVEL_H_
/*
* Use CFG80211_API_LEVEL instead of LINUX_VERSION_CODE to adopt API changes.
* Some older kernels may have backported cfg80211/nl80211 API.
*/


#define CFG80211_API_LEVEL KERNEL_VERSION(4, 0, 0)

#endif

