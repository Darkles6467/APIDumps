#pragma once

#include "BaseDeclarations.h"
struct FSlateElementBatch
{
	char __padding[0x60L];
	FSlateElementBatch::FBatchKey& BatchKeyField() { return *GetNativePointerField<FSlateElementBatch::FBatchKey*>(this, "FSlateElementBatch.BatchKey"); }
	const FSlateShaderResource * ShaderResourceField() { return GetNativePointerField<const FSlateShaderResource *>(this, "FSlateElementBatch.ShaderResource"); }
	unsigned int& VertexOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatch.VertexOffset"); }
	unsigned int& IndexOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatch.IndexOffset"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatch.NumVertices"); }
	unsigned int& NumIndicesField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatch.NumIndices"); }
	unsigned int& NumElementsInBatchField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatch.NumElementsInBatch"); }
	int& VertexArrayIndexField() { return *GetNativePointerField<int*>(this, "FSlateElementBatch.VertexArrayIndex"); }
	int& IndexArrayIndexField() { return *GetNativePointerField<int*>(this, "FSlateElementBatch.IndexArrayIndex"); }
};

