#pragma once

#include "BaseDeclarations.h"
struct FLoadedAudioChunk
{
	char __padding[0x18L];
	char * DataField() { return GetNativePointerField<char *>(this, "FLoadedAudioChunk.Data"); }
	int& DataSizeField() { return *GetNativePointerField<int*>(this, "FLoadedAudioChunk.DataSize"); }
	int& MemorySizeField() { return *GetNativePointerField<int*>(this, "FLoadedAudioChunk.MemorySize"); }
	unsigned int& IndexField() { return *GetNativePointerField<unsigned int*>(this, "FLoadedAudioChunk.Index"); }
};

