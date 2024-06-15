#pragma once

#include "BaseDeclarations.h"
struct VkImageSubresourceLayers
{
	char __padding[0x10L];
	unsigned int& aspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceLayers.aspectMask"); }
	unsigned int& mipLevelField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceLayers.mipLevel"); }
	unsigned int& baseArrayLayerField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceLayers.baseArrayLayer"); }
	unsigned int& layerCountField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresourceLayers.layerCount"); }
};

