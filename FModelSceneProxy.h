#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FModelSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x70L];
	TArray<FModelSceneProxy::FElementInfo>& ElementsField() { return *GetNativePointerField<TArray<FModelSceneProxy::FElementInfo>*>(this, "FModelSceneProxy.Elements"); }
	TArray<FModelSceneProxy::FPerViewBatch,TInlineAllocator<2> >& PerViewBatchesField() { return *GetNativePointerField<TArray<FModelSceneProxy::FPerViewBatch,TInlineAllocator<2> >*>(this, "FModelSceneProxy.PerViewBatches"); }
	TArray<FModelSceneProxy::FDynamicModelMeshBatch>& DynamicMeshBatchesField() { return *GetNativePointerField<TArray<FModelSceneProxy::FDynamicModelMeshBatch>*>(this, "FModelSceneProxy.DynamicMeshBatches"); }
	FCollisionResponseContainer& CollisionResponseField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FModelSceneProxy.CollisionResponse"); }

	// Functions

	void FElementInfo(const FModelElement * InModelElement) { NativeCall<void, const FModelElement *>(this, "FModelSceneProxy.FElementInfo", InModelElement); }
	bool CanBeOccluded() { return NativeCall<bool>(this, "FModelSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FModelSceneProxy.DrawDynamicElements", PDI, View); }
	void DrawStaticElements(FStaticPrimitiveDrawInterface * PDI) { NativeCall<void, FStaticPrimitiveDrawInterface *>(this, "FModelSceneProxy.DrawStaticElements", PDI); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FModelSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	FLightInteraction * FElementInfo(FLightInteraction * result, FLightSceneProxy * LightSceneProxy) { return NativeCall<FLightInteraction *, FLightInteraction *, FLightSceneProxy *>(this, "FModelSceneProxy.FElementInfo", result, LightSceneProxy); }
	void GetLightRelevance(FLightSceneProxy * LightSceneProxy, bool * bDynamic, bool * bRelevant, bool * bLightMapped, bool * bShadowMapped) { NativeCall<void, FLightSceneProxy *, bool *, bool *, bool *, bool *>(this, "FModelSceneProxy.GetLightRelevance", LightSceneProxy, bDynamic, bRelevant, bLightMapped, bShadowMapped); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FModelSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FModelSceneProxy.GetViewRelevance", result, View); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "FModelSceneProxy.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
};

