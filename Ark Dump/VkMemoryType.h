#pragma once

#include "BaseDeclarations.h"
struct VkMemoryType
{
	char __padding[0x8L];
	unsigned int& propertyFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryType.propertyFlags"); }
	unsigned int& heapIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryType.heapIndex"); }
};

