#pragma once

#include "BaseDeclarations.h"
struct FRiffWaveHeader
{
	char __padding[0xcL];
	unsigned int& rIDField() { return *GetNativePointerField<unsigned int*>(this, "FRiffWaveHeader.rID"); }
	unsigned int& ChunkLenField() { return *GetNativePointerField<unsigned int*>(this, "FRiffWaveHeader.ChunkLen"); }
	unsigned int& wIDField() { return *GetNativePointerField<unsigned int*>(this, "FRiffWaveHeader.wID"); }
};

