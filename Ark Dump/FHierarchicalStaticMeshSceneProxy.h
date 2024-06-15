#pragma once

#include "BaseDeclarations.h"
#include "FStaticMeshSceneProxy.h"
#include "FPrimitiveSceneProxy.h"
#include "FBoxSphereBounds.h"

struct FInstancedStaticMeshSceneProxy : FStaticMeshSceneProxy
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 64> InstancedRenderDataField() { return {this, "FInstancedStaticMeshSceneProxy.InstancedRenderData"}; }
	float& LargestSingleBoundsField() { return *GetNativePointerField<float*>(this, "FInstancedStaticMeshSceneProxy.LargestSingleBounds"); }
	FInstancingUserData& UserData_AllInstancesField() { return *GetNativePointerField<FInstancingUserData*>(this, "FInstancedStaticMeshSceneProxy.UserData_AllInstances"); }
	FInstancingUserData& UserData_SelectedInstancesField() { return *GetNativePointerField<FInstancingUserData*>(this, "FInstancedStaticMeshSceneProxy.UserData_SelectedInstances"); }
	FInstancingUserData& UserData_DeselectedInstancesField() { return *GetNativePointerField<FInstancingUserData*>(this, "FInstancedStaticMeshSceneProxy.UserData_DeselectedInstances"); }

	// Functions

	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FInstancedStaticMeshSceneProxy.GetViewRelevance", result, View); }
	float SingleInstanceLargestRadius() { return NativeCall<float>(this, "FInstancedStaticMeshSceneProxy.SingleInstanceLargestRadius"); }
	void GetDistanceFieldInstanceInfo(int * NumInstances, float * BoundsSurfaceArea) { NativeCall<void, int *, float *>(this, "FInstancedStaticMeshSceneProxy.GetDistanceFieldInstanceInfo", NumInstances, BoundsSurfaceArea); }
	void GetDistancefieldAtlasData(FBox * LocalVolumeBounds, FIntVector * OutBlockMin, FIntVector * OutBlockSize, bool * bOutBuiltAsIfTwoSided, bool * bMeshWasPlane, TArray<FMatrix> * ObjectLocalToWorldTransforms, float * QualityMultiplier) { NativeCall<void, FBox *, FIntVector *, FIntVector *, bool *, bool *, TArray<FMatrix> *, float *>(this, "FInstancedStaticMeshSceneProxy.GetDistancefieldAtlasData", LocalVolumeBounds, OutBlockMin, OutBlockSize, bOutBuiltAsIfTwoSided, bMeshWasPlane, ObjectLocalToWorldTransforms, QualityMultiplier); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FInstancedStaticMeshSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	bool GetMeshElement(int LODIndex, int BatchIndex, int ElementIndex, char InDepthPriorityGroup, const bool bUseSelectedMaterial, const bool bUseHoveredMaterial, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, int, char, const bool, const bool, FMeshBatch *>(this, "FInstancedStaticMeshSceneProxy.GetMeshElement", LODIndex, BatchIndex, ElementIndex, InDepthPriorityGroup, bUseSelectedMaterial, bUseHoveredMaterial, OutMeshBatch); }
	int GetNumMeshBatches() { return NativeCall<int>(this, "FInstancedStaticMeshSceneProxy.GetNumMeshBatches"); }
	bool GetShadowMeshElement(int LODIndex, int BatchIndex, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, char, FMeshBatch *>(this, "FInstancedStaticMeshSceneProxy.GetShadowMeshElement", LODIndex, BatchIndex, InDepthPriorityGroup, OutMeshBatch); }
	bool GetWireframeMeshElement(int LODIndex, int BatchIndex, const FMaterialRenderProxy * WireframeRenderProxy, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, const FMaterialRenderProxy *, char, FMeshBatch *>(this, "FInstancedStaticMeshSceneProxy.GetWireframeMeshElement", LODIndex, BatchIndex, WireframeRenderProxy, InDepthPriorityGroup, OutMeshBatch); }
	void SetupInstancedMeshBatch(int LODIndex, int BatchIndex, FMeshBatch * OutMeshBatch) { NativeCall<void, int, int, FMeshBatch *>(this, "FInstancedStaticMeshSceneProxy.SetupInstancedMeshBatch", LODIndex, BatchIndex, OutMeshBatch); }
};

