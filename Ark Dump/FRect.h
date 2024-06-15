#pragma once

#include "BaseDeclarations.h"
struct FRect
{
	char __padding[0x10L];
	FVector2D& MinField() { return *GetNativePointerField<FVector2D*>(this, "FRect.Min"); }
	FVector2D& MaxField() { return *GetNativePointerField<FVector2D*>(this, "FRect.Max"); }
};

