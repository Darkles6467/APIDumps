#pragma once

#include "BaseDeclarations.h"
struct FAtmosphericFogSceneInfo
{
	char __padding[0xb8L];
	const UAtmosphericFogComponent * ComponentField() { return GetNativePointerField<const UAtmosphericFogComponent *>(this, "FAtmosphericFogSceneInfo.Component"); }
	float& SunMultiplierField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.SunMultiplier"); }
	float& FogMultiplierField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.FogMultiplier"); }
	float& InvDensityMultiplierField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.InvDensityMultiplier"); }
	float& DensityOffsetField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.DensityOffset"); }
	float& GroundOffsetField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.GroundOffset"); }
	float& DistanceScaleField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.DistanceScale"); }
	float& AltitudeScaleField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.AltitudeScale"); }
	float& RHeightField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.RHeight"); }
	float& StartDistanceField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.StartDistance"); }
	float& DistanceOffsetField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.DistanceOffset"); }
	float& SunDiscScaleField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.SunDiscScale"); }
	float& SkyInscatterScaleField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.SkyInscatterScale"); }
	FLinearColor& DefaultSunColorField() { return *GetNativePointerField<FLinearColor*>(this, "FAtmosphericFogSceneInfo.DefaultSunColor"); }
	FVector& DefaultSunDirectionField() { return *GetNativePointerField<FVector*>(this, "FAtmosphericFogSceneInfo.DefaultSunDirection"); }
	unsigned int& RenderFlagField() { return *GetNativePointerField<unsigned int*>(this, "FAtmosphericFogSceneInfo.RenderFlag"); }
	unsigned int& InscatterAltitudeSampleNumField() { return *GetNativePointerField<unsigned int*>(this, "FAtmosphericFogSceneInfo.InscatterAltitudeSampleNum"); }
	bool& bUseDayCycleField() { return *GetNativePointerField<bool*>(this, "FAtmosphericFogSceneInfo.bUseDayCycle"); }
	float& TextureInterpField() { return *GetNativePointerField<float*>(this, "FAtmosphericFogSceneInfo.TextureInterp"); }
	FLinearColor& DayCycleTintScatterField() { return *GetNativePointerField<FLinearColor*>(this, "FAtmosphericFogSceneInfo.DayCycleTintScatter"); }
	FLinearColor& DayCycleTintLossField() { return *GetNativePointerField<FLinearColor*>(this, "FAtmosphericFogSceneInfo.DayCycleTintLoss"); }

	// Functions

	void DayCycleTextureBlends(FRHICommandListImmediate * RHICmdList, const FViewInfo * View, FSceneViewFamily * ViewFamily) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *, FSceneViewFamily *>(this, "FAtmosphericFogSceneInfo.DayCycleTextureBlends", RHICmdList, View, ViewFamily); }
};

