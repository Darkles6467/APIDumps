#pragma once

#include "BaseDeclarations.h"
struct DepthOfFieldLimits
{
	char __padding[0x1cL];
	float& FocalDistLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.FocalDistLimit"); }
	float& FocalRegionLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.FocalRegionLimit"); }
	float& NearLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.NearLimit"); }
	float& FarLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.FarLimit"); }
	float& ScaleLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.ScaleLimit"); }
	float& BokehLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.BokehLimit"); }
	float& OcclusionLimitField() { return *GetNativePointerField<float*>(this, "DepthOfFieldLimits.OcclusionLimit"); }
};

