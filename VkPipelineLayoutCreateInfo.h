#pragma once

#include "BaseDeclarations.h"
struct VkPipelineLayoutCreateInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineLayoutCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineLayoutCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineLayoutCreateInfo.flags"); }
	unsigned int& setLayoutCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineLayoutCreateInfo.setLayoutCount"); }
	struct VkDescriptorSetLayout_T *const * pSetLayoutsField() { return GetNativePointerField<struct VkDescriptorSetLayout_T *const *>(this, "VkPipelineLayoutCreateInfo.pSetLayouts"); }
	unsigned int& pushConstantRangeCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineLayoutCreateInfo.pushConstantRangeCount"); }
	const VkPushConstantRange * pPushConstantRangesField() { return GetNativePointerField<const VkPushConstantRange *>(this, "VkPipelineLayoutCreateInfo.pPushConstantRanges"); }
};

