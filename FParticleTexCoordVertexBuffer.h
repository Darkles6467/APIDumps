#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FParticleTexCoordVertexBuffer : FVertexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleTexCoordVertexBuffer.InitRHI"); }
};

