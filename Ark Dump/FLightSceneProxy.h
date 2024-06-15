#pragma once

#include "BaseDeclarations.h"
struct FLightSceneProxy
{
	char __padding[0x180L];
	FLightSceneInfo * LightSceneInfoField() { return GetNativePointerField<FLightSceneInfo *>(this, "FLightSceneProxy.LightSceneInfo"); }
	FMatrix& WorldToLightField() { return *GetNativePointerField<FMatrix*>(this, "FLightSceneProxy.WorldToLight"); }
	FMatrix& LightToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FLightSceneProxy.LightToWorld"); }
	FVector4& PositionField() { return *GetNativePointerField<FVector4*>(this, "FLightSceneProxy.Position"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FLightSceneProxy.Color"); }
	float& IndirectLightingScaleField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.IndirectLightingScale"); }
	float& ShadowBiasField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.ShadowBias"); }
	float& ShadowSharpenField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.ShadowSharpen"); }
	float& MinRoughnessField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.MinRoughness"); }
	FGuid& LightGuidField() { return *GetNativePointerField<FGuid*>(this, "FLightSceneProxy.LightGuid"); }
	int& ShadowMapChannelField() { return *GetNativePointerField<int*>(this, "FLightSceneProxy.ShadowMapChannel"); }
	int& PreviewShadowMapChannelField() { return *GetNativePointerField<int*>(this, "FLightSceneProxy.PreviewShadowMapChannel"); }
	FVector& LightFunctionScaleField() { return *GetNativePointerField<FVector*>(this, "FLightSceneProxy.LightFunctionScale"); }
	float& LightFunctionFadeDistanceField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.LightFunctionFadeDistance"); }
	float& LightFunctionDisabledBrightnessField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.LightFunctionDisabledBrightness"); }
	const float& ShadowTexelSizeMultiplierField() { return *GetNativePointerField<const float*>(this, "FLightSceneProxy.ShadowTexelSizeMultiplier"); }
	const float& ShadowmapWithDFSMaxViewDistanceField() { return *GetNativePointerField<const float*>(this, "FLightSceneProxy.ShadowmapWithDFSMaxViewDistance"); }
	const float& ShadowDiscardDynamicObjectsDistanceField() { return *GetNativePointerField<const float*>(this, "FLightSceneProxy.ShadowDiscardDynamicObjectsDistance"); }
	float& ShadowNearField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.ShadowNear"); }
	float& ShadowFarField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.ShadowFar"); }
	float& ShadowDistanceFadeFractionField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.ShadowDistanceFadeFraction"); }
	float& TranslucencyColorMultiplierField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.TranslucencyColorMultiplier"); }
	FLinearColor& TranslucencyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FLightSceneProxy.TranslucencyColor"); }
	float& RayStartOffsetDepthScaleField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.RayStartOffsetDepthScale"); }
	const unsigned __int16& ObjectLayerMaskField() { return *GetNativePointerField<const unsigned __int16*>(this, "FLightSceneProxy.ObjectLayerMask"); }
	const char& ShadowInjectionSourceMaskField() { return *GetNativePointerField<const char*>(this, "FLightSceneProxy.ShadowInjectionSourceMask"); }
	const char& ShadowInjectionTargetMaskField() { return *GetNativePointerField<const char*>(this, "FLightSceneProxy.ShadowInjectionTargetMask"); }
	const char& LightTypeField() { return *GetNativePointerField<const char*>(this, "FLightSceneProxy.LightType"); }
	FName& ComponentNameField() { return *GetNativePointerField<FName*>(this, "FLightSceneProxy.ComponentName"); }
	FName& LevelNameField() { return *GetNativePointerField<FName*>(this, "FLightSceneProxy.LevelName"); }
	float& FarShadowDistanceField() { return *GetNativePointerField<float*>(this, "FLightSceneProxy.FarShadowDistance"); }
	unsigned int& FarShadowCascadeCountField() { return *GetNativePointerField<unsigned int*>(this, "FLightSceneProxy.FarShadowCascadeCount"); }

	// Functions

	FSphere * GetBoundingSphere(FSphere * result) { return NativeCall<FSphere *, FSphere *>(this, "FLightSceneProxy.GetBoundingSphere", result); }
	FVector * GetLightPositionForLightShafts(FVector * result, FVector ViewOrigin) { return NativeCall<FVector *, FVector *, FVector>(this, "FLightSceneProxy.GetLightPositionForLightShafts", result, ViewOrigin); }
	bool GetLightShaftOcclusionParameters(float * OutOcclusionMaskDarkness, float * OutOcclusionDepthRange) { return NativeCall<bool, float *, float *>(this, "FLightSceneProxy.GetLightShaftOcclusionParameters", OutOcclusionMaskDarkness, OutOcclusionDepthRange); }
	bool GetScissorRect(FIntRect * ScissorRect, FSceneView * View) { return NativeCall<bool, FIntRect *, FSceneView *>(this, "FLightSceneProxy.GetScissorRect", ScissorRect, View); }
	FSphere * GetShadowSplitBounds(FSphere * result, FSceneView * View, FVector ViewOrigin, float SplitNear, float SplitFar, FShadowCascadeSettings * OutCascadeSettings) { return NativeCall<FSphere *, FSphere *, FSceneView *, FVector, float, float, FShadowCascadeSettings *>(this, "FLightSceneProxy.GetShadowSplitBounds", result, View, ViewOrigin, SplitNear, SplitFar, OutCascadeSettings); }
	void ApplyWorldOffset(FVector InOffset) { NativeCall<void, FVector>(this, "FLightSceneProxy.ApplyWorldOffset", InOffset); }
	void SetColor(const FLinearColor * InColor) { NativeCall<void, const FLinearColor *>(this, "FLightSceneProxy.SetColor", InColor); }
	void SetTransform(const FMatrix * InLightToWorld, const FVector4 * InPosition) { NativeCall<void, const FMatrix *, const FVector4 *>(this, "FLightSceneProxy.SetTransform", InLightToWorld, InPosition); }
	bool ShouldCreatePerObjectShadowsForDynamicObjects() { return NativeCall<bool>(this, "FLightSceneProxy.ShouldCreatePerObjectShadowsForDynamicObjects"); }
};

