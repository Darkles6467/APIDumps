#pragma once

#include "BaseDeclarations.h"
struct FAsyncBufferFillData
{
	char __padding[0xc0L];
	FMatrix& LocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FAsyncBufferFillData.LocalToWorld"); }
	FMatrix& WorldToLocalField() { return *GetNativePointerField<FMatrix*>(this, "FAsyncBufferFillData.WorldToLocal"); }
	int& VertexCountField() { return *GetNativePointerField<int*>(this, "FAsyncBufferFillData.VertexCount"); }
	int& VertexSizeField() { return *GetNativePointerField<int*>(this, "FAsyncBufferFillData.VertexSize"); }
	void * VertexDataField() { return GetNativePointerField<void *>(this, "FAsyncBufferFillData.VertexData"); }
	int& IndexCountField() { return *GetNativePointerField<int*>(this, "FAsyncBufferFillData.IndexCount"); }
	void * IndexDataField() { return GetNativePointerField<void *>(this, "FAsyncBufferFillData.IndexData"); }
	int& OutTriangleCountField() { return *GetNativePointerField<int*>(this, "FAsyncBufferFillData.OutTriangleCount"); }
	void * DynamicParameterDataField() { return GetNativePointerField<void *>(this, "FAsyncBufferFillData.DynamicParameterData"); }
};

