#pragma once

#include "BaseDeclarations.h"
struct VkPipelineMultisampleStateCreateInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineMultisampleStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineMultisampleStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineMultisampleStateCreateInfo.flags"); }
	VkSampleCountFlagBits& rasterizationSamplesField() { return *GetNativePointerField<VkSampleCountFlagBits*>(this, "VkPipelineMultisampleStateCreateInfo.rasterizationSamples"); }
	unsigned int& sampleShadingEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineMultisampleStateCreateInfo.sampleShadingEnable"); }
	float& minSampleShadingField() { return *GetNativePointerField<float*>(this, "VkPipelineMultisampleStateCreateInfo.minSampleShading"); }
	const unsigned int * pSampleMaskField() { return GetNativePointerField<const unsigned int *>(this, "VkPipelineMultisampleStateCreateInfo.pSampleMask"); }
	unsigned int& alphaToCoverageEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineMultisampleStateCreateInfo.alphaToCoverageEnable"); }
	unsigned int& alphaToOneEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineMultisampleStateCreateInfo.alphaToOneEnable"); }
};

