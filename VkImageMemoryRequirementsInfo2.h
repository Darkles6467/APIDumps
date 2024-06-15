#pragma once

#include "BaseDeclarations.h"
struct VkImageMemoryRequirementsInfo2
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkImageMemoryRequirementsInfo2.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkImageMemoryRequirementsInfo2.pNext"); }
	struct VkImage_T * imageField() { return GetNativePointerField<struct VkImage_T *>(this, "VkImageMemoryRequirementsInfo2.image"); }
};

