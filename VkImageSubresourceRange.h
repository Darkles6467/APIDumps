#pragma once

#include "BaseDeclarations.h"
struct VkImageSubresourceRange
{
	char __padding[0x14L];
	unsigned int& aspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceRange.aspectMask"); }
	unsigned int& baseMipLevelField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceRange.baseMipLevel"); }
	unsigned int& levelCountField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceRange.levelCount"); }
	unsigned int& baseArrayLayerField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceRange.baseArrayLayer"); }
	unsigned int& layerCountField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceRange.layerCount"); }
};

