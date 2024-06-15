#pragma once

#include "BaseDeclarations.h"
#include "FDynamicPrimitiveResource.h"

struct FDynamicMeshVertexFactory : FDynamicPrimitiveResource
{
	char __padding[0x3f0L];

	// Functions

	void ReleasePrimitiveResource() { NativeCall<void>(this, "FDynamicMeshVertexFactory.ReleasePrimitiveResource"); }
};

