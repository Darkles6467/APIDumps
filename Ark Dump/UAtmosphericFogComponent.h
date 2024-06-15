#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FComponentInstanceDataBase.h"

struct UAtmosphericFogComponent : USceneComponent
{
	enum EPrecomputeState
	{
		EInvalid = 0x0,
		EFinishedComputation = 0x1,
		EValid = 0x2,
	};

	char __padding[0x1c0L];
	float& DensityMultiplierField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.DensityMultiplier"); }
	float& DensityOffsetField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.DensityOffset"); }
	float& DistanceScaleField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.DistanceScale"); }
	float& AltitudeScaleField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.AltitudeScale"); }
	float& DistanceOffsetField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.DistanceOffset"); }
	float& GroundOffsetField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.GroundOffset"); }
	float& StartDistanceField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.StartDistance"); }
	float& SunDiscScaleField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.SunDiscScale"); }
	float& SkyInscatterScaleField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.SkyInscatterScale"); }
	float& DefaultBrightnessField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.DefaultBrightness"); }
	FColor& DefaultLightColorField() { return *GetNativePointerField<FColor*>(this, "UAtmosphericFogComponent.DefaultLightColor"); }
	FLinearColor& LUT_TintScatterField() { return *GetNativePointerField<FLinearColor*>(this, "UAtmosphericFogComponent.LUT_TintScatter"); }
	FLinearColor& LUT_TintLossField() { return *GetNativePointerField<FLinearColor*>(this, "UAtmosphericFogComponent.LUT_TintLoss"); }
	int& OvertimeIndex0Field() { return *GetNativePointerField<int*>(this, "UAtmosphericFogComponent.OvertimeIndex0"); }
	int& OvertimeIndex1Field() { return *GetNativePointerField<int*>(this, "UAtmosphericFogComponent.OvertimeIndex1"); }
	float& OvertimeInterpolationField() { return *GetNativePointerField<float*>(this, "UAtmosphericFogComponent.OvertimeInterpolation"); }
	FAtmospherePrecomputeParameters& PrecomputeParamsField() { return *GetNativePointerField<FAtmospherePrecomputeParameters*>(this, "UAtmosphericFogComponent.PrecomputeParams"); }
	FThreadSafeCounter& PrecomputeCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "UAtmosphericFogComponent.PrecomputeCounter"); }
	FAtmosphereTextureResource * TransmittanceResourceField() { return GetNativePointerField<FAtmosphereTextureResource *>(this, "UAtmosphericFogComponent.TransmittanceResource"); }
	FAtmosphereTextureResource * IrradianceResourceField() { return GetNativePointerField<FAtmosphereTextureResource *>(this, "UAtmosphericFogComponent.IrradianceResource"); }
	FAtmosphereTextureResource * InscatterResourceField() { return GetNativePointerField<FAtmosphereTextureResource *>(this, "UAtmosphericFogComponent.InscatterResource"); }
	FByteBulkData& TransmittanceDataField() { return *GetNativePointerField<FByteBulkData*>(this, "UAtmosphericFogComponent.TransmittanceData"); }
	FByteBulkData& IrradianceDataField() { return *GetNativePointerField<FByteBulkData*>(this, "UAtmosphericFogComponent.IrradianceData"); }
	FByteBulkData& InscatterDataField() { return *GetNativePointerField<FByteBulkData*>(this, "UAtmosphericFogComponent.InscatterData"); }

	// Functions

	void SetDensityMultiplier(float Value) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetDensityMultiplier", Value); }
	void AddFogIfNeeded() { NativeCall<void>(this, "UAtmosphericFogComponent.AddFogIfNeeded"); }
	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "UAtmosphericFogComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	void BeginDestroy() { NativeCall<void>(this, "UAtmosphericFogComponent.BeginDestroy"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UAtmosphericFogComponent.CreateRenderState_Concurrent"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UAtmosphericFogComponent.DestroyRenderState_Concurrent"); }
	void DisableGroundScattering(bool NewGroundScattering) { NativeCall<void, bool>(this, "UAtmosphericFogComponent.DisableGroundScattering", NewGroundScattering); }
	void DisableSunDisk(bool NewSunDisk) { NativeCall<void, bool>(this, "UAtmosphericFogComponent.DisableSunDisk", NewSunDisk); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "UAtmosphericFogComponent.GetComponentInstanceDataType", result); }
	void InitResource() { NativeCall<void>(this, "UAtmosphericFogComponent.InitResource"); }
	void PostLoad() { NativeCall<void>(this, "UAtmosphericFogComponent.PostLoad"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UAtmosphericFogComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UAtmosphericFogComponent.Serialize", Ar); }
	void SetDefaultBrightness(float NewBrightness) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetDefaultBrightness", NewBrightness); }
	void SetDefaultLightColor(FLinearColor NewLightColor) { NativeCall<void, FLinearColor>(this, "UAtmosphericFogComponent.SetDefaultLightColor", NewLightColor); }
	void SetDensityOffset(float NewDensityOffset) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetDensityOffset", NewDensityOffset); }
	void SetDistanceOffset(float NewDistanceOffset) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetDistanceOffset", NewDistanceOffset); }
	void SetDistanceScale(float NewDistanceScale) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetDistanceScale", NewDistanceScale); }
	void SetFogMultiplier(float NewFogMultiplier) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetFogMultiplier", NewFogMultiplier); }
	void SetFogOverTimeIndices(int Texture0, int Texture1, float InInterpolation) { NativeCall<void, int, int, float>(this, "UAtmosphericFogComponent.SetFogOverTimeIndices", Texture0, Texture1, InInterpolation); }
	void SetFogTexturesDirectly(UTexture2D * ScatterTexture0, UTexture2D * ScatterTexture1, UTexture2D * LossTexture0, UTexture2D * LossTexture1, float InInterpolation) { NativeCall<void, UTexture2D *, UTexture2D *, UTexture2D *, UTexture2D *, float>(this, "UAtmosphericFogComponent.SetFogTexturesDirectly", ScatterTexture0, ScatterTexture1, LossTexture0, LossTexture1, InInterpolation); }
	void SetSunMultiplier(float NewSunMultiplier) { NativeCall<void, float>(this, "UAtmosphericFogComponent.SetSunMultiplier", NewSunMultiplier); }
};

