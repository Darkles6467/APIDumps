#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FParticleTileVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleTileVertexDeclaration.InitRHI"); }
};

