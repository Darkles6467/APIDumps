#pragma once

#include "BaseDeclarations.h"
#include "FRHIIndexBuffer.h"
#include "FRHIResource.h"

struct FVulkanIndexBuffer : FRHIIndexBuffer
{
	char __padding[0x70L];
	VkIndexType& IndexTypeField() { return *GetNativePointerField<VkIndexType*>(this, "FVulkanIndexBuffer.IndexType"); }

	// Functions

};

