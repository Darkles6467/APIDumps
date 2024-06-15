#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UMaterialInterface : UObject
{
	char __padding[0x38L];
	USubsurfaceProfile * SubsurfaceProfileField() { return GetNativePointerField<USubsurfaceProfile *>(this, "UMaterialInterface.SubsurfaceProfile"); }
	FRenderCommandFence& ParentRefFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UMaterialInterface.ParentRefFence"); }
	FLightmassMaterialInterfaceSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassMaterialInterfaceSettings*>(this, "UMaterialInterface.LightmassSettings"); }
	unsigned int& FeatureLevelsToForceCompileField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialInterface.FeatureLevelsToForceCompile"); }

	// Functions

	bool GetCastShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInterface.GetCastShadowAsMasked"); }
	float GetEmissiveBoost() { return NativeCall<float>(this, "UMaterialInterface.GetEmissiveBoost"); }
	float GetDiffuseBoost() { return NativeCall<float>(this, "UMaterialInterface.GetDiffuseBoost"); }
	float GetExportResolutionScale() { return NativeCall<float>(this, "UMaterialInterface.GetExportResolutionScale"); }
	bool IsDependent(UMaterialInterface * TestDependency) { return NativeCall<bool, UMaterialInterface *>(this, "UMaterialInterface.IsDependent", TestDependency); }
	void OverrideBlendableSettings(FSceneView * View, float Weight) { NativeCall<void, FSceneView *, float>(this, "UMaterialInterface.OverrideBlendableSettings", View, Weight); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterialInterface.BeginDestroy"); }
	bool CanControlUsage() { return NativeCall<bool>(this, "UMaterialInterface.CanControlUsage"); }
	bool CheckMaterialUsage(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInterface.CheckMaterialUsage", Usage, bSkipPrim, DebugInfo); }
	bool CheckMaterialUsage_Concurrent(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInterface.CheckMaterialUsage_Concurrent", Usage, bSkipPrim, DebugInfo); }
	int CompileProperty(FMaterialCompiler * Compiler, EMaterialProperty Property) { return NativeCall<int, FMaterialCompiler *, EMaterialProperty>(this, "UMaterialInterface.CompileProperty", Compiler, Property); }
	EBlendMode GetBlendMode() { return NativeCall<EBlendMode>(this, "UMaterialInterface.GetBlendMode"); }
	int GetDownsampleFactor() { return NativeCall<int>(this, "UMaterialInterface.GetDownsampleFactor"); }
	UMaterial * GetMaterial() { return NativeCall<UMaterial *>(this, "UMaterialInterface.GetMaterial"); }
	const UMaterial * GetMaterial() { return NativeCall<const UMaterial *>(this, "UMaterialInterface.GetMaterial"); }
	const UMaterial * GetMaterial_Concurrent(TArray<UMaterialInterface const *,TInlineAllocator<8> > * RecursionGuard) { return NativeCall<const UMaterial *, TArray<UMaterialInterface const *,TInlineAllocator<8> > *>(this, "UMaterialInterface.GetMaterial_Concurrent", RecursionGuard); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "UMaterialInterface.GetOpacityMaskClipValue"); }
	UPhysicalMaterial * GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial *>(this, "UMaterialInterface.GetPhysicalMaterial"); }
	EMaterialShadingModel GetShadingModel() { return NativeCall<EMaterialShadingModel>(this, "UMaterialInterface.GetShadingModel"); }
	bool GetStaticComponentMaskParameterValue(FName ParameterName, bool * R, bool * G, bool * B, bool * A, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, bool *, bool *, bool *, FGuid *>(this, "UMaterialInterface.GetStaticComponentMaskParameterValue", ParameterName, R, G, B, A, OutExpressionGuid); }
	bool GetStaticSwitchParameterValue(FName ParameterName, bool * OutValue, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, FGuid *>(this, "UMaterialInterface.GetStaticSwitchParameterValue", ParameterName, OutValue, OutExpressionGuid); }
	bool GetTerrainLayerWeightParameterValue(FName ParameterName, int * OutWeightmapIndex, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, int *, FGuid *>(this, "UMaterialInterface.GetTerrainLayerWeightParameterValue", ParameterName, OutWeightmapIndex, OutExpressionGuid); }
	bool GetTexturesInPropertyChain(EMaterialProperty InProperty, TArray<UTexture *> * OutTextures, TArray<FName> * OutTextureParamNames, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, EMaterialProperty, TArray<UTexture *> *, TArray<FName> *, FStaticParameterSet *>(this, "UMaterialInterface.GetTexturesInPropertyChain", InProperty, OutTextures, OutTextureParamNames, InStaticParameterSet); }
	bool GetUsageByFlag(const EMaterialUsage Usage) { return NativeCall<bool, const EMaterialUsage>(this, "UMaterialInterface.GetUsageByFlag", Usage); }
	void GetUsedTextures(TArray<UTexture *> * OutTextures, EMaterialQualityLevel::Type QualityLevel, bool bAllQualityLevels, ERHIFeatureLevel::Type FeatureLevel, bool bAllFeatureLevels) { NativeCall<void, TArray<UTexture *> *, EMaterialQualityLevel::Type, bool, ERHIFeatureLevel::Type, bool>(this, "UMaterialInterface.GetUsedTextures", OutTextures, QualityLevel, bAllQualityLevels, FeatureLevel, bAllFeatureLevels); }
	bool IsMasked() { return NativeCall<bool>(this, "UMaterialInterface.IsMasked"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterialInterface.IsReadyForFinishDestroy"); }
	bool IsSecondaryTarget() { return NativeCall<bool>(this, "UMaterialInterface.IsSecondaryTarget"); }
	bool IsTwoSided() { return NativeCall<bool>(this, "UMaterialInterface.IsTwoSided"); }
	bool NeedsSetMaterialUsage_Concurrent(bool * bOutHasUsage, const EMaterialUsage Usage) { return NativeCall<bool, bool *, const EMaterialUsage>(this, "UMaterialInterface.NeedsSetMaterialUsage_Concurrent", bOutHasUsage, Usage); }
	void OverrideScalarParameterDefault(FName ParameterName, float Value, bool bOverride, ERHIFeatureLevel::Type FeatureLevel) { NativeCall<void, FName, float, bool, ERHIFeatureLevel::Type>(this, "UMaterialInterface.OverrideScalarParameterDefault", ParameterName, Value, bOverride, FeatureLevel); }
	void OverrideTexture(const UTexture * InTextureToOverride, UTexture * OverrideTexture, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, const UTexture *, UTexture *, ERHIFeatureLevel::Type>(this, "UMaterialInterface.OverrideTexture", InTextureToOverride, OverrideTexture, InFeatureLevel); }
	void OverrideVectorParameterDefault(FName ParameterName, const FLinearColor * Value, bool bOverride, ERHIFeatureLevel::Type FeatureLevel) { NativeCall<void, FName, const FLinearColor *, bool, ERHIFeatureLevel::Type>(this, "UMaterialInterface.OverrideVectorParameterDefault", ParameterName, Value, bOverride, FeatureLevel); }
	void PostLoad() { NativeCall<void>(this, "UMaterialInterface.PostLoad"); }
	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int CinematicTextureGroups) { NativeCall<void, bool, bool, float, int>(this, "UMaterialInterface.SetForceMipLevelsToBeResident", OverrideForceMiplevelsToBeResident, bForceMiplevelsToBeResidentValue, ForceDuration, CinematicTextureGroups); }
	bool SetMaterialUsage(bool * bNeedsRecompile, const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, bool *, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInterface.SetMaterialUsage", bNeedsRecompile, Usage, bSkipPrim, DebugInfo); }
	void UpdateMaterialRenderProxy(FMaterialRenderProxy * Proxy) { NativeCall<void, FMaterialRenderProxy *>(this, "UMaterialInterface.UpdateMaterialRenderProxy", Proxy); }
};

