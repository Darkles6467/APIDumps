#pragma once

#include "BaseDeclarations.h"
struct FPlatformRect
{
	char __padding[0x10L];
	int& LeftField() { return *GetNativePointerField<int*>(this, "FPlatformRect.Left"); }
	int& TopField() { return *GetNativePointerField<int*>(this, "FPlatformRect.Top"); }
	int& RightField() { return *GetNativePointerField<int*>(this, "FPlatformRect.Right"); }
	int& BottomField() { return *GetNativePointerField<int*>(this, "FPlatformRect.Bottom"); }
};

