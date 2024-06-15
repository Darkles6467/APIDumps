#pragma once

#include "BaseDeclarations.h"
struct FVulkanTypedDescriptorPoolSet
{
	char __padding[0x28L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanTypedDescriptorPoolSet.Device"); }
	const FVulkanDescriptorSetsLayout * LayoutField() { return GetNativePointerField<const FVulkanDescriptorSetsLayout *>(this, "FVulkanTypedDescriptorPoolSet.Layout"); }
	unsigned int& PoolsCountField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanTypedDescriptorPoolSet.PoolsCount"); }
	TList<FVulkanDescriptorPool *> * PoolListHeadField() { return GetNativePointerField<TList<FVulkanDescriptorPool *> *>(this, "FVulkanTypedDescriptorPoolSet.PoolListHead"); }
	TList<FVulkanDescriptorPool *> * PoolListCurrentField() { return GetNativePointerField<TList<FVulkanDescriptorPool *> *>(this, "FVulkanTypedDescriptorPoolSet.PoolListCurrent"); }

	// Functions

	bool AllocateDescriptorSets(const FVulkanDescriptorSetsLayout * InLayout, VkDescriptorSet_T ** OutSets) { return NativeCall<bool, const FVulkanDescriptorSetsLayout *, VkDescriptorSet_T **>(this, "FVulkanTypedDescriptorPoolSet.AllocateDescriptorSets", InLayout, OutSets); }
	FVulkanDescriptorPool * PushNewPool() { return NativeCall<FVulkanDescriptorPool *>(this, "FVulkanTypedDescriptorPoolSet.PushNewPool"); }
	void Reset() { NativeCall<void>(this, "FVulkanTypedDescriptorPoolSet.Reset"); }
};

