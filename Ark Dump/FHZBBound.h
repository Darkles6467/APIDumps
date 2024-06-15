#pragma once

#include "BaseDeclarations.h"
struct FHZBBound
{
	char __padding[0x20L];
	FPrimitiveOcclusionHistory * TargetHistoryField() { return GetNativePointerField<FPrimitiveOcclusionHistory *>(this, "FHZBBound.TargetHistory"); }
	FVector& BoundsOriginField() { return *GetNativePointerField<FVector*>(this, "FHZBBound.BoundsOrigin"); }
	FVector& BoundsExtentField() { return *GetNativePointerField<FVector*>(this, "FHZBBound.BoundsExtent"); }
};

