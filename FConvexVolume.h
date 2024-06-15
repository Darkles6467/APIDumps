#pragma once

#include "BaseDeclarations.h"
struct FConvexVolume
{
	char __padding[0x120L];

	// Functions

	void Init() { NativeCall<void>(this, "FConvexVolume.Init"); }
	bool IntersectBox(const FVector * Origin, const FVector * Translation, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *, const FVector *>(this, "FConvexVolume.IntersectBox", Origin, Translation, Extent); }
	bool IntersectBox(const FVector * Origin, const FVector * Extent) { return NativeCall<bool, const FVector *, const FVector *>(this, "FConvexVolume.IntersectBox", Origin, Extent); }
	bool IntersectBox(const FVector * Origin, const FVector * Extent, bool * bOutFullyContained) { return NativeCall<bool, const FVector *, const FVector *, bool *>(this, "FConvexVolume.IntersectBox", Origin, Extent, bOutFullyContained); }
	bool IntersectSphere(const FVector * Origin, const float * Radius) { return NativeCall<bool, const FVector *, const float *>(this, "FConvexVolume.IntersectSphere", Origin, Radius); }
	FConvexVolume * operator=(const FConvexVolume * __that) { return NativeCall<FConvexVolume *, const FConvexVolume *>(this, "FConvexVolume.operator=", __that); }
};

