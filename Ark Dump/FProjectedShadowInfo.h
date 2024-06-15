#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"
#include "FViewInfo.h"
#include "FMeshBatchAndRelevance.h"

struct FProjectedShadowInfo : FRefCountedObject
{
	char __padding[0x680L];
	const FLightSceneInfo *const& LightSceneInfoField() { return *GetNativePointerField<const FLightSceneInfo *const*>(this, "FProjectedShadowInfo.LightSceneInfo"); }
	const FLightSceneInfoCompact& LightSceneInfoCompactField() { return *GetNativePointerField<const FLightSceneInfoCompact*>(this, "FProjectedShadowInfo.LightSceneInfoCompact"); }
	const FPrimitiveSceneInfo *const& ParentSceneInfoField() { return *GetNativePointerField<const FPrimitiveSceneInfo *const*>(this, "FProjectedShadowInfo.ParentSceneInfo"); }
	FViewInfo * DependentViewField() { return GetNativePointerField<FViewInfo *>(this, "FProjectedShadowInfo.DependentView"); }
	int& ShadowIdField() { return *GetNativePointerField<int*>(this, "FProjectedShadowInfo.ShadowId"); }
	FVector& PreShadowTranslationField() { return *GetNativePointerField<FVector*>(this, "FProjectedShadowInfo.PreShadowTranslation"); }
	FMatrix& ShadowViewMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FProjectedShadowInfo.ShadowViewMatrix"); }
	FMatrix& SubjectAndReceiverMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FProjectedShadowInfo.SubjectAndReceiverMatrix"); }
	FMatrix& ReceiverMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FProjectedShadowInfo.ReceiverMatrix"); }
	FMatrix& InvReceiverMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FProjectedShadowInfo.InvReceiverMatrix"); }
	float& InvMaxSubjectDepthField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.InvMaxSubjectDepth"); }
	float& MaxSubjectZField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.MaxSubjectZ"); }
	float& MinSubjectZField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.MinSubjectZ"); }
	FConvexVolume& CasterFrustumField() { return *GetNativePointerField<FConvexVolume*>(this, "FProjectedShadowInfo.CasterFrustum"); }
	FConvexVolume& ReceiverFrustumField() { return *GetNativePointerField<FConvexVolume*>(this, "FProjectedShadowInfo.ReceiverFrustum"); }
	float& MinPreSubjectZField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.MinPreSubjectZ"); }
	FSphere& ShadowBoundsField() { return *GetNativePointerField<FSphere*>(this, "FProjectedShadowInfo.ShadowBounds"); }
	FShadowCascadeSettings& CascadeSettingsField() { return *GetNativePointerField<FShadowCascadeSettings*>(this, "FProjectedShadowInfo.CascadeSettings"); }
	unsigned int& XField() { return *GetNativePointerField<unsigned int*>(this, "FProjectedShadowInfo.X"); }
	unsigned int& YField() { return *GetNativePointerField<unsigned int*>(this, "FProjectedShadowInfo.Y"); }
	unsigned int& ResolutionXField() { return *GetNativePointerField<unsigned int*>(this, "FProjectedShadowInfo.ResolutionX"); }
	unsigned int& ResolutionYField() { return *GetNativePointerField<unsigned int*>(this, "FProjectedShadowInfo.ResolutionY"); }
	float& MaxScreenPercentField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.MaxScreenPercent"); }
	TArray<float,TInlineAllocator<2> >& FadeAlphasField() { return *GetNativePointerField<TArray<float,TInlineAllocator<2> >*>(this, "FProjectedShadowInfo.FadeAlphas"); }
	int& SplitIndexField() { return *GetNativePointerField<int*>(this, "FProjectedShadowInfo.SplitIndex"); }
	char& ShadowInjectionTargetMaskField() { return *GetNativePointerField<char*>(this, "FProjectedShadowInfo.ShadowInjectionTargetMask"); }
	float& LightPriorityField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.LightPriority"); }
	TSharedPtr<FReflectionCaptureProxy,1>& AmbientShadowCaptureProxyField() { return *GetNativePointerField<TSharedPtr<FReflectionCaptureProxy,1>*>(this, "FProjectedShadowInfo.AmbientShadowCaptureProxy"); }
	TBitArray<SceneRenderingBitArrayAllocator>& StaticMeshWholeSceneShadowDepthMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FProjectedShadowInfo.StaticMeshWholeSceneShadowDepthMap"); }
	TArray<FMatrix>& OnePassShadowViewProjectionMatricesField() { return *GetNativePointerField<TArray<FMatrix>*>(this, "FProjectedShadowInfo.OnePassShadowViewProjectionMatrices"); }
	TArray<FConvexVolume>& OnePassShadowFrustumsField() { return *GetNativePointerField<TArray<FConvexVolume>*>(this, "FProjectedShadowInfo.OnePassShadowFrustums"); }
	float& ShaderDepthBiasField() { return *GetNativePointerField<float*>(this, "FProjectedShadowInfo.ShaderDepthBias"); }

	// Functions

