#pragma once

#include "BaseDeclarations.h"
struct FMinimalViewInfo
{
	char __padding[0x398L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FMinimalViewInfo.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FMinimalViewInfo.Rotation"); }
	FRotator& AimRotationField() { return *GetNativePointerField<FRotator*>(this, "FMinimalViewInfo.AimRotation"); }
	float& FOVField() { return *GetNativePointerField<float*>(this, "FMinimalViewInfo.FOV"); }
	float& OrthoWidthField() { return *GetNativePointerField<float*>(this, "FMinimalViewInfo.OrthoWidth"); }
	float& AspectRatioField() { return *GetNativePointerField<float*>(this, "FMinimalViewInfo.AspectRatio"); }
	TEnumAsByte<enum ECameraProjectionMode::Type>& ProjectionModeField() { return *GetNativePointerField<TEnumAsByte<enum ECameraProjectionMode::Type>*>(this, "FMinimalViewInfo.ProjectionMode"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "FMinimalViewInfo.PostProcessBlendWeight"); }

	// Functions

	FMinimalViewInfo * operator=(const FMinimalViewInfo * __that) { return NativeCall<FMinimalViewInfo *, const FMinimalViewInfo *>(this, "FMinimalViewInfo.operator=", __that); }
	void BlendViewInfo(FMinimalViewInfo * OtherInfo, float OtherWeight) { NativeCall<void, FMinimalViewInfo *, float>(this, "FMinimalViewInfo.BlendViewInfo", OtherInfo, OtherWeight); }
	bool Equals(const FMinimalViewInfo * OtherInfo) { return NativeCall<bool, const FMinimalViewInfo *>(this, "FMinimalViewInfo.Equals", OtherInfo); }
};

