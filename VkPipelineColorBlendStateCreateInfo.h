#pragma once

#include "BaseDeclarations.h"
struct VkPipelineColorBlendStateCreateInfo
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPipelineColorBlendStateCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkPipelineColorBlendStateCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineColorBlendStateCreateInfo.flags"); }
	unsigned int& logicOpEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineColorBlendStateCreateInfo.logicOpEnable"); }
	VkLogicOp& logicOpField() { return *GetNativePointerField<VkLogicOp*>(this, "VkPipelineColorBlendStateCreateInfo.logicOp"); }
	unsigned int& attachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkPipelineColorBlendStateCreateInfo.attachmentCount"); }
	const VkPipelineColorBlendAttachmentState * pAttachmentsField() { return GetNativePointerField<const VkPipelineColorBlendAttachmentState *>(this, "VkPipelineColorBlendStateCreateInfo.pAttachments"); }
	FieldArray<float, 4> blendConstantsField() { return {this, "VkPipelineColorBlendStateCreateInfo.blendConstants"}; }
};

