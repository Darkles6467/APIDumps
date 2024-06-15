#pragma once

#include "BaseDeclarations.h"
struct FSkyLightSceneProxy
{
	char __padding[0x180L];
	const USkyLightComponent * LightComponentField() { return GetNativePointerField<const USkyLightComponent *>(this, "FSkyLightSceneProxy.LightComponent"); }
	FTexture * ProcessedTextureField() { return GetNativePointerField<FTexture *>(this, "FSkyLightSceneProxy.ProcessedTexture"); }
	FTexture * ProcessedTexture1Field() { return GetNativePointerField<FTexture *>(this, "FSkyLightSceneProxy.ProcessedTexture1"); }
	float& SkyDistanceThresholdField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.SkyDistanceThreshold"); }
	bool& bCastShadowsField() { return *GetNativePointerField<bool*>(this, "FSkyLightSceneProxy.bCastShadows"); }
	bool& bWantsStaticShadowingField() { return *GetNativePointerField<bool*>(this, "FSkyLightSceneProxy.bWantsStaticShadowing"); }
	bool& bPrecomputedLightingIsValidField() { return *GetNativePointerField<bool*>(this, "FSkyLightSceneProxy.bPrecomputedLightingIsValid"); }
	bool& bHasStaticLightingField() { return *GetNativePointerField<bool*>(this, "FSkyLightSceneProxy.bHasStaticLighting"); }
	FLinearColor& LightColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSkyLightSceneProxy.LightColor"); }
	TSHVectorRGB<3>& IrradianceEnvironmentMapField() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "FSkyLightSceneProxy.IrradianceEnvironmentMap"); }
	TSHVectorRGB<3>& IrradianceEnvironmentMap1Field() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "FSkyLightSceneProxy.IrradianceEnvironmentMap1"); }
	float& IndirectLightingIntensityField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.IndirectLightingIntensity"); }
	float& OcclusionMaxDistanceField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.OcclusionMaxDistance"); }
	float& ContrastField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.Contrast"); }
	float& MinOcclusionField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.MinOcclusion"); }
	float& ContrastTangentMultField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.ContrastTangentMult"); }
	float& ContrastTangentShiftField() { return *GetNativePointerField<float*>(this, "FSkyLightSceneProxy.ContrastTangentShift"); }
	FLinearColor& OcclusionTintField() { return *GetNativePointerField<FLinearColor*>(this, "FSkyLightSceneProxy.OcclusionTint"); }

	// Functions

};

