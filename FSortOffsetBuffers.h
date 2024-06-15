#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSortOffsetBuffers : FRenderResource
{
	char __padding[0x30L];

	// Functions

	void DumpOffsets(int BufferIndex) { NativeCall<void, int>(this, "FSortOffsetBuffers.DumpOffsets", BufferIndex); }
	void GetOffsets(TArray<unsigned int> * OutOffsets, int BufferIndex) { NativeCall<void, TArray<unsigned int> *, int>(this, "FSortOffsetBuffers.GetOffsets", OutOffsets, BufferIndex); }
	void InitRHI() { NativeCall<void>(this, "FSortOffsetBuffers.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FSortOffsetBuffers.ReleaseRHI"); }
};

