#pragma once

#include "BaseDeclarations.h"
struct FBoxSphereBounds
{
	char __padding[0x1cL];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FBoxSphereBounds.Origin"); }
	FVector& BoxExtentField() { return *GetNativePointerField<FVector*>(this, "FBoxSphereBounds.BoxExtent"); }
	float& SphereRadiusField() { return *GetNativePointerField<float*>(this, "FBoxSphereBounds.SphereRadius"); }

	// Functions

	FBox * GetBox(FBox * result) { return NativeCall<FBox *, FBox *>(this, "FBoxSphereBounds.GetBox", result); }
	FBoxSphereBounds * TransformBy(FBoxSphereBounds * result, const FMatrix * M) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FMatrix *>(this, "FBoxSphereBounds.TransformBy", result, M); }
	FBoxSphereBounds * TransformBy(FBoxSphereBounds * result, const FTransform * M) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "FBoxSphereBounds.TransformBy", result, M); }
	bool ContainsNaN() { return NativeCall<bool>(this, "FBoxSphereBounds.ContainsNaN"); }
};

