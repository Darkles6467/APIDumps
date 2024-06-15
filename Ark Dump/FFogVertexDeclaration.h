#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FFogVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FFogVertexDeclaration.InitRHI"); }
};

