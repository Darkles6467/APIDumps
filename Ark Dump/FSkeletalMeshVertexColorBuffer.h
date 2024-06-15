#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FSkeletalMeshVertexColorBuffer : FVertexBuffer
{
	char __padding[0x18L];
	FSkeletalMeshVertexDataInterface * VertexDataField() { return GetNativePointerField<FSkeletalMeshVertexDataInterface *>(this, "FSkeletalMeshVertexColorBuffer.VertexData"); }
	char * DataField() { return GetNativePointerField<char *>(this, "FSkeletalMeshVertexColorBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexColorBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshVertexColorBuffer.NumVertices"); }

	// Functions

	void AllocateData() { NativeCall<void>(this, "FSkeletalMeshVertexColorBuffer.AllocateData"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FSkeletalMeshVertexColorBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FSkeletalMeshVertexColorBuffer.InitRHI"); }
};

