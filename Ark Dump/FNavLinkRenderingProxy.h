#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"
#include "FNavigationLink.h"
#include "FNavigationSegmentLink.h"

struct FNavLinkRenderingProxy : FPrimitiveSceneProxy
{
	char __padding[0x30L];
	INavLinkHostInterface * LinkOwnerHostField() { return GetNativePointerField<INavLinkHostInterface *>(this, "FNavLinkRenderingProxy.LinkOwnerHost"); }
	TArray<FNavLinkRenderingProxy::FNavLinkDrawing>& OffMeshPointLinksField() { return *GetNativePointerField<TArray<FNavLinkRenderingProxy::FNavLinkDrawing>*>(this, "FNavLinkRenderingProxy.OffMeshPointLinks"); }
	TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing>& OffMeshSegmentLinksField() { return *GetNativePointerField<TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing>*>(this, "FNavLinkRenderingProxy.OffMeshSegmentLinks"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FNavLinkRenderingProxy.DrawDynamicElements", PDI, View); }
	static void DrawLinks(FPrimitiveDrawInterface * PDI, TArray<FNavLinkRenderingProxy::FNavLinkDrawing> * OffMeshPointLinks, TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing> * OffMeshSegmentLinks, TArray<float> * StepHeights, FMaterialRenderProxy *const MeshColorInstance) { NativeCall<void, FPrimitiveDrawInterface *, TArray<FNavLinkRenderingProxy::FNavLinkDrawing> *, TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing> *, TArray<float> *, FMaterialRenderProxy *const>(nullptr, "FNavLinkRenderingProxy.DrawLinks", PDI, OffMeshPointLinks, OffMeshSegmentLinks, StepHeights, MeshColorInstance); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FNavLinkRenderingProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	static void GetLinkMeshes(const TArray<FNavLinkRenderingProxy::FNavLinkDrawing> * OffMeshPointLinks, const TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing> * OffMeshSegmentLinks, TArray<float> * StepHeights, FMaterialRenderProxy *const MeshColorInstance, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FNavLinkRenderingProxy::FNavLinkDrawing> *, const TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing> *, TArray<float> *, FMaterialRenderProxy *const, int, FMeshElementCollector *>(nullptr, "FNavLinkRenderingProxy.GetLinkMeshes", OffMeshPointLinks, OffMeshSegmentLinks, StepHeights, MeshColorInstance, ViewIndex, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FNavLinkRenderingProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FNavLinkRenderingProxy.GetViewRelevance", result, View); }
	void StorePointLinks(const FTransform * LocalToWorld, const TArray<FNavigationLink> * LinksArray) { NativeCall<void, const FTransform *, const TArray<FNavigationLink> *>(this, "FNavLinkRenderingProxy.StorePointLinks", LocalToWorld, LinksArray); }
	void StoreSegmentLinks(const FTransform * LocalToWorld, const TArray<FNavigationSegmentLink> * LinksArray) { NativeCall<void, const FTransform *, const TArray<FNavigationSegmentLink> *>(this, "FNavLinkRenderingProxy.StoreSegmentLinks", LocalToWorld, LinksArray); }
};

