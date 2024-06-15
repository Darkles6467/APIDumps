#pragma once

#include "BaseDeclarations.h"
struct VkMemoryRequirements
{
	char __padding[0x18L];
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMemoryRequirements.size"); }
	unsigned __int64& alignmentField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMemoryRequirements.alignment"); }
	unsigned int& memoryTypeBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryRequirements.memoryTypeBits"); }
};

