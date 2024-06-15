#pragma once

#include "BaseDeclarations.h"
struct VkSparseImageMemoryBind
{
	char __padding[0x40L];
	VkImageSubresource& subresourceField() { return *GetNativePointerField<VkImageSubresource*>(this, "VkSparseImageMemoryBind.subresource"); }
	VkOffset3D& offsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkSparseImageMemoryBind.offset"); }
	VkExtent3D& extentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkSparseImageMemoryBind.extent"); }
	struct VkDeviceMemory_T * memoryField() { return GetNativePointerField<struct VkDeviceMemory_T *>(this, "VkSparseImageMemoryBind.memory"); }
	unsigned __int64& memoryOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseImageMemoryBind.memoryOffset"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageMemoryBind.flags"); }
};

