#pragma once

#include "BaseDeclarations.h"
struct FMeshBatch
{
	char __padding[0xb0L];
	unsigned __int16& DynamicVertexStrideField() { return *GetNativePointerField<unsigned __int16*>(this, "FMeshBatch.DynamicVertexStride"); }
	char& LODIndexField() { return *GetNativePointerField<char*>(this, "FMeshBatch.LODIndex"); }
	const FLightCacheInterface * LCIField() { return GetNativePointerField<const FLightCacheInterface *>(this, "FMeshBatch.LCI"); }
	const void * DynamicVertexDataField() { return GetNativePointerField<const void *>(this, "FMeshBatch.DynamicVertexData"); }
	FHitProxyId& BatchHitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FMeshBatch.BatchHitProxyId"); }

	// Functions

};

struct FStaticMesh : FMeshBatch
{
	char __padding[0x28L];
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "FStaticMesh.ScreenSize"); }
	FPrimitiveSceneInfo * PrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FStaticMesh.PrimitiveSceneInfo"); }
	int& IdField() { return *GetNativePointerField<int*>(this, "FStaticMesh.Id"); }
	bool& bShadowOnlyField() { return *GetNativePointerField<bool*>(this, "FStaticMesh.bShadowOnly"); }
	TArray<TRefCountPtr<FStaticMesh::FDrawListElementLink>>& DrawListLinksField() { return *GetNativePointerField<TArray<TRefCountPtr<FStaticMesh::FDrawListElementLink>>*>(this, "FStaticMesh.DrawListLinks"); }

	// Functions

	void AddToDrawLists(FRHICommandListImmediate * RHICmdList, FScene * Scene) { NativeCall<void, FRHICommandListImmediate *, FScene *>(this, "FStaticMesh.AddToDrawLists", RHICmdList, Scene); }
	void LinkDrawList(FStaticMesh::FDrawListElementLink * Link) { NativeCall<void, FStaticMesh::FDrawListElementLink *>(this, "FStaticMesh.LinkDrawList", Link); }
	void UnlinkDrawList(FStaticMesh::FDrawListElementLink * Link) { NativeCall<void, FStaticMesh::FDrawListElementLink *>(this, "FStaticMesh.UnlinkDrawList", Link); }
};

