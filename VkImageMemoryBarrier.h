#pragma once

#include "BaseDeclarations.h"
struct VkImageMemoryBarrier
{
	char __padding[0x48L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkImageMemoryBarrier.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkImageMemoryBarrier.pNext"); }
	unsigned int& srcAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkImageMemoryBarrier.srcAccessMask"); }
	unsigned int& dstAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkImageMemoryBarrier.dstAccessMask"); }
	VkImageLayout& oldLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkImageMemoryBarrier.oldLayout"); }
	VkImageLayout& newLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkImageMemoryBarrier.newLayout"); }
	unsigned int& srcQueueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkImageMemoryBarrier.srcQueueFamilyIndex"); }
	unsigned int& dstQueueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkImageMemoryBarrier.dstQueueFamilyIndex"); }
	struct VkImage_T * imageField() { return GetNativePointerField<struct VkImage_T *>(this, "VkImageMemoryBarrier.image"); }
	VkImageSubresourceRange& subresourceRangeField() { return *GetNativePointerField<VkImageSubresourceRange*>(this, "VkImageMemoryBarrier.subresourceRange"); }
};

