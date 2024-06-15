#pragma once

#include "BaseDeclarations.h"
struct FSphere
{
	char __padding[0x10L];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FSphere.Center"); }
	float& WField() { return *GetNativePointerField<float*>(this, "FSphere.W"); }

	// Functions

	bool IsInside(const FSphere * Other, float Tolerance) { return NativeCall<bool, const FSphere *, float>(this, "FSphere.IsInside", Other, Tolerance); }
};

