#pragma once

#include "BaseDeclarations.h"
#include "ULightComponentBase.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FComponentInstanceDataBase.h"

struct USkyLightComponent : ULightComponentBase
{
	char __padding[0x1a0L];
	float& AtmosphericFogIntensityField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.AtmosphericFogIntensity"); }
	float& TrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.TrueSkyBrightness"); }
	FVector& TrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "USkyLightComponent.TrueSkyColorMultiplier"); }
	TEnumAsByte<enum ESkyLightSourceType>& SourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESkyLightSourceType>*>(this, "USkyLightComponent.SourceType"); }
	float& SkyDistanceThresholdField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.SkyDistanceThreshold"); }
	bool& bLowerHemisphereIsBlackField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bLowerHemisphereIsBlack"); }
	float& OcclusionMaxDistanceField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.OcclusionMaxDistance"); }
	float& ContrastField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.Contrast"); }
	float& MinOcclusionField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.MinOcclusion"); }
	float& ContrastTangentMultField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.ContrastTangentMult"); }
	float& ContrastTangentShiftField() { return *GetNativePointerField<float*>(this, "USkyLightComponent.ContrastTangentShift"); }
	FColor& OcclusionTintField() { return *GetNativePointerField<FColor*>(this, "USkyLightComponent.OcclusionTint"); }
	TSHVectorRGB<3>& IrradianceEnvironmentMapField() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "USkyLightComponent.IrradianceEnvironmentMap"); }
	TSHVectorRGB<3>& IrradianceEnvironmentMap1Field() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "USkyLightComponent.IrradianceEnvironmentMap1"); }
	bool& bCaptureDirtyField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bCaptureDirty"); }
	bool& bSavedConstructionScriptValuesValidField() { return *GetNativePointerField<bool*>(this, "USkyLightComponent.bSavedConstructionScriptValuesValid"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "USkyLightComponent.ReleaseResourcesFence"); }
	FSkyLightSceneProxy * SceneProxyField() { return GetNativePointerField<FSkyLightSceneProxy *>(this, "USkyLightComponent.SceneProxy"); }

	// Functions

	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "USkyLightComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	void BeginDestroy() { NativeCall<void>(this, "USkyLightComponent.BeginDestroy"); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "USkyLightComponent.ComputeLightBrightness"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "USkyLightComponent.CreateRenderState_Concurrent"); }
	FSkyLightSceneProxy * CreateSceneProxy() { return NativeCall<FSkyLightSceneProxy *>(this, "USkyLightComponent.CreateSceneProxy"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USkyLightComponent.DestroyRenderState_Concurrent"); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "USkyLightComponent.GetComponentInstanceDataType", result); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "USkyLightComponent.IsReadyForFinishDestroy"); }
	void PostInitProperties() { NativeCall<void>(this, "USkyLightComponent.PostInitProperties"); }
	void PostInterpChange(UProperty * PropertyThatChanged) { NativeCall<void, UProperty *>(this, "USkyLightComponent.PostInterpChange", PropertyThatChanged); }
	void PostLoad() { NativeCall<void>(this, "USkyLightComponent.PostLoad"); }
	void RecaptureSky() { NativeCall<void>(this, "USkyLightComponent.RecaptureSky"); }
	void SetCaptureIsDirty() { NativeCall<void>(this, "USkyLightComponent.SetCaptureIsDirty"); }
	void SetCubemap(UTextureCube * NewCubemap) { NativeCall<void, UTextureCube *>(this, "USkyLightComponent.SetCubemap", NewCubemap); }
	void SetIntensity(float NewIntensity) { NativeCall<void, float>(this, "USkyLightComponent.SetIntensity", NewIntensity); }
	void SetLightColor(FLinearColor NewLightColor) { NativeCall<void, FLinearColor>(this, "USkyLightComponent.SetLightColor", NewLightColor); }
	void SetMinOcclusion(float InMinOcclusion) { NativeCall<void, float>(this, "USkyLightComponent.SetMinOcclusion", InMinOcclusion); }
	void SetOcclusionTint(const FColor * InTint) { NativeCall<void, const FColor *>(this, "USkyLightComponent.SetOcclusionTint", InTint); }
	void SetUncompressedGPUData(FByteBulkData * ProcessedSkyTextureData0, FByteBulkData * IrradianceMapData0, FByteBulkData * ProcessedSkyTextureData1, FByteBulkData * IrradianceMapData1) { NativeCall<void, FByteBulkData *, FByteBulkData *, FByteBulkData *, FByteBulkData *>(this, "USkyLightComponent.SetUncompressedGPUData", ProcessedSkyTextureData0, IrradianceMapData0, ProcessedSkyTextureData1, IrradianceMapData1); }
	static void UpdateSkyCaptureContents(UWorld * WorldToUpdate) { NativeCall<void, UWorld *>(nullptr, "USkyLightComponent.UpdateSkyCaptureContents", WorldToUpdate); }
	void UpdateSkyResources(FByteBulkData * ProcessedSkyTextureData0, FByteBulkData * IrradianceMapData0, FByteBulkData * ProcessedSkyTextureData1, FByteBulkData * IrradianceMapData1) { NativeCall<void, FByteBulkData *, FByteBulkData *, FByteBulkData *, FByteBulkData *>(this, "USkyLightComponent.UpdateSkyResources", ProcessedSkyTextureData0, IrradianceMapData0, ProcessedSkyTextureData1, IrradianceMapData1); }
};

