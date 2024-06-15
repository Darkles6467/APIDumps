#pragma once

#include "BaseDeclarations.h"
struct FScopeContext
{
	char __padding[0x18L];
	HDC__ * PrevDCField() { return GetNativePointerField<HDC__ *>(this, "FScopeContext.PrevDC"); }
	HGLRC__ * PrevContextField() { return GetNativePointerField<HGLRC__ *>(this, "FScopeContext.PrevContext"); }
	bool& bSameDCAndContextField() { return *GetNativePointerField<bool*>(this, "FScopeContext.bSameDCAndContext"); }
};

