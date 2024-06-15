#pragma once

#include "BaseDeclarations.h"
struct FOcclusionQueryBatcher
{
	char __padding[0x28L];
	FOcclusionQueryBatcher::FOcclusionBatch * CurrentBatchOcclusionQueryField() { return GetNativePointerField<FOcclusionQueryBatcher::FOcclusionBatch *>(this, "FOcclusionQueryBatcher.CurrentBatchOcclusionQuery"); }
	const unsigned int& MaxBatchedPrimitivesField() { return *GetNativePointerField<const unsigned int*>(this, "FOcclusionQueryBatcher.MaxBatchedPrimitives"); }
	unsigned int& NumBatchedPrimitivesField() { return *GetNativePointerField<unsigned int*>(this, "FOcclusionQueryBatcher.NumBatchedPrimitives"); }
	FRenderQueryPool * OcclusionQueryPoolField() { return GetNativePointerField<FRenderQueryPool *>(this, "FOcclusionQueryBatcher.OcclusionQueryPool"); }

	// Functions

	void Flush(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FOcclusionQueryBatcher.Flush", RHICmdList); }
};

