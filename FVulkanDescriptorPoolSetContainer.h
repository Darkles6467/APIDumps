#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorPoolSetContainer
{
	char __padding[0x60L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanDescriptorPoolSetContainer.Device"); }
	unsigned int& LastFrameUsedField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorPoolSetContainer.LastFrameUsed"); }
	bool& bUsedField() { return *GetNativePointerField<bool*>(this, "FVulkanDescriptorPoolSetContainer.bUsed"); }

	// Functions

	FVulkanTypedDescriptorPoolSet * AcquireTypedPoolSet(const FVulkanDescriptorSetsLayout * Layout) { return NativeCall<FVulkanTypedDescriptorPoolSet *, const FVulkanDescriptorSetsLayout *>(this, "FVulkanDescriptorPoolSetContainer.AcquireTypedPoolSet", Layout); }
	void Reset() { NativeCall<void>(this, "FVulkanDescriptorPoolSetContainer.Reset"); }
};

