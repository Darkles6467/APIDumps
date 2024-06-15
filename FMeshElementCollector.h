#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"
#include "FMeshBatchAndRelevance.h"

struct FMeshElementCollector
{
	char __padding[0xd0L];
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMeshElementCollector.CriticalSection"); }
	unsigned int& TlsSlotField() { return *GetNativePointerField<unsigned int*>(this, "FMeshElementCollector.TlsSlot"); }
	TArray<FSimpleElementCollector *,TInlineAllocator<2> >& SimpleElementCollectorsField() { return *GetNativePointerField<TArray<FSimpleElementCollector *,TInlineAllocator<2> >*>(this, "FMeshElementCollector.SimpleElementCollectors"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FMeshElementCollector.FeatureLevel"); }

	// Functions

	void RegisterOneFrameMaterialProxy(FMaterialRenderProxy * Proxy) { NativeCall<void, FMaterialRenderProxy *>(this, "FMeshElementCollector.RegisterOneFrameMaterialProxy", Proxy); }
	void AddMesh(int ViewIndex, FMeshBatch * MeshBatch) { NativeCall<void, int, FMeshBatch *>(this, "FMeshElementCollector.AddMesh", ViewIndex, MeshBatch); }
	void SetPrimitive(FPrimitiveSceneProxy * InPrimitiveSceneProxy, FHitProxyId DefaultHitProxyId, bool bIgnoreHitProxy) { NativeCall<void, FPrimitiveSceneProxy *, FHitProxyId, bool>(this, "FMeshElementCollector.SetPrimitive", InPrimitiveSceneProxy, DefaultHitProxyId, bIgnoreHitProxy); }
	void AddViewMeshArrays(FSceneView * InView, TArray<FMeshBatchAndRelevance,SceneRenderingAllocator> * ViewMeshes, FSimpleElementCollector * ViewSimpleElementCollector, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FSceneView *, TArray<FMeshBatchAndRelevance,SceneRenderingAllocator> *, FSimpleElementCollector *, ERHIFeatureLevel::Type>(this, "FMeshElementCollector.AddViewMeshArrays", InView, ViewMeshes, ViewSimpleElementCollector, InFeatureLevel); }
	void ClearViewMeshArrays() { NativeCall<void>(this, "FMeshElementCollector.ClearViewMeshArrays"); }
};

