#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_CanGoBackAndForward_t : SteamCallback_t
{
	char __padding[0x8L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_CanGoBackAndForward_t.unBrowserHandle"); }
	bool& bCanGoBackField() { return *GetNativePointerField<bool*>(this, "HTML_CanGoBackAndForward_t.bCanGoBack"); }
	bool& bCanGoForwardField() { return *GetNativePointerField<bool*>(this, "HTML_CanGoBackAndForward_t.bCanGoForward"); }
};

