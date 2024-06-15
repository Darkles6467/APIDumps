#pragma once

#include "BaseDeclarations.h"
struct FGlobalDynamicVertexBuffer
{
	char __padding[0x8L];
	FDynamicVertexBufferPool * PoolField() { return GetNativePointerField<FDynamicVertexBufferPool *>(this, "FGlobalDynamicVertexBuffer.Pool"); }

	// Functions

	FGlobalDynamicVertexBuffer::FAllocation * Allocate(FGlobalDynamicVertexBuffer::FAllocation * result, unsigned int SizeInBytes, bool bDeferLock) { return NativeCall<FGlobalDynamicVertexBuffer::FAllocation *, FGlobalDynamicVertexBuffer::FAllocation *, unsigned int, bool>(this, "FGlobalDynamicVertexBuffer.Allocate", result, SizeInBytes, bDeferLock); }
	void Commit() { NativeCall<void>(this, "FGlobalDynamicVertexBuffer.Commit"); }
	static FGlobalDynamicVertexBuffer * Get() { return NativeCall<FGlobalDynamicVertexBuffer *>(nullptr, "FGlobalDynamicVertexBuffer.Get"); }
};

