#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FSkeletalMeshVertexBuffer : FVertexBuffer
{
	char __padding[0x40L];
	bool& bInfluencesByteSwappedField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshVertexBuffer.bInfluencesByteSwapped"); }
	bool& bUseFullPrecisionUVsField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshVertexBuffer.bUseFullPrecisionUVs"); }
	bool& bNeedsCPUAccessField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshVertexBuffer.bNeedsCPUAccess"); }
	bool& bProcessedPackedPositionsField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshVertexBuffer.bProcessedPackedPositions"); }
	bool& bExtraBoneInfluencesField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshVertexBuffer.bExtraBoneInfluences"); }
	FSkeletalMeshVertexDataInterface * VertexDataField() { return GetNativePointerField<FSkeletalMeshVertexDataInterface *>(this, "FSkeletalMeshVertexBuffer.VertexData"); }
	char * DataField() { return GetNativePointerField<char *>(this, "FSkeletalMeshVertexBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexBuffer.NumVertices"); }
	unsigned int& NumTexCoordsField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexBuffer.NumTexCoords"); }
	FVector& MeshOriginField() { return *GetNativePointerField<FVector*>(this, "FSkeletalMeshVertexBuffer.MeshOrigin"); }
	FVector& MeshExtensionField() { return *GetNativePointerField<FVector*>(this, "FSkeletalMeshVertexBuffer.MeshExtension"); }

	// Functions

	void AllocateData() { NativeCall<void>(this, "FSkeletalMeshVertexBuffer.AllocateData"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FSkeletalMeshVertexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FSkeletalMeshVertexBuffer.InitRHI"); }
};

