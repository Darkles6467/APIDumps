#pragma once

#include "BaseDeclarations.h"
struct FSlateGradientStop
{
	char __padding[0x18L];
	FVector2D& PositionField() { return *GetNativePointerField<FVector2D*>(this, "FSlateGradientStop.Position"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSlateGradientStop.Color"); }
};

