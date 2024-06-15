#pragma once

#include "BaseDeclarations.h"
struct FFoliageInstancePlacementInfo
{
	char __padding[0x38L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FFoliageInstancePlacementInfo.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FFoliageInstancePlacementInfo.Rotation"); }
	FRotator& PreAlignRotationField() { return *GetNativePointerField<FRotator*>(this, "FFoliageInstancePlacementInfo.PreAlignRotation"); }
	FVector& DrawScale3DField() { return *GetNativePointerField<FVector*>(this, "FFoliageInstancePlacementInfo.DrawScale3D"); }
	float& ZOffsetField() { return *GetNativePointerField<float*>(this, "FFoliageInstancePlacementInfo.ZOffset"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FFoliageInstancePlacementInfo.Flags"); }
};

struct FFoliageInstance : FFoliageInstancePlacementInfo
{
	char __padding[0x10L];
	int& BaseIndexField() { return *GetNativePointerField<int*>(this, "FFoliageInstance.BaseIndex"); }

	// Functions

};

