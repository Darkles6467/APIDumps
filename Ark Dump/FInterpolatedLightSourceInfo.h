#pragma once

#include "BaseDeclarations.h"
struct FInterpolatedLightSourceInfo
{
	char __padding[0x48L];
	FVector& LightOriginField() { return *GetNativePointerField<FVector*>(this, "FInterpolatedLightSourceInfo.LightOrigin"); }
	FVector& LightDirectionField() { return *GetNativePointerField<FVector*>(this, "FInterpolatedLightSourceInfo.LightDirection"); }
	float& ShadowIntensityField() { return *GetNativePointerField<float*>(this, "FInterpolatedLightSourceInfo.ShadowIntensity"); }
	float& ShadowNearField() { return *GetNativePointerField<float*>(this, "FInterpolatedLightSourceInfo.ShadowNear"); }
	float& ShadowFarField() { return *GetNativePointerField<float*>(this, "FInterpolatedLightSourceInfo.ShadowFar"); }
	float& ShadowDistanceFadeFractionField() { return *GetNativePointerField<float*>(this, "FInterpolatedLightSourceInfo.ShadowDistanceFadeFraction"); }
	float& ShadowIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "FInterpolatedLightSourceInfo.ShadowIntensityMultiplier"); }
	FVector2D& DirectionalLightDistanceFadeParametersField() { return *GetNativePointerField<FVector2D*>(this, "FInterpolatedLightSourceInfo.DirectionalLightDistanceFadeParameters"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FInterpolatedLightSourceInfo.Color"); }
};

