#pragma once

#include "BaseDeclarations.h"
struct FVulkanPipeline
{
	char __padding[0x20L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanPipeline.Device"); }
	struct VkPipeline_T * PipelineField() { return GetNativePointerField<struct VkPipeline_T *>(this, "FVulkanPipeline.Pipeline"); }

	// Functions

};

