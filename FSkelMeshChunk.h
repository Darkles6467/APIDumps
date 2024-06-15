#pragma once

#include "BaseDeclarations.h"
struct FSkelMeshChunk
{
	char __padding[0x78L];
	unsigned int& BaseVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FSkelMeshChunk.BaseVertexIndex"); }
	TArray<FRigidSkinVertex>& RigidVerticesField() { return *GetNativePointerField<TArray<FRigidSkinVertex>*>(this, "FSkelMeshChunk.RigidVertices"); }
	TArray<FSoftSkinVertex>& SoftVerticesField() { return *GetNativePointerField<TArray<FSoftSkinVertex>*>(this, "FSkelMeshChunk.SoftVertices"); }
	TArray<FApexClothPhysToRenderVertData>& ApexClothMappingDataField() { return *GetNativePointerField<TArray<FApexClothPhysToRenderVertData>*>(this, "FSkelMeshChunk.ApexClothMappingData"); }
	TArray<FVector>& PhysicalMeshVerticesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FSkelMeshChunk.PhysicalMeshVertices"); }
	TArray<FVector>& PhysicalMeshNormalsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FSkelMeshChunk.PhysicalMeshNormals"); }
	TArray<unsigned short>& BoneMapField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FSkelMeshChunk.BoneMap"); }
	int& NumRigidVerticesField() { return *GetNativePointerField<int*>(this, "FSkelMeshChunk.NumRigidVertices"); }
	int& NumSoftVerticesField() { return *GetNativePointerField<int*>(this, "FSkelMeshChunk.NumSoftVertices"); }
	int& MaxBoneInfluencesField() { return *GetNativePointerField<int*>(this, "FSkelMeshChunk.MaxBoneInfluences"); }
	__int16& CorrespondClothAssetIndexField() { return *GetNativePointerField<__int16*>(this, "FSkelMeshChunk.CorrespondClothAssetIndex"); }
	__int16& ClothAssetSubmeshIndexField() { return *GetNativePointerField<__int16*>(this, "FSkelMeshChunk.ClothAssetSubmeshIndex"); }
};

