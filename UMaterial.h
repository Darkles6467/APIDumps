#pragma once

#include "BaseDeclarations.h"
#include "UMaterialInterface.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterial : UMaterialInterface
{
	char __padding[0xa88L];
	UPhysicalMaterial * PhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "UMaterial.PhysMaterial"); }
	FVectorMaterialInput& NormalField() { return *GetNativePointerField<FVectorMaterialInput*>(this, "UMaterial.Normal"); }
	float& FresnelBaseReflectFraction_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UMaterial.FresnelBaseReflectFraction_DEPRECATED"); }
	TArray<FString>& AdditionalIncludesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMaterial.AdditionalIncludes"); }
	TEnumAsByte<enum EMaterialDomain>& MaterialDomainField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialDomain>*>(this, "UMaterial.MaterialDomain"); }
	TEnumAsByte<enum EBlendMode>& BlendModeField() { return *GetNativePointerField<TEnumAsByte<enum EBlendMode>*>(this, "UMaterial.BlendMode"); }
	TEnumAsByte<enum EDecalBlendMode>& DecalBlendModeField() { return *GetNativePointerField<TEnumAsByte<enum EDecalBlendMode>*>(this, "UMaterial.DecalBlendMode"); }
	TEnumAsByte<enum EMaterialDecalResponse>& MaterialDecalResponseField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialDecalResponse>*>(this, "UMaterial.MaterialDecalResponse"); }
	TEnumAsByte<enum EMaterialShadingModel>& ShadingModelField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialShadingModel>*>(this, "UMaterial.ShadingModel"); }
	float& OpacityMaskClipValueField() { return *GetNativePointerField<float*>(this, "UMaterial.OpacityMaskClipValue"); }
	FVectorMaterialInput& WorldPositionOffsetField() { return *GetNativePointerField<FVectorMaterialInput*>(this, "UMaterial.WorldPositionOffset"); }
	FVectorMaterialInput& WorldDisplacementField() { return *GetNativePointerField<FVectorMaterialInput*>(this, "UMaterial.WorldDisplacement"); }
	FieldArray<FVector2MaterialInput[8], 28> CustomizedUVsField() { return {this, "UMaterial.CustomizedUVs"}; }
	int& NumCustomizedUVsField() { return *GetNativePointerField<int*>(this, "UMaterial.NumCustomizedUVs"); }
	TEnumAsByte<enum ETranslucencyLightingMode>& TranslucencyLightingModeField() { return *GetNativePointerField<TEnumAsByte<enum ETranslucencyLightingMode>*>(this, "UMaterial.TranslucencyLightingMode"); }
	float& TranslucencyDirectionalLightingIntensityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucencyDirectionalLightingIntensity"); }
	float& TranslucentShadowDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentShadowDensityScale"); }
	float& TranslucentSelfShadowDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowDensityScale"); }
	float& TranslucentSelfShadowSecondDensityScaleField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowSecondDensityScale"); }
	float& TranslucentSelfShadowSecondOpacityField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentSelfShadowSecondOpacity"); }
	float& TranslucentBackscatteringExponentField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentBackscatteringExponent"); }
	FLinearColor& TranslucentMultipleScatteringExtinctionField() { return *GetNativePointerField<FLinearColor*>(this, "UMaterial.TranslucentMultipleScatteringExtinction"); }
	float& TranslucentShadowStartOffsetField() { return *GetNativePointerField<float*>(this, "UMaterial.TranslucentShadowStartOffset"); }
	TEnumAsByte<enum EMaterialTessellationMode>& D3D11TessellationModeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialTessellationMode>*>(this, "UMaterial.D3D11TessellationMode"); }
	int& EditorXField() { return *GetNativePointerField<int*>(this, "UMaterial.EditorX"); }
	int& EditorYField() { return *GetNativePointerField<int*>(this, "UMaterial.EditorY"); }
	int& EditorPitchField() { return *GetNativePointerField<int*>(this, "UMaterial.EditorPitch"); }
	int& EditorYawField() { return *GetNativePointerField<int*>(this, "UMaterial.EditorYaw"); }
	unsigned int& UsageFlagWarningsField() { return *GetNativePointerField<unsigned int*>(this, "UMaterial.UsageFlagWarnings"); }
	TEnumAsByte<enum EBlendableLocation>& BlendableLocationField() { return *GetNativePointerField<TEnumAsByte<enum EBlendableLocation>*>(this, "UMaterial.BlendableLocation"); }
	int& BlendablePriorityField() { return *GetNativePointerField<int*>(this, "UMaterial.BlendablePriority"); }
	int& DownsampleFactorField() { return *GetNativePointerField<int*>(this, "UMaterial.DownsampleFactor"); }
	float& RefractionDepthBiasField() { return *GetNativePointerField<float*>(this, "UMaterial.RefractionDepthBias"); }
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterial.StateId"); }
	FieldArray<FDefaultMaterialInstance *, 3> DefaultMaterialInstancesField() { return {this, "UMaterial.DefaultMaterialInstances"}; }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UMaterial.ReleaseFence"); }

	// Functions

	bool AddExpressionParameter(UMaterialExpression * Expression, TMap<FName,TArray<UMaterialExpression *>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TArray<UMaterialExpression *>,0> > * ParameterTypeMap) { return NativeCall<bool, UMaterialExpression *, TMap<FName,TArray<UMaterialExpression *>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TArray<UMaterialExpression *>,0> > *>(this, "UMaterial.AddExpressionParameter", Expression, ParameterTypeMap); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UMaterial.AddReferencedObjects", InThis, Collector); }
	void AppendReferencedTextures(TArray<UTexture *> * InOutTextures) { NativeCall<void, TArray<UTexture *> *>(this, "UMaterial.AppendReferencedTextures", InOutTextures); }
	static void BackupMaterialShadersToMemory(EShaderPlatform ShaderPlatform, TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > * ShaderMapToSerializedShaderData) { NativeCall<void, EShaderPlatform, TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > *>(nullptr, "UMaterial.BackupMaterialShadersToMemory", ShaderPlatform, ShaderMapToSerializedShaderData); }
	void BeginCacheForCookedPlatformData(const ITargetPlatform * TargetPlatform) { NativeCall<void, const ITargetPlatform *>(this, "UMaterial.BeginCacheForCookedPlatformData", TargetPlatform); }
	void BeginDestroy() { NativeCall<void>(this, "UMaterial.BeginDestroy"); }
	void BuildEditorParameterList() { NativeCall<void>(this, "UMaterial.BuildEditorParameterList"); }
	void CacheResourceShadersForCooking(EShaderPlatform ShaderPlatform, TArray<FMaterialResource *> * OutCachedMaterialResources) { NativeCall<void, EShaderPlatform, TArray<FMaterialResource *> *>(this, "UMaterial.CacheResourceShadersForCooking", ShaderPlatform, OutCachedMaterialResources); }
	void CacheShadersForResources(EShaderPlatform ShaderPlatform, const TArray<FMaterialResource *> * ResourcesToCache, bool bApplyCompletedShaderMapForRendering) { NativeCall<void, EShaderPlatform, const TArray<FMaterialResource *> *, bool>(this, "UMaterial.CacheShadersForResources", ShaderPlatform, ResourcesToCache, bApplyCompletedShaderMapForRendering); }
	bool CheckMaterialUsage(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterial.CheckMaterialUsage", Usage, bSkipPrim, DebugInfo); }
	bool CheckMaterialUsage_Concurrent(const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterial.CheckMaterialUsage_Concurrent", Usage, bSkipPrim, DebugInfo); }
	void ClearAllCachedCookedPlatformData() { NativeCall<void>(this, "UMaterial.ClearAllCachedCookedPlatformData"); }
	void ClearCachedCookedPlatformData(const ITargetPlatform * TargetPlatform) { NativeCall<void, const ITargetPlatform *>(this, "UMaterial.ClearCachedCookedPlatformData", TargetPlatform); }
	int CompilePropertyEx(FMaterialCompiler * Compiler, EMaterialProperty Property) { return NativeCall<int, FMaterialCompiler *, EMaterialProperty>(this, "UMaterial.CompilePropertyEx", Compiler, Property); }
	static bool CopyExpressionParameters(UMaterialExpression * Source, UMaterialExpression * Destination) { return NativeCall<bool, UMaterialExpression *, UMaterialExpression *>(nullptr, "UMaterial.CopyExpressionParameters", Source, Destination); }
	void FinishDestroy() { NativeCall<void>(this, "UMaterial.FinishDestroy"); }
	void FixupTerrainLayerWeightNodes() { NativeCall<void>(this, "UMaterial.FixupTerrainLayerWeightNodes"); }
	void FlagLowEndMaterialsSeparateFile(const ITargetPlatform * TargetPlatform, bool bClearAllFlags) { NativeCall<void, const ITargetPlatform *, bool>(this, "UMaterial.FlagLowEndMaterialsSeparateFile", TargetPlatform, bClearAllFlags); }
	void FlushResourceShaderMaps() { NativeCall<void>(this, "UMaterial.FlushResourceShaderMaps"); }
	void ForceRecompileForRendering() { NativeCall<void>(this, "UMaterial.ForceRecompileForRendering"); }
	bool GetAllReferencedExpressions(TArray<UMaterialExpression *> * OutExpressions, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, TArray<UMaterialExpression *> *, FStaticParameterSet *>(this, "UMaterial.GetAllReferencedExpressions", OutExpressions, InStaticParameterSet); }
	EBlendMode GetBlendMode_Internal() { return NativeCall<EBlendMode>(this, "UMaterial.GetBlendMode_Internal"); }
	static UMaterial * GetDefaultMaterial(EMaterialDomain Domain) { return NativeCall<UMaterial *, EMaterialDomain>(nullptr, "UMaterial.GetDefaultMaterial", Domain); }
	int GetDownsampleFactor_Internal() { return NativeCall<int>(this, "UMaterial.GetDownsampleFactor_Internal"); }
	FExpressionInput * GetExpressionInputForProperty(EMaterialProperty InProperty) { return NativeCall<FExpressionInput *, EMaterialProperty>(this, "UMaterial.GetExpressionInputForProperty", InProperty); }
	static bool GetExpressionParameterName(const UMaterialExpression * Expression, FName * OutName) { return NativeCall<bool, const UMaterialExpression *, FName *>(nullptr, "UMaterial.GetExpressionParameterName", Expression, OutName); }
	bool GetExpressionsInPropertyChain(EMaterialProperty InProperty, TArray<UMaterialExpression *> * OutExpressions, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, EMaterialProperty, TArray<UMaterialExpression *> *, FStaticParameterSet *>(this, "UMaterial.GetExpressionsInPropertyChain", InProperty, OutExpressions, InStaticParameterSet); }
	bool GetFontParameterValue(FName ParameterName, UFont ** OutFontValue, int * OutFontPage) { return NativeCall<bool, FName, UFont **, int *>(this, "UMaterial.GetFontParameterValue", ParameterName, OutFontValue, OutFontPage); }
	bool GetGroupName(FName ParameterName, FName * OutDesc) { return NativeCall<bool, FName, FName *>(this, "UMaterial.GetGroupName", ParameterName, OutDesc); }
	float GetOpacityMaskClipValue_Internal() { return NativeCall<float>(this, "UMaterial.GetOpacityMaskClipValue_Internal"); }
	bool GetParameterDesc(FName ParameterName, FString * OutDesc) { return NativeCall<bool, FName, FString *>(this, "UMaterial.GetParameterDesc", ParameterName, OutDesc); }
	UPhysicalMaterial * GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial *>(this, "UMaterial.GetPhysicalMaterial"); }
	void GetQualityLevelNodeUsage(TArray<bool,TInlineAllocator<2> > * OutQualityLevelsUsed) { NativeCall<void, TArray<bool,TInlineAllocator<2> > *>(this, "UMaterial.GetQualityLevelNodeUsage", OutQualityLevelsUsed); }
	void GetReferencedFunctionIds(TArray<FGuid> * Ids) { NativeCall<void, TArray<FGuid> *>(this, "UMaterial.GetReferencedFunctionIds", Ids); }
	void GetReferencedParameterCollectionIds(TArray<FGuid> * Ids) { NativeCall<void, TArray<FGuid> *>(this, "UMaterial.GetReferencedParameterCollectionIds", Ids); }
	bool GetRefractionSettings(float * OutBiasValue) { return NativeCall<bool, float *>(this, "UMaterial.GetRefractionSettings", OutBiasValue); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UMaterial.GetResourceSize", Mode); }
	bool GetScalarParameterValue(FName ParameterName, float * OutValue) { return NativeCall<bool, FName, float *>(this, "UMaterial.GetScalarParameterValue", ParameterName, OutValue); }
	EMaterialShadingModel GetShadingModel_Internal() { return NativeCall<EMaterialShadingModel>(this, "UMaterial.GetShadingModel_Internal"); }
	bool GetStaticComponentMaskParameterValue(FName ParameterName, bool * OutR, bool * OutG, bool * OutB, bool * OutA, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, bool *, bool *, bool *, FGuid *>(this, "UMaterial.GetStaticComponentMaskParameterValue", ParameterName, OutR, OutG, OutB, OutA, OutExpressionGuid); }
	bool GetStaticSwitchParameterValue(FName ParameterName, bool * OutValue, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, bool *, FGuid *>(this, "UMaterial.GetStaticSwitchParameterValue", ParameterName, OutValue, OutExpressionGuid); }
	bool GetTerrainLayerWeightParameterValue(FName ParameterName, int * OutWeightmapIndex, FGuid * OutExpressionGuid) { return NativeCall<bool, FName, int *, FGuid *>(this, "UMaterial.GetTerrainLayerWeightParameterValue", ParameterName, OutWeightmapIndex, OutExpressionGuid); }
	bool GetTextureParameterValue(FName ParameterName, UTexture ** OutValue) { return NativeCall<bool, FName, UTexture **>(this, "UMaterial.GetTextureParameterValue", ParameterName, OutValue); }
	bool GetTexturesInPropertyChain(EMaterialProperty InProperty, TArray<UTexture *> * OutTextures, TArray<FName> * OutTextureParamNames, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, EMaterialProperty, TArray<UTexture *> *, TArray<FName> *, FStaticParameterSet *>(this, "UMaterial.GetTexturesInPropertyChain", InProperty, OutTextures, OutTextureParamNames, InStaticParameterSet); }
	bool GetUsageByFlag(const EMaterialUsage Usage) { return NativeCall<bool, const EMaterialUsage>(this, "UMaterial.GetUsageByFlag", Usage); }
	static FString * GetUsageName(FString * result, const EMaterialUsage Usage) { return NativeCall<FString *, FString *, const EMaterialUsage>(nullptr, "UMaterial.GetUsageName", result, Usage); }
	void GetUsedTextures(TArray<UTexture *> * OutTextures, EMaterialQualityLevel::Type QualityLevel, bool bAllQualityLevels, ERHIFeatureLevel::Type FeatureLevel, bool bAllFeatureLevels) { NativeCall<void, TArray<UTexture *> *, EMaterialQualityLevel::Type, bool, ERHIFeatureLevel::Type, bool>(this, "UMaterial.GetUsedTextures", OutTextures, QualityLevel, bAllQualityLevels, FeatureLevel, bAllFeatureLevels); }
	bool GetUsedWithFlagOptimizationsOptOut_Internal() { return NativeCall<bool>(this, "UMaterial.GetUsedWithFlagOptimizationsOptOut_Internal"); }
	bool GetVectorParameterValue(FName ParameterName, FLinearColor * OutValue) { return NativeCall<bool, FName, FLinearColor *>(this, "UMaterial.GetVectorParameterValue", ParameterName, OutValue); }
	bool HasDuplicateDynamicParameters(const UMaterialExpression * Expression) { return NativeCall<bool, const UMaterialExpression *>(this, "UMaterial.HasDuplicateDynamicParameters", Expression); }
	bool HasDuplicateParameters(const UMaterialExpression * Expression) { return NativeCall<bool, const UMaterialExpression *>(this, "UMaterial.HasDuplicateParameters", Expression); }
	bool IsDefaultMaterial() { return NativeCall<bool>(this, "UMaterial.IsDefaultMaterial"); }
	bool IsMasked_Internal() { return NativeCall<bool>(this, "UMaterial.IsMasked_Internal"); }
	bool IsPropertyActive(EMaterialProperty InProperty) { return NativeCall<bool, EMaterialProperty>(this, "UMaterial.IsPropertyActive", InProperty); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMaterial.IsReadyForFinishDestroy"); }
	bool IsSecondaryTarget_Internal() { return NativeCall<bool>(this, "UMaterial.IsSecondaryTarget_Internal"); }
	bool IsTwoSided_Internal() { return NativeCall<bool>(this, "UMaterial.IsTwoSided_Internal"); }
	bool NeedsSetMaterialUsage_Concurrent(bool * bOutHasUsage, const EMaterialUsage Usage) { return NativeCall<bool, bool *, const EMaterialUsage>(this, "UMaterial.NeedsSetMaterialUsage_Concurrent", bOutHasUsage, Usage); }
	void NotifyCompilationFinished(FMaterialResource * CompiledResource) { NativeCall<void, FMaterialResource *>(this, "UMaterial.NotifyCompilationFinished", CompiledResource); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterial.PostDuplicate", bDuplicateForPIE); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterial.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UMaterial.PostLoad"); }
	void PropagateExpressionParameterChanges(UMaterialExpression * Parameter) { NativeCall<void, UMaterialExpression *>(this, "UMaterial.PropagateExpressionParameterChanges", Parameter); }
	void RecacheUniformExpressions() { NativeCall<void>(this, "UMaterial.RecacheUniformExpressions"); }
	bool RecursiveGetExpressionChain(UMaterialExpression * InExpression, TArray<FExpressionInput *> * InOutProcessedInputs, TArray<UMaterialExpression *> * OutExpressions, FStaticParameterSet * InStaticParameterSet) { return NativeCall<bool, UMaterialExpression *, TArray<FExpressionInput *> *, TArray<UMaterialExpression *> *, FStaticParameterSet *>(this, "UMaterial.RecursiveGetExpressionChain", InExpression, InOutProcessedInputs, OutExpressions, InStaticParameterSet); }
	void ReleaseResources() { NativeCall<void>(this, "UMaterial.ReleaseResources"); }
	bool RemoveExpressionParameter(UMaterialExpression * Expression) { return NativeCall<bool, UMaterialExpression *>(this, "UMaterial.RemoveExpressionParameter", Expression); }
	static void RestoreMaterialShadersFromMemory(EShaderPlatform ShaderPlatform, const TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > * ShaderMapToSerializedShaderData) { NativeCall<void, EShaderPlatform, const TMap<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterialShaderMap *,TScopedPointer<TArray<unsigned char> >,0> > *>(nullptr, "UMaterial.RestoreMaterialShadersFromMemory", ShaderPlatform, ShaderMapToSerializedShaderData); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterial.Serialize", Ar); }
	bool SetMaterialUsage(bool * bNeedsRecompile, const EMaterialUsage Usage, const bool bSkipPrim, const wchar_t * DebugInfo) { return NativeCall<bool, bool *, const EMaterialUsage, const bool, const wchar_t *>(this, "UMaterial.SetMaterialUsage", bNeedsRecompile, Usage, bSkipPrim, DebugInfo); }
	void UpdateExpressionDynamicParameterNames(const UMaterialExpression * Expression) { NativeCall<void, const UMaterialExpression *>(this, "UMaterial.UpdateExpressionDynamicParameterNames", Expression); }
	void UpdateExpressionParameterName(UMaterialExpression * Expression) { NativeCall<void, UMaterialExpression *>(this, "UMaterial.UpdateExpressionParameterName", Expression); }
	static void UpdateMaterialShaders(TArray<FShaderType *> * ShaderTypesToFlush, TArray<FVertexFactoryType const *> * VFTypesToFlush, EShaderPlatform ShaderPlatform) { NativeCall<void, TArray<FShaderType *> *, TArray<FVertexFactoryType const *> *, EShaderPlatform>(nullptr, "UMaterial.UpdateMaterialShaders", ShaderTypesToFlush, VFTypesToFlush, ShaderPlatform); }
	void UpdateResourceAllocations() { NativeCall<void>(this, "UMaterial.UpdateResourceAllocations"); }
};

