#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FLandscapeGizmoRenderSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x110L];
	FMatrix& MeshRTField() { return *GetNativePointerField<FMatrix*>(this, "FLandscapeGizmoRenderSceneProxy.MeshRT"); }
	FVector& XAxisField() { return *GetNativePointerField<FVector*>(this, "FLandscapeGizmoRenderSceneProxy.XAxis"); }
	FVector& YAxisField() { return *GetNativePointerField<FVector*>(this, "FLandscapeGizmoRenderSceneProxy.YAxis"); }
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FLandscapeGizmoRenderSceneProxy.Origin"); }
	FieldArray<FVector, 8> FrustumVertsField() { return {this, "FLandscapeGizmoRenderSceneProxy.FrustumVerts"}; }
	float& SampleSizeXField() { return *GetNativePointerField<float*>(this, "FLandscapeGizmoRenderSceneProxy.SampleSizeX"); }
	float& SampleSizeYField() { return *GetNativePointerField<float*>(this, "FLandscapeGizmoRenderSceneProxy.SampleSizeY"); }
	TArray<FVector>& SampledPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FLandscapeGizmoRenderSceneProxy.SampledPositions"); }
	TArray<FVector>& SampledNormalsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FLandscapeGizmoRenderSceneProxy.SampledNormals"); }
	bool& bHeightmapRenderingField() { return *GetNativePointerField<bool*>(this, "FLandscapeGizmoRenderSceneProxy.bHeightmapRendering"); }
	FLandscapeGizmoMeshRenderProxy * HeightmapRenderProxyField() { return GetNativePointerField<FLandscapeGizmoMeshRenderProxy *>(this, "FLandscapeGizmoRenderSceneProxy.HeightmapRenderProxy"); }

	// Functions

	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FLandscapeGizmoRenderSceneProxy.GetMemoryFootprint"); }
};

