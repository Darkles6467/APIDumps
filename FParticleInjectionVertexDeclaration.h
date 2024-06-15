#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FParticleInjectionVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleInjectionVertexDeclaration.InitRHI"); }
};

