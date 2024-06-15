#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncUncompress : FNonAbandonableTask
{
	char __padding[0x28L];
	void * UncompressedBufferField() { return GetNativePointerField<void *>(this, "FAsyncUncompress.UncompressedBuffer"); }
	int& UncompressedSizeField() { return *GetNativePointerField<int*>(this, "FAsyncUncompress.UncompressedSize"); }
	void * CompressedBufferField() { return GetNativePointerField<void *>(this, "FAsyncUncompress.CompressedBuffer"); }
	int& CompressedSizeField() { return *GetNativePointerField<int*>(this, "FAsyncUncompress.CompressedSize"); }
	ECompressionFlags& FlagsField() { return *GetNativePointerField<ECompressionFlags*>(this, "FAsyncUncompress.Flags"); }
	bool& bIsSourceMemoryPaddedField() { return *GetNativePointerField<bool*>(this, "FAsyncUncompress.bIsSourceMemoryPadded"); }
};

