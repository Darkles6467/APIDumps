#pragma once

#include "BaseDeclarations.h"
struct FCompressedVisibilityChunk
{
	char __padding[0x18L];
	bool& bCompressedField() { return *GetNativePointerField<bool*>(this, "FCompressedVisibilityChunk.bCompressed"); }
	int& UncompressedSizeField() { return *GetNativePointerField<int*>(this, "FCompressedVisibilityChunk.UncompressedSize"); }
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCompressedVisibilityChunk.Data"); }
};

