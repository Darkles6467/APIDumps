#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorSetLayoutCreateInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDescriptorSetLayoutCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDescriptorSetLayoutCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetLayoutCreateInfo.flags"); }
	unsigned int& bindingCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetLayoutCreateInfo.bindingCount"); }
	const VkDescriptorSetLayoutBinding * pBindingsField() { return GetNativePointerField<const VkDescriptorSetLayoutBinding *>(this, "VkDescriptorSetLayoutCreateInfo.pBindings"); }
};

