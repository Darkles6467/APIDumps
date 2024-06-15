#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FBoneDataVertexBuffer : FRenderResource
{
	char __padding[0x20L];
	FBoneBuffer& BoneBufferField() { return *GetNativePointerField<FBoneBuffer*>(this, "FBoneDataVertexBuffer.BoneBuffer"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FBoneDataVertexBuffer.SizeX"); }
	unsigned int& AllocSizeField() { return *GetNativePointerField<unsigned int*>(this, "FBoneDataVertexBuffer.AllocSize"); }
	void * AllocBlockField() { return GetNativePointerField<void *>(this, "FBoneDataVertexBuffer.AllocBlock"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FBoneDataVertexBuffer.InitDynamicRHI"); }
	float * LockData() { return NativeCall<float *>(this, "FBoneDataVertexBuffer.LockData"); }
	void ReleaseRHI() { NativeCall<void>(this, "FBoneDataVertexBuffer.ReleaseRHI"); }
	void UnlockData() { NativeCall<void>(this, "FBoneDataVertexBuffer.UnlockData"); }
};

