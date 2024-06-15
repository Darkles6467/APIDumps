#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FDynamicIndexBuffer : FIndexBuffer
{
	char __padding[0x18L];
	char * MappedBufferField() { return GetNativePointerField<char *>(this, "FDynamicIndexBuffer.MappedBuffer"); }
	unsigned int& BufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicIndexBuffer.BufferSize"); }
	unsigned int& AllocatedByteCountField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicIndexBuffer.AllocatedByteCount"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicIndexBuffer.Stride"); }

	// Functions

	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FDynamicIndexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FDynamicIndexBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FDynamicIndexBuffer.ReleaseRHI"); }
};

