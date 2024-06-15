#pragma once

#include "BaseDeclarations.h"
#include "FDebugRenderSceneProxy.h"
#include "FPrimitiveSceneProxy.h"

struct FNavTestSceneProxy : FDebugRenderSceneProxy
{
	char __padding[0xe0L];
	FVector& NavMeshDrawOffsetField() { return *GetNativePointerField<FVector*>(this, "FNavTestSceneProxy.NavMeshDrawOffset"); }
	ANavigationTestingActor * NavTestActorField() { return GetNativePointerField<ANavigationTestingActor *>(this, "FNavTestSceneProxy.NavTestActor"); }
	TArray<FVector>& PathPointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FNavTestSceneProxy.PathPoints"); }
	TArray<FString>& PathPointFlagsField() { return *GetNativePointerField<TArray<FString>*>(this, "FNavTestSceneProxy.PathPointFlags"); }
	TArray<FDynamicMeshVertex>& OpenSetVertsField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FNavTestSceneProxy.OpenSetVerts"); }
	TArray<int>& OpenSetIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FNavTestSceneProxy.OpenSetIndices"); }
	TArray<FDynamicMeshVertex>& ClosedSetVertsField() { return *GetNativePointerField<TArray<FDynamicMeshVertex>*>(this, "FNavTestSceneProxy.ClosedSetVerts"); }
	TArray<int>& ClosedSetIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FNavTestSceneProxy.ClosedSetIndices"); }
	FSetElementId& BestNodeIdField() { return *GetNativePointerField<FSetElementId*>(this, "FNavTestSceneProxy.BestNodeId"); }

	// Functions

	void DrawDebugLabels(UCanvas * Canvas, APlayerController * __formal) { NativeCall<void, UCanvas *, APlayerController *>(this, "FNavTestSceneProxy.DrawDebugLabels", Canvas, __formal); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FNavTestSceneProxy.DrawDynamicElements", PDI, View); }
	void GatherPathPoints() { NativeCall<void>(this, "FNavTestSceneProxy.GatherPathPoints"); }
	void GatherPathStep() { NativeCall<void>(this, "FNavTestSceneProxy.GatherPathStep"); }
	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FNavTestSceneProxy.GetAllocatedSize"); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FNavTestSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FNavTestSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FNavTestSceneProxy.GetViewRelevance", result, View); }
	void RegisterDebugDrawDelgate() { NativeCall<void>(this, "FNavTestSceneProxy.RegisterDebugDrawDelgate"); }
	void UnregisterDebugDrawDelgate() { NativeCall<void>(this, "FNavTestSceneProxy.UnregisterDebugDrawDelgate"); }
};

