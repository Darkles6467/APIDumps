#pragma once

#include "BaseDeclarations.h"
struct VkMemoryRequirements2
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkMemoryRequirements2.sType"); }
	void * pNextField() { return GetNativePointerField<void *>(this, "VkMemoryRequirements2.pNext"); }
	VkMemoryRequirements& memoryRequirementsField() { return *GetNativePointerField<VkMemoryRequirements*>(this, "VkMemoryRequirements2.memoryRequirements"); }
};

