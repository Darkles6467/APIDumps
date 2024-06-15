#pragma once

#include "BaseDeclarations.h"
#include "FSceneInterface.h"
#include "FReflectionCaptureProxy.h"

struct FScene : FSceneInterface
{
	enum EBasePassDrawListType
	{
		EBasePass_Default = 0x0,
		EBasePass_Masked = 0x1,
		EBasePass_MAX = 0x2,
	};

	char __padding[0x2798L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FScene.World"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "FScene.GlobalIBLCaptureBrightness"); }
	float& BakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "FScene.BakeAndStreamIBLMultiplier"); }
	TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>& PositionOnlyDepthDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>*>(this, "FScene.PositionOnlyDepthDrawList"); }
	TStaticMeshDrawList<FDepthDrawingPolicy>& DepthDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FDepthDrawingPolicy>*>(this, "FScene.DepthDrawList"); }
	TStaticMeshDrawList<FDepthDrawingPolicy>& MaskedDepthDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FDepthDrawingPolicy>*>(this, "FScene.MaskedDepthDrawList"); }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FCachedVolumeIndirectLightingPolicy> >, 2> BasePassCachedVolumeIndirectLightingDrawListField() { return {this, "FScene.BasePassCachedVolumeIndirectLightingDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FCachedPointIndirectLightingPolicy> >, 2> BasePassCachedPointIndirectLightingDrawListField() { return {this, "FScene.BasePassCachedPointIndirectLightingDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FSimpleDynamicLightingPolicy> >, 2> BasePassSimpleDynamicLightingDrawListField() { return {this, "FScene.BasePassSimpleDynamicLightingDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<TLightMapPolicy<1> > >[2], 12> BasePassHighQualityLightMapDrawListField() { return {this, "FScene.BasePassHighQualityLightMapDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<TDistanceFieldShadowsAndLightMapPolicy<1> > >[2], 12> BasePassDistanceFieldShadowMapLightMapDrawListField() { return {this, "FScene.BasePassDistanceFieldShadowMapLightMapDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<TLightMapPolicy<0> > >[2], 02> BasePassLowQualityLightMapDrawListField() { return {this, "FScene.BasePassLowQualityLightMapDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FSelfShadowedCachedPointIndirectLightingPolicy> >, 2> BasePassSelfShadowedCachedPointIndirectTranslucencyDrawListField() { return {this, "FScene.BasePassSelfShadowedCachedPointIndirectTranslucencyDrawList"}; }
	TStaticMeshDrawList<FHitProxyDrawingPolicy>& HitProxyDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FHitProxyDrawingPolicy>*>(this, "FScene.HitProxyDrawList"); }
	TStaticMeshDrawList<FHitProxyDrawingPolicy>& HitProxyDrawList_OpaqueOnlyField() { return *GetNativePointerField<TStaticMeshDrawList<FHitProxyDrawingPolicy>*>(this, "FScene.HitProxyDrawList_OpaqueOnly"); }
	TStaticMeshDrawList<FVelocityDrawingPolicy>& VelocityDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FVelocityDrawingPolicy>*>(this, "FScene.VelocityDrawList"); }
	TStaticMeshDrawList<FShadowDepthDrawingPolicy<0> >& WholeSceneShadowDepthDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FShadowDepthDrawingPolicy<0> >*>(this, "FScene.WholeSceneShadowDepthDrawList"); }
	TStaticMeshDrawList<FShadowDepthDrawingPolicy<1> >& WholeSceneReflectiveShadowMapDrawListField() { return *GetNativePointerField<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1> >*>(this, "FScene.WholeSceneReflectiveShadowMapDrawList"); }
	FieldArray<TStaticMeshDrawList<TBasePassForForwardShadingDrawingPolicy<TLightMapPolicy<0> > >[2], 02> BasePassForForwardShadingLowQualityLightMapDrawListField() { return {this, "FScene.BasePassForForwardShadingLowQualityLightMapDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassForForwardShadingDrawingPolicy<TDistanceFieldShadowsAndLightMapPolicy<0> > >[2], 02> BasePassForForwardShadingDistanceFieldShadowMapLightMapDrawListField() { return {this, "FScene.BasePassForForwardShadingDistanceFieldShadowMapLightMapDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassForForwardShadingDrawingPolicy<FSimpleDirectionalLightAndSHIndirectPolicy> >, 2> BasePassForForwardShadingDirectionalLightAndSHIndirectDrawListField() { return {this, "FScene.BasePassForForwardShadingDirectionalLightAndSHIndirectDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassForForwardShadingDrawingPolicy<FMovableDirectionalLightLightingPolicy> >, 2> BasePassForForwardShadingMovableDirectionalLightDrawListField() { return {this, "FScene.BasePassForForwardShadingMovableDirectionalLightDrawList"}; }
	FieldArray<TStaticMeshDrawList<TBasePassForForwardShadingDrawingPolicy<FMovableDirectionalLightCSMLightingPolicy> >, 2> BasePassForForwardShadingMovableDirectionalLightCSMDrawListField() { return {this, "FScene.BasePassForForwardShadingMovableDirectionalLightCSMDrawList"}; }
	TArray<FPrimitiveSceneInfo *>& PrimitivesField() { return *GetNativePointerField<TArray<FPrimitiveSceneInfo *>*>(this, "FScene.Primitives"); }
	TArray<FPrimitiveBounds>& PrimitiveBoundsField() { return *GetNativePointerField<TArray<FPrimitiveBounds>*>(this, "FScene.PrimitiveBounds"); }
	TArray<FPrimitiveVisibilityId>& PrimitiveVisibilityIdsField() { return *GetNativePointerField<TArray<FPrimitiveVisibilityId>*>(this, "FScene.PrimitiveVisibilityIds"); }
	TArray<unsigned char>& PrimitiveOcclusionFlagsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FScene.PrimitiveOcclusionFlags"); }
	TArray<FBoxSphereBounds>& PrimitiveOcclusionBoundsField() { return *GetNativePointerField<TArray<FBoxSphereBounds>*>(this, "FScene.PrimitiveOcclusionBounds"); }
	TArray<FPrimitiveComponentId>& PrimitiveComponentIdsField() { return *GetNativePointerField<TArray<FPrimitiveComponentId>*>(this, "FScene.PrimitiveComponentIds"); }
	bool& bStaticDrawListsMobileHDRField() { return *GetNativePointerField<bool*>(this, "FScene.bStaticDrawListsMobileHDR"); }
	bool& bStaticDrawListsMobileHDR32bppField() { return *GetNativePointerField<bool*>(this, "FScene.bStaticDrawListsMobileHDR32bpp"); }
	int& StaticDrawListsEarlyZPassModeField() { return *GetNativePointerField<int*>(this, "FScene.StaticDrawListsEarlyZPassMode"); }
	bool& bScenesPrimitivesNeedStaticMeshElementUpdateField() { return *GetNativePointerField<bool*>(this, "FScene.bScenesPrimitivesNeedStaticMeshElementUpdate"); }
	FSkyLightSceneProxy * SkyLightField() { return GetNativePointerField<FSkyLightSceneProxy *>(this, "FScene.SkyLight"); }
	FLightSceneInfo * SimpleDirectionalLightField() { return GetNativePointerField<FLightSceneInfo *>(this, "FScene.SimpleDirectionalLight"); }
	FLightSceneInfo * SunLightField() { return GetNativePointerField<FLightSceneInfo *>(this, "FScene.SunLight"); }
	FReflectionEnvironmentSceneData& ReflectionSceneDataField() { return *GetNativePointerField<FReflectionEnvironmentSceneData*>(this, "FScene.ReflectionSceneData"); }
	TArray<FPrecomputedLightVolume const *>& PrecomputedLightVolumesField() { return *GetNativePointerField<TArray<FPrecomputedLightVolume const *>*>(this, "FScene.PrecomputedLightVolumes"); }
	FIndirectLightingCache& IndirectLightingCacheField() { return *GetNativePointerField<FIndirectLightingCache*>(this, "FScene.IndirectLightingCache"); }
	FSurfaceCacheResources * SurfaceCacheResourcesField() { return GetNativePointerField<FSurfaceCacheResources *>(this, "FScene.SurfaceCacheResources"); }
	FDistanceFieldSceneData& DistanceFieldSceneDataField() { return *GetNativePointerField<FDistanceFieldSceneData*>(this, "FScene.DistanceFieldSceneData"); }
	TArray<TRefCountPtr<FProjectedShadowInfo>>& CachedPreshadowsField() { return *GetNativePointerField<TArray<TRefCountPtr<FProjectedShadowInfo>>*>(this, "FScene.CachedPreshadows"); }
	FTextureLayout& PreshadowCacheLayoutField() { return *GetNativePointerField<FTextureLayout*>(this, "FScene.PreshadowCacheLayout"); }
	TArray<FExponentialHeightFogSceneInfo>& ExponentialFogsField() { return *GetNativePointerField<TArray<FExponentialHeightFogSceneInfo>*>(this, "FScene.ExponentialFogs"); }
	FAtmosphericFogSceneInfo * AtmosphericFogField() { return GetNativePointerField<FAtmosphericFogSceneInfo *>(this, "FScene.AtmosphericFog"); }
	TArray<FWindSourceSceneProxy *>& WindSourcesField() { return *GetNativePointerField<TArray<FWindSourceSceneProxy *>*>(this, "FScene.WindSources"); }
	TUniformBuffer<FSpeedTreeUniformParameters>& SpeedTreeDefaultUniformBufferField() { return *GetNativePointerField<TUniformBuffer<FSpeedTreeUniformParameters>*>(this, "FScene.SpeedTreeDefaultUniformBuffer"); }
	const FPrecomputedVisibilityHandler * PrecomputedVisibilityHandlerField() { return GetNativePointerField<const FPrecomputedVisibilityHandler *>(this, "FScene.PrecomputedVisibilityHandler"); }
	TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>& LightOctreeField() { return *GetNativePointerField<TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>*>(this, "FScene.LightOctree"); }
	TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>& PrimitiveOctreeField() { return *GetNativePointerField<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>*>(this, "FScene.PrimitiveOctree"); }
	unsigned int& LandscapeInfoRequestsField() { return *GetNativePointerField<unsigned int*>(this, "FScene.LandscapeInfoRequests"); }
	bool& bRequiresHitProxiesField() { return *GetNativePointerField<bool*>(this, "FScene.bRequiresHitProxies"); }
	bool& bIsEditorSceneField() { return *GetNativePointerField<bool*>(this, "FScene.bIsEditorScene"); }
	bool& bGameWorldField() { return *GetNativePointerField<bool*>(this, "FScene.bGameWorld"); }
	volatile int& NumUncachedStaticLightingInteractionsField() { return *GetNativePointerField<volatile int*>(this, "FScene.NumUncachedStaticLightingInteractions"); }
	FLinearColor& UpperDynamicSkylightColorField() { return *GetNativePointerField<FLinearColor*>(this, "FScene.UpperDynamicSkylightColor"); }
	FLinearColor& LowerDynamicSkylightColorField() { return *GetNativePointerField<FLinearColor*>(this, "FScene.LowerDynamicSkylightColor"); }
	FMotionBlurInfoData& MotionBlurInfoDataField() { return *GetNativePointerField<FMotionBlurInfoData*>(this, "FScene.MotionBlurInfoData"); }
	float& DefaultMaxDistanceFieldOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FScene.DefaultMaxDistanceFieldOcclusionDistance"); }
	float& GlobalDistanceFieldViewDistanceField() { return *GetNativePointerField<float*>(this, "FScene.GlobalDistanceFieldViewDistance"); }
	int& NumVisibleLightsField() { return *GetNativePointerField<int*>(this, "FScene.NumVisibleLights"); }
	unsigned int& NumLevelLoadsField() { return *GetNativePointerField<unsigned int*>(this, "FScene.NumLevelLoads"); }
	bool& bReleasedField() { return *GetNativePointerField<bool*>(this, "FScene.bReleased"); }
	bool& bHasSkyLightField() { return *GetNativePointerField<bool*>(this, "FScene.bHasSkyLight"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FScene.FeatureLevel"); }

	// Functions

	void AddAtmosphericFog(UAtmosphericFogComponent * FogComponent) { NativeCall<void, UAtmosphericFogComponent *>(this, "FScene.AddAtmosphericFog", FogComponent); }
	void AddDecal(UDecalComponent * Component) { NativeCall<void, UDecalComponent *>(this, "FScene.AddDecal", Component); }
	void AddInvisibleLight(ULightComponent * Light) { NativeCall<void, ULightComponent *>(this, "FScene.AddInvisibleLight", Light); }
	void AddLight(ULightComponent * Light) { NativeCall<void, ULightComponent *>(this, "FScene.AddLight", Light); }
	void AddPrimitive(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FScene.AddPrimitive", Primitive); }
	void AddReflectionCapture(UReflectionCaptureComponent * Component) { NativeCall<void, UReflectionCaptureComponent *>(this, "FScene.AddReflectionCapture", Component); }
	void AddSpeedTreeWind_RenderThread(FVertexFactory * VertexFactory, UStaticMesh * StaticMesh) { NativeCall<void, FVertexFactory *, UStaticMesh *>(this, "FScene.AddSpeedTreeWind_RenderThread", VertexFactory, StaticMesh); }
	void AddWindSource(UWindDirectionalSourceComponent * WindComponent) { NativeCall<void, UWindDirectionalSourceComponent *>(this, "FScene.AddWindSource", WindComponent); }
	void AllocateReflectionCaptures(const TArray<UReflectionCaptureComponent *> * NewCaptures) { NativeCall<void, const TArray<UReflectionCaptureComponent *> *>(this, "FScene.AllocateReflectionCaptures", NewCaptures); }
	void CalculateAmbientLightSourceInfo(const FViewInfo * View, FInterpolatedLightSourceInfo * OutLightSourceInfo) { NativeCall<void, const FViewInfo *, FInterpolatedLightSourceInfo *>(this, "FScene.CalculateAmbientLightSourceInfo", View, OutLightSourceInfo); }
	void CalculateSpotLightSourceInfo(const FViewInfo * View, FInterpolatedLightSourceInfo * OutLightSourceInfo) { NativeCall<void, const FViewInfo *, FInterpolatedLightSourceInfo *>(this, "FScene.CalculateSpotLightSourceInfo", View, OutLightSourceInfo); }
	void ConditionalMarkStaticMeshElementsForUpdate() { NativeCall<void>(this, "FScene.ConditionalMarkStaticMeshElementsForUpdate"); }
	void DumpStaticMeshDrawListStats() { NativeCall<void>(this, "FScene.DumpStaticMeshDrawListStats"); }
	void DumpUnbuiltLightIteractions(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "FScene.DumpUnbuiltLightIteractions", Ar); }
	TSharedPtr<FReflectionCaptureProxy,1> * FindClosestReflectionCapture(TSharedPtr<FReflectionCaptureProxy,1> * result, FVector Position, const EReflectionCaptureShape::Type Shape, const FVector * PositionCheckInfluenceRadius) { return NativeCall<TSharedPtr<FReflectionCaptureProxy,1> *, TSharedPtr<FReflectionCaptureProxy,1> *, FVector, const EReflectionCaptureShape::Type, const FVector *>(this, "FScene.FindClosestReflectionCapture", result, Position, Shape, PositionCheckInfluenceRadius); }
	FAtmosphericFogSceneInfo * GetAtmosphericFogSceneInfo() { return NativeCall<FAtmosphericFogSceneInfo *>(this, "FScene.GetAtmosphericFogSceneInfo"); }
	void GetCaptureParameters(const TSharedPtr<FReflectionCaptureProxy,1> * ReflectionProxy, FRHITexture ** ReflectionCubemapArray0, FRHITexture ** ReflectionCubemapArray1, int * ArrayIndex) { NativeCall<void, const TSharedPtr<FReflectionCaptureProxy,1> *, FRHITexture **, FRHITexture **, int *>(this, "FScene.GetCaptureParameters", ReflectionProxy, ReflectionCubemapArray0, ReflectionCubemapArray1, ArrayIndex); }
	FVector4 * GetDirectionalWindParameters(FVector4 * result) { return NativeCall<FVector4 *, FVector4 *>(this, "FScene.GetDirectionalWindParameters", result); }
	ERHIFeatureLevel::Type GetFeatureLevel() { return NativeCall<ERHIFeatureLevel::Type>(this, "FScene.GetFeatureLevel"); }
	void GetRelevantLights(UPrimitiveComponent * Primitive, TArray<ULightComponent const *> * RelevantLights) { NativeCall<void, UPrimitiveComponent *, TArray<ULightComponent const *> *>(this, "FScene.GetRelevantLights", Primitive, RelevantLights); }
	FVector4 * GetWindParameters(FVector4 * result, const FVector * Position) { return NativeCall<FVector4 *, FVector4 *, const FVector *>(this, "FScene.GetWindParameters", result, Position); }
	const TArray<FWindSourceSceneProxy *> * GetWindSources_RenderThread() { return NativeCall<const TArray<FWindSourceSceneProxy *> *>(this, "FScene.GetWindSources_RenderThread"); }
	bool HasAnyLights() { return NativeCall<bool>(this, "FScene.HasAnyLights"); }
	bool HasAtmosphericFog(bool bAnyFog) { return NativeCall<bool, bool>(this, "FScene.HasAtmosphericFog", bAnyFog); }
	bool IsEditorScene() { return NativeCall<bool>(this, "FScene.IsEditorScene"); }
	void RT_UpdateSpeedTreeWind(long double CurrentTime, bool bEnable) { NativeCall<void, long double, bool>(this, "FScene.RT_UpdateSpeedTreeWind", CurrentTime, bEnable); }
	void Release() { NativeCall<void>(this, "FScene.Release"); }
	void ReleaseReflectionCubemap(UReflectionCaptureComponent * CaptureComponent) { NativeCall<void, UReflectionCaptureComponent *>(this, "FScene.ReleaseReflectionCubemap", CaptureComponent); }
	void RemoveAllSpeedTreeWind_RenderThread() { NativeCall<void>(this, "FScene.RemoveAllSpeedTreeWind_RenderThread"); }
	void RemoveDecal(UDecalComponent * Component) { NativeCall<void, UDecalComponent *>(this, "FScene.RemoveDecal", Component); }
	void RemoveLight(ULightComponent * Light) { NativeCall<void, ULightComponent *>(this, "FScene.RemoveLight", Light); }
	void RemovePrimitive(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FScene.RemovePrimitive", Primitive); }
	void RemoveReflectionCapture(UReflectionCaptureComponent * Component) { NativeCall<void, UReflectionCaptureComponent *>(this, "FScene.RemoveReflectionCapture", Component); }
	void RemoveSpeedTreeWind_RenderThread(FVertexFactory * VertexFactory, UStaticMesh * StaticMesh) { NativeCall<void, FVertexFactory *, UStaticMesh *>(this, "FScene.RemoveSpeedTreeWind_RenderThread", VertexFactory, StaticMesh); }
	void RemoveWindSource(UWindDirectionalSourceComponent * WindComponent) { NativeCall<void, UWindDirectionalSourceComponent *>(this, "FScene.RemoveWindSource", WindComponent); }
	void SetFXSystem(FFXSystemInterface * InFXSystem) { NativeCall<void, FFXSystemInterface *>(this, "FScene.SetFXSystem", InFXSystem); }
	void SetShaderMapsOnMaterialResources(const TMap<FMaterial *,FMaterialShaderMap *,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterial *,FMaterialShaderMap *,0> > * MaterialsToUpdate) { NativeCall<void, const TMap<FMaterial *,FMaterialShaderMap *,FDefaultSetAllocator,TDefaultMapKeyFuncs<FMaterial *,FMaterialShaderMap *,0> > *>(this, "FScene.SetShaderMapsOnMaterialResources", MaterialsToUpdate); }
	void SetSkyLight(FSkyLightSceneProxy * LightProxy) { NativeCall<void, FSkyLightSceneProxy *>(this, "FScene.SetSkyLight", LightProxy); }
	void UpdateAllReflectionCaptures() { NativeCall<void>(this, "FScene.UpdateAllReflectionCaptures"); }
	void UpdateLightColorAndBrightness(ULightComponent * Light) { NativeCall<void, ULightComponent *>(this, "FScene.UpdateLightColorAndBrightness", Light); }
	void UpdateLightTransform(ULightComponent * Light) { NativeCall<void, ULightComponent *>(this, "FScene.UpdateLightTransform", Light); }
	void UpdatePrimitiveAttachment(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FScene.UpdatePrimitiveAttachment", Primitive); }
	void UpdatePrimitiveTransform(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FScene.UpdatePrimitiveTransform", Primitive); }
	void UpdateReflectionAmbientCube(const UReflectionCaptureComponent * CaptureComponent, bool bCaptureEmissiveOnly, FTexture * OutProcessedTexture, TSHVectorRGB<3> * OutIrradianceEnvironmentMap) { NativeCall<void, const UReflectionCaptureComponent *, bool, FTexture *, TSHVectorRGB<3> *>(this, "FScene.UpdateReflectionAmbientCube", CaptureComponent, bCaptureEmissiveOnly, OutProcessedTexture, OutIrradianceEnvironmentMap); }
	void UpdateReflectionCaptureContents(UReflectionCaptureComponent * CaptureComponent) { NativeCall<void, UReflectionCaptureComponent *>(this, "FScene.UpdateReflectionCaptureContents", CaptureComponent); }
	void UpdateSceneCaptureContents(USceneCaptureComponent2D * CaptureComponent) { NativeCall<void, USceneCaptureComponent2D *>(this, "FScene.UpdateSceneCaptureContents", CaptureComponent); }
	void UpdateSceneCaptureContents(USceneCaptureComponentCube * CaptureComponent) { NativeCall<void, USceneCaptureComponentCube *>(this, "FScene.UpdateSceneCaptureContents", CaptureComponent); }
	void UpdateSkyCaptureContents(const USkyLightComponent * CaptureComponent, bool bCaptureEmissiveOnly, FTexture * OutProcessedTexture, TSHVectorRGB<3> * OutIrradianceEnvironmentMap) { NativeCall<void, const USkyLightComponent *, bool, FTexture *, TSHVectorRGB<3> *>(this, "FScene.UpdateSkyCaptureContents", CaptureComponent, bCaptureEmissiveOnly, OutProcessedTexture, OutIrradianceEnvironmentMap); }
};

