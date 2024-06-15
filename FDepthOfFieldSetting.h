#pragma once

#include "BaseDeclarations.h"
struct FDepthOfFieldSetting
{
	char __padding[0x20L];
	float& FocalDistanceField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.FocalDistance"); }
	float& FocalRegionField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.FocalRegion"); }
	float& NearTransitionRegionField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.NearTransitionRegion"); }
	float& FarTransitionRegionField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.FarTransitionRegion"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.Scale"); }
	float& MaxBokehSizeField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.MaxBokehSize"); }
	float& OcclusionField() { return *GetNativePointerField<float*>(this, "FDepthOfFieldSetting.Occlusion"); }
	bool& UseGaussianBlurField() { return *GetNativePointerField<bool*>(this, "FDepthOfFieldSetting.UseGaussianBlur"); }

	// Functions

};

