#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshResource
{
	char __padding[0x48L];
	TArray<FSkeletalMeshStreamingData>& LODStreamingDataField() { return *GetNativePointerField<TArray<FSkeletalMeshStreamingData>*>(this, "FSkeletalMeshResource.LODStreamingData"); }
	TArray<FSkeletalMeshLODInfo>& LODStreamingInfoField() { return *GetNativePointerField<TArray<FSkeletalMeshLODInfo>*>(this, "FSkeletalMeshResource.LODStreamingInfo"); }
	TIndirectArray<FStaticLODModel>& LODModelsField() { return *GetNativePointerField<TIndirectArray<FStaticLODModel>*>(this, "FSkeletalMeshResource.LODModels"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "FSkeletalMeshResource.LastRenderTime"); }
	float& StreamDistanceField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshResource.StreamDistance"); }
	unsigned int& StreamDistanceFrameField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshResource.StreamDistanceFrame"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshResource.bInitialized"); }

	// Functions

	int GetMaxBonesPerChunk() { return NativeCall<int>(this, "FSkeletalMeshResource.GetMaxBonesPerChunk"); }
	void InitResources(bool bNeedsVertexColors) { NativeCall<void, bool>(this, "FSkeletalMeshResource.InitResources", bNeedsVertexColors); }
	void ReleaseResources() { NativeCall<void>(this, "FSkeletalMeshResource.ReleaseResources"); }
	bool RequiresCPUSkinning(ERHIFeatureLevel::Type FeatureLevel) { return NativeCall<bool, ERHIFeatureLevel::Type>(this, "FSkeletalMeshResource.RequiresCPUSkinning", FeatureLevel); }
	void Serialize(FArchive * Ar, USkeletalMesh * Owner) { NativeCall<void, FArchive *, USkeletalMesh *>(this, "FSkeletalMeshResource.Serialize", Ar, Owner); }
};

