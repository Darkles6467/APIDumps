#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FGPUSpriteVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGPUSpriteVertexDeclaration.InitRHI"); }
};

