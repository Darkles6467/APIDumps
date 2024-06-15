#pragma once

#include "BaseDeclarations.h"
struct FLpvWriteUniformBufferParameters
{
	char __padding[0xc0L];
	FMatrix& mRsmToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FLpvWriteUniformBufferParameters.mRsmToWorld"); }
	FVector4& mLightColourField() { return *GetNativePointerField<FVector4*>(this, "FLpvWriteUniformBufferParameters.mLightColour"); }
	FVector4& GeometryVolumeCaptureLightDirectionField() { return *GetNativePointerField<FVector4*>(this, "FLpvWriteUniformBufferParameters.GeometryVolumeCaptureLightDirection"); }
	FVector4& mEyePosField() { return *GetNativePointerField<FVector4*>(this, "FLpvWriteUniformBufferParameters.mEyePos"); }
	FIntVector& mOldGridOffsetField() { return *GetNativePointerField<FIntVector*>(this, "FLpvWriteUniformBufferParameters.mOldGridOffset"); }
	FIntVector& mLpvGridOffsetField() { return *GetNativePointerField<FIntVector*>(this, "FLpvWriteUniformBufferParameters.mLpvGridOffset"); }
	float& ClearMultiplierField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.ClearMultiplier"); }
	float& LpvScaleField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.LpvScale"); }
	float& OneOverLpvScaleField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.OneOverLpvScale"); }
	float& WarpStrengthField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.WarpStrength"); }
	float& SecondaryOcclusionStrengthField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.SecondaryOcclusionStrength"); }
	float& SecondaryBounceStrengthField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.SecondaryBounceStrength"); }
	float& VplInjectionBiasField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.VplInjectionBias"); }
	float& GeometryVolumeInjectionBiasField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.GeometryVolumeInjectionBias"); }
	float& EmissiveInjectionMultiplierField() { return *GetNativePointerField<float*>(this, "FLpvWriteUniformBufferParameters.EmissiveInjectionMultiplier"); }
	int& PropagationIndexField() { return *GetNativePointerField<int*>(this, "FLpvWriteUniformBufferParameters.PropagationIndex"); }
};

