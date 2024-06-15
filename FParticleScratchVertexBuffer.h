#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FParticleScratchVertexBuffer : FVertexBuffer
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleScratchVertexBuffer.InitRHI"); }
};

