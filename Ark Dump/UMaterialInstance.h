#pragma once

#include "BaseDeclarations.h"
#include "UMaterialInterface.h"

struct UMaterialInstance : UMaterialInterface
{
	char __padding[0x1a8L];
	UPhysicalMaterial * PhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "UMaterialInstance.PhysMaterial"); }
	FGuid& ParentLightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UMaterialInstance.ParentLightingGuid"); }
	TArray<FFontParameterValue>& FontParameterValuesField() { return *GetNativePointerField<TArray<FFontParameterValue>*>(this, "UMaterialInstance.FontParameterValues"); }
	TArray<FScalarParameterValue>& ScalarParameterValuesField() { return *GetNativePointerField<TArray<FScalarParameterValue>*>(this, "UMaterialInstance.ScalarParameterValues"); }
	TArray<FTextureParameterValue>& TextureParameterValuesField() { return *GetNativePointerField<TArray<FTextureParameterValue>*>(this, "UMaterialInstance.TextureParameterValues"); }
	TArray<FVectorParameterValue>& VectorParameterValuesField() { return *GetNativePointerField<TArray<FVectorParameterValue>*>(this, "UMaterialInstance.VectorParameterValues"); }
	bool& bOverrideBasePropertiesField() { return *GetNativePointerField<bool*>(this, "UMaterialInstance.bOverrideBaseProperties"); }
	bool& bOptOutOfMaterialUsedWithFlagOptimizationsField() { return *GetNativePointerField<bool*>(this, "UMaterialInstance.bOptOutOfMaterialUsedWithFlagOptimizations"); }
	bool& bOverrideUsedWithFlagsField() { return *GetNativePointerField<bool*>(this, "UMaterialInstance.bOverrideUsedWithFlags"); }
	float& PostProcessBlendableCachedFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "UMaterialInstance.PostProcessBlendableCachedFadeOutSpeed"); }
	FStaticParameterSet& StaticParametersField() { return *GetNativePointerField<FStaticParameterSet*>(this, "UMaterialInstance.StaticParameters"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UMaterialInstance.ReleaseFence"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UMaterialInstance.AddReferencedObjects", InThis, Collector); }
	void BeginCacheForCookedPlatformData(const ITargetPlatform * TargetPlatform) { NativeCall<void, const ITargetPlatform *>(this, "UMaterialInstance.BeginCacheForCookedPlatformData", TargetPlatform); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterialInstance.BeginDestroy"); }
	void CacheResourceShadersForCooking(EShaderPlatform ShaderPlatform, TArray<FMaterialResource *> * OutCachedMaterialResources) { NativeCall<void, EShaderPlatform, TArray<FMaterialResource *> *>(this, "UMaterialInstance.CacheResourceShadersForCooking", ShaderPlatform, OutCachedMaterialResources); }
	void CacheResourceShadersForRendering() { NativeCall<void>(this, "UMaterialInstance.CacheResourceShadersForRendering"); }
	void CacheShadersForResources(EShaderPlatform ShaderPlatform, const TArray<FMaterialResource *> * ResourcesToCache, bool bApplyCompletedShaderMapForRendering) { NativeCall<void, EShaderPlatform, const TArray<FMaterialResource *> *, bool>(this, "UMaterialInstance.CacheShadersForResources", ShaderPlatform, ResourcesToCache, bApplyCompletedShaderMapForRendering); }
	bool CanControlUsage() { return NativeCall<bool>(this, "UMaterialInstance.CanControlUsage"); }
	bool CheckMaterialUsage(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInstance.CheckMaterialUsage", Usage, bSkipPrim, DebugInfo); }
	bool CheckMaterialUsage_Concurrent(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInstance.CheckMaterialUsage_Concurrent", Usage, bSkipPrim, DebugInfo); }
	void ClearAllCachedCookedPlatformData() { NativeCall<void>(this, "UMaterialInstance.ClearAllCachedCookedPlatformData"); }
	void ClearCachedCookedPlatformData(const ITargetPlatform * TargetPlatform) { NativeCall<void, const ITargetPlatform *>(this, "UMaterialInstance.ClearCachedCookedPlatformData", TargetPlatform); }
	void ClearParameterValuesInternal() { NativeCall<void>(this, "UMaterialInstance.ClearParameterValuesInternal"); }
	int CompilePropertyEx(FMaterialCompiler * Compiler, EMaterialProperty Property) { return NativeCall<int, FMaterialCompiler *, EMaterialProperty>(this, "UMaterialInstance.CompilePropertyEx", Compiler, Property); }
	void CopyMaterialInstanceParameters(UMaterialInterface * MaterialInterface) { NativeCall<void, UMaterialInterface *>(this, "UMaterialInstance.CopyMaterialInstanceParameters", MaterialInterface); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterialInstance.FinishDestroy"); }
	void FlagLowEndMaterialsSeparateFile(const ITargetPlatform * TargetPlatform, bool bClearAllFlags) { NativeCall<void, const ITargetPlatform *, bool>(this, "UMaterialInstance.FlagLowEndMaterialsSeparateFile", TargetPlatform, bClearAllFlags); }
	void ForceRecompileForRendering() { NativeCall<void>(this, "UMaterialInstance.ForceRecompileForRendering"); }
	void GetAllShaderMaps(TArray<FMaterialShaderMap *> * OutShaderMaps) { NativeCall<void, TArray<FMaterialShaderMap *> *>(this, "UMaterialInstance.GetAllShaderMaps", OutShaderMaps); }
	void GetBasePropertyOverridesHash(FSHAHash * OutHash) { NativeCall<void, FSHAHash *>(this, "UMaterialInstance.GetBasePropertyOverridesHash", OutHash); }
	bool GetBlendModeOverride(EBlendMode * OutResult) { return NativeCall<bool, EBlendMode *>(this, "UMaterialInstance.GetBlendModeOverride", OutResult); }
	EBlendMode GetBlendMode_Internal() { return NativeCall<EBlendMode>(this, "UMaterialInstance.GetBlendMode_Internal"); }
	bool GetCastShadowAsMasked() { return NativeCall<bool>(this, "UMaterialInstance.GetCastShadowAsMasked"); }
	float GetDiffuseBoost() { return NativeCall<float>(this, "UMaterialInstance.GetDiffuseBoost"); }
	float GetDistanceFieldPenumbraScale() { return NativeCall<float>(this, "UMaterialInstance.GetDistanceFieldPenumbraScale"); }
	int GetDownsampleFactor_Internal() { return NativeCall<int>(this, "UMaterialInstance.GetDownsampleFactor_Internal"); }
	float GetEmissiveBoost() { return NativeCall<float>(this, "UMaterialInstance.GetEmissiveBoost"); }
	float GetExportResolutionScale() { return NativeCall<float>(this, "UMaterialInstance.GetExportResolutionScale"); }
	bool GetFontParameterValue(FName ParameterName, UFont ** OutFontValue, int * OutFontPage) { return NativeCall<bool, FName, UFont **, int *>(this, "UMaterialInstance.GetFontParameterValue", ParameterName, OutFontValue, OutFontPage); }
	UMaterial * GetMaterial() { return NativeCall<UMaterial *>(this, "UMaterialInstance.GetMaterial"); }
	const UMaterial * GetMaterial() { return NativeCall<const UMaterial *>(this, "UMaterialInstance.GetMaterial"); }
	const UMaterial * GetMaterial_Concurrent(TArray<UMaterialInterface const *,TInlineAllocator<8> > * RecursionGuard) { return NativeCall<const UMaterial *, TArray<UMaterialInterface const *,TInlineAllocator<8> > *>(this, "UMaterialInstance.GetMaterial_Concurrent", RecursionGuard); }
	bool GetOpacityMaskClipValueOverride(float * OutResult) { return NativeCall<bool, float *>(this, "UMaterialInstance.GetOpacityMaskClipValueOverride", OutResult); }
	float GetOpacityMaskClipValue_Internal() { return NativeCall<float>(this, "UMaterialInstance.GetOpacityMaskClipValue_Internal"); }
	UPhysicalMaterial * GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial *>(this, "UMaterialInstance.GetPhysicalMaterial"); }
	bool GetRefractionSettings(float * OutBiasValue) { return NativeCall<bool, float *>(this, "UMaterialInstance.GetRefractionSettings", OutBiasValue); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UMaterialInstance.GetResourceSize", Mode); }
	bool GetScalarParameterValue(FName ParameterName, float * OutValue) { return NativeCall<bool, FName, float *>(this, "UMaterialInstance.GetScalarParameterValue", ParameterName, OutValue); }
	bool GetShadingModelOverride(EMaterialShadingModel * OutResult) { return NativeCall<bool, EMaterialShadingModel *>(this, "UMaterialInstance.GetShadingModelOverride", OutResult); }
	EMaterialShadingModel GetShadingModel_Internal() { return NativeCall<EMaterialShadingModel>(this, "UMaterialInstance.GetShadingModel_Internal"); }
	bool GetStaticComponentMaskParameterValue(FName ParameterName, bool * OutR, bool * OutG, bool * OutB, bool * OutA, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, bool *, bool *, bool *, FGuid *>(this, "UMaterialInstance.GetStaticComponentMaskParameterValue", ParameterName, OutR, OutG, OutB, OutA, OutExpressionGuid); }
	void GetStaticParameterValues(FStaticParameterSet * OutStaticParameters) { NativeCall<void, FStaticParameterSet *>(this, "UMaterialInstance.GetStaticParameterValues", OutStaticParameters); }
	bool GetStaticSwitchParameterValue(FName ParameterName, bool * OutValue, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, FGuid *>(this, "UMaterialInstance.GetStaticSwitchParameterValue", ParameterName, OutValue, OutExpressionGuid); }
	USubsurfaceProfile * GetSubsurfaceProfile_Internal() { return NativeCall<USubsurfaceProfile *>(this, "UMaterialInstance.GetSubsurfaceProfile_Internal"); }
	bool GetTerrainLayerWeightParameterValue(FName ParameterName, int * OutWeightmapIndex, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, int *, FGuid *>(this, "UMaterialInstance.GetTerrainLayerWeightParameterValue", ParameterName, OutWeightmapIndex, OutExpressionGuid); }
	bool GetTextureParameterValue(FName ParameterName, UTexture ** OutValue) { return NativeCall<bool, FName, UTexture **>(this, "UMaterialInstance.GetTextureParameterValue", ParameterName, OutValue); }
	bool GetTexturesInPropertyChain(EMaterialProperty InProperty, TArray<UTexture *> * OutTextures, TArray<FName> * OutTextureParamNames, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, EMaterialProperty, TArray<UTexture *> *, TArray<FName> *, FStaticParameterSet *>(this, "UMaterialInstance.GetTexturesInPropertyChain", InProperty, OutTextures, OutTextureParamNames, InStaticParameterSet); }
	bool GetUsageByFlag(const EMaterialUsage Usage) { return NativeCall<bool, const EMaterialUsage>(this, "UMaterialInstance.GetUsageByFlag", Usage); }
	void GetUsedTextures(TArray<UTexture *> * OutTextures, EMaterialQualityLevel::Type QualityLevel, bool bAllQualityLevels, ERHIFeatureLevel::Type FeatureLevel, bool bAllFeatureLevels) { NativeCall<void, TArray<UTexture *> *, EMaterialQualityLevel::Type, bool, ERHIFeatureLevel::Type, bool>(this, "UMaterialInstance.GetUsedTextures", OutTextures, QualityLevel, bAllQualityLevels, FeatureLevel, bAllFeatureLevels); }
	bool GetUsedWithFlagOptimizationsOptOut_Internal() { return NativeCall<bool>(this, "UMaterialInstance.GetUsedWithFlagOptimizationsOptOut_Internal"); }
	bool GetVectorParameterValue(FName ParameterName, FLinearColor * OutValue) { return NativeCall<bool, FName, FLinearColor *>(this, "UMaterialInstance.GetVectorParameterValue", ParameterName, OutValue); }
	void InitResources() { NativeCall<void>(this, "UMaterialInstance.InitResources"); }
	void InitStaticPermutation() { NativeCall<void>(this, "UMaterialInstance.InitStaticPermutation"); }
	bool Internal_IsUsedWithBeamTrails() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithBeamTrails"); }
	bool Internal_IsUsedWithGroundClutter() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithGroundClutter"); }
	bool Internal_IsUsedWithInstancedStaticMeshes() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithInstancedStaticMeshes"); }
	bool Internal_IsUsedWithLandscape() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithLandscape"); }
	bool Internal_IsUsedWithMeshParticles() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithMeshParticles"); }
	bool Internal_IsUsedWithParticleSprites() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithParticleSprites"); }
	bool Internal_IsUsedWithSkeletalMesh() { return NativeCall<bool>(this, "UMaterialInstance.Internal_IsUsedWithSkeletalMesh"); }
	bool IsDependent(UMaterialInterface * TestDependency) { return NativeCall<bool, UMaterialInterface *>(this, "UMaterialInstance.IsDependent", TestDependency); }
	bool IsMaskedOverride(bool * OutResult) { return NativeCall<bool, bool *>(this, "UMaterialInstance.IsMaskedOverride", OutResult); }
	bool IsMasked_Internal() { return NativeCall<bool>(this, "UMaterialInstance.IsMasked_Internal"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterialInstance.IsReadyForFinishDestroy"); }
	bool IsSecondaryTarget_Internal() { return NativeCall<bool>(this, "UMaterialInstance.IsSecondaryTarget_Internal"); }
	bool IsTwoSidedOverride(bool * OutResult) { return NativeCall<bool, bool *>(this, "UMaterialInstance.IsTwoSidedOverride", OutResult); }
	bool IsTwoSided_Internal() { return NativeCall<bool>(this, "UMaterialInstance.IsTwoSided_Internal"); }
	bool NeedsSetMaterialUsage_Concurrent(bool * bOutHasUsage, const EMaterialUsage Usage) { return NativeCall<bool, bool *, const EMaterialUsage>(this, "UMaterialInstance.NeedsSetMaterialUsage_Concurrent", bOutHasUsage, Usage); }
	void OverrideBlendableSettings(FSceneView * View, float Weight) { NativeCall<void, FSceneView *, float>(this, "UMaterialInstance.OverrideBlendableSettings", View, Weight); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialInstance.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UMaterialInstance.PostLoad"); }
	void RecacheUniformExpressions() { NativeCall<void>(this, "UMaterialInstance.RecacheUniformExpressions"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialInstance.Serialize", Ar); }
	bool SetMaterialUsage(bool * bNeedsRecompile, const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, bool *, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterialInstance.SetMaterialUsage", bNeedsRecompile, Usage, bSkipPrim, DebugInfo); }
	void SetParentInternal(UMaterialInterface * NewParent) { NativeCall<void, UMaterialInterface *>(this, "UMaterialInstance.SetParentInternal", NewParent); }
	void SetScalarParameterValueInternal(FName ParameterName, float Value) { NativeCall<void, FName, float>(this, "UMaterialInstance.SetScalarParameterValueInternal", ParameterName, Value); }
	void SetTextureParameterValueInternal(FName ParameterName, UTexture * Value) { NativeCall<void, FName, UTexture *>(this, "UMaterialInstance.SetTextureParameterValueInternal", ParameterName, Value); }
	void SetVectorParameterValueInternal(FName ParameterName, FLinearColor Value) { NativeCall<void, FName, FLinearColor>(this, "UMaterialInstance.SetVectorParameterValueInternal", ParameterName, Value); }
	bool UpdateParameters() { return NativeCall<bool>(this, "UMaterialInstance.UpdateParameters"); }
	void UpdatePermutationAllocations() { NativeCall<void>(this, "UMaterialInstance.UpdatePermutationAllocations"); }
};

