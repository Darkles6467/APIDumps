#pragma once

#include "BaseDeclarations.h"
struct FIndirectLightingCacheAllocation
{
	char __padding[0x110L];
	FVector& AddField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.Add"); }
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.Scale"); }
	FVector& MinUVField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.MinUV"); }
	FVector& MaxUVField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.MaxUV"); }
	FIntVector& MinTexelField() { return *GetNativePointerField<FIntVector*>(this, "FIndirectLightingCacheAllocation.MinTexel"); }
	int& AllocationTexelSizeField() { return *GetNativePointerField<int*>(this, "FIndirectLightingCacheAllocation.AllocationTexelSize"); }
	FVector& TargetPositionField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.TargetPosition"); }
	FieldArray<FVector4[3], 43> TargetSamplePackedField() { return {this, "FIndirectLightingCacheAllocation.TargetSamplePacked"}; }
	float& TargetDirectionalShadowingField() { return *GetNativePointerField<float*>(this, "FIndirectLightingCacheAllocation.TargetDirectionalShadowing"); }
	FVector4& TargetSkyBentNormalField() { return *GetNativePointerField<FVector4*>(this, "FIndirectLightingCacheAllocation.TargetSkyBentNormal"); }
	FVector& SingleSamplePositionField() { return *GetNativePointerField<FVector*>(this, "FIndirectLightingCacheAllocation.SingleSamplePosition"); }
	FieldArray<FVector4[3], 43> SingleSamplePackedField() { return {this, "FIndirectLightingCacheAllocation.SingleSamplePacked"}; }
	float& CurrentDirectionalShadowingField() { return *GetNativePointerField<float*>(this, "FIndirectLightingCacheAllocation.CurrentDirectionalShadowing"); }
	FVector4& CurrentSkyBentNormalField() { return *GetNativePointerField<FVector4*>(this, "FIndirectLightingCacheAllocation.CurrentSkyBentNormal"); }
	bool& bHasEverUpdatedSingleSampleField() { return *GetNativePointerField<bool*>(this, "FIndirectLightingCacheAllocation.bHasEverUpdatedSingleSample"); }
	bool& bPointSampleField() { return *GetNativePointerField<bool*>(this, "FIndirectLightingCacheAllocation.bPointSample"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "FIndirectLightingCacheAllocation.bIsDirty"); }

	// Functions

};

