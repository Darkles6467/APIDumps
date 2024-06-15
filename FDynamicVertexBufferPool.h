#pragma once

#include "BaseDeclarations.h"
struct FDynamicVertexBufferPool
{
	char __padding[0x18L];
	TIndirectArray<FDynamicVertexBuffer>& VertexBuffersField() { return *GetNativePointerField<TIndirectArray<FDynamicVertexBuffer>*>(this, "FDynamicVertexBufferPool.VertexBuffers"); }
	FDynamicVertexBuffer * CurrentVertexBufferField() { return GetNativePointerField<FDynamicVertexBuffer *>(this, "FDynamicVertexBufferPool.CurrentVertexBuffer"); }
};

