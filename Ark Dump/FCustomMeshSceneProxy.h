#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FCustomMeshSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x490L];
	FCustomMeshVertexBuffer& VertexBufferField() { return *GetNativePointerField<FCustomMeshVertexBuffer*>(this, "FCustomMeshSceneProxy.VertexBuffer"); }
	FCustomMeshIndexBuffer& IndexBufferField() { return *GetNativePointerField<FCustomMeshIndexBuffer*>(this, "FCustomMeshSceneProxy.IndexBuffer"); }
	FCustomMeshVertexFactory& VertexFactoryField() { return *GetNativePointerField<FCustomMeshVertexFactory*>(this, "FCustomMeshSceneProxy.VertexFactory"); }

	// Functions

	bool CanBeOccluded() { return NativeCall<bool>(this, "FCustomMeshSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FCustomMeshSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FCustomMeshSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FCustomMeshSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FCustomMeshSceneProxy.GetViewRelevance", result, View); }
};

