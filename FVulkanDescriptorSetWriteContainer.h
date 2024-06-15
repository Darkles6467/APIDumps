#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorSetWriteContainer
{
	char __padding[0x40L];
	TArray<VkDescriptorImageInfo>& DescriptorImageInfoField() { return *GetNativePointerField<TArray<VkDescriptorImageInfo>*>(this, "FVulkanDescriptorSetWriteContainer.DescriptorImageInfo"); }
	TArray<VkDescriptorBufferInfo>& DescriptorBufferInfoField() { return *GetNativePointerField<TArray<VkDescriptorBufferInfo>*>(this, "FVulkanDescriptorSetWriteContainer.DescriptorBufferInfo"); }
	TArray<VkWriteDescriptorSet>& DescriptorWritesField() { return *GetNativePointerField<TArray<VkWriteDescriptorSet>*>(this, "FVulkanDescriptorSetWriteContainer.DescriptorWrites"); }
	TArray<unsigned char>& BindingToDynamicOffsetMapField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVulkanDescriptorSetWriteContainer.BindingToDynamicOffsetMap"); }
};

