#pragma once

#include "BaseDeclarations.h"
struct FIKGroundPlaneOverrideInfo
{
	char __padding[0x4cL];
	FVector& RootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.RootLocationOffset"); }
	FVector& HitLocationWSField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.HitLocationWS"); }
	FVector& HitLocationCSField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.HitLocationCS"); }
	FVector& CachedHitLocationWSField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.CachedHitLocationWS"); }
	FVector& CachedHitLocationCSField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.CachedHitLocationCS"); }
	FVector& HitLocationTargetWSField() { return *GetNativePointerField<FVector*>(this, "FIKGroundPlaneOverrideInfo.HitLocationTargetWS"); }

	// Functions

};

