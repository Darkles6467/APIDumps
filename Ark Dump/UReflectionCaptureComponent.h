#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "FReflectionCaptureProxy.h"

struct UReflectionCaptureComponent : USceneComponent
{
	char __padding[0x1c0L];
	FName& PresistentCaptureParentField() { return *GetNativePointerField<FName*>(this, "UReflectionCaptureComponent.PresistentCaptureParent"); }
	FLinearColor& SkyColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.SkyColor"); }
	FLinearColor& GroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.GroundColor"); }
	float& SkyIBLIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.SkyIBLIntensity"); }
	float& FadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.FadeOutDistanceStart"); }
	float& FadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.FadeOutDistanceEnd"); }
	bool& bUseSeperateShadowFadeOutField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bUseSeperateShadowFadeOut"); }
	float& ShadowFadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ShadowFadeOutDistanceStart"); }
	float& ShadowFadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ShadowFadeOutDistanceEnd"); }
	int& BouncesField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.Bounces"); }
	TArray<float>& BouncesIntensityField() { return *GetNativePointerField<TArray<float>*>(this, "UReflectionCaptureComponent.BouncesIntensity"); }
	float& AtmosphericFogIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AtmosphericFogIntensity"); }
	float& TheTrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.TheTrueSkyBrightness"); }
	FVector& TrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "UReflectionCaptureComponent.TrueSkyColorMultiplier"); }
	float& ParentBrightnessMultiplierField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.ParentBrightnessMultiplier"); }
	float& SelfAndChildBrightnessMultiplierField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.SelfAndChildBrightnessMultiplier"); }
	float& AmbientShadowIntensityField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowIntensity"); }
	float& AmbientLightInfluenceField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientLightInfluence"); }
	float& AmbientShadowNearField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowNear"); }
	float& AmbientShadowFarField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowFar"); }
	float& AmbientShadowFadeDistanceFractionField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowFadeDistanceFraction"); }
	FLinearColor& AmbientTranslucencyColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReflectionCaptureComponent.AmbientTranslucencyColor"); }
	int& AmbientShadowCaptureObjectLayerMaskField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.AmbientShadowCaptureObjectLayerMask"); }
	float& AmbientShadowCaptureScaleField() { return *GetNativePointerField<float*>(this, "UReflectionCaptureComponent.AmbientShadowCaptureScale"); }
	int& MaxAmbientShadowCaptureSizeField() { return *GetNativePointerField<int*>(this, "UReflectionCaptureComponent.MaxAmbientShadowCaptureSize"); }
	TEnumAsByte<enum EReflectionDFAOOption::Type>& DFAOOptionField() { return *GetNativePointerField<TEnumAsByte<enum EReflectionDFAOOption::Type>*>(this, "UReflectionCaptureComponent.DFAOOption"); }
	TSharedPtr<FReflectionCaptureProxy,1>& SceneProxyField() { return *GetNativePointerField<TSharedPtr<FReflectionCaptureProxy,1>*>(this, "UReflectionCaptureComponent.SceneProxy"); }
	TSHVectorRGB<3>& AmbientCubeIrradianceEnvironmentMapField() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "UReflectionCaptureComponent.AmbientCubeIrradianceEnvironmentMap"); }
	bool& bCaptureDirtyField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bCaptureDirty"); }
	bool& bDerivedDataDirtyField() { return *GetNativePointerField<bool*>(this, "UReflectionCaptureComponent.bDerivedDataDirty"); }
	EReflectionDFAOOption::Type& RenderThreadSafeCachedDFAOOptionField() { return *GetNativePointerField<EReflectionDFAOOption::Type*>(this, "UReflectionCaptureComponent.RenderThreadSafeCachedDFAOOption"); }
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UReflectionCaptureComponent.StateId"); }
	FReflectionCaptureFullHDRDerivedData * FullHDRDerivedDataField() { return GetNativePointerField<FReflectionCaptureFullHDRDerivedData *>(this, "UReflectionCaptureComponent.FullHDRDerivedData"); }
	TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData>& EncodedHDRDerivedDataField() { return *GetNativePointerField<TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData>*>(this, "UReflectionCaptureComponent.EncodedHDRDerivedData"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UReflectionCaptureComponent.ReleaseResourcesFence"); }
	FAmbientShadowCaptureData * AmbientShadowCaptureDataField() { return GetNativePointerField<FAmbientShadowCaptureData *>(this, "UReflectionCaptureComponent.AmbientShadowCaptureData"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UReflectionCaptureComponent.BeginDestroy"); }
	FMatrix * CalcAmbientShadowCaptureProjMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "UReflectionCaptureComponent.CalcAmbientShadowCaptureProjMatrix", result); }
	FIntPoint * CalcAmbientShadowCaptureResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "UReflectionCaptureComponent.CalcAmbientShadowCaptureResolution", result); }
	FTransform * CalcAmbientShadowCaptureViewTransform(FTransform * result, bool bForProjection) { return NativeCall<FTransform *, FTransform *, bool>(this, "UReflectionCaptureComponent.CalcAmbientShadowCaptureViewTransform", result, bForProjection); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UReflectionCaptureComponent.CreateRenderState_Concurrent"); }
	TSharedPtr<FReflectionCaptureProxy,1> * CreateSceneProxy(TSharedPtr<FReflectionCaptureProxy,1> * result) { return NativeCall<TSharedPtr<FReflectionCaptureProxy,1> *, TSharedPtr<FReflectionCaptureProxy,1> *>(this, "UReflectionCaptureComponent.CreateSceneProxy", result); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UReflectionCaptureComponent.DestroyRenderState_Concurrent"); }
	void FinishDestroy() { NativeCall<void>(this, "UReflectionCaptureComponent.FinishDestroy"); }
	void ForceUpdateReflectionCapture() { NativeCall<void>(this, "UReflectionCaptureComponent.ForceUpdateReflectionCapture"); }
	FAmbientShadowCaptureData * GetAmbientShadowCaptureData() { return NativeCall<FAmbientShadowCaptureData *>(this, "UReflectionCaptureComponent.GetAmbientShadowCaptureData"); }
	EReflectionDFAOOption::Type GetDFAOOption() { return NativeCall<EReflectionDFAOOption::Type>(this, "UReflectionCaptureComponent.GetDFAOOption"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UReflectionCaptureComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsChildCapture() { return NativeCall<bool>(this, "UReflectionCaptureComponent.IsChildCapture"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UReflectionCaptureComponent.IsReadyForFinishDestroy"); }
	void LoadAmbientShadowCaptureData() { NativeCall<void>(this, "UReflectionCaptureComponent.LoadAmbientShadowCaptureData"); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UReflectionCaptureComponent.OnAttachmentChanged"); }
	void OnRegister() { NativeCall<void>(this, "UReflectionCaptureComponent.OnRegister"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UReflectionCaptureComponent.PostDuplicate", bDuplicateForPIE); }
	void PostInitProperties() { NativeCall<void>(this, "UReflectionCaptureComponent.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UReflectionCaptureComponent.PostLoad"); }
	void PreSave() { NativeCall<void>(this, "UReflectionCaptureComponent.PreSave"); }
	void ReadbackFromGPUAndSaveDerivedData(UWorld * WorldToUpdate) { NativeCall<void, UWorld *>(this, "UReflectionCaptureComponent.ReadbackFromGPUAndSaveDerivedData", WorldToUpdate); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UReflectionCaptureComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UReflectionCaptureComponent.Serialize", Ar); }
	void SerializeSourceData(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UReflectionCaptureComponent.SerializeSourceData", Ar); }
	void SetBrightness(float NewBrightness) { NativeCall<void, float>(this, "UReflectionCaptureComponent.SetBrightness", NewBrightness); }
	void SetCaptureIsDirty() { NativeCall<void>(this, "UReflectionCaptureComponent.SetCaptureIsDirty"); }
	static void UpdateReflectionCaptureContents(UWorld * WorldToUpdate) { NativeCall<void, UWorld *>(nullptr, "UReflectionCaptureComponent.UpdateReflectionCaptureContents", WorldToUpdate); }
	void UploadNewDerivedData(FByteBulkData * UnCompressedDerivedData0, FByteBulkData * UnCompressedDerivedData1, float Brightness0, float Brightness1) { NativeCall<void, FByteBulkData *, FByteBulkData *, float, float>(this, "UReflectionCaptureComponent.UploadNewDerivedData", UnCompressedDerivedData0, UnCompressedDerivedData1, Brightness0, Brightness1); }
};

