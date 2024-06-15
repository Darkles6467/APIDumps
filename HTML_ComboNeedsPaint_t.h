#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_ComboNeedsPaint_t : SteamCallback_t
{
	char __padding[0x18L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_ComboNeedsPaint_t.unBrowserHandle"); }
	const char * pBGRAField() { return GetNativePointerField<const char *>(this, "HTML_ComboNeedsPaint_t.pBGRA"); }
	unsigned int& unWideField() { return *GetNativePointerField<unsigned int*>(this, "HTML_ComboNeedsPaint_t.unWide"); }
	unsigned int& unTallField() { return *GetNativePointerField<unsigned int*>(this, "HTML_ComboNeedsPaint_t.unTall"); }
};

