#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FParticleIndexBuffer : FIndexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleIndexBuffer.InitRHI"); }
};

