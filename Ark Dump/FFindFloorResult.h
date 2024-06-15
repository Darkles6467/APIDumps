#pragma once

#include "BaseDeclarations.h"
struct FFindFloorResult
{
	char __padding[0x98L];
	float& FloorDistField() { return *GetNativePointerField<float*>(this, "FFindFloorResult.FloorDist"); }
	float& LineDistField() { return *GetNativePointerField<float*>(this, "FFindFloorResult.LineDist"); }
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "FFindFloorResult.HitResult"); }

	// Functions

	FFindFloorResult * operator=(const FFindFloorResult * __that) { return NativeCall<FFindFloorResult *, const FFindFloorResult *>(this, "FFindFloorResult.operator=", __that); }
	void SetFromLineTrace(const FHitResult * InHit, const float InSweepFloorDist, const float InLineDist, const bool bIsWalkableFloor) { NativeCall<void, const FHitResult *, const float, const float, const bool>(this, "FFindFloorResult.SetFromLineTrace", InHit, InSweepFloorDist, InLineDist, bIsWalkableFloor); }
	void SetFromSweep(const FHitResult * InHit, const float InSweepFloorDist, const bool bIsWalkableFloor) { NativeCall<void, const FHitResult *, const float, const bool>(this, "FFindFloorResult.SetFromSweep", InHit, InSweepFloorDist, bIsWalkableFloor); }
};

