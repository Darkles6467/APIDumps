#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FMaterialSpriteSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> ElementsField() { return {this, "FMaterialSpriteSceneProxy.Elements"}; }
	FColor& BaseColorField() { return *GetNativePointerField<FColor*>(this, "FMaterialSpriteSceneProxy.BaseColor"); }

	// Functions

	bool CanBeOccluded() { return NativeCall<bool>(this, "FMaterialSpriteSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FMaterialSpriteSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FMaterialSpriteSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	static unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(nullptr, "FMaterialSpriteSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FMaterialSpriteSceneProxy.GetViewRelevance", result, View); }
};

