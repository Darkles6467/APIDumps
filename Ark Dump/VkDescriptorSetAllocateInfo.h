#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorSetAllocateInfo
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDescriptorSetAllocateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDescriptorSetAllocateInfo.pNext"); }
	struct VkDescriptorPool_T * descriptorPoolField() { return GetNativePointerField<struct VkDescriptorPool_T *>(this, "VkDescriptorSetAllocateInfo.descriptorPool"); }
	unsigned int& descriptorSetCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetAllocateInfo.descriptorSetCount"); }
	struct VkDescriptorSetLayout_T *const * pSetLayoutsField() { return GetNativePointerField<struct VkDescriptorSetLayout_T *const *>(this, "VkDescriptorSetAllocateInfo.pSetLayouts"); }
};

