#pragma once

#include "BaseDeclarations.h"
#include "FStaticMeshSceneProxy.h"
#include "FPrimitiveSceneProxy.h"
#include "FClutterData.h"

struct FGroundClutterSceneProxy : FStaticMeshSceneProxy
{
	char __padding[0x80L];
	FieldArray<_BYTE, 8> RenderThread_ClutterLayersField() { return {this, "FGroundClutterSceneProxy.RenderThread_ClutterLayers"}; }
	TUniquePtr<FGroundClutterRenderData>& RenderDataField() { return *GetNativePointerField<TUniquePtr<FGroundClutterRenderData>*>(this, "FGroundClutterSceneProxy.RenderData"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FGroundClutterSceneProxy.FeatureLevel"); }
	float& GroundClutterRadiusField() { return *GetNativePointerField<float*>(this, "FGroundClutterSceneProxy.GroundClutterRadius"); }
	int& LayerIDField() { return *GetNativePointerField<int*>(this, "FGroundClutterSceneProxy.LayerID"); }
	int& TileCountField() { return *GetNativePointerField<int*>(this, "FGroundClutterSceneProxy.TileCount"); }
	int& TileCountSqField() { return *GetNativePointerField<int*>(this, "FGroundClutterSceneProxy.TileCountSq"); }
	bool& bAnyTileDrawnField() { return *GetNativePointerField<bool*>(this, "FGroundClutterSceneProxy.bAnyTileDrawn"); }
	bool& bDrawDebugGridField() { return *GetNativePointerField<bool*>(this, "FGroundClutterSceneProxy.bDrawDebugGrid"); }

	// Functions

	void DrawDynamicElementsWithCommandlist(FRHICommandList * RHICmdList, FPrimitiveDrawInterface * PDI, FSceneView * View, FRHITexture2D * InClutterTexture, FRHITexture2D * InClutterTextureIDs) { NativeCall<void, FRHICommandList *, FPrimitiveDrawInterface *, FSceneView *, FRHITexture2D *, FRHITexture2D *>(this, "FGroundClutterSceneProxy.DrawDynamicElementsWithCommandlist", RHICmdList, PDI, View, InClutterTexture, InClutterTextureIDs); }
	void DrawDynamicElementsWithCommandlistAsync(FRHIAsyncComputeCommandListImmediate * RHICmdList, FPrimitiveDrawInterface * PDI, FSceneView * View, FRHITexture2D * InClutterTexture, FRHITexture2D * InClutterTextureIDs) { NativeCall<void, FRHIAsyncComputeCommandListImmediate *, FPrimitiveDrawInterface *, FSceneView *, FRHITexture2D *, FRHITexture2D *>(this, "FGroundClutterSceneProxy.DrawDynamicElementsWithCommandlistAsync", RHICmdList, PDI, View, InClutterTexture, InClutterTextureIDs); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FGroundClutterSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	float GetGroundClutterDensity() { return NativeCall<float>(this, "FGroundClutterSceneProxy.GetGroundClutterDensity"); }
	float GetGroundClutterRadius() { return NativeCall<float>(this, "FGroundClutterSceneProxy.GetGroundClutterRadius"); }
	const UStaticMesh * GetStaticMesh(const FVertexFactory * VertexFactory) { return NativeCall<const UStaticMesh *, const FVertexFactory *>(this, "FGroundClutterSceneProxy.GetStaticMesh", VertexFactory); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FGroundClutterSceneProxy.GetViewRelevance", result, View); }
	void InitializeGroundClutterSceneProxy(TArray<FClutterData> * ComponentClutterLayers, float GroundClutterDensity, float GroundClutterRadius) { NativeCall<void, TArray<FClutterData> *, float, float>(this, "FGroundClutterSceneProxy.InitializeGroundClutterSceneProxy", ComponentClutterLayers, GroundClutterDensity, GroundClutterRadius); }
};

