#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_FinishedRequest_t : SteamCallback_t
{
	char __padding[0x18L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_FinishedRequest_t.unBrowserHandle"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_FinishedRequest_t.pchURL"); }
	const char * pchPageTitleField() { return GetNativePointerField<const char *>(this, "HTML_FinishedRequest_t.pchPageTitle"); }
};

