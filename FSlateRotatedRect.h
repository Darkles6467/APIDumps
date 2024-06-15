#pragma once

#include "BaseDeclarations.h"
struct FSlateRotatedRect
{
	char __padding[0x18L];
	FVector2D& TopLeftField() { return *GetNativePointerField<FVector2D*>(this, "FSlateRotatedRect.TopLeft"); }
	FVector2D& ExtentXField() { return *GetNativePointerField<FVector2D*>(this, "FSlateRotatedRect.ExtentX"); }
	FVector2D& ExtentYField() { return *GetNativePointerField<FVector2D*>(this, "FSlateRotatedRect.ExtentY"); }

	// Functions

	FSlateRect * ToBoundingRect(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "FSlateRotatedRect.ToBoundingRect", result); }
};

