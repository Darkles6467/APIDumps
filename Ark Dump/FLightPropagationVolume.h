#pragma once

#include "BaseDeclarations.h"
struct FLightPropagationVolume
{
	char __padding[0x1a0L];
	FRWBufferByteAddress * mVplListHeadBufferField() { return GetNativePointerField<FRWBufferByteAddress *>(this, "FLightPropagationVolume.mVplListHeadBuffer"); }
	FRWBufferStructured * mVplListBufferField() { return GetNativePointerField<FRWBufferStructured *>(this, "FLightPropagationVolume.mVplListBuffer"); }
	FIntVector& mGridOffsetField() { return *GetNativePointerField<FIntVector*>(this, "FLightPropagationVolume.mGridOffset"); }
	FIntVector& mOldGridOffsetField() { return *GetNativePointerField<FIntVector*>(this, "FLightPropagationVolume.mOldGridOffset"); }
	FLpvWriteUniformBufferParameters * LpvWriteUniformBufferParamsField() { return GetNativePointerField<FLpvWriteUniformBufferParameters *>(this, "FLightPropagationVolume.LpvWriteUniformBufferParams"); }
	FLpvReadUniformBufferParameters& LpvReadUniformBufferParamsField() { return *GetNativePointerField<FLpvReadUniformBufferParameters*>(this, "FLightPropagationVolume.LpvReadUniformBufferParams"); }
	unsigned int& mInjectedLightCountField() { return *GetNativePointerField<unsigned int*>(this, "FLightPropagationVolume.mInjectedLightCount"); }
	FRWBufferByteAddress * GvListHeadBufferField() { return GetNativePointerField<FRWBufferByteAddress *>(this, "FLightPropagationVolume.GvListHeadBuffer"); }
	FRWBufferStructured * GvListBufferField() { return GetNativePointerField<FRWBufferStructured *>(this, "FLightPropagationVolume.GvListBuffer"); }
	float& SecondaryOcclusionStrengthField() { return *GetNativePointerField<float*>(this, "FLightPropagationVolume.SecondaryOcclusionStrength"); }
	float& SecondaryBounceStrengthField() { return *GetNativePointerField<float*>(this, "FLightPropagationVolume.SecondaryBounceStrength"); }
	float& CubeSizeField() { return *GetNativePointerField<float*>(this, "FLightPropagationVolume.CubeSize"); }
	float& StrengthField() { return *GetNativePointerField<float*>(this, "FLightPropagationVolume.Strength"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FLightPropagationVolume.bEnabled"); }
	unsigned int& mWriteBufferIndexField() { return *GetNativePointerField<unsigned int*>(this, "FLightPropagationVolume.mWriteBufferIndex"); }
	bool& bNeedsBufferClearField() { return *GetNativePointerField<bool*>(this, "FLightPropagationVolume.bNeedsBufferClear"); }
	FBox& BoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FLightPropagationVolume.BoundingBox"); }
	bool& GeometryVolumeGeneratedField() { return *GetNativePointerField<bool*>(this, "FLightPropagationVolume.GeometryVolumeGenerated"); }
	TUniformBuffer<FLpvWriteUniformBufferParameters>& LpvWriteUniformBufferField() { return *GetNativePointerField<TUniformBuffer<FLpvWriteUniformBufferParameters>*>(this, "FLightPropagationVolume.LpvWriteUniformBuffer"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FLightPropagationVolume.bInitialized"); }
};

