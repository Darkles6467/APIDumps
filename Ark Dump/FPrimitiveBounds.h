#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveBounds
{
	char __padding[0x24L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FPrimitiveBounds.Origin"); }
	float& SphereRadiusField() { return *GetNativePointerField<float*>(this, "FPrimitiveBounds.SphereRadius"); }
	FVector& BoxExtentField() { return *GetNativePointerField<FVector*>(this, "FPrimitiveBounds.BoxExtent"); }
	float& MinDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveBounds.MinDrawDistance"); }
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveBounds.MaxDrawDistance"); }
};

