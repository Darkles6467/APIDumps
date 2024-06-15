#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_StartRequest_t : SteamCallback_t
{
	char __padding[0x28L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_StartRequest_t.unBrowserHandle"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_StartRequest_t.pchURL"); }
	const char * pchTargetField() { return GetNativePointerField<const char *>(this, "HTML_StartRequest_t.pchTarget"); }
	const char * pchPostDataField() { return GetNativePointerField<const char *>(this, "HTML_StartRequest_t.pchPostData"); }
	bool& bIsRedirectField() { return *GetNativePointerField<bool*>(this, "HTML_StartRequest_t.bIsRedirect"); }
};

