#pragma once

#include "BaseDeclarations.h"
struct FSlateElementBatcher
{
	char __padding[0xd0L];
	TArray<unsigned int>& VertexArrayFreeListField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSlateElementBatcher.VertexArrayFreeList"); }
	TArray<unsigned int>& IndexArrayFreeListField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSlateElementBatcher.IndexArrayFreeList"); }
	TArray<TArray<FSlateVertex>>& BatchVertexArraysField() { return *GetNativePointerField<TArray<TArray<FSlateVertex>>*>(this, "FSlateElementBatcher.BatchVertexArrays"); }
	TArray<TArray<unsigned int>>& BatchIndexArraysField() { return *GetNativePointerField<TArray<TArray<unsigned int>>*>(this, "FSlateElementBatcher.BatchIndexArrays"); }
	FSlateShaderResourceManager * ResourceManagerField() { return GetNativePointerField<FSlateShaderResourceManager *>(this, "FSlateElementBatcher.ResourceManager"); }
	FSlateFontCache * FontCacheField() { return GetNativePointerField<FSlateFontCache *>(this, "FSlateElementBatcher.FontCache"); }
	const float& PixelCenterOffsetField() { return *GetNativePointerField<const float*>(this, "FSlateElementBatcher.PixelCenterOffset"); }
	bool& bRequiresVsyncField() { return *GetNativePointerField<bool*>(this, "FSlateElementBatcher.bRequiresVsync"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.NumVertices"); }
	unsigned int& NumBatchesField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.NumBatches"); }
	unsigned int& NumLayersField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.NumLayers"); }
	unsigned int& TotalVertexMemoryField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.TotalVertexMemory"); }
	unsigned int& RequiredVertexMemoryField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.RequiredVertexMemory"); }
	unsigned int& TotalIndexMemoryField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.TotalIndexMemory"); }
	unsigned int& RequiredIndexMemoryField() { return *GetNativePointerField<unsigned int*>(this, "FSlateElementBatcher.RequiredIndexMemory"); }
};

