#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FStaticMeshSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x90L];
	const UStaticMesh * StaticMeshField() { return GetNativePointerField<const UStaticMesh *>(this, "FStaticMeshSceneProxy.StaticMesh"); }
	FStaticMeshRenderData * RenderDataField() { return GetNativePointerField<FStaticMeshRenderData *>(this, "FStaticMeshSceneProxy.RenderData"); }
	TArray<FStaticMeshLODResources *>& CachedLODResourcesField() { return *GetNativePointerField<TArray<FStaticMeshLODResources *>*>(this, "FStaticMeshSceneProxy.CachedLODResources"); }
	const FDistanceFieldVolumeData * DistanceFieldDataField() { return GetNativePointerField<const FDistanceFieldVolumeData *>(this, "FStaticMeshSceneProxy.DistanceFieldData"); }
	int& ForcedLodModelField() { return *GetNativePointerField<int*>(this, "FStaticMeshSceneProxy.ForcedLodModel"); }
	FVector& TotalScale3DField() { return *GetNativePointerField<FVector*>(this, "FStaticMeshSceneProxy.TotalScale3D"); }
	int& LandscapeInfoMaskField() { return *GetNativePointerField<int*>(this, "FStaticMeshSceneProxy.LandscapeInfoMask"); }
	float& DirectionalShadowDistanceLimitSquaredField() { return *GetNativePointerField<float*>(this, "FStaticMeshSceneProxy.DirectionalShadowDistanceLimitSquared"); }
	float& DistanceFieldRuntimeQualityField() { return *GetNativePointerField<float*>(this, "FStaticMeshSceneProxy.DistanceFieldRuntimeQuality"); }
	ECollisionTraceFlag& CollisionTraceFlagField() { return *GetNativePointerField<ECollisionTraceFlag*>(this, "FStaticMeshSceneProxy.CollisionTraceFlag"); }
	FCollisionResponseContainer& CollisionResponseField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FStaticMeshSceneProxy.CollisionResponse"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FStaticMeshSceneProxy.DrawDynamicElements", PDI, View); }
	int GetLandscapeInfoMask() { return NativeCall<int>(this, "FStaticMeshSceneProxy.GetLandscapeInfoMask"); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FStaticMeshSceneProxy.GetMemoryFootprint"); }
	const UStaticMesh * GetStaticMesh(const FVertexFactory * VertexFactory) { return NativeCall<const UStaticMesh *, const FVertexFactory *>(this, "FStaticMeshSceneProxy.GetStaticMesh", VertexFactory); }
	bool IsOverDirectionalShadowDistanceLimit(float DistanceToView) { return NativeCall<bool, float>(this, "FStaticMeshSceneProxy.IsOverDirectionalShadowDistanceLimit", DistanceToView); }
	bool SupportsLandscapeInfoDrawing() { return NativeCall<bool>(this, "FStaticMeshSceneProxy.SupportsLandscapeInfoDrawing"); }
	bool WantsDirectionalShadowDistanceLimit() { return NativeCall<bool>(this, "FStaticMeshSceneProxy.WantsDirectionalShadowDistanceLimit"); }
	void FLODInfo(const UStaticMeshComponent * InComponent, int LODIndex) { NativeCall<void, const UStaticMeshComponent *, int>(this, "FStaticMeshSceneProxy.FLODInfo", InComponent, LODIndex); }
	void FLODInfo() { NativeCall<void>(this, "FStaticMeshSceneProxy.FLODInfo"); }
	bool CanBeOccluded() { return NativeCall<bool>(this, "FStaticMeshSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View, unsigned int DrawDynamicFlags) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *, unsigned int>(this, "FStaticMeshSceneProxy.DrawDynamicElements", PDI, View, DrawDynamicFlags); }
	void DrawStaticElements(FStaticPrimitiveDrawInterface * PDI) { NativeCall<void, FStaticPrimitiveDrawInterface *>(this, "FStaticMeshSceneProxy.DrawStaticElements", PDI); }
	void GetDistanceFieldInstanceInfo(int * NumInstances, float * BoundsSurfaceArea) { NativeCall<void, int *, float *>(this, "FStaticMeshSceneProxy.GetDistanceFieldInstanceInfo", NumInstances, BoundsSurfaceArea); }
	void GetDistancefieldAtlasData(FBox * LocalVolumeBounds, FIntVector * OutBlockMin, FIntVector * OutBlockSize, bool * bOutBuiltAsIfTwoSided, bool * bMeshWasPlane, TArray<FMatrix> * ObjectLocalToWorldTransforms, float * QualityMultiplier) { NativeCall<void, FBox *, FIntVector *, FIntVector *, bool *, bool *, TArray<FMatrix> *, float *>(this, "FStaticMeshSceneProxy.GetDistancefieldAtlasData", LocalVolumeBounds, OutBlockMin, OutBlockSize, bOutBuiltAsIfTwoSided, bMeshWasPlane, ObjectLocalToWorldTransforms, QualityMultiplier); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FStaticMeshSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	FLightInteraction * FLODInfo(FLightInteraction * result, FLightSceneProxy * LightSceneProxy) { return NativeCall<FLightInteraction *, FLightInteraction *, FLightSceneProxy *>(this, "FStaticMeshSceneProxy.FLODInfo", result, LightSceneProxy); }
	int GetLOD(FSceneView * View) { return NativeCall<int, FSceneView *>(this, "FStaticMeshSceneProxy.GetLOD", View); }
	void GetLightRelevance(FLightSceneProxy * LightSceneProxy, bool * bDynamic, bool * bRelevant, bool * bLightMapped, bool * bShadowMapped) { NativeCall<void, FLightSceneProxy *, bool *, bool *, bool *, bool *>(this, "FStaticMeshSceneProxy.GetLightRelevance", LightSceneProxy, bDynamic, bRelevant, bLightMapped, bShadowMapped); }
	bool GetMeshElement(int LODIndex, int BatchIndex, int SectionIndex, char InDepthPriorityGroup, const bool bUseSelectedMaterial, const bool bUseHoveredMaterial, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, int, char, const bool, const bool, FMeshBatch *>(this, "FStaticMeshSceneProxy.GetMeshElement", LODIndex, BatchIndex, SectionIndex, InDepthPriorityGroup, bUseSelectedMaterial, bUseHoveredMaterial, OutMeshBatch); }
	bool GetShadowMeshElement(int LODIndex, int BatchIndex, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, char, FMeshBatch *>(this, "FStaticMeshSceneProxy.GetShadowMeshElement", LODIndex, BatchIndex, InDepthPriorityGroup, OutMeshBatch); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FStaticMeshSceneProxy.GetViewRelevance", result, View); }
	bool GetWireframeMeshElement(int LODIndex, int BatchIndex, const FMaterialRenderProxy * WireframeRenderProxy, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, const FMaterialRenderProxy *, char, FMeshBatch *>(this, "FStaticMeshSceneProxy.GetWireframeMeshElement", LODIndex, BatchIndex, WireframeRenderProxy, InDepthPriorityGroup, OutMeshBatch); }
	bool HasDistanceFieldRepresentation() { return NativeCall<bool>(this, "FStaticMeshSceneProxy.HasDistanceFieldRepresentation"); }
	void OnTransformChanged() { NativeCall<void>(this, "FStaticMeshSceneProxy.OnTransformChanged"); }
	void SetIndexSource(int LODIndex, int SectionIndex, FMeshBatch * OutMeshElement, bool bWireframe, bool bRequiresAdjacencyInformation) { NativeCall<void, int, int, FMeshBatch *, bool, bool>(this, "FStaticMeshSceneProxy.SetIndexSource", LODIndex, SectionIndex, OutMeshElement, bWireframe, bRequiresAdjacencyInformation); }
	void WillRender(long double LastRenderTime, float DistanceSquared) { NativeCall<void, long double, float>(this, "FStaticMeshSceneProxy.WillRender", LastRenderTime, DistanceSquared); }
};

