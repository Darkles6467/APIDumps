#pragma once

#include "BaseDeclarations.h"
struct FAvoidanceArea
{
	char __padding[0x70L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FAvoidanceArea.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FAvoidanceArea.Rotation"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FAvoidanceArea.Transform"); }
	FVector& BoxExtentsField() { return *GetNativePointerField<FVector*>(this, "FAvoidanceArea.BoxExtents"); }
	float& SphereRadiusField() { return *GetNativePointerField<float*>(this, "FAvoidanceArea.SphereRadius"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "FAvoidanceArea.CreationTime"); }

	// Functions

	FAvoidanceArea * operator=(const FAvoidanceArea * __that) { return NativeCall<FAvoidanceArea *, const FAvoidanceArea *>(this, "FAvoidanceArea.operator=", __that); }
	void DrawDebug(UWorld * World, float DrawDuration) { NativeCall<void, UWorld *, float>(this, "FAvoidanceArea.DrawDebug", World, DrawDuration); }
	FVector * GetAvoidanceDirection(FVector * result, const FVector * CurrentLoc, const FVector * CurrentDir) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *>(this, "FAvoidanceArea.GetAvoidanceDirection", result, CurrentLoc, CurrentDir); }
	FVector * GetClosestSurfacePoint(FVector * result, const FVector * Loc) { return NativeCall<FVector *, FVector *, const FVector *>(this, "FAvoidanceArea.GetClosestSurfacePoint", result, Loc); }
	FVector * GetWorldLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FAvoidanceArea.GetWorldLocation", result); }
	bool IsPointInside(const FVector * Loc) { return NativeCall<bool, const FVector *>(this, "FAvoidanceArea.IsPointInside", Loc); }
	bool IsPointNear(const FVector * Loc, float BoundsMultiplier) { return NativeCall<bool, const FVector *, float>(this, "FAvoidanceArea.IsPointNear", Loc, BoundsMultiplier); }
	FVector * MakeRelative(FVector * result, const FVector * Loc) { return NativeCall<FVector *, FVector *, const FVector *>(this, "FAvoidanceArea.MakeRelative", result, Loc); }
};

