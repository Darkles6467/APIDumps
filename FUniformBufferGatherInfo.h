#pragma once

#include "BaseDeclarations.h"
struct FUniformBufferGatherInfo
{
	char __padding[0xb8L];
	FieldArray<const FVulkanShaderHeader *, 3> CodeHeadersField() { return {this, "FUniformBufferGatherInfo.CodeHeaders"}; }
};