	void BeginRenderRayTracedDistanceFieldProjection(FRHICommandListImmediate * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *>(this, "FProjectedShadowInfo.BeginRenderRayTracedDistanceFieldProjection", RHICmdList, View); }
	bool IsWholeSceneDirectionalShadow() { return NativeCall<bool>(this, "FProjectedShadowInfo.IsWholeSceneDirectionalShadow"); }
	void RenderRayTracedDistanceFieldProjection(FRHICommandListImmediate * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *>(this, "FProjectedShadowInfo.RenderRayTracedDistanceFieldProjection", RHICmdList, View); }
	void AddSubjectPrimitive(FPrimitiveSceneInfo * PrimitiveSceneInfo, TArray<FViewInfo> * ViewArray) { NativeCall<void, FPrimitiveSceneInfo *, TArray<FViewInfo> *>(this, "FProjectedShadowInfo.AddSubjectPrimitive", PrimitiveSceneInfo, ViewArray); }
	void ClearDepth(FRHICommandList * RHICmdList, FDeferredShadingSceneRenderer * SceneRenderer) { NativeCall<void, FRHICommandList *, FDeferredShadingSceneRenderer *>(this, "FProjectedShadowInfo.ClearDepth", RHICmdList, SceneRenderer); }
	void ClearTransientArrays() { NativeCall<void>(this, "FProjectedShadowInfo.ClearTransientArrays"); }
	float ComputeTransitionSize() { return NativeCall<float>(this, "FProjectedShadowInfo.ComputeTransitionSize"); }
	void GatherDynamicMeshElements(FSceneRenderer * Renderer, FVisibleLightInfo * VisibleLightInfo, TArray<FSceneView const *> * ReusedViewsArray) { NativeCall<void, FSceneRenderer *, FVisibleLightInfo *, TArray<FSceneView const *> *>(this, "FProjectedShadowInfo.GatherDynamicMeshElements", Renderer, VisibleLightInfo, ReusedViewsArray); }
	void GatherDynamicMeshElementsArray(FViewInfo * FoundView, FSceneRenderer * Renderer, TArray<FPrimitiveSceneInfo const *,SceneRenderingAllocator> * PrimitiveArray, TArray<FMeshBatchAndRelevance,SceneRenderingAllocator> * OutDynamicMeshElements, TArray<FSceneView const *> * ReusedViewsArray) { NativeCall<void, FViewInfo *, FSceneRenderer *, TArray<FPrimitiveSceneInfo const *,SceneRenderingAllocator> *, TArray<FMeshBatchAndRelevance,SceneRenderingAllocator> *, TArray<FSceneView const *> *>(this, "FProjectedShadowInfo.GatherDynamicMeshElementsArray", FoundView, Renderer, PrimitiveArray, OutDynamicMeshElements, ReusedViewsArray); }
	FMatrix * GetScreenToShadowMatrix(FMatrix * result, FSceneView * View) { return NativeCall<FMatrix *, FMatrix *, FSceneView *>(this, "FProjectedShadowInfo.GetScreenToShadowMatrix", result, View); }
	FIntPoint * GetShadowBufferResolution(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FProjectedShadowInfo.GetShadowBufferResolution", result); }
	FMatrix * GetWorldToShadowMatrix(FMatrix * result, FVector4 * ShadowmapMinMax, const FIntPoint * ShadowBufferResolutionOverride, bool bHasShadowBorder) { return NativeCall<FMatrix *, FMatrix *, FVector4 *, const FIntPoint *, bool>(this, "FProjectedShadowInfo.GetWorldToShadowMatrix", result, ShadowmapMinMax, ShadowBufferResolutionOverride, bHasShadowBorder); }
	void RenderDepth(FRHICommandList * RHICmdList, FSceneRenderer * SceneRenderer) { NativeCall<void, FRHICommandList *, FSceneRenderer *>(this, "FProjectedShadowInfo.RenderDepth", RHICmdList, SceneRenderer); }
	void RenderDepthDynamic(FRHICommandList * RHICmdList, FSceneRenderer * SceneRenderer, const FViewInfo * FoundView, bool bRenderStaticGeometry, bool bRenderDynamicGeometry) { NativeCall<void, FRHICommandList *, FSceneRenderer *, const FViewInfo *, bool, bool>(this, "FProjectedShadowInfo.RenderDepthDynamic", RHICmdList, SceneRenderer, FoundView, bRenderStaticGeometry, bRenderDynamicGeometry); }
	void RenderDepthInner(FRHICommandList * RHICmdList, FSceneRenderer * SceneRenderer, const FViewInfo * FoundView) { NativeCall<void, FRHICommandList *, FSceneRenderer *, const FViewInfo *>(this, "FProjectedShadowInfo.RenderDepthInner", RHICmdList, SceneRenderer, FoundView); }
	void RenderFrustumWireframe(FPrimitiveDrawInterface * PDI) { NativeCall<void, FPrimitiveDrawInterface *>(this, "FProjectedShadowInfo.RenderFrustumWireframe", PDI); }
	void RenderProjection(FRHICommandListImmediate * RHICmdList, int ViewIndex, const FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, int, const FViewInfo *>(this, "FProjectedShadowInfo.RenderProjection", RHICmdList, ViewIndex, View); }
	bool SubjectsVisible(const FViewInfo * View) { return NativeCall<bool, const FViewInfo *>(this, "FProjectedShadowInfo.SubjectsVisible", View); }
	void UpdateShaderDepthBias() { NativeCall<void>(this, "FProjectedShadowInfo.UpdateShaderDepthBias"); }
};

