#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_LinkAtPosition_t : SteamCallback_t
{
	char __padding[0x20L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_LinkAtPosition_t.unBrowserHandle"); }
	unsigned int& xField() { return *GetNativePointerField<unsigned int*>(this, "HTML_LinkAtPosition_t.x"); }
	unsigned int& yField() { return *GetNativePointerField<unsigned int*>(this, "HTML_LinkAtPosition_t.y"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_LinkAtPosition_t.pchURL"); }
	bool& bInputField() { return *GetNativePointerField<bool*>(this, "HTML_LinkAtPosition_t.bInput"); }
	bool& bLiveLinkField() { return *GetNativePointerField<bool*>(this, "HTML_LinkAtPosition_t.bLiveLink"); }
};

