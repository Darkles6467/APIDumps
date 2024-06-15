#pragma once

#include "BaseDeclarations.h"
struct FCachedSystemScalabilityCVars
{
	char __padding[0x28L];
	int& DetailModeField() { return *GetNativePointerField<int*>(this, "FCachedSystemScalabilityCVars.DetailMode"); }
	EMaterialQualityLevel::Type& MaterialQualityLevelField() { return *GetNativePointerField<EMaterialQualityLevel::Type*>(this, "FCachedSystemScalabilityCVars.MaterialQualityLevel"); }
	ERHISurfaceLevel::Type& MaterialSurfaceLevelField() { return *GetNativePointerField<ERHISurfaceLevel::Type*>(this, "FCachedSystemScalabilityCVars.MaterialSurfaceLevel"); }
	int& MaxAnisotropyField() { return *GetNativePointerField<int*>(this, "FCachedSystemScalabilityCVars.MaxAnisotropy"); }
	int& MaxShadowResolutionField() { return *GetNativePointerField<int*>(this, "FCachedSystemScalabilityCVars.MaxShadowResolution"); }
	float& ViewDistanceScaleField() { return *GetNativePointerField<float*>(this, "FCachedSystemScalabilityCVars.ViewDistanceScale"); }
	float& WorldClampedViewDistanceScaleField() { return *GetNativePointerField<float*>(this, "FCachedSystemScalabilityCVars.WorldClampedViewDistanceScale"); }
	float& ViewDistanceScaleSquaredField() { return *GetNativePointerField<float*>(this, "FCachedSystemScalabilityCVars.ViewDistanceScaleSquared"); }
	float& GaussianDOFNearThresholdField() { return *GetNativePointerField<float*>(this, "FCachedSystemScalabilityCVars.GaussianDOFNearThreshold"); }
	int& ShadowScalabilityQualityField() { return *GetNativePointerField<int*>(this, "FCachedSystemScalabilityCVars.ShadowScalabilityQuality"); }
};

