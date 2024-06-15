#pragma once

#include "BaseDeclarations.h"
struct FBasedPosition
{
	char __padding[0x38L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FBasedPosition.Position"); }
	FVector& CachedBaseLocationField() { return *GetNativePointerField<FVector*>(this, "FBasedPosition.CachedBaseLocation"); }
	FRotator& CachedBaseRotationField() { return *GetNativePointerField<FRotator*>(this, "FBasedPosition.CachedBaseRotation"); }
	FVector& CachedTransPositionField() { return *GetNativePointerField<FVector*>(this, "FBasedPosition.CachedTransPosition"); }

	// Functions

	FVector * operator*(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FBasedPosition.operator*", result); }
	void Clear() { NativeCall<void>(this, "FBasedPosition.Clear"); }
	void Set(AActor * InBase, const FVector * InPosition) { NativeCall<void, AActor *, const FVector *>(this, "FBasedPosition.Set", InBase, InPosition); }
};

