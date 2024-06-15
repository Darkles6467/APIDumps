#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_VerticalScroll_t : SteamCallback_t
{
	char __padding[0x18L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_VerticalScroll_t.unBrowserHandle"); }
	unsigned int& unScrollMaxField() { return *GetNativePointerField<unsigned int*>(this, "HTML_VerticalScroll_t.unScrollMax"); }
	unsigned int& unScrollCurrentField() { return *GetNativePointerField<unsigned int*>(this, "HTML_VerticalScroll_t.unScrollCurrent"); }
	float& flPageScaleField() { return *GetNativePointerField<float*>(this, "HTML_VerticalScroll_t.flPageScale"); }
	bool& bVisibleField() { return *GetNativePointerField<bool*>(this, "HTML_VerticalScroll_t.bVisible"); }
	unsigned int& unPageSizeField() { return *GetNativePointerField<unsigned int*>(this, "HTML_VerticalScroll_t.unPageSize"); }
};

