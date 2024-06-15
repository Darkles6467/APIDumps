#pragma once

#include "BaseDeclarations.h"
struct VkMemoryAllocateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkMemoryAllocateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkMemoryAllocateInfo.pNext"); }
	unsigned __int64& allocationSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMemoryAllocateInfo.allocationSize"); }
	unsigned int& memoryTypeIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryAllocateInfo.memoryTypeIndex"); }
};

