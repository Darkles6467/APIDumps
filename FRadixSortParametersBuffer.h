#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FRadixSortParametersBuffer : FRenderResource
{
	char __padding[0x10L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FRadixSortParametersBuffer.InitRHI"); }
};

