#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_JSConfirm_t : SteamCallback_t
{
	char __padding[0x10L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_JSConfirm_t.unBrowserHandle"); }
	const char * pchMessageField() { return GetNativePointerField<const char *>(this, "HTML_JSConfirm_t.pchMessage"); }
};

