#pragma once

#include "BaseDeclarations.h"
struct FBox
{
	char __padding[0x1cL];
	FVector& MinField() { return *GetNativePointerField<FVector*>(this, "FBox.Min"); }
	FVector& MaxField() { return *GetNativePointerField<FVector*>(this, "FBox.Max"); }
	char& IsValidField() { return *GetNativePointerField<char*>(this, "FBox.IsValid"); }

	// Functions

	static FBox * BuildAABB(FBox * result, const FVector * Origin, const FVector * Extent) { return NativeCall<FBox *, FBox *, const FVector *, const FVector *>(nullptr, "FBox.BuildAABB", result, Origin, Extent); }
	FBox * TransformBy(FBox * result, const FMatrix * M) { return NativeCall<FBox *, FBox *, const FMatrix *>(this, "FBox.TransformBy", result, M); }
	FBox * TransformBy(FBox * result, const FTransform * M) { return NativeCall<FBox *, FBox *, const FTransform *>(this, "FBox.TransformBy", result, M); }
};

