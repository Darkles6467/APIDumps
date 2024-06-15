#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorSetLayoutBinding
{
	char __padding[0x18L];
	unsigned int& bindingField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetLayoutBinding.binding"); }
	VkDescriptorType& descriptorTypeField() { return *GetNativePointerField<VkDescriptorType*>(this, "VkDescriptorSetLayoutBinding.descriptorType"); }
	unsigned int& descriptorCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetLayoutBinding.descriptorCount"); }
	unsigned int& stageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorSetLayoutBinding.stageFlags"); }
	VkSampler_T *const * pImmutableSamplersField() { return GetNativePointerField<VkSampler_T *const *>(this, "VkDescriptorSetLayoutBinding.pImmutableSamplers"); }
};

