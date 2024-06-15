#pragma once

#include "BaseDeclarations.h"
struct VkCommandBufferAllocateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCommandBufferAllocateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkCommandBufferAllocateInfo.pNext"); }
	struct VkCommandPool_T * commandPoolField() { return GetNativePointerField<struct VkCommandPool_T *>(this, "VkCommandBufferAllocateInfo.commandPool"); }
	VkCommandBufferLevel& levelField() { return *GetNativePointerField<VkCommandBufferLevel*>(this, "VkCommandBufferAllocateInfo.level"); }
	unsigned int& commandBufferCountField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferAllocateInfo.commandBufferCount"); }
};

