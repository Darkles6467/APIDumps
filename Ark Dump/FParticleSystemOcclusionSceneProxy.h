#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FParticleSystemSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x210L];
	FParticleDynamicData * DynamicDataField() { return GetNativePointerField<FParticleDynamicData *>(this, "FParticleSystemSceneProxy.DynamicData"); }
	FParticleDynamicData * LastDynamicDataField() { return GetNativePointerField<FParticleDynamicData *>(this, "FParticleSystemSceneProxy.LastDynamicData"); }
	int& LODMethodField() { return *GetNativePointerField<int*>(this, "FParticleSystemSceneProxy.LODMethod"); }
	float& PendingLODDistanceField() { return *GetNativePointerField<float*>(this, "FParticleSystemSceneProxy.PendingLODDistance"); }
	int& LastFramePreRenderedField() { return *GetNativePointerField<int*>(this, "FParticleSystemSceneProxy.LastFramePreRendered"); }
	TUniformBuffer<FPrimitiveUniformShaderParameters>& WorldSpacePrimitiveUniformBufferField() { return *GetNativePointerField<TUniformBuffer<FPrimitiveUniformShaderParameters>*>(this, "FParticleSystemSceneProxy.WorldSpacePrimitiveUniformBuffer"); }
	int& FirstFreeMeshBatchField() { return *GetNativePointerField<int*>(this, "FParticleSystemSceneProxy.FirstFreeMeshBatch"); }

	// Functions

	void CreateRenderThreadResources() { NativeCall<void>(this, "FParticleSystemSceneProxy.CreateRenderThreadResources"); }
	void CreateRenderThreadResourcesForEmitterData() { NativeCall<void>(this, "FParticleSystemSceneProxy.CreateRenderThreadResourcesForEmitterData"); }
	void DetermineLODDistance(FSceneView * View, int FrameNumber) { NativeCall<void, FSceneView *, int>(this, "FParticleSystemSceneProxy.DetermineLODDistance", View, FrameNumber); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FParticleSystemSceneProxy.DrawDynamicElements", PDI, View); }
	void GatherSimpleLights(FSceneViewFamily * ViewFamily, FSimpleLightArray * OutParticleLights) { NativeCall<void, FSceneViewFamily *, FSimpleLightArray *>(this, "FParticleSystemSceneProxy.GatherSimpleLights", ViewFamily, OutParticleLights); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FParticleSystemSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FParticleSystemSceneProxy.GetMemoryFootprint"); }
	void GetObjectPositionAndScale(FSceneView * View, FVector2D * ObjectNDCPosition, FVector2D * ObjectMacroUVScales) { NativeCall<void, FSceneView *, FVector2D *, FVector2D *>(this, "FParticleSystemSceneProxy.GetObjectPositionAndScale", View, ObjectNDCPosition, ObjectMacroUVScales); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FParticleSystemSceneProxy.GetViewRelevance", result, View); }
	void OnTransformChanged() { NativeCall<void>(this, "FParticleSystemSceneProxy.OnTransformChanged"); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "FParticleSystemSceneProxy.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
	void ReleaseRenderThreadResources() { NativeCall<void>(this, "FParticleSystemSceneProxy.ReleaseRenderThreadResources"); }
	void ReleaseRenderThreadResourcesForEmitterData() { NativeCall<void>(this, "FParticleSystemSceneProxy.ReleaseRenderThreadResourcesForEmitterData"); }
	void UpdateWorldSpacePrimitiveUniformBuffer() { NativeCall<void>(this, "FParticleSystemSceneProxy.UpdateWorldSpacePrimitiveUniformBuffer"); }
};

struct FParticleSystemOcclusionSceneProxy : FParticleSystemSceneProxy
{
	char __padding[0x20L];
	FieldArray<_BYTE, 24> OcclusionBoundsField() { return {this, "FParticleSystemOcclusionSceneProxy.OcclusionBounds"}; }

	// Functions

	bool CanBeOccluded() { return NativeCall<bool>(this, "FParticleSystemOcclusionSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FParticleSystemOcclusionSceneProxy.DrawDynamicElements", PDI, View); }
	FBoxSphereBounds * GetCustomOcclusionBounds(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "FParticleSystemOcclusionSceneProxy.GetCustomOcclusionBounds", result); }
	bool HasCustomOcclusionBounds() { return NativeCall<bool>(this, "FParticleSystemOcclusionSceneProxy.HasCustomOcclusionBounds"); }
};

