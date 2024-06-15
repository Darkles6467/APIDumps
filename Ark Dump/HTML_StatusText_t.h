#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_StatusText_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_StatusText_t.unBrowserHandle"); }
	const char * pchMsgField() { return GetNativePointerField<const char *>(this, "HTML_StatusText_t.pchMsg"); }
};

