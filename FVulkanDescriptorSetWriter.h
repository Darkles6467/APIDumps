#pragma once

#include "BaseDeclarations.h"
struct FVulkanDescriptorSetWriter
{
	char __padding[0x30L];
	VkWriteDescriptorSet * WriteDescriptorsField() { return GetNativePointerField<VkWriteDescriptorSet *>(this, "FVulkanDescriptorSetWriter.WriteDescriptors"); }
	char * BindingToDynamicOffsetMapField() { return GetNativePointerField<char *>(this, "FVulkanDescriptorSetWriter.BindingToDynamicOffsetMap"); }
	unsigned int * DynamicOffsetsField() { return GetNativePointerField<unsigned int *>(this, "FVulkanDescriptorSetWriter.DynamicOffsets"); }
	unsigned int& NumWritesField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanDescriptorSetWriter.NumWrites"); }
	TArray<TRefCountPtr<FVulkanBufferView>>& BufferViewReferencesField() { return *GetNativePointerField<TArray<TRefCountPtr<FVulkanBufferView>>*>(this, "FVulkanDescriptorSetWriter.BufferViewReferences"); }

	// Functions

	unsigned int SetupDescriptorWrites(const TArray<enum VkDescriptorType> * Types, VkWriteDescriptorSet * InWriteDescriptors, VkDescriptorImageInfo * InImageInfo, VkDescriptorBufferInfo * InBufferInfo, char * InBindingToDynamicOffsetMap) { return NativeCall<unsigned int, const TArray<enum VkDescriptorType> *, VkWriteDescriptorSet *, VkDescriptorImageInfo *, VkDescriptorBufferInfo *, char *>(this, "FVulkanDescriptorSetWriter.SetupDescriptorWrites", Types, InWriteDescriptors, InImageInfo, InBufferInfo, InBindingToDynamicOffsetMap); }
};

