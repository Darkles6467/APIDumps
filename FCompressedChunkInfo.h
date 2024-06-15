#pragma once

#include "BaseDeclarations.h"
struct FCompressedChunkInfo
{
	char __padding[0x10L];
	__int64& CompressedSizeField() { return *GetNativePointerField<__int64*>(this, "FCompressedChunkInfo.CompressedSize"); }
	__int64& UncompressedSizeField() { return *GetNativePointerField<__int64*>(this, "FCompressedChunkInfo.UncompressedSize"); }
};

