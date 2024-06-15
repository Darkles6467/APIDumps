#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FParticleSortBuffers : FRenderResource
{
	char __padding[0x88L];
	int& BufferSizeField() { return *GetNativePointerField<int*>(this, "FParticleSortBuffers.BufferSize"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleSortBuffers.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FParticleSortBuffers.ReleaseRHI"); }
};

