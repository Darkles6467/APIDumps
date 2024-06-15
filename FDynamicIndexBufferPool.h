#pragma once

#include "BaseDeclarations.h"
struct FDynamicIndexBufferPool
{
	char __padding[0x20L];
	TIndirectArray<FDynamicIndexBuffer>& IndexBuffersField() { return *GetNativePointerField<TIndirectArray<FDynamicIndexBuffer>*>(this, "FDynamicIndexBufferPool.IndexBuffers"); }
	FDynamicIndexBuffer * CurrentIndexBufferField() { return GetNativePointerField<FDynamicIndexBuffer *>(this, "FDynamicIndexBufferPool.CurrentIndexBuffer"); }
	unsigned int& BufferStrideField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicIndexBufferPool.BufferStride"); }
};

