#pragma once

#include "BaseDeclarations.h"
struct FVulkanTextureView
{
	char __padding[0x10L];
	struct VkImageView_T * ViewField() { return GetNativePointerField<struct VkImageView_T *>(this, "FVulkanTextureView.View"); }
	struct VkImage_T * ImageField() { return GetNativePointerField<struct VkImage_T *>(this, "FVulkanTextureView.Image"); }

	// Functions

	void Create(FVulkanDevice * Device, struct VkImage_T * InImage, VkImageViewType ViewType, unsigned int AspectFlags, EPixelFormat UEFormat, VkFormat Format, unsigned int FirstMip, unsigned int NumMips, unsigned int ArraySliceIndex, unsigned int NumArraySlices) { NativeCall<void, FVulkanDevice *, struct VkImage_T *, VkImageViewType, unsigned int, EPixelFormat, VkFormat, unsigned int, unsigned int, unsigned int, unsigned int>(this, "FVulkanTextureView.Create", Device, InImage, ViewType, AspectFlags, UEFormat, Format, FirstMip, NumMips, ArraySliceIndex, NumArraySlices); }
	static struct VkImageView_T * StaticCreate(FVulkanDevice * Device, struct VkImage_T * InImage, VkImageViewType ViewType, unsigned int AspectFlags, EPixelFormat UEFormat, VkFormat Format, unsigned int FirstMip, unsigned int NumMips, unsigned int ArraySliceIndex, unsigned int NumArraySlices, bool bUseIdentitySwizzle, const FSamplerYcbcrConversionInitializer * ConversionInitializer) { return NativeCall<struct VkImageView_T *, FVulkanDevice *, struct VkImage_T *, VkImageViewType, unsigned int, EPixelFormat, VkFormat, unsigned int, unsigned int, unsigned int, unsigned int, bool, const FSamplerYcbcrConversionInitializer *>(nullptr, "FVulkanTextureView.StaticCreate", Device, InImage, ViewType, AspectFlags, UEFormat, Format, FirstMip, NumMips, ArraySliceIndex, NumArraySlices, bUseIdentitySwizzle, ConversionInitializer); }
};

