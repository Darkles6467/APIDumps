#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FTriangleMesh : FRenderResource
{
	char __padding[0xb0L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FTriangleMesh.InitRHI"); }
};

