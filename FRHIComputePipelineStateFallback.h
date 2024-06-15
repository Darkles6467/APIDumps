#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIComputePipelineState : FRHIResource
{
};

struct FRHIComputePipelineStateFallback : FRHIComputePipelineState
{
	char __padding[0x8L];

	// Functions

};

