#pragma once

#include "BaseDeclarations.h"
struct FFileCompressionHelper
{
	char __padding[0x20L];
	TArray<FCompressedChunk>& CompressedChunksField() { return *GetNativePointerField<TArray<FCompressedChunk>*>(this, "FFileCompressionHelper.CompressedChunks"); }
	FCompressedChunk& CurrentChunkField() { return *GetNativePointerField<FCompressedChunk*>(this, "FFileCompressionHelper.CurrentChunk"); }
};

