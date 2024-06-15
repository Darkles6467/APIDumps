#pragma once

#include "BaseDeclarations.h"
#include "FStaticMeshSceneProxy.h"
#include "FPrimitiveSceneProxy.h"

struct FSplineMeshSceneProxy : FStaticMeshSceneProxy
{
	char __padding[0x80L];
	FieldArray<_BYTE, 80> SplineParamsField() { return {this, "FSplineMeshSceneProxy.SplineParams"}; }
	FVector& SplineUpDirField() { return *GetNativePointerField<FVector*>(this, "FSplineMeshSceneProxy.SplineUpDir"); }
	bool& bSmoothInterpRollScaleField() { return *GetNativePointerField<bool*>(this, "FSplineMeshSceneProxy.bSmoothInterpRollScale"); }
	ESplineMeshAxis::Type& ForwardAxisField() { return *GetNativePointerField<ESplineMeshAxis::Type*>(this, "FSplineMeshSceneProxy.ForwardAxis"); }
	float& SplineMeshMinZField() { return *GetNativePointerField<float*>(this, "FSplineMeshSceneProxy.SplineMeshMinZ"); }
	float& SplineMeshScaleZField() { return *GetNativePointerField<float*>(this, "FSplineMeshSceneProxy.SplineMeshScaleZ"); }
	TArray<FSplineMeshSceneProxy::FLODResources>& LODResourcesField() { return *GetNativePointerField<TArray<FSplineMeshSceneProxy::FLODResources>*>(this, "FSplineMeshSceneProxy.LODResources"); }

	// Functions

	bool GetMeshElement(int LODIndex, int BatchIndex, int SectionIndex, char InDepthPriorityGroup, const bool bUseSelectedMaterial, const bool bUseHoveredMaterial, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, int, char, const bool, const bool, FMeshBatch *>(this, "FSplineMeshSceneProxy.GetMeshElement", LODIndex, BatchIndex, SectionIndex, InDepthPriorityGroup, bUseSelectedMaterial, bUseHoveredMaterial, OutMeshBatch); }
	bool GetShadowMeshElement(int LODIndex, int BatchIndex, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, char, FMeshBatch *>(this, "FSplineMeshSceneProxy.GetShadowMeshElement", LODIndex, BatchIndex, InDepthPriorityGroup, OutMeshBatch); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FSplineMeshSceneProxy.GetViewRelevance", result, View); }
	bool GetWireframeMeshElement(int LODIndex, int BatchIndex, const FMaterialRenderProxy * WireframeRenderProxy, char InDepthPriorityGroup, FMeshBatch * OutMeshBatch) { return NativeCall<bool, int, int, const FMaterialRenderProxy *, char, FMeshBatch *>(this, "FSplineMeshSceneProxy.GetWireframeMeshElement", LODIndex, BatchIndex, WireframeRenderProxy, InDepthPriorityGroup, OutMeshBatch); }
};

