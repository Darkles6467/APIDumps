#pragma once

#include "BaseDeclarations.h"
struct FResolveRect
{
	char __padding[0x10L];
	int& X1Field() { return *GetNativePointerField<int*>(this, "FResolveRect.X1"); }
	int& Y1Field() { return *GetNativePointerField<int*>(this, "FResolveRect.Y1"); }
	int& X2Field() { return *GetNativePointerField<int*>(this, "FResolveRect.X2"); }
	int& Y2Field() { return *GetNativePointerField<int*>(this, "FResolveRect.Y2"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FResolveRect.IsValid"); }
};

