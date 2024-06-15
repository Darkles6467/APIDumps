#pragma once

#include "BaseDeclarations.h"
struct FHeightfieldDescription
{
	char __padding[0xc0L];
	FIntRect& RectField() { return *GetNativePointerField<FIntRect*>(this, "FHeightfieldDescription.Rect"); }
	int& DownsampleFactorField() { return *GetNativePointerField<int*>(this, "FHeightfieldDescription.DownsampleFactor"); }
	FIntRect& DownsampledRectField() { return *GetNativePointerField<FIntRect*>(this, "FHeightfieldDescription.DownsampledRect"); }
	FMatrix& BaseLocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FHeightfieldDescription.BaseLocalToWorld"); }

	// Functions

	FHeightfieldDescription * operator=(const FHeightfieldDescription * __that) { return NativeCall<FHeightfieldDescription *, const FHeightfieldDescription *>(this, "FHeightfieldDescription.operator=", __that); }
};

