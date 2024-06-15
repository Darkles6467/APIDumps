#pragma once

#include "BaseDeclarations.h"
struct FSceneViewFamily
{
	char __padding[0x80L];
	unsigned int& FamilySizeXField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewFamily.FamilySizeX"); }
	unsigned int& FamilySizeYField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewFamily.FamilySizeY"); }
	bool& bUseSeparateRenderTargetField() { return *GetNativePointerField<bool*>(this, "FSceneViewFamily.bUseSeparateRenderTarget"); }
	FEngineShowFlags& EngineShowFlagsField() { return *GetNativePointerField<FEngineShowFlags*>(this, "FSceneViewFamily.EngineShowFlags"); }
	long double& CurrentWorldTimeField() { return *GetNativePointerField<long double*>(this, "FSceneViewFamily.CurrentWorldTime"); }
	float& DeltaWorldTimeField() { return *GetNativePointerField<float*>(this, "FSceneViewFamily.DeltaWorldTime"); }
	long double& CurrentRealTimeField() { return *GetNativePointerField<long double*>(this, "FSceneViewFamily.CurrentRealTime"); }
	bool& bRealtimeUpdateField() { return *GetNativePointerField<bool*>(this, "FSceneViewFamily.bRealtimeUpdate"); }
	bool& bDeferClearField() { return *GetNativePointerField<bool*>(this, "FSceneViewFamily.bDeferClear"); }
	bool& bResolveSceneField() { return *GetNativePointerField<bool*>(this, "FSceneViewFamily.bResolveScene"); }
	float& GammaCorrectionField() { return *GetNativePointerField<float*>(this, "FSceneViewFamily.GammaCorrection"); }
	int& ClutterLayersField() { return *GetNativePointerField<int*>(this, "FSceneViewFamily.ClutterLayers"); }
	FExposureSettings& ExposureSettingsField() { return *GetNativePointerField<FExposureSettings*>(this, "FSceneViewFamily.ExposureSettings"); }

	// Functions

	void ConstructionValues(const FRenderTarget * InRenderTarget, FSceneInterface * InScene, const FEngineShowFlags * InEngineShowFlags) { NativeCall<void, const FRenderTarget *, FSceneInterface *, const FEngineShowFlags *>(this, "FSceneViewFamily.ConstructionValues", InRenderTarget, InScene, InEngineShowFlags); }
	void ComputeFamilySize() { NativeCall<void>(this, "FSceneViewFamily.ComputeFamilySize"); }
	ERHIFeatureLevel::Type GetFeatureLevel() { return NativeCall<ERHIFeatureLevel::Type>(this, "FSceneViewFamily.GetFeatureLevel"); }
};

struct FSceneViewFamilyContext : FSceneViewFamily
{

	// Functions

};

