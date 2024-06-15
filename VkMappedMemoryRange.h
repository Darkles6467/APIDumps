#pragma once

#include "BaseDeclarations.h"
struct VkMappedMemoryRange
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkMappedMemoryRange.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkMappedMemoryRange.pNext"); }
	struct VkDeviceMemory_T * memoryField() { return GetNativePointerField<struct VkDeviceMemory_T *>(this, "VkMappedMemoryRange.memory"); }
	unsigned __int64& offsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMappedMemoryRange.offset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMappedMemoryRange.size"); }
};

