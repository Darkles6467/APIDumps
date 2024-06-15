#pragma once

#include "BaseDeclarations.h"
struct FOcclusionPrimitive
{
	char __padding[0x18L];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FOcclusionPrimitive.Center"); }
	FVector& ExtentField() { return *GetNativePointerField<FVector*>(this, "FOcclusionPrimitive.Extent"); }
};

