#pragma once

#include "BaseDeclarations.h"
struct FMargin
{
	char __padding[0x10L];
	float& LeftField() { return *GetNativePointerField<float*>(this, "FMargin.Left"); }
	float& TopField() { return *GetNativePointerField<float*>(this, "FMargin.Top"); }
	float& RightField() { return *GetNativePointerField<float*>(this, "FMargin.Right"); }
	float& BottomField() { return *GetNativePointerField<float*>(this, "FMargin.Bottom"); }

	// Functions

	FMargin * operator*(FMargin * result, float Scale) { return NativeCall<FMargin *, FMargin *, float>(this, "FMargin.operator*", result, Scale); }
};

