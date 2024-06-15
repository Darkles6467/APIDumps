#pragma once

#include "BaseDeclarations.h"
struct FDebugShadowRay
{
	char __padding[0x1cL];
	FVector& StartField() { return *GetNativePointerField<FVector*>(this, "FDebugShadowRay.Start"); }
	FVector& EndField() { return *GetNativePointerField<FVector*>(this, "FDebugShadowRay.End"); }
	int& bHitField() { return *GetNativePointerField<int*>(this, "FDebugShadowRay.bHit"); }
};

