#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FTileMesh : FRenderResource
{
	char __padding[0xb0L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FTileMesh.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FTileMesh.ReleaseRHI"); }
};

