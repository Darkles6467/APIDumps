#pragma once

#include "BaseDeclarations.h"
struct FIKRootAdjustmentInfo
{
	char __padding[0x30L];
	FName& RootBoneNameField() { return *GetNativePointerField<FName*>(this, "FIKRootAdjustmentInfo.RootBoneName"); }
	FVector& NonBoneRootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FIKRootAdjustmentInfo.NonBoneRootLocationOffset"); }
	float& TraceExtraZBufferField() { return *GetNativePointerField<float*>(this, "FIKRootAdjustmentInfo.TraceExtraZBuffer"); }
	float& TraceLengthField() { return *GetNativePointerField<float*>(this, "FIKRootAdjustmentInfo.TraceLength"); }
	float& DistanceTracedFromStartPointField() { return *GetNativePointerField<float*>(this, "FIKRootAdjustmentInfo.DistanceTracedFromStartPoint"); }
	FVector& CachedDistanceTracedField() { return *GetNativePointerField<FVector*>(this, "FIKRootAdjustmentInfo.CachedDistanceTraced"); }

	// Functions

};

