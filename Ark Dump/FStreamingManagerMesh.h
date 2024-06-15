#pragma once

#include "BaseDeclarations.h"
#include "IStreamingManager.h"

struct FStreamingManagerMesh : IStreamingManager
{
	char __padding[0x68L];
	FAsyncTask<FAsyncMeshStreaming> * AsyncWorkField() { return GetNativePointerField<FAsyncTask<FAsyncMeshStreaming> *>(this, "FStreamingManagerMesh.AsyncWork"); }
	int& MeshCacheIteratorField() { return *GetNativePointerField<int*>(this, "FStreamingManagerMesh.MeshCacheIterator"); }
	bool& bMeshCacheDirtyField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerMesh.bMeshCacheDirty"); }
	TArray<FDynamicMeshMetaInfo>& CachedMeshesField() { return *GetNativePointerField<TArray<FDynamicMeshMetaInfo>*>(this, "FStreamingManagerMesh.CachedMeshes"); }
	bool& bDynMeshCacheDirtyField() { return *GetNativePointerField<bool*>(this, "FStreamingManagerMesh.bDynMeshCacheDirty"); }
	TArray<FDynamicMeshMetaInfo>& CachedDynamicMeshesField() { return *GetNativePointerField<TArray<FDynamicMeshMetaInfo>*>(this, "FStreamingManagerMesh.CachedDynamicMeshes"); }
	int& MeshPhaseField() { return *GetNativePointerField<int*>(this, "FStreamingManagerMesh.MeshPhase"); }

	// Functions

	void AddStreamingMesh(IStreamingMesh * Mesh) { NativeCall<void, IStreamingMesh *>(this, "FStreamingManagerMesh.AddStreamingMesh", Mesh); }
	void RemoveStreamingMesh(IStreamingMesh * Mesh) { NativeCall<void, IStreamingMesh *>(this, "FStreamingManagerMesh.RemoveStreamingMesh", Mesh); }
	void UpdateResourceStreaming(float DeltaTime, bool bProcessEverything) { NativeCall<void, float, bool>(this, "FStreamingManagerMesh.UpdateResourceStreaming", DeltaTime, bProcessEverything); }
};

