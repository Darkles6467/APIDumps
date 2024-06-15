#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorPool
{
	char __padding[0x28L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanDescriptorPool.Device"); }
	unsigned int& MaxDescriptorSetsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorPool.MaxDescriptorSets"); }
	unsigned int& NumAllocatedDescriptorSetsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorPool.NumAllocatedDescriptorSets"); }
	unsigned int& PeakAllocatedDescriptorSetsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorPool.PeakAllocatedDescriptorSets"); }
	const FVulkanDescriptorSetsLayout * LayoutField() { return GetNativePointerField<const FVulkanDescriptorSetsLayout *>(this, "FVulkanDescriptorPool.Layout"); }
	struct VkDescriptorPool_T * DescriptorPoolField() { return GetNativePointerField<struct VkDescriptorPool_T *>(this, "FVulkanDescriptorPool.DescriptorPool"); }

	// Functions

};

