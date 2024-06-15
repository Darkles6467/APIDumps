#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FDrawFrustumSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x10L];
	float& FrustumAspectRatioField() { return *GetNativePointerField<float*>(this, "FDrawFrustumSceneProxy.FrustumAspectRatio"); }
	float& FrustumStartDistField() { return *GetNativePointerField<float*>(this, "FDrawFrustumSceneProxy.FrustumStartDist"); }
	float& FrustumEndDistField() { return *GetNativePointerField<float*>(this, "FDrawFrustumSceneProxy.FrustumEndDist"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FDrawFrustumSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FDrawFrustumSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FDrawFrustumSceneProxy.GetViewRelevance", result, View); }
};

