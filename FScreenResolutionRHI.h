#pragma once

#include "BaseDeclarations.h"
struct FScreenResolutionRHI
{
	char __padding[0xcL];
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FScreenResolutionRHI.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FScreenResolutionRHI.Height"); }
	unsigned int& RefreshRateField() { return *GetNativePointerField<unsigned int*>(this, "FScreenResolutionRHI.RefreshRate"); }
};

