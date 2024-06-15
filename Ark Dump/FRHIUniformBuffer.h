#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIUniformBuffer : FRHIResource
{
	char __padding[0x8L];
};

