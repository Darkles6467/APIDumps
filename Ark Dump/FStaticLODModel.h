#pragma once

#include "BaseDeclarations.h"
struct FStaticLODModel
{
	char __padding[0x230L];
	TArray<FSkelMeshSection>& SectionsField() { return *GetNativePointerField<TArray<FSkelMeshSection>*>(this, "FStaticLODModel.Sections"); }
	TArray<FSkelMeshChunk>& ChunksField() { return *GetNativePointerField<TArray<FSkelMeshChunk>*>(this, "FStaticLODModel.Chunks"); }
	TArray<unsigned short>& ActiveBoneIndicesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FStaticLODModel.ActiveBoneIndices"); }
	TArray<unsigned short>& RequiredBonesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FStaticLODModel.RequiredBones"); }
	FMultiSizeIndexContainer& MultiSizeIndexContainerField() { return *GetNativePointerField<FMultiSizeIndexContainer*>(this, "FStaticLODModel.MultiSizeIndexContainer"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FStaticLODModel.Size"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FStaticLODModel.NumVertices"); }
	unsigned int& NumTexCoordsField() { return *GetNativePointerField<unsigned int*>(this, "FStaticLODModel.NumTexCoords"); }
	FMultiSizeIndexContainer& AdjacencyMultiSizeIndexContainerField() { return *GetNativePointerField<FMultiSizeIndexContainer*>(this, "FStaticLODModel.AdjacencyMultiSizeIndexContainer"); }
	FSkeletalMeshVertexBuffer& VertexBufferGPUSkinField() { return *GetNativePointerField<FSkeletalMeshVertexBuffer*>(this, "FStaticLODModel.VertexBufferGPUSkin"); }
	FSkeletalMeshVertexColorBuffer& ColorVertexBufferField() { return *GetNativePointerField<FSkeletalMeshVertexColorBuffer*>(this, "FStaticLODModel.ColorVertexBuffer"); }
	FSkeletalMeshVertexAPEXClothBuffer& APEXClothVertexBufferField() { return *GetNativePointerField<FSkeletalMeshVertexAPEXClothBuffer*>(this, "FStaticLODModel.APEXClothVertexBuffer"); }
	FIntBulkData& RawPointIndicesField() { return *GetNativePointerField<FIntBulkData*>(this, "FStaticLODModel.RawPointIndices"); }
	FWordBulkData& LegacyRawPointIndicesField() { return *GetNativePointerField<FWordBulkData*>(this, "FStaticLODModel.LegacyRawPointIndices"); }
	TArray<int>& MeshToImportVertexMapField() { return *GetNativePointerField<TArray<int>*>(this, "FStaticLODModel.MeshToImportVertexMap"); }
	int& MaxImportVertexField() { return *GetNativePointerField<int*>(this, "FStaticLODModel.MaxImportVertex"); }

	// Functions

	void GetChunkAndSkinType(int InVertIndex, int * OutChunkIndex, int * OutVertIndex, bool * bOutSoftVert, bool * bOutHasExtraBoneInfluences) { NativeCall<void, int, int *, int *, bool *, bool *>(this, "FStaticLODModel.GetChunkAndSkinType", InVertIndex, OutChunkIndex, OutVertIndex, bOutSoftVert, bOutHasExtraBoneInfluences); }
	int GetTotalFaces() { return NativeCall<int>(this, "FStaticLODModel.GetTotalFaces"); }
	void Serialize(FArchive * Ar, UObject * Owner, int Idx) { NativeCall<void, FArchive *, UObject *, int>(this, "FStaticLODModel.Serialize", Ar, Owner, Idx); }
};

