#pragma once

#include "BaseDeclarations.h"
struct FDebugTraceInfo
{
	char __padding[0x54L];
	FVector& LineTraceStartField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.LineTraceStart"); }
	FVector& LineTraceEndField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.LineTraceEnd"); }
	FVector& HitNormalStartField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.HitNormalStart"); }
	FVector& HitNormalEndField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.HitNormalEnd"); }
	FVector& HitImpactNormalEndField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.HitImpactNormalEnd"); }
	FVector& HitLocationField() { return *GetNativePointerField<FVector*>(this, "FDebugTraceInfo.HitLocation"); }
	float& CapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "FDebugTraceInfo.CapsuleHalfHeight"); }
	float& CapsuleRadiusField() { return *GetNativePointerField<float*>(this, "FDebugTraceInfo.CapsuleRadius"); }
};

