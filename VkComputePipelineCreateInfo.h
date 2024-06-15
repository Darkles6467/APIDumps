#pragma once

#include "BaseDeclarations.h"
struct VkComputePipelineCreateInfo
{
	char __padding[0x60L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkComputePipelineCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkComputePipelineCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkComputePipelineCreateInfo.flags"); }
	VkPipelineShaderStageCreateInfo& stageField() { return *GetNativePointerField<VkPipelineShaderStageCreateInfo*>(this, "VkComputePipelineCreateInfo.stage"); }
	struct VkPipelineLayout_T * layoutField() { return GetNativePointerField<struct VkPipelineLayout_T *>(this, "VkComputePipelineCreateInfo.layout"); }
	struct VkPipeline_T * basePipelineHandleField() { return GetNativePointerField<struct VkPipeline_T *>(this, "VkComputePipelineCreateInfo.basePipelineHandle"); }
	int& basePipelineIndexField() { return *GetNativePointerField<int*>(this, "VkComputePipelineCreateInfo.basePipelineIndex"); }
};