struct FHierarchicalStaticMeshSceneProxy : FInstancedStaticMeshSceneProxy
{
	char __padding[0xb0L];
	FieldArray<_BYTE, 8> ClusterTreePtrField() { return {this, "FHierarchicalStaticMeshSceneProxy.ClusterTreePtr"}; }
	const TArray<FClusterNode> * ClusterTreeField() { return GetNativePointerField<const TArray<FClusterNode> *>(this, "FHierarchicalStaticMeshSceneProxy.ClusterTree"); }
	bool& bDrawDebugField() { return *GetNativePointerField<bool*>(this, "FHierarchicalStaticMeshSceneProxy.bDrawDebug"); }
	int& FirstUnbuiltIndexField() { return *GetNativePointerField<int*>(this, "FHierarchicalStaticMeshSceneProxy.FirstUnbuiltIndex"); }
	int& LastUnbuiltIndexField() { return *GetNativePointerField<int*>(this, "FHierarchicalStaticMeshSceneProxy.LastUnbuiltIndex"); }
	int& FirstOcclusionNodeField() { return *GetNativePointerField<int*>(this, "FHierarchicalStaticMeshSceneProxy.FirstOcclusionNode"); }
	int& LastOcclusionNodeField() { return *GetNativePointerField<int*>(this, "FHierarchicalStaticMeshSceneProxy.LastOcclusionNode"); }
	TArray<FBoxSphereBounds>& OcclusionBoundsField() { return *GetNativePointerField<TArray<FBoxSphereBounds>*>(this, "FHierarchicalStaticMeshSceneProxy.OcclusionBounds"); }
	unsigned int& SceneProxyCreatedFrameNumberRenderThreadField() { return *GetNativePointerField<unsigned int*>(this, "FHierarchicalStaticMeshSceneProxy.SceneProxyCreatedFrameNumberRenderThread"); }

	// Functions

	void AcceptOcclusionResults(FSceneView * View, TArray<bool> * Results, int ResultsStart, int NumResults) { NativeCall<void, FSceneView *, TArray<bool> *, int, int>(this, "FHierarchicalStaticMeshSceneProxy.AcceptOcclusionResults", View, Results, ResultsStart, NumResults); }
	bool AllowThreadedDynamicGet() { return NativeCall<bool>(this, "FHierarchicalStaticMeshSceneProxy.AllowThreadedDynamicGet"); }
	void ClearRemainingOcclusionIndices(int Index) { NativeCall<void, int>(this, "FHierarchicalStaticMeshSceneProxy.ClearRemainingOcclusionIndices", Index); }
	void CreateOcclusionIndices(int Index, const FMatrix * XForm, TArray<FBoxSphereBounds> * OcclusionBounds, int VertexWeight, int Depth, int MaxDepth, int MinInstances) { NativeCall<void, int, const FMatrix *, TArray<FBoxSphereBounds> *, int, int, int, int>(this, "FHierarchicalStaticMeshSceneProxy.CreateOcclusionIndices", Index, XForm, OcclusionBounds, VertexWeight, Depth, MaxDepth, MinInstances); }
	void CreateRenderThreadResources() { NativeCall<void>(this, "FHierarchicalStaticMeshSceneProxy.CreateRenderThreadResources"); }
	void FillDynamicMeshElements(FMeshElementCollector * Collector, const FFoliageElementParams * ElementParams, const FFoliageRenderInstanceParams * Params) { NativeCall<void, FMeshElementCollector *, const FFoliageElementParams *, const FFoliageRenderInstanceParams *>(this, "FHierarchicalStaticMeshSceneProxy.FillDynamicMeshElements", Collector, ElementParams, Params); }
	void GetDistancefieldAtlasData(FBox * LocalVolumeBounds, FIntVector * OutBlockMin, FIntVector * OutBlockSize, bool * bOutBuiltAsIfTwoSided, bool * bMeshWasPlane, TArray<FMatrix> * ObjectLocalToWorldTransforms, float * QualityMultiplier) { NativeCall<void, FBox *, FIntVector *, FIntVector *, bool *, bool *, TArray<FMatrix> *, float *>(this, "FHierarchicalStaticMeshSceneProxy.GetDistancefieldAtlasData", LocalVolumeBounds, OutBlockMin, OutBlockSize, bOutBuiltAsIfTwoSided, bMeshWasPlane, ObjectLocalToWorldTransforms, QualityMultiplier); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FHierarchicalStaticMeshSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	FAssetRegistry::FPathRemovedEvent * GetOcclusionQueries() { return NativeCall<FAssetRegistry::FPathRemovedEvent *>(this, "FHierarchicalStaticMeshSceneProxy.GetOcclusionQueries"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FHierarchicalStaticMeshSceneProxy.GetViewRelevance", result, View); }
	bool HasSubprimitiveOcclusionQueries() { return NativeCall<bool>(this, "FHierarchicalStaticMeshSceneProxy.HasSubprimitiveOcclusionQueries"); }
	void SetupOcclusion(UHierarchicalInstancedStaticMeshComponent * InComponent) { NativeCall<void, UHierarchicalInstancedStaticMeshComponent *>(this, "FHierarchicalStaticMeshSceneProxy.SetupOcclusion", InComponent); }
};

