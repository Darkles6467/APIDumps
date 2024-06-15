#pragma once

#include "BaseDeclarations.h"
struct VkSpecializationMapEntry
{
	char __padding[0x10L];
	unsigned int& constantIDField() { return *GetNativePointerField<unsigned int*>(this, "VkSpecializationMapEntry.constantID"); }
	unsigned int& offsetField() { return *GetNativePointerField<unsigned int*>(this, "VkSpecializationMapEntry.offset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSpecializationMapEntry.size"); }
};

