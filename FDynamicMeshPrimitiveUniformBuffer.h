#pragma once

#include "BaseDeclarations.h"
#include "FDynamicPrimitiveResource.h"

struct FDynamicMeshPrimitiveUniformBuffer : FDynamicPrimitiveResource
{
	char __padding[0x48L];

	// Functions

	void InitPrimitiveResource() { NativeCall<void>(this, "FDynamicMeshPrimitiveUniformBuffer.InitPrimitiveResource"); }
};

