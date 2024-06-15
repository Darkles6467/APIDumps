#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_HideToolTip_t : SteamCallback_t
{
	char __padding[0x4L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_HideToolTip_t.unBrowserHandle"); }
};

