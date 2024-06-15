#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FNiagaraSceneProxy : FPrimitiveSceneProxy
{

	// Functions

	void CreateRenderThreadResources() { NativeCall<void>(this, "FNiagaraSceneProxy.CreateRenderThreadResources"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FNiagaraSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FNiagaraSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FNiagaraSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FNiagaraSceneProxy.GetViewRelevance", result, View); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "FNiagaraSceneProxy.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
};

