#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FScreenVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FScreenVertexDeclaration.InitRHI"); }
};

