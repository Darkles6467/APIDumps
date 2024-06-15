#pragma once

#include "BaseDeclarations.h"
struct FVulkanPipelineGraphicsKey
{
	char __padding[0x10L];
	FieldArray<unsigned __int64[2], 642> KeyField() { return {this, "FVulkanPipelineGraphicsKey.Key"}; }
};

