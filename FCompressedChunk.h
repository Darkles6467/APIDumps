#pragma once

#include "BaseDeclarations.h"
struct FCompressedChunk
{
	char __padding[0x10L];
	int& UncompressedOffsetField() { return *GetNativePointerField<int*>(this, "FCompressedChunk.UncompressedOffset"); }
	int& UncompressedSizeField() { return *GetNativePointerField<int*>(this, "FCompressedChunk.UncompressedSize"); }
	int& CompressedOffsetField() { return *GetNativePointerField<int*>(this, "FCompressedChunk.CompressedOffset"); }
	int& CompressedSizeField() { return *GetNativePointerField<int*>(this, "FCompressedChunk.CompressedSize"); }

	// Functions

};

