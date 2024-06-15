#pragma once

#include "BaseDeclarations.h"
struct WICRect
{
	char __padding[0x10L];
	int& XField() { return *GetNativePointerField<int*>(this, "WICRect.X"); }
	int& YField() { return *GetNativePointerField<int*>(this, "WICRect.Y"); }
	int& WidthField() { return *GetNativePointerField<int*>(this, "WICRect.Width"); }
	int& HeightField() { return *GetNativePointerField<int*>(this, "WICRect.Height"); }
};

