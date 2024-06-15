#pragma once

#include "BaseDeclarations.h"
struct FMaterial
{
	char __padding[0x78L];
	TArray<FString>& CompileErrorsField() { return *GetNativePointerField<TArray<FString>*>(this, "FMaterial.CompileErrors"); }
	FGuid& Id_DEPRECATEDField() { return *GetNativePointerField<FGuid*>(this, "FMaterial.Id_DEPRECATED"); }
	TArray<int,TInlineAllocator<1> >& OutstandingCompileShaderMapIdsField() { return *GetNativePointerField<TArray<int,TInlineAllocator<1> >*>(this, "FMaterial.OutstandingCompileShaderMapIds"); }
	EMaterialQualityLevel::Type& QualityLevelField() { return *GetNativePointerField<EMaterialQualityLevel::Type*>(this, "FMaterial.QualityLevel"); }
	bool& bQualityLevelHasDifferentNodesField() { return *GetNativePointerField<bool*>(this, "FMaterial.bQualityLevelHasDifferentNodes"); }
	bool& bSurfaceLevelHasDifferentNodesField() { return *GetNativePointerField<bool*>(this, "FMaterial.bSurfaceLevelHasDifferentNodes"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FMaterial.FeatureLevel"); }
	ERHISurfaceLevel::Type& SurfaceLevelField() { return *GetNativePointerField<ERHISurfaceLevel::Type*>(this, "FMaterial.SurfaceLevel"); }

	// Functions

	FString * GetBaseMaterialPathName(FString * result) { return NativeCall<FString *, FString *>(this, "FMaterial.GetBaseMaterialPathName", result); }
	FLinearColor * GetTranslucentMultipleScatteringExtinction(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "FMaterial.GetTranslucentMultipleScatteringExtinction", result); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FMaterial.AddReferencedObjects", Collector); }
	static void BackupEditorLoadedMaterialShadersToMemory(TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > * ShaderMapToSerializedShaderData) { NativeCall<void, TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > *>(nullptr, "FMaterial.BackupEditorLoadedMaterialShadersToMemory", ShaderMapToSerializedShaderData); }
	bool CacheShaders(const FMaterialShaderMapId * ShaderMapId, EShaderPlatform Platform, bool bApplyCompletedShaderMapForRendering) { return NativeCall<bool, const FMaterialShaderMapId *, EShaderPlatform, bool>(this, "FMaterial.CacheShaders", ShaderMapId, Platform, bApplyCompletedShaderMapForRendering); }
	bool CacheShaders(EShaderPlatform Platform, bool bApplyCompletedShaderMapForRendering) { return NativeCall<bool, EShaderPlatform, bool>(this, "FMaterial.CacheShaders", Platform, bApplyCompletedShaderMapForRendering); }
	void FinishCompilation() { NativeCall<void>(this, "FMaterial.FinishCompilation"); }
	void GetDependentShaderAndVFTypes(EShaderPlatform Platform, TArray<FShaderType *> * OutShaderTypes, TArray<FVertexFactoryType *> * OutVFTypes) { NativeCall<void, EShaderPlatform, TArray<FShaderType *> *, TArray<FVertexFactoryType *> *>(this, "FMaterial.GetDependentShaderAndVFTypes", Platform, OutShaderTypes, OutVFTypes); }
	void GetReferencedTexturesHash(FSHAHash * OutHash) { NativeCall<void, FSHAHash *>(this, "FMaterial.GetReferencedTexturesHash", OutHash); }
	void GetShaderMapIDsWithUnfinishedCompilation(TArray<int> * ShaderMapIds) { NativeCall<void, TArray<int> *>(this, "FMaterial.GetShaderMapIDsWithUnfinishedCompilation", ShaderMapIds); }
	void GetShaderMapId(EShaderPlatform Platform, FMaterialShaderMapId * OutId) { NativeCall<void, EShaderPlatform, FMaterialShaderMapId *>(this, "FMaterial.GetShaderMapId", Platform, OutId); }
	void LegacySerialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterial.LegacySerialize", Ar); }
	bool MaterialMayModifyMeshPosition() { return NativeCall<bool>(this, "FMaterial.MaterialMayModifyMeshPosition"); }
	bool MaterialModifiesMeshPosition_GameThread() { return NativeCall<bool>(this, "FMaterial.MaterialModifiesMeshPosition_GameThread"); }
	bool MaterialModifiesMeshPosition_RenderThread() { return NativeCall<bool>(this, "FMaterial.MaterialModifiesMeshPosition_RenderThread"); }
	bool NeedsGBuffer() { return NativeCall<bool>(this, "FMaterial.NeedsGBuffer"); }
	bool NeedsSceneTextures() { return NativeCall<bool>(this, "FMaterial.NeedsSceneTextures"); }
	void ReleaseShaderMap() { NativeCall<void>(this, "FMaterial.ReleaseShaderMap"); }
	bool RequiresSceneColorCopy_GameThread() { return NativeCall<bool>(this, "FMaterial.RequiresSceneColorCopy_GameThread"); }
	bool RequiresSceneColorCopy_RenderThread() { return NativeCall<bool>(this, "FMaterial.RequiresSceneColorCopy_RenderThread"); }
	static void RestoreEditorLoadedMaterialShadersFromMemory(const TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > * ShaderMapToSerializedShaderData) { NativeCall<void, const TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > *>(nullptr, "FMaterial.RestoreEditorLoadedMaterialShadersFromMemory", ShaderMapToSerializedShaderData); }
	void SerializeInlineShaderMap(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterial.SerializeInlineShaderMap", Ar); }
};

struct FMaterialResource : FMaterial
{
	char __padding[0x10L];
	UMaterial * MaterialField() { return GetNativePointerField<UMaterial *>(this, "FMaterialResource.Material"); }

	// Functions

	int CompilePropertyAndSetMaterialProperty(EMaterialProperty Property, FMaterialCompiler * Compiler, EShaderFrequency OverrideShaderFrequency) { return NativeCall<int, EMaterialProperty, FMaterialCompiler *, EShaderFrequency>(this, "FMaterialResource.CompilePropertyAndSetMaterialProperty", Property, Compiler, OverrideShaderFrequency); }
	void GetShaderMapId(EShaderPlatform Platform, FMaterialShaderMapId * OutId) { NativeCall<void, EShaderPlatform, FMaterialShaderMapId *>(this, "FMaterialResource.GetShaderMapId", Platform, OutId); }
	bool AllowFullTransPath() { return NativeCall<bool>(this, "FMaterialResource.AllowFullTransPath"); }
	TArray<FString> * GetAdditionalIncludes(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FMaterialResource.GetAdditionalIncludes", result); }
	bool GetAllowDevelopmentShaderCompile() { return NativeCall<bool>(this, "FMaterialResource.GetAllowDevelopmentShaderCompile"); }
	FString * GetBaseMaterialPathName(FString * result) { return NativeCall<FString *, FString *>(this, "FMaterialResource.GetBaseMaterialPathName", result); }
	EBlendMode GetBlendMode() { return NativeCall<EBlendMode>(this, "FMaterialResource.GetBlendMode"); }
	unsigned int GetDecalBlendMode() { return NativeCall<unsigned int>(this, "FMaterialResource.GetDecalBlendMode"); }
	int GetDownsampleFactor() { return NativeCall<int>(this, "FMaterialResource.GetDownsampleFactor"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FMaterialResource.GetFriendlyName", result); }
	unsigned int GetMaterialDecalResponse() { return NativeCall<unsigned int>(this, "FMaterialResource.GetMaterialDecalResponse"); }
	int GetMaterialDomain() { return NativeCall<int>(this, "FMaterialResource.GetMaterialDomain"); }
	FGuid * GetMaterialId(FGuid * result) { return NativeCall<FGuid *, FGuid *>(this, "FMaterialResource.GetMaterialId", result); }
	FString * GetMaterialUsageDescription(FString * result) { return NativeCall<FString *, FString *>(this, "FMaterialResource.GetMaterialUsageDescription", result); }
	float GetOpacityMaskClipValue() { return NativeCall<float>(this, "FMaterialResource.GetOpacityMaskClipValue"); }
	float GetRefractionDepthBiasValue() { return NativeCall<float>(this, "FMaterialResource.GetRefractionDepthBiasValue"); }
	unsigned __int64 GetResourceSizeInclusive() { return NativeCall<unsigned __int64>(this, "FMaterialResource.GetResourceSizeInclusive"); }
	EMaterialShadingModel GetShadingModel() { return NativeCall<EMaterialShadingModel>(this, "FMaterialResource.GetShadingModel"); }
	EMaterialTessellationMode GetTessellationMode() { return NativeCall<EMaterialTessellationMode>(this, "FMaterialResource.GetTessellationMode"); }
	float GetTranslucencyDirectionalLightingIntensity() { return NativeCall<float>(this, "FMaterialResource.GetTranslucencyDirectionalLightingIntensity"); }
	ETranslucencyLightingMode GetTranslucencyLightingMode() { return NativeCall<ETranslucencyLightingMode>(this, "FMaterialResource.GetTranslucencyLightingMode"); }
	float GetTranslucentBackscatteringExponent() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentBackscatteringExponent"); }
	FLinearColor * GetTranslucentMultipleScatteringExtinction(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "FMaterialResource.GetTranslucentMultipleScatteringExtinction", result); }
	float GetTranslucentSelfShadowDensityScale() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentSelfShadowDensityScale"); }
	float GetTranslucentSelfShadowSecondDensityScale() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentSelfShadowSecondDensityScale"); }
	float GetTranslucentSelfShadowSecondOpacity() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentSelfShadowSecondOpacity"); }
	float GetTranslucentShadowDensityScale() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentShadowDensityScale"); }
	float GetTranslucentShadowStartOffset() { return NativeCall<float>(this, "FMaterialResource.GetTranslucentShadowStartOffset"); }
	bool GetUsedWithFlagOptimizationsOptOut() { return NativeCall<bool>(this, "FMaterialResource.GetUsedWithFlagOptimizationsOptOut"); }
	bool HasMaterialAttributesConnected() { return NativeCall<bool>(this, "FMaterialResource.HasMaterialAttributesConnected"); }
	bool HasNormalConnected() { return NativeCall<bool>(this, "FMaterialResource.HasNormalConnected"); }
	bool HasPixelDepthOffsetConnected() { return NativeCall<bool>(this, "FMaterialResource.HasPixelDepthOffsetConnected"); }
	bool HasVertexPositionOffsetConnected() { return NativeCall<bool>(this, "FMaterialResource.HasVertexPositionOffsetConnected"); }
	bool IsAdaptiveTessellationEnabled() { return NativeCall<bool>(this, "FMaterialResource.IsAdaptiveTessellationEnabled"); }
	bool IsCrackFreeDisplacementEnabled() { return NativeCall<bool>(this, "FMaterialResource.IsCrackFreeDisplacementEnabled"); }
	bool IsDefaultMaterial() { return NativeCall<bool>(this, "FMaterialResource.IsDefaultMaterial"); }
	bool IsDistorted() { return NativeCall<bool>(this, "FMaterialResource.IsDistorted"); }
	bool IsFullyRough() { return NativeCall<bool>(this, "FMaterialResource.IsFullyRough"); }
	bool IsLightFunction() { return NativeCall<bool>(this, "FMaterialResource.IsLightFunction"); }
	bool IsMasked() { return NativeCall<bool>(this, "FMaterialResource.IsMasked"); }
	bool IsNonmetal() { return NativeCall<bool>(this, "FMaterialResource.IsNonmetal"); }
	bool IsSecondaryTarget() { return NativeCall<bool>(this, "FMaterialResource.IsSecondaryTarget"); }
	bool IsSeparateTranslucencyEnabled() { return NativeCall<bool>(this, "FMaterialResource.IsSeparateTranslucencyEnabled"); }
	bool IsSpecialEngineMaterial() { return NativeCall<bool>(this, "FMaterialResource.IsSpecialEngineMaterial"); }
	bool IsTangentSpaceNormal() { return NativeCall<bool>(this, "FMaterialResource.IsTangentSpaceNormal"); }
	bool IsTwoSided() { return NativeCall<bool>(this, "FMaterialResource.IsTwoSided"); }
	bool IsUsedWithAPEXCloth() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithAPEXCloth"); }
	bool IsUsedWithBeamTrails() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithBeamTrails"); }
	bool IsUsedWithDeferredDecal() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithDeferredDecal"); }
	bool IsUsedWithEditorCompositing() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithEditorCompositing"); }
	bool IsUsedWithGroundClutter() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithGroundClutter"); }
	bool IsUsedWithInstancedStaticMeshes() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithInstancedStaticMeshes"); }
	bool IsUsedWithLandscape() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithLandscape"); }
	bool IsUsedWithMeshParticles() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithMeshParticles"); }
	bool IsUsedWithMorphTargets() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithMorphTargets"); }
	bool IsUsedWithParticleSprites() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithParticleSprites"); }
	bool IsUsedWithParticleSystem() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithParticleSystem"); }
	bool IsUsedWithSkeletalMesh() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithSkeletalMesh"); }
	bool IsUsedWithSplineMeshes() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithSplineMeshes"); }
	bool IsUsedWithStaticLighting() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithStaticLighting"); }
	bool IsUsedWithStaticMeshes() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithStaticMeshes"); }
	bool IsUsedWithUI() { return NativeCall<bool>(this, "FMaterialResource.IsUsedWithUI"); }
	bool IsWireframe() { return NativeCall<bool>(this, "FMaterialResource.IsWireframe"); }
	void LegacySerialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialResource.LegacySerialize", Ar); }
	void NotifyCompilationFinished() { NativeCall<void>(this, "FMaterialResource.NotifyCompilationFinished"); }
	bool ShouldDisableDepthTest() { return NativeCall<bool>(this, "FMaterialResource.ShouldDisableDepthTest"); }
	bool ShouldDoSSR() { return NativeCall<bool>(this, "FMaterialResource.ShouldDoSSR"); }
	bool ShouldDoTrueSkyScatter() { return NativeCall<bool>(this, "FMaterialResource.ShouldDoTrueSkyScatter"); }
	bool ShouldEnableResponsiveAA() { return NativeCall<bool>(this, "FMaterialResource.ShouldEnableResponsiveAA"); }
	bool ShouldGenerateSphericalParticleNormals() { return NativeCall<bool>(this, "FMaterialResource.ShouldGenerateSphericalParticleNormals"); }
	bool ShouldInjectEmissiveIntoLPV() { return NativeCall<bool>(this, "FMaterialResource.ShouldInjectEmissiveIntoLPV"); }
	bool UseLmDirectionality() { return NativeCall<bool>(this, "FMaterialResource.UseLmDirectionality"); }
	bool UseTranslucencyVertexFog() { return NativeCall<bool>(this, "FMaterialResource.UseTranslucencyVertexFog"); }
	bool UsesAdditionalSkyLightMultiplier() { return NativeCall<bool>(this, "FMaterialResource.UsesAdditionalSkyLightMultiplier"); }
};

