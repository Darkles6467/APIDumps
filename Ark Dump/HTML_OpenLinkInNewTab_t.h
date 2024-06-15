#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_OpenLinkInNewTab_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_OpenLinkInNewTab_t.unBrowserHandle"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_OpenLinkInNewTab_t.pchURL"); }
};

