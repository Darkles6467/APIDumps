#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_NewWindow_t : SteamCallback_t
{
	char __padding[0x20L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NewWindow_t.unBrowserHandle"); }
	const char * pchURLField() { return GetNativePointerField<const char *>(this, "HTML_NewWindow_t.pchURL"); }
	unsigned int& unXField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NewWindow_t.unX"); }
	unsigned int& unYField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NewWindow_t.unY"); }
	unsigned int& unWideField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NewWindow_t.unWide"); }
	unsigned int& unTallField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NewWindow_t.unTall"); }
};

