#pragma once

#include "BaseDeclarations.h"
struct FStreamingTexture
{
	char __padding[0xa8L];
	int& MipCountField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.MipCount"); }
	int& ResidentMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.ResidentMips"); }
	int& RequestedMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.RequestedMips"); }
	int& WantedMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.WantedMips"); }
	float& DynamicScreenSizeField() { return *GetNativePointerField<float*>(this, "FStreamingTexture.DynamicScreenSize"); }
	int& MinAllowedMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.MinAllowedMips"); }
	int& MaxAllowedMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.MaxAllowedMips"); }
	FieldArray<int, 15> TextureSizesField() { return {this, "FStreamingTexture.TextureSizes"}; }
	int& ForceLoadRefCountField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.ForceLoadRefCount"); }
	TextureGroup& LODGroupField() { return *GetNativePointerField<TextureGroup*>(this, "FStreamingTexture.LODGroup"); }
	int& TextureLODBiasField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.TextureLODBias"); }
	int& LODStreamingBiasField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.LODStreamingBias"); }
	int& NumNonStreamingMipsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.NumNonStreamingMips"); }
	int& NumCinematicMipLevelsField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.NumCinematicMipLevels"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "FStreamingTexture.LastRenderTime"); }
	float& MinDistanceField() { return *GetNativePointerField<float*>(this, "FStreamingTexture.MinDistance"); }
	float& DynamicMinDistanceSqField() { return *GetNativePointerField<float*>(this, "FStreamingTexture.DynamicMinDistanceSq"); }
	long double& InstanceRemovedTimestampField() { return *GetNativePointerField<long double*>(this, "FStreamingTexture.InstanceRemovedTimestamp"); }
	long double& LastRenderTimeRefCountTimestampField() { return *GetNativePointerField<long double*>(this, "FStreamingTexture.LastRenderTimeRefCountTimestamp"); }
	int& LastRenderTimeRefCountField() { return *GetNativePointerField<int*>(this, "FStreamingTexture.LastRenderTimeRefCount"); }
	float& BoostFactorField() { return *GetNativePointerField<float*>(this, "FStreamingTexture.BoostFactor"); }
};

