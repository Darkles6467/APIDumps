#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FLineBatcherSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x30L];
	FieldArray<_BYTE, 8> LinesField() { return {this, "FLineBatcherSceneProxy.Lines"}; }
	TArray<FBatchedPoint>& PointsField() { return *GetNativePointerField<TArray<FBatchedPoint>*>(this, "FLineBatcherSceneProxy.Points"); }
	TArray<FBatchedMesh>& MeshesField() { return *GetNativePointerField<TArray<FBatchedMesh>*>(this, "FLineBatcherSceneProxy.Meshes"); }
	FPrimitiveViewRelevance& ViewRelevanceField() { return *GetNativePointerField<FPrimitiveViewRelevance*>(this, "FLineBatcherSceneProxy.ViewRelevance"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FLineBatcherSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FLineBatcherSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FLineBatcherSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FLineBatcherSceneProxy.GetViewRelevance", result, View); }
};

