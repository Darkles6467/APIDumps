#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FExclusiveDepthStencil.h"

struct FSceneRenderTargets : FRenderResource
{
	enum EShadingPath
	{
		Forward = 0x0,
		Deferred = 0x1,
		Num = 0x2,
	};

	char __padding[0x5368L];
	__int64& UsedCachedCubeShadowMapsField() { return *GetNativePointerField<__int64*>(this, "FSceneRenderTargets.UsedCachedCubeShadowMaps"); }
	bool& bScreenSpaceAOIsValidField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bScreenSpaceAOIsValid"); }
	bool& bCustomDepthIsValidField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bCustomDepthIsValid"); }
	bool& bPreshadowCacheNewlyAllocatedField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bPreshadowCacheNewlyAllocated"); }
	FTextureLayout& CachedShadowMapLayoutField() { return *GetNativePointerField<FTextureLayout*>(this, "FSceneRenderTargets.CachedShadowMapLayout"); }
	FieldArray<FSceneRenderTargets::FCachedShadowMap, 256> CachedShadowMapsField() { return {this, "FSceneRenderTargets.CachedShadowMaps"}; }
	int& GBufferRefCountField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.GBufferRefCount"); }
	FIntPoint& BufferSizeField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneRenderTargets.BufferSize"); }
	FIntPoint& LandscapeInfoSizeField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneRenderTargets.LandscapeInfoSize"); }
	unsigned int& SmallColorDepthDownsampleFactorField() { return *GetNativePointerField<unsigned int*>(this, "FSceneRenderTargets.SmallColorDepthDownsampleFactor"); }
	bool& bLightAttenuationEnabledField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bLightAttenuationEnabled"); }
	bool& bBlackLightAttenuationEnabledField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bBlackLightAttenuationEnabled"); }
	bool& bUseDownsizedOcclusionQueriesField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bUseDownsizedOcclusionQueries"); }
	int& CurrentGBufferFormatField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentGBufferFormat"); }
	int& CurrentSceneColorFormatField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentSceneColorFormat"); }
	bool& bAllowStaticLightingField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bAllowStaticLighting"); }
	int& CurrentMaxShadowResolutionField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentMaxShadowResolution"); }
	int& CurrentTranslucencyLightingVolumeDimField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentTranslucencyLightingVolumeDim"); }
	int& CurrentMobile32bppField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentMobile32bpp"); }
	int& CurrentMobileMSAAField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentMobileMSAA"); }
	int& CurrentMinShadowResolutionField() { return *GetNativePointerField<int*>(this, "FSceneRenderTargets.CurrentMinShadowResolution"); }
	bool& bCurrentLightPropagationVolumeField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bCurrentLightPropagationVolume"); }
	bool& bCurrentInteriorLightingModeField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bCurrentInteriorLightingMode"); }
	ERHIFeatureLevel::Type& CurrentFeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FSceneRenderTargets.CurrentFeatureLevel"); }
	FSceneRenderTargets::EShadingPath& CurrentShadingPathField() { return *GetNativePointerField<FSceneRenderTargets::EShadingPath*>(this, "FSceneRenderTargets.CurrentShadingPath"); }
	bool& bClutterInfoDirtyField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bClutterInfoDirty"); }
	bool& bIsTrueSkyReadyField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.bIsTrueSkyReady"); }
	bool& CurrentShadowCacheEnabledField() { return *GetNativePointerField<bool*>(this, "FSceneRenderTargets.CurrentShadowCacheEnabled"); }

	// Functions

