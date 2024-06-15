#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FSkeletalMeshVertexAPEXClothBuffer : FVertexBuffer
{
	char __padding[0x18L];
	FSkeletalMeshVertexDataInterface * VertexDataField() { return GetNativePointerField<FSkeletalMeshVertexDataInterface *>(this, "FSkeletalMeshVertexAPEXClothBuffer.VertexData"); }
	char * DataField() { return GetNativePointerField<char *>(this, "FSkeletalMeshVertexAPEXClothBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexAPEXClothBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexAPEXClothBuffer.NumVertices"); }

	// Functions

	void AllocateData() { NativeCall<void>(this, "FSkeletalMeshVertexAPEXClothBuffer.AllocateData"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FSkeletalMeshVertexAPEXClothBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FSkeletalMeshVertexAPEXClothBuffer.InitRHI"); }
};

