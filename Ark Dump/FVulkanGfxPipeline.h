#pragma once

#include "BaseDeclarations.h"
#include "FVulkanPipeline.h"

struct FVulkanGfxPipeline : FVulkanPipeline
{
	char __padding[0x2c8L];
	FVulkanVertexInputStateInfo& VertexInputStateField() { return *GetNativePointerField<FVulkanVertexInputStateInfo*>(this, "FVulkanGfxPipeline.VertexInputState"); }
	bool& bRuntimeObjectsValidField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipeline.bRuntimeObjectsValid"); }

	// Functions

};

