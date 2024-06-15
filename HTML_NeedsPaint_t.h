#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_NeedsPaint_t : SteamCallback_t
{
	char __padding[0x38L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unBrowserHandle"); }
	const char * pBGRAField() { return GetNativePointerField<const char *>(this, "HTML_NeedsPaint_t.pBGRA"); }
	unsigned int& unWideField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unWide"); }
	unsigned int& unTallField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unTall"); }
	unsigned int& unUpdateXField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unUpdateX"); }
	unsigned int& unUpdateYField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unUpdateY"); }
	unsigned int& unUpdateWideField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unUpdateWide"); }
	unsigned int& unUpdateTallField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unUpdateTall"); }
	unsigned int& unScrollXField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unScrollX"); }
	unsigned int& unScrollYField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unScrollY"); }
	float& flPageScaleField() { return *GetNativePointerField<float*>(this, "HTML_NeedsPaint_t.flPageScale"); }
	unsigned int& unPageSerialField() { return *GetNativePointerField<unsigned int*>(this, "HTML_NeedsPaint_t.unPageSerial"); }
};

