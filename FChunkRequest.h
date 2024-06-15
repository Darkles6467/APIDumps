#pragma once

#include "BaseDeclarations.h"
struct FChunkRequest
{
	char __padding[0x28L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FChunkRequest.Index"); }
	__int64& OffsetField() { return *GetNativePointerField<__int64*>(this, "FChunkRequest.Offset"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FChunkRequest.Size"); }
	FChunkBuffer * BufferField() { return GetNativePointerField<FChunkBuffer *>(this, "FChunkRequest.Buffer"); }
	FThreadSafeCounter& IsTrustedField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FChunkRequest.IsTrusted"); }
	FThreadSafeCounter& RefCountField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FChunkRequest.RefCount"); }
};

