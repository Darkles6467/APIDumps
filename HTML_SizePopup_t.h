#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_SizePopup_t : SteamCallback_t
{
	char __padding[0x14L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SizePopup_t.unBrowserHandle"); }
	unsigned int& unXField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SizePopup_t.unX"); }
	unsigned int& unYField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SizePopup_t.unY"); }
	unsigned int& unWideField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SizePopup_t.unWide"); }
	unsigned int& unTallField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SizePopup_t.unTall"); }
};

