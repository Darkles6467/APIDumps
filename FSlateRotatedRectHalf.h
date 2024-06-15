#pragma once

#include "BaseDeclarations.h"
struct FSlateRotatedRectHalf
{
	char __padding[0xcL];
	FVector2DHalf& TopLeftField() { return *GetNativePointerField<FVector2DHalf*>(this, "FSlateRotatedRectHalf.TopLeft"); }
	FVector2DHalf& ExtentXField() { return *GetNativePointerField<FVector2DHalf*>(this, "FSlateRotatedRectHalf.ExtentX"); }
	FVector2DHalf& ExtentYField() { return *GetNativePointerField<FVector2DHalf*>(this, "FSlateRotatedRectHalf.ExtentY"); }
};

