#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_JSAlert_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_JSAlert_t.unBrowserHandle"); }
	const char * pchMessageField() { return GetNativePointerField<const char *>(this, "HTML_JSAlert_t.pchMessage"); }
};

