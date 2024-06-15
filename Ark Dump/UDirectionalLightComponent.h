#pragma once

#include "BaseDeclarations.h"
#include "ULightComponent.h"
#include "ULightComponentBase.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDirectionalLightComponent : ULightComponent
{
	char __padding[0x60L];
	float& OcclusionDepthRangeField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.OcclusionDepthRange"); }
	FVector& LightShaftOverrideDirectionField() { return *GetNativePointerField<FVector*>(this, "UDirectionalLightComponent.LightShaftOverrideDirection"); }
	float& WholeSceneDynamicShadowRadius_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.WholeSceneDynamicShadowRadius_DEPRECATED"); }
	float& DynamicShadowDistanceMovableLightField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DynamicShadowDistanceMovableLight"); }
	float& DynamicShadowDistanceStationaryLightField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DynamicShadowDistanceStationaryLight"); }
	int& DynamicShadowCascadesField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.DynamicShadowCascades"); }
	float& CascadeDistributionExponentField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CascadeDistributionExponent"); }
	float& CascadeTransitionFractionField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.CascadeTransitionFraction"); }
	float& ShadowDistanceFadeoutFractionField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.ShadowDistanceFadeoutFraction"); }
	int& FarShadowCascadeCountField() { return *GetNativePointerField<int*>(this, "UDirectionalLightComponent.FarShadowCascadeCount"); }
	float& FarShadowDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.FarShadowDistance"); }
	float& AmbientShadowIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.AmbientShadowIntensityMultiplier"); }
	float& DistanceFieldShadowDistanceField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.DistanceFieldShadowDistance"); }
	float& LightSourceAngleField() { return *GetNativePointerField<float*>(this, "UDirectionalLightComponent.LightSourceAngle"); }
	FLightmassDirectionalLightSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassDirectionalLightSettings*>(this, "UDirectionalLightComponent.LightmassSettings"); }

	// Functions

	float ComputeLightBrightness() { return NativeCall<float>(this, "UDirectionalLightComponent.ComputeLightBrightness"); }
	FVector4 * GetLightPosition(FVector4 * result) { return NativeCall<FVector4 *, FVector4 *>(this, "UDirectionalLightComponent.GetLightPosition", result); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UDirectionalLightComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsUsedAsAtmosphereSunLight() { return NativeCall<bool>(this, "UDirectionalLightComponent.IsUsedAsAtmosphereSunLight"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UDirectionalLightComponent.Serialize", Ar); }
	void SetCascadeDistributionExponent(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetCascadeDistributionExponent", NewValue); }
	void SetCascadeTransitionFraction(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetCascadeTransitionFraction", NewValue); }
	void SetDynamicShadowCascades(int NewValue) { NativeCall<void, int>(this, "UDirectionalLightComponent.SetDynamicShadowCascades", NewValue); }
	void SetDynamicShadowDistanceMovableLight(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetDynamicShadowDistanceMovableLight", NewValue); }
	void SetDynamicShadowDistanceStationaryLight(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetDynamicShadowDistanceStationaryLight", NewValue); }
	void SetEnableLightShaftOcclusion(bool bNewValue) { NativeCall<void, bool>(this, "UDirectionalLightComponent.SetEnableLightShaftOcclusion", bNewValue); }
	void SetLightShaftOverrideDirection(FVector NewValue) { NativeCall<void, FVector>(this, "UDirectionalLightComponent.SetLightShaftOverrideDirection", NewValue); }
	void SetOcclusionMaskDarkness(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetOcclusionMaskDarkness", NewValue); }
	void SetShadowDistanceFadeoutFraction(float NewValue) { NativeCall<void, float>(this, "UDirectionalLightComponent.SetShadowDistanceFadeoutFraction", NewValue); }
};

