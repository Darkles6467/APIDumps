#pragma once

#include "BaseDeclarations.h"
struct FVulkanGlobalUniformPool
{
	char __padding[0x550L];
	FieldArray<TArray<TRefCountPtr<FVulkanPooledUniformBuffer>>, 17> GlobalUniformBufferPoolField() { return {this, "FVulkanGlobalUniformPool.GlobalUniformBufferPool"}; }
	FieldArray<TArray<TRefCountPtr<FVulkanPooledUniformBuffer>>, 68> UsedGlobalUniformBuffersField() { return {this, "FVulkanGlobalUniformPool.UsedGlobalUniformBuffers"}; }

	// Functions

};

