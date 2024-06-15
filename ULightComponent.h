#pragma once

#include "BaseDeclarations.h"
#include "ULightComponentBase.h"
#include "FComponentInstanceDataBase.h"
#include "FColor.h"

struct ULightComponent : ULightComponentBase
{
	char __padding[0x160L];
	int& ShadowMapChannelField() { return *GetNativePointerField<int*>(this, "ULightComponent.ShadowMapChannel"); }
	int& PreviewShadowMapChannelField() { return *GetNativePointerField<int*>(this, "ULightComponent.PreviewShadowMapChannel"); }
	float& SourceRadius_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ULightComponent.SourceRadius_DEPRECATED"); }
	float& MinRoughnessField() { return *GetNativePointerField<float*>(this, "ULightComponent.MinRoughness"); }
	float& ShadowBiasField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowBias"); }
	float& ShadowSharpenField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowSharpen"); }
	char& ShadowInjectionSourceMaskField() { return *GetNativePointerField<char*>(this, "ULightComponent.ShadowInjectionSourceMask"); }
	char& ShadowInjectionTargetMaskField() { return *GetNativePointerField<char*>(this, "ULightComponent.ShadowInjectionTargetMask"); }
	float& ShadowDistanceFadeFractionField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowDistanceFadeFraction"); }
	float& TranslucencyColorMultiplierField() { return *GetNativePointerField<float*>(this, "ULightComponent.TranslucencyColorMultiplier"); }
	FVector& LightFunctionScaleField() { return *GetNativePointerField<FVector*>(this, "ULightComponent.LightFunctionScale"); }
	float& IESBrightnessScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.IESBrightnessScale"); }
	float& LightFunctionFadeDistanceField() { return *GetNativePointerField<float*>(this, "ULightComponent.LightFunctionFadeDistance"); }
	float& DisabledBrightnessField() { return *GetNativePointerField<float*>(this, "ULightComponent.DisabledBrightness"); }
	float& BloomScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.BloomScale"); }
	float& BloomThresholdField() { return *GetNativePointerField<float*>(this, "ULightComponent.BloomThreshold"); }
	FColor& BloomTintField() { return *GetNativePointerField<FColor*>(this, "ULightComponent.BloomTint"); }
	bool& bUseRayTracedDistanceFieldShadowsField() { return *GetNativePointerField<bool*>(this, "ULightComponent.bUseRayTracedDistanceFieldShadows"); }
	bool& bUseShadowmapsWithRayTracedDFSField() { return *GetNativePointerField<bool*>(this, "ULightComponent.bUseShadowmapsWithRayTracedDFS"); }
	float& ShadowmapWithDFSMaxViewDistanceField() { return *GetNativePointerField<float*>(this, "ULightComponent.ShadowmapWithDFSMaxViewDistance"); }
	float& RayStartOffsetDepthScaleField() { return *GetNativePointerField<float*>(this, "ULightComponent.RayStartOffsetDepthScale"); }
	FRenderCommandFence& DestroyFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "ULightComponent.DestroyFence"); }

	// Functions

	FBox * GetBoundingBox(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ULightComponent.GetBoundingBox", result); }
	FSphere * GetBoundingSphere(FSphere * result) { return NativeCall<FSphere *, FSphere *>(this, "ULightComponent.GetBoundingSphere", result); }
	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "ULightComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	void BeginDestroy() { NativeCall<void>(this, "ULightComponent.BeginDestroy"); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "ULightComponent.ComputeLightBrightness"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "ULightComponent.CreateRenderState_Concurrent"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "ULightComponent.DestroyRenderState_Concurrent"); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "ULightComponent.GetComponentInstanceDataType", result); }
	FVector * GetDirection(FVector * result) { return NativeCall<FVector *, FVector *>(this, "ULightComponent.GetDirection", result); }
	FVector4 * GetLightPosition(FVector4 * result) { return NativeCall<FVector4 *, FVector4 *>(this, "ULightComponent.GetLightPosition", result); }
	ELightComponentType GetLightType() { return NativeCall<ELightComponentType>(this, "ULightComponent.GetLightType"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "ULightComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	void InvalidateLightingCacheInner(bool bRecreateLightGuids) { NativeCall<void, bool>(this, "ULightComponent.InvalidateLightingCacheInner", bRecreateLightGuids); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "ULightComponent.IsReadyForFinishDestroy"); }
	void OnRegister() { NativeCall<void>(this, "ULightComponent.OnRegister"); }
	void PostInterpChange(UProperty * PropertyThatChanged) { NativeCall<void, UProperty *>(this, "ULightComponent.PostInterpChange", PropertyThatChanged); }
	void PostLoad() { NativeCall<void>(this, "ULightComponent.PostLoad"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "ULightComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULightComponent.Serialize", Ar); }
	void SetAffectDynamicIndirectLighting(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetAffectDynamicIndirectLighting", bNewValue); }
	void SetAffectTranslucentLighting(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetAffectTranslucentLighting", bNewValue); }
	void SetBloomScale(float NewValue) { NativeCall<void, float>(this, "ULightComponent.SetBloomScale", NewValue); }
	void SetBloomThreshold(float NewValue) { NativeCall<void, float>(this, "ULightComponent.SetBloomThreshold", NewValue); }
	void SetBloomTint(FColor NewValue) { NativeCall<void, FColor>(this, "ULightComponent.SetBloomTint", NewValue); }
	void SetCastShadows(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetCastShadows", bNewValue); }
	void SetEnableLightShaftBloom(bool bNewValue) { NativeCall<void, bool>(this, "ULightComponent.SetEnableLightShaftBloom", bNewValue); }
	void SetIESTexture(UTextureLightProfile * NewValue) { NativeCall<void, UTextureLightProfile *>(this, "ULightComponent.SetIESTexture", NewValue); }
	void SetIntensity(float NewIntensity) { NativeCall<void, float>(this, "ULightComponent.SetIntensity", NewIntensity); }
	void SetLightColor(FLinearColor NewLightColor) { NativeCall<void, FLinearColor>(this, "ULightComponent.SetLightColor", NewLightColor); }
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) { NativeCall<void, float>(this, "ULightComponent.SetLightFunctionFadeDistance", NewLightFunctionFadeDistance); }
	void SetLightFunctionMaterial(UMaterialInterface * NewLightFunctionMaterial) { NativeCall<void, UMaterialInterface *>(this, "ULightComponent.SetLightFunctionMaterial", NewLightFunctionMaterial); }
	void SetLightFunctionScale(FVector NewLightFunctionScale) { NativeCall<void, FVector>(this, "ULightComponent.SetLightFunctionScale", NewLightFunctionScale); }
	void SetMaterial(int ElementIndex, UMaterialInterface * InMaterial) { NativeCall<void, int, UMaterialInterface *>(this, "ULightComponent.SetMaterial", ElementIndex, InMaterial); }
	void SetShadowDistanceFade(float NewFadeFraction) { NativeCall<void, float>(this, "ULightComponent.SetShadowDistanceFade", NewFadeFraction); }
	void UpdateLightGUIDs() { NativeCall<void>(this, "ULightComponent.UpdateLightGUIDs"); }
};

