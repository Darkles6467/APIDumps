#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSimpleElementVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FSimpleElementVertexDeclaration.InitRHI"); }
};

