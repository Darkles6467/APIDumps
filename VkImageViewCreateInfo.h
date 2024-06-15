#pragma once

#include "BaseDeclarations.h"
struct VkImageViewCreateInfo
{
	char __padding[0x50L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkImageViewCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkImageViewCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkImageViewCreateInfo.flags"); }
	struct VkImage_T * imageField() { return GetNativePointerField<struct VkImage_T *>(this, "VkImageViewCreateInfo.image"); }
	VkImageViewType& viewTypeField() { return *GetNativePointerField<VkImageViewType*>(this, "VkImageViewCreateInfo.viewType"); }
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkImageViewCreateInfo.format"); }
	VkComponentMapping& componentsField() { return *GetNativePointerField<VkComponentMapping*>(this, "VkImageViewCreateInfo.components"); }
	VkImageSubresourceRange& subresourceRangeField() { return *GetNativePointerField<VkImageSubresourceRange*>(this, "VkImageViewCreateInfo.subresourceRange"); }
};

