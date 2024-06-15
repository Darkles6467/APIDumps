#pragma once

#include "BaseDeclarations.h"
struct FCompression
{

	// Functions

	static bool CompressMemory(ECompressionFlags Flags, void * CompressedBuffer, int * CompressedSize, const void * UncompressedBuffer, int UncompressedSize) { return NativeCall<bool, ECompressionFlags, void *, int *, const void *, int>(nullptr, "FCompression.CompressMemory", Flags, CompressedBuffer, CompressedSize, UncompressedBuffer, UncompressedSize); }
	static int CompressMemoryBound(ECompressionFlags Flags, int UncompressedSize) { return NativeCall<int, ECompressionFlags, int>(nullptr, "FCompression.CompressMemoryBound", Flags, UncompressedSize); }
	static bool UncompressMemory(ECompressionFlags Flags, void * UncompressedBuffer, int UncompressedSize, const void * CompressedBuffer, int CompressedSize, bool bIsSourcePadded) { return NativeCall<bool, ECompressionFlags, void *, int, const void *, int, bool>(nullptr, "FCompression.UncompressMemory", Flags, UncompressedBuffer, UncompressedSize, CompressedBuffer, CompressedSize, bIsSourcePadded); }
};

