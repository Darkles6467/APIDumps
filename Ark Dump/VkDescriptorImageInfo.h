#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorImageInfo
{
	char __padding[0x18L];
	struct VkSampler_T * samplerField() { return GetNativePointerField<struct VkSampler_T *>(this, "VkDescriptorImageInfo.sampler"); }
	struct VkImageView_T * imageViewField() { return GetNativePointerField<struct VkImageView_T *>(this, "VkDescriptorImageInfo.imageView"); }
	VkImageLayout& imageLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkDescriptorImageInfo.imageLayout"); }
};

