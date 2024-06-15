#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_ChangedTitle_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_ChangedTitle_t.unBrowserHandle"); }
	const char * pchTitleField() { return GetNativePointerField<const char *>(this, "HTML_ChangedTitle_t.pchTitle"); }
};