	void AdjustGBufferRefCount(int Delta) { NativeCall<void, int>(this, "FSceneRenderTargets.AdjustGBufferRefCount", Delta); }
	void AllocBlackLightAttenuation() { NativeCall<void>(this, "FSceneRenderTargets.AllocBlackLightAttenuation"); }
	void AllocGBufferTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocGBufferTargets"); }
	void AllocLightAttenuation() { NativeCall<void>(this, "FSceneRenderTargets.AllocLightAttenuation"); }
	void AllocSceneColor() { NativeCall<void>(this, "FSceneRenderTargets.AllocSceneColor"); }
	void Allocate(FSceneViewFamily * ViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "FSceneRenderTargets.Allocate", ViewFamily); }
	void AllocateCommonDepthTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocateCommonDepthTargets"); }
	void AllocateDeferredShadingPathRenderTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocateDeferredShadingPathRenderTargets"); }
	void AllocateForwardShadingPathRenderTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocateForwardShadingPathRenderTargets"); }
	void AllocateForwardShadingShadowDepthTarget(const FIntPoint * ShadowBufferResolution) { NativeCall<void, const FIntPoint *>(this, "FSceneRenderTargets.AllocateForwardShadingShadowDepthTarget", ShadowBufferResolution); }
	void AllocateLandscapeTargets(const FIntPoint * InLandscapeInfoSize, int LayerCount) { NativeCall<void, const FIntPoint *, int>(this, "FSceneRenderTargets.AllocateLandscapeTargets", InLandscapeInfoSize, LayerCount); }
	void AllocateReflectionTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocateReflectionTargets"); }
	void AllocateRenderTargets() { NativeCall<void>(this, "FSceneRenderTargets.AllocateRenderTargets"); }
	void BeginRenderingBlackLightAttenuation(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.BeginRenderingBlackLightAttenuation", RHICmdList); }
	void BeginRenderingCachedShadowDepth(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderTargets.BeginRenderingCachedShadowDepth", RHICmdList); }
	bool BeginRenderingCustomDepth(FRHICommandListImmediate * RHICmdList, bool bPrimitives) { return NativeCall<bool, FRHICommandListImmediate *, bool>(this, "FSceneRenderTargets.BeginRenderingCustomDepth", RHICmdList, bPrimitives); }
	void BeginRenderingGBuffer(FRHICommandList * RHICmdList, ERenderTargetLoadAction ColorLoadAction, ERenderTargetLoadAction DepthLoadAction, FExclusiveDepthStencil::Type DepthStencilAccess, bool bBindQuadOverdrawBuffers, const FLinearColor * ClearColor) { NativeCall<void, FRHICommandList *, ERenderTargetLoadAction, ERenderTargetLoadAction, FExclusiveDepthStencil::Type, bool, const FLinearColor *>(this, "FSceneRenderTargets.BeginRenderingGBuffer", RHICmdList, ColorLoadAction, DepthLoadAction, DepthStencilAccess, bBindQuadOverdrawBuffers, ClearColor); }
	void BeginRenderingLightAttenuation(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.BeginRenderingLightAttenuation", RHICmdList); }
	void BeginRenderingPrePass(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderTargets.BeginRenderingPrePass", RHICmdList); }
	void BeginRenderingSceneColor(FRHICommandList * RHICmdList, ESimpleRenderTargetMode RenderTargetMode, FExclusiveDepthStencil DepthStencilAccess, bool bTransitionWritable) { NativeCall<void, FRHICommandList *, ESimpleRenderTargetMode, FExclusiveDepthStencil, bool>(this, "FSceneRenderTargets.BeginRenderingSceneColor", RHICmdList, RenderTargetMode, DepthStencilAccess, bTransitionWritable); }
	bool BeginRenderingSeparateTranslucency(FRHICommandList * RHICmdList, const FViewInfo * View, bool bFirstTimeThisFrame) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, bool>(this, "FSceneRenderTargets.BeginRenderingSeparateTranslucency", RHICmdList, View, bFirstTimeThisFrame); }
	void BeginRenderingShadowDepth(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderTargets.BeginRenderingShadowDepth", RHICmdList); }
	void BeginRenderingTranslucency(FRHICommandList * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FViewInfo *>(this, "FSceneRenderTargets.BeginRenderingTranslucency", RHICmdList, View); }
	void CalculateShadowCacheUpdate() { NativeCall<void>(this, "FSceneRenderTargets.CalculateShadowCacheUpdate"); }
	void CleanUpEditorPrimitiveTargets() { NativeCall<void>(this, "FSceneRenderTargets.CleanUpEditorPrimitiveTargets"); }
	void ClearCachedShadowmapDirtyFlag(FProjectedShadowInfo * ProjectedShadowInfo) { NativeCall<void, FProjectedShadowInfo *>(this, "FSceneRenderTargets.ClearCachedShadowmapDirtyFlag", ProjectedShadowInfo); }
	void ClearGBufferTargets(FRHICommandListImmediate * RHICmdList, const FLinearColor * ClearColor) { NativeCall<void, FRHICommandListImmediate *, const FLinearColor *>(this, "FSceneRenderTargets.ClearGBufferTargets", RHICmdList, ClearColor); }
	void FinishRenderingBlackLightAttenuation(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.FinishRenderingBlackLightAttenuation", RHICmdList); }
	void FinishRenderingCustomDepth(FRHICommandListImmediate * RHICmdList, const FResolveRect * ResolveRect) { NativeCall<void, FRHICommandListImmediate *, const FResolveRect *>(this, "FSceneRenderTargets.FinishRenderingCustomDepth", RHICmdList, ResolveRect); }
	void FinishRenderingGBuffer(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderTargets.FinishRenderingGBuffer", RHICmdList); }
	void FinishRenderingLightAttenuation(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.FinishRenderingLightAttenuation", RHICmdList); }
	void FinishRenderingReflectiveShadowMap(FRHICommandList * RHICmdList, const FResolveRect * ResolveRect) { NativeCall<void, FRHICommandList *, const FResolveRect *>(this, "FSceneRenderTargets.FinishRenderingReflectiveShadowMap", RHICmdList, ResolveRect); }
	void FinishRenderingSceneColor(FRHICommandListImmediate * RHICmdList, bool bKeepChanges, const FResolveRect * ResolveRect) { NativeCall<void, FRHICommandListImmediate *, bool, const FResolveRect *>(this, "FSceneRenderTargets.FinishRenderingSceneColor", RHICmdList, bKeepChanges, ResolveRect); }
	void FinishRenderingSeparateTranslucency(FRHICommandList * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FViewInfo *>(this, "FSceneRenderTargets.FinishRenderingSeparateTranslucency", RHICmdList, View); }
	void FinishRenderingShadowDepth(FRHICommandList * RHICmdList, const FResolveRect * ResolveRect) { NativeCall<void, FRHICommandList *, const FResolveRect *>(this, "FSceneRenderTargets.FinishRenderingShadowDepth", RHICmdList, ResolveRect); }
	void FlushRenderingCachedShadowDepth(FRHICommandListImmediate * RHICmdList, const FSceneRenderTargets::FCachedShadowMap * CachedShadowMap) { NativeCall<void, FRHICommandListImmediate *, const FSceneRenderTargets::FCachedShadowMap *>(this, "FSceneRenderTargets.FlushRenderingCachedShadowDepth", RHICmdList, CachedShadowMap); }
	const FSceneRenderTargets::FCachedShadowMap * GetAllocatedCachedShadowmap(const FProjectedShadowInfo * ProjectedShadowInfo) { return NativeCall<const FSceneRenderTargets::FCachedShadowMap *, const FProjectedShadowInfo *>(this, "FSceneRenderTargets.GetAllocatedCachedShadowmap", ProjectedShadowInfo); }
	const FSceneRenderTargets::FCachedShadowMap * GetCachedShadowmap(const FProjectedShadowInfo * ProjectedShadowInfo, float Priority) { return NativeCall<const FSceneRenderTargets::FCachedShadowMap *, const FProjectedShadowInfo *, float>(this, "FSceneRenderTargets.GetCachedShadowmap", ProjectedShadowInfo, Priority); }
	int GetCubeShadowDepthZIndex(int ShadowResolution) { return NativeCall<int, int>(this, "FSceneRenderTargets.GetCubeShadowDepthZIndex", ShadowResolution); }
	int GetCubeShadowDepthZResolution(int ShadowIndex) { return NativeCall<int, int>(this, "FSceneRenderTargets.GetCubeShadowDepthZResolution", ShadowIndex); }
	int GetEditorMSAACompositingSampleCount() { return NativeCall<int>(this, "FSceneRenderTargets.GetEditorMSAACompositingSampleCount"); }
	int GetGBufferRenderTargets(ERenderTargetLoadAction ColorLoadAction, FRHIRenderTargetView * OutRenderTargets, int * OutVelocityRTIndex) { return NativeCall<int, ERenderTargetLoadAction, FRHIRenderTargetView *, int *>(this, "FSceneRenderTargets.GetGBufferRenderTargets", ColorLoadAction, OutRenderTargets, OutVelocityRTIndex); }
	int GetNumGBufferTargets() { return NativeCall<int>(this, "FSceneRenderTargets.GetNumGBufferTargets"); }
	FIntPoint * GetPreShadowCacheTextureResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FSceneRenderTargets.GetPreShadowCacheTextureResolution", result); }
	FIntPoint * GetReflectiveShadowMapTextureResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FSceneRenderTargets.GetReflectiveShadowMapTextureResolution", result); }
	EPixelFormat GetSceneColorFormat() { return NativeCall<EPixelFormat>(this, "FSceneRenderTargets.GetSceneColorFormat"); }
	FIntPoint * GetSceneRenderTargetSize(FIntPoint * result, FSceneViewFamily * ViewFamily) { return NativeCall<FIntPoint *, FIntPoint *, FSceneViewFamily *>(this, "FSceneRenderTargets.GetSceneRenderTargetSize", result, ViewFamily); }
	FIntPoint * GetShadowDepthTextureResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FSceneRenderTargets.GetShadowDepthTextureResolution", result); }
	void InitEditorPrimitivesColor() { NativeCall<void>(this, "FSceneRenderTargets.InitEditorPrimitivesColor"); }
	void InitEditorPrimitivesDepth() { NativeCall<void>(this, "FSceneRenderTargets.InitEditorPrimitivesDepth"); }
	bool IsSeparateTranslucencyActive(const FViewInfo * View) { return NativeCall<bool, const FViewInfo *>(this, "FSceneRenderTargets.IsSeparateTranslucencyActive", View); }
	void ReleaseAllTargets() { NativeCall<void>(this, "FSceneRenderTargets.ReleaseAllTargets"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSceneRenderTargets.ReleaseDynamicRHI"); }
	void ReleaseGBufferTargets() { NativeCall<void>(this, "FSceneRenderTargets.ReleaseGBufferTargets"); }
	void ResolveSceneColor(FRHICommandList * RHICmdList, const FResolveRect * ResolveRect) { NativeCall<void, FRHICommandList *, const FResolveRect *>(this, "FSceneRenderTargets.ResolveSceneColor", RHICmdList, ResolveRect); }
	void ResolveSceneDepthTexture(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.ResolveSceneDepthTexture", RHICmdList); }
	void ResolveSceneDepthToAuxiliaryTexture(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSceneRenderTargets.ResolveSceneDepthToAuxiliaryTexture", RHICmdList); }
	void SetBufferSize(int InBufferSizeX, int InBufferSizeY) { NativeCall<void, int, int>(this, "FSceneRenderTargets.SetBufferSize", InBufferSizeX, InBufferSizeY); }
	void SetLightAttenuation(IPooledRenderTarget * In) { NativeCall<void, IPooledRenderTarget *>(this, "FSceneRenderTargets.SetLightAttenuation", In); }
	void SetSceneColor(IPooledRenderTarget * In) { NativeCall<void, IPooledRenderTarget *>(this, "FSceneRenderTargets.SetSceneColor", In); }
};

