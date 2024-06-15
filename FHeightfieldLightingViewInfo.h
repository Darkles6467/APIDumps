#pragma once

#include "BaseDeclarations.h"
#include "FPooledRenderTarget.h"

struct FHeightfieldLightingViewInfo
{
	char __padding[0xc0L];
	FHeightfieldDescription& HeightfieldField() { return *GetNativePointerField<FHeightfieldDescription*>(this, "FHeightfieldLightingViewInfo.Heightfield"); }

	// Functions

	void RenderRayTracedShadows(const FViewInfo * View, FRHICommandListImmediate * RHICmdList, const FProjectedShadowInfo * ProjectedShadowInfo, TRefCountPtr<IPooledRenderTarget> * RayTracedShadowsRT, const FIntPoint * GroupSize, const FIntRect * ScissorRect, int HeightFieldQuality) { NativeCall<void, const FViewInfo *, FRHICommandListImmediate *, const FProjectedShadowInfo *, TRefCountPtr<IPooledRenderTarget> *, const FIntPoint *, const FIntRect *, int>(this, "FHeightfieldLightingViewInfo.RenderRayTracedShadows", View, RHICmdList, ProjectedShadowInfo, RayTracedShadowsRT, GroupSize, ScissorRect, HeightFieldQuality); }
	void CompositeHeightfieldsIntoGlobalDistanceField(FRHICommandList * RHICmdList, const FScene * Scene, const FViewInfo * View, float MaxOcclusionDistance, const FGlobalDistanceFieldInfo * GlobalDistanceFieldInfo, int ClipmapIndexValue, const FVolumeUpdateRegion * UpdateRegion) { NativeCall<void, FRHICommandList *, const FScene *, const FViewInfo *, float, const FGlobalDistanceFieldInfo *, int, const FVolumeUpdateRegion *>(this, "FHeightfieldLightingViewInfo.CompositeHeightfieldsIntoGlobalDistanceField", RHICmdList, Scene, View, MaxOcclusionDistance, GlobalDistanceFieldInfo, ClipmapIndexValue, UpdateRegion); }
	void ComputeIrradianceForSamples(const FViewInfo * View, FRHICommandListImmediate * RHICmdList, const FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources, int DepthLevel, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, const FViewInfo *, FRHICommandListImmediate *, const FTemporaryIrradianceCacheResources *, int, const FDistanceFieldAOParameters *>(this, "FHeightfieldLightingViewInfo.ComputeIrradianceForSamples", View, RHICmdList, TemporaryIrradianceCacheResources, DepthLevel, Parameters); }
	void ComputeOcclusionForSamples(const FViewInfo * View, FRHICommandListImmediate * RHICmdList, const FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources, int DepthLevel, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, const FViewInfo *, FRHICommandListImmediate *, const FTemporaryIrradianceCacheResources *, int, const FDistanceFieldAOParameters *>(this, "FHeightfieldLightingViewInfo.ComputeOcclusionForSamples", View, RHICmdList, TemporaryIrradianceCacheResources, DepthLevel, Parameters); }
	void SetupVisibleHeightfields(const FViewInfo * View, FRHICommandListImmediate * RHICmdList) { NativeCall<void, const FViewInfo *, FRHICommandListImmediate *>(this, "FHeightfieldLightingViewInfo.SetupVisibleHeightfields", View, RHICmdList); }
};

