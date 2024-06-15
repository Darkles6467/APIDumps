#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_URLChanged_t : SteamCallback_t
{
	char __padding[0x30L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_URLChanged_t.unBrowserHandle"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_URLChanged_t.pchURL"); }
	const char * pchPostDataField() { return GetNativePointerField<const char *>(this, "HTML_URLChanged_t.pchPostData"); }
	bool& bIsRedirectField() { return *GetNativePointerField<bool*>(this, "HTML_URLChanged_t.bIsRedirect"); }
	const char * pchPageTitleField() { return GetNativePointerField<const char *>(this, "HTML_URLChanged_t.pchPageTitle"); }
	bool& bNewNavigationField() { return *GetNativePointerField<bool*>(this, "HTML_URLChanged_t.bNewNavigation"); }
};

