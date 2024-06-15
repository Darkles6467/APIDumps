#pragma once

#include "BaseDeclarations.h"
struct FOcclusionBounds
{
	char __padding[0x28L];
	FPrimitiveOcclusionHistory * PrimitiveOcclusionHistoryField() { return GetNativePointerField<FPrimitiveOcclusionHistory *>(this, "FOcclusionBounds.PrimitiveOcclusionHistory"); }
	FVector& BoundsOriginField() { return *GetNativePointerField<FVector*>(this, "FOcclusionBounds.BoundsOrigin"); }
	FVector& BoundsExtentField() { return *GetNativePointerField<FVector*>(this, "FOcclusionBounds.BoundsExtent"); }
	bool& bGroupedQueryField() { return *GetNativePointerField<bool*>(this, "FOcclusionBounds.bGroupedQuery"); }
};

