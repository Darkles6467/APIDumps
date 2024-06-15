#pragma once

#include "BaseDeclarations.h"
struct FCompressedGrowableBuffer
{
	char __padding[0x58L];
	int& MaxPendingBufferSizeField() { return *GetNativePointerField<int*>(this, "FCompressedGrowableBuffer.MaxPendingBufferSize"); }
	ECompressionFlags& CompressionFlagsField() { return *GetNativePointerField<ECompressionFlags*>(this, "FCompressedGrowableBuffer.CompressionFlags"); }
	int& CurrentOffsetField() { return *GetNativePointerField<int*>(this, "FCompressedGrowableBuffer.CurrentOffset"); }
	int& NumEntriesField() { return *GetNativePointerField<int*>(this, "FCompressedGrowableBuffer.NumEntries"); }
	TArray<unsigned char>& CompressedBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCompressedGrowableBuffer.CompressedBuffer"); }
	TArray<unsigned char>& PendingCompressionBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCompressedGrowableBuffer.PendingCompressionBuffer"); }
	TArray<unsigned char>& DecompressedBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCompressedGrowableBuffer.DecompressedBuffer"); }
	int& DecompressedBufferBookKeepingInfoIndexField() { return *GetNativePointerField<int*>(this, "FCompressedGrowableBuffer.DecompressedBufferBookKeepingInfoIndex"); }
	TArray<FCompressedGrowableBuffer::FBufferBookKeeping>& BookKeepingInfoField() { return *GetNativePointerField<TArray<FCompressedGrowableBuffer::FBufferBookKeeping>*>(this, "FCompressedGrowableBuffer.BookKeepingInfo"); }
};

