#pragma once

#include "BaseDeclarations.h"
struct FLightmassWorldInfoSettings
{
	char __padding[0x44L];
	float& StaticLightingLevelScaleField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.StaticLightingLevelScale"); }
	int& NumIndirectLightingBouncesField() { return *GetNativePointerField<int*>(this, "FLightmassWorldInfoSettings.NumIndirectLightingBounces"); }
	float& IndirectLightingQualityField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.IndirectLightingQuality"); }
	float& IndirectLightingSmoothnessField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.IndirectLightingSmoothness"); }
	FColor& EnvironmentColorField() { return *GetNativePointerField<FColor*>(this, "FLightmassWorldInfoSettings.EnvironmentColor"); }
	float& EnvironmentIntensityField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.EnvironmentIntensity"); }
	float& EmissiveBoostField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.EmissiveBoost"); }
	float& DiffuseBoostField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.DiffuseBoost"); }
	float& DirectIlluminationOcclusionFractionField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.DirectIlluminationOcclusionFraction"); }
	float& IndirectIlluminationOcclusionFractionField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.IndirectIlluminationOcclusionFraction"); }
	float& OcclusionExponentField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.OcclusionExponent"); }
	float& FullyOccludedSamplesFractionField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.FullyOccludedSamplesFraction"); }
	float& MaxOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.MaxOcclusionDistance"); }
	float& VolumeLightSamplePlacementScaleField() { return *GetNativePointerField<float*>(this, "FLightmassWorldInfoSettings.VolumeLightSamplePlacementScale"); }

	// Functions

};

