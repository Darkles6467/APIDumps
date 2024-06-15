#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FDynamicVertexBuffer : FVertexBuffer
{
	char __padding[0x18L];
	char * MappedBufferField() { return GetNativePointerField<char *>(this, "FDynamicVertexBuffer.MappedBuffer"); }
	char * DeferredBufferField() { return GetNativePointerField<char *>(this, "FDynamicVertexBuffer.DeferredBuffer"); }
	unsigned int& BufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicVertexBuffer.BufferSize"); }
	unsigned int& AllocatedByteCountField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicVertexBuffer.AllocatedByteCount"); }

	// Functions

	void CopyDeferred() { NativeCall<void>(this, "FDynamicVertexBuffer.CopyDeferred"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FDynamicVertexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FDynamicVertexBuffer.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FDynamicVertexBuffer.ReleaseRHI"); }
};

