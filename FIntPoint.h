#pragma once

#include "BaseDeclarations.h"
struct FIntPoint
{
	char __padding[0x8L];
	int& XField() { return *GetNativePointerField<int*>(this, "FIntPoint.X"); }
	int& YField() { return *GetNativePointerField<int*>(this, "FIntPoint.Y"); }
};

