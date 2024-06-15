#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FCableSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x490L];
	FCableVertexBuffer& VertexBufferField() { return *GetNativePointerField<FCableVertexBuffer*>(this, "FCableSceneProxy.VertexBuffer"); }
	FCableIndexBuffer& IndexBufferField() { return *GetNativePointerField<FCableIndexBuffer*>(this, "FCableSceneProxy.IndexBuffer"); }
	FCableVertexFactory& VertexFactoryField() { return *GetNativePointerField<FCableVertexFactory*>(this, "FCableSceneProxy.VertexFactory"); }
	FCableDynamicData * DynamicDataField() { return GetNativePointerField<FCableDynamicData *>(this, "FCableSceneProxy.DynamicData"); }
	int& NumSegmentsField() { return *GetNativePointerField<int*>(this, "FCableSceneProxy.NumSegments"); }
	float& CableWidthField() { return *GetNativePointerField<float*>(this, "FCableSceneProxy.CableWidth"); }
	int& NumSidesField() { return *GetNativePointerField<int*>(this, "FCableSceneProxy.NumSides"); }
	float& TileMaterialField() { return *GetNativePointerField<float*>(this, "FCableSceneProxy.TileMaterial"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FCableSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FCableSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FCableSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FCableSceneProxy.GetViewRelevance", result, View); }
};

