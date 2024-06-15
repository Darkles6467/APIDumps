#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorPoolCreateInfo
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDescriptorPoolCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDescriptorPoolCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorPoolCreateInfo.flags"); }
	unsigned int& maxSetsField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorPoolCreateInfo.maxSets"); }
	unsigned int& poolSizeCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorPoolCreateInfo.poolSizeCount"); }
	const VkDescriptorPoolSize * pPoolSizesField() { return GetNativePointerField<const VkDescriptorPoolSize *>(this, "VkDescriptorPoolCreateInfo.pPoolSizes"); }
};

