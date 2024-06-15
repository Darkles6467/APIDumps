#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_ShowToolTip_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_ShowToolTip_t.unBrowserHandle"); }
	const char * pchMsgField() { return GetNativePointerField<const char *>(this, "HTML_ShowToolTip_t.pchMsg"); }
};

