#pragma once

#include "BaseDeclarations.h"
struct VkImageSubresource
{
	char __padding[0xcL];
	unsigned int& aspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresource.aspectMask"); }
	unsigned int& mipLevelField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresource.mipLevel"); }
	unsigned int& arrayLayerField() { return *GetNativePointerField<unsigned int*>(this, "VkImageSubresource.arrayLayer"); }
};

