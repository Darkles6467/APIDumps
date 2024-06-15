#pragma once

#include "BaseDeclarations.h"
struct VkPipelineVertexInputStateCreateInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineVertexInputStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineVertexInputStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineVertexInputStateCreateInfo.flags"); }
	unsigned int& vertexBindingDescriptionCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineVertexInputStateCreateInfo.vertexBindingDescriptionCount"); }
	const VkVertexInputBindingDescription * pVertexBindingDescriptionsField() { return GetNativePointerField<const VkVertexInputBindingDescription *>(this, "VkPipelineVertexInputStateCreateInfo.pVertexBindingDescriptions"); }
	unsigned int& vertexAttributeDescriptionCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineVertexInputStateCreateInfo.vertexAttributeDescriptionCount"); }
	const VkVertexInputAttributeDescription * pVertexAttributeDescriptionsField() { return GetNativePointerField<const VkVertexInputAttributeDescription *>(this, "VkPipelineVertexInputStateCreateInfo.pVertexAttributeDescriptions"); }
};

