#pragma once

#include "BaseDeclarations.h"
struct VkBufferMemoryRequirementsInfo2
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkBufferMemoryRequirementsInfo2.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkBufferMemoryRequirementsInfo2.pNext"); }
	struct VkBuffer_T * bufferField() { return GetNativePointerField<struct VkBuffer_T *>(this, "VkBufferMemoryRequirementsInfo2.buffer"); }
};

