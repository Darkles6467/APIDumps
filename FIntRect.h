#pragma once

#include "BaseDeclarations.h"
struct FIntRect
{
	char __padding[0x10L];
	FIntPoint& MinField() { return *GetNativePointerField<FIntPoint*>(this, "FIntRect.Min"); }
	FIntPoint& MaxField() { return *GetNativePointerField<FIntPoint*>(this, "FIntRect.Max"); }
};

