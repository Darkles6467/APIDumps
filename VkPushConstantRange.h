#pragma once

#include "BaseDeclarations.h"
struct VkPushConstantRange
{
	char __padding[0xcL];
	unsigned int& stageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPushConstantRange.stageFlags"); }
	unsigned int& offsetField() { return *GetNativePointerField<unsigned int*>(this, "VkPushConstantRange.offset"); }
	unsigned int& sizeField() { return *GetNativePointerField<unsigned int*>(this, "VkPushConstantRange.size"); }
};

