#pragma once

#include "BaseDeclarations.h"
struct FVulkanImageLayout
{
	char __padding[0x20L];
	unsigned int& NumMipsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanImageLayout.NumMips"); }
	unsigned int& NumLayersField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanImageLayout.NumLayers"); }
	VkImageLayout& MainLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "FVulkanImageLayout.MainLayout"); }
	TArray<enum VkImageLayout>& SubresLayoutsField() { return *GetNativePointerField<TArray<enum VkImageLayout>*>(this, "FVulkanImageLayout.SubresLayouts"); }

	// Functions

	void Set(VkImageLayout Layout, const VkImageSubresourceRange * SubresourceRange) { NativeCall<void, VkImageLayout, const VkImageSubresourceRange *>(this, "FVulkanImageLayout.Set", Layout, SubresourceRange); }
};

