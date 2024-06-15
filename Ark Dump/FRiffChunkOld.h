#pragma once

#include "BaseDeclarations.h"
struct FRiffChunkOld
{
	char __padding[0x8L];
	unsigned int& ChunkIDField() { return *GetNativePointerField<unsigned int*>(this, "FRiffChunkOld.ChunkID"); }
	unsigned int& ChunkLenField() { return *GetNativePointerField<unsigned int*>(this, "FRiffChunkOld.ChunkLen"); }
};

