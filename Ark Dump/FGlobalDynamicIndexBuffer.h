#pragma once

#include "BaseDeclarations.h"
struct FGlobalDynamicIndexBuffer
{
	char __padding[0x10L];
	FieldArray<FDynamicIndexBufferPool *, 2> PoolsField() { return {this, "FGlobalDynamicIndexBuffer.Pools"}; }

	// Functions

	FGlobalDynamicIndexBuffer::FAllocation * Allocate(FGlobalDynamicIndexBuffer::FAllocation * result, unsigned int NumIndices, unsigned int IndexStride) { return NativeCall<FGlobalDynamicIndexBuffer::FAllocation *, FGlobalDynamicIndexBuffer::FAllocation *, unsigned int, unsigned int>(this, "FGlobalDynamicIndexBuffer.Allocate", result, NumIndices, IndexStride); }
	void Commit() { NativeCall<void>(this, "FGlobalDynamicIndexBuffer.Commit"); }
	static FGlobalDynamicIndexBuffer * Get() { return NativeCall<FGlobalDynamicIndexBuffer *>(nullptr, "FGlobalDynamicIndexBuffer.Get"); }
};

