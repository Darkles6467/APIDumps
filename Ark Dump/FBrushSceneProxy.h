#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FBrushSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x40L];
	FLinearColor& LevelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBrushSceneProxy.LevelColor"); }
	FColor& PropertyColorField() { return *GetNativePointerField<FColor*>(this, "FBrushSceneProxy.PropertyColor"); }
	FCollisionResponseContainer& CollisionResponseField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FBrushSceneProxy.CollisionResponse"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FBrushSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FBrushSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FBrushSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FBrushSceneProxy.GetViewRelevance", result, View); }
};

