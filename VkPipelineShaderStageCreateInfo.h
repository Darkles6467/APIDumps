#pragma once

#include "BaseDeclarations.h"
struct VkPipelineShaderStageCreateInfo
{
	char __padding[0x30L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineShaderStageCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineShaderStageCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineShaderStageCreateInfo.flags"); }
	VkShaderStageFlagBits& stageField() { return *GetNativePointerField<VkShaderStageFlagBits*>(this, "VkPipelineShaderStageCreateInfo.stage"); }
	VkShaderModule_T * moduleField() { return GetNativePointerField<VkShaderModule_T *>(this, "VkPipelineShaderStageCreateInfo.module"); }
	const char * pNameField() { return GetNativePointerField<const char *>(this, "VkPipelineShaderStageCreateInfo.pName"); }
	const VkSpecializationInfo * pSpecializationInfoField() { return GetNativePointerField<const VkSpecializationInfo *>(this, "VkPipelineShaderStageCreateInfo.pSpecializationInfo"); }
};

