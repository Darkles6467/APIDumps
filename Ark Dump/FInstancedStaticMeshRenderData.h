#pragma once

#include "BaseDeclarations.h"
#include "FInstancedStaticMeshVertexFactory.h"

struct FInstancedStaticMeshRenderData
{
	char __padding[0x48L];
	FStaticMeshInstanceBuffer * InstanceBufferField() { return GetNativePointerField<FStaticMeshInstanceBuffer *>(this, "FInstancedStaticMeshRenderData.InstanceBuffer"); }
	TArray<FInstancedStaticMeshVertexFactory>& VertexFactoriesField() { return *GetNativePointerField<TArray<FInstancedStaticMeshVertexFactory>*>(this, "FInstancedStaticMeshRenderData.VertexFactories"); }
	TArray<FStaticMeshLODResources *>& CachedLODResourcesField() { return *GetNativePointerField<TArray<FStaticMeshLODResources *>*>(this, "FInstancedStaticMeshRenderData.CachedLODResources"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FInstancedStaticMeshRenderData.FeatureLevel"); }
	bool& bIsReadyField() { return *GetNativePointerField<bool*>(this, "FInstancedStaticMeshRenderData.bIsReady"); }

	// Functions

	void InitResources() { NativeCall<void>(this, "FInstancedStaticMeshRenderData.InitResources"); }
	void InitResources_RT() { NativeCall<void>(this, "FInstancedStaticMeshRenderData.InitResources_RT"); }
	void ReleaseResources(FSceneInterface * Scene, const UStaticMesh * StaticMesh) { NativeCall<void, FSceneInterface *, const UStaticMesh *>(this, "FInstancedStaticMeshRenderData.ReleaseResources", Scene, StaticMesh); }
	static void InitStaticMeshVertexFactories(TArray<FInstancedStaticMeshVertexFactory> * VertexFactories, FInstancedStaticMeshRenderData * InstancedRenderData, UStaticMesh * Parent) { NativeCall<void, TArray<FInstancedStaticMeshVertexFactory> *, FInstancedStaticMeshRenderData *, UStaticMesh *>(nullptr, "FInstancedStaticMeshRenderData.InitStaticMeshVertexFactories", VertexFactories, InstancedRenderData, Parent); }
};

