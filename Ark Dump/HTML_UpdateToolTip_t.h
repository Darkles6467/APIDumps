#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_UpdateToolTip_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_UpdateToolTip_t.unBrowserHandle"); }
	const char * pchMsgField() { return GetNativePointerField<const char *>(this, "HTML_UpdateToolTip_t.pchMsg"); }
};

