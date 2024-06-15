#pragma once

#include "BaseDeclarations.h"
struct VkGraphicsPipelineCreateInfo
{
	char __padding[0x90L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkGraphicsPipelineCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkGraphicsPipelineCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkGraphicsPipelineCreateInfo.flags"); }
	unsigned int& stageCountField() { return *GetNativePointerField<unsigned int*>(this, "VkGraphicsPipelineCreateInfo.stageCount"); }
	const VkPipelineShaderStageCreateInfo * pStagesField() { return GetNativePointerField<const VkPipelineShaderStageCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pStages"); }
	const VkPipelineVertexInputStateCreateInfo * pVertexInputStateField() { return GetNativePointerField<const VkPipelineVertexInputStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pVertexInputState"); }
	const VkPipelineInputAssemblyStateCreateInfo * pInputAssemblyStateField() { return GetNativePointerField<const VkPipelineInputAssemblyStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pInputAssemblyState"); }
	const VkPipelineTessellationStateCreateInfo * pTessellationStateField() { return GetNativePointerField<const VkPipelineTessellationStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pTessellationState"); }
	const VkPipelineViewportStateCreateInfo * pViewportStateField() { return GetNativePointerField<const VkPipelineViewportStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pViewportState"); }
	const VkPipelineRasterizationStateCreateInfo * pRasterizationStateField() { return GetNativePointerField<const VkPipelineRasterizationStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pRasterizationState"); }
	const VkPipelineMultisampleStateCreateInfo * pMultisampleStateField() { return GetNativePointerField<const VkPipelineMultisampleStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pMultisampleState"); }
	const VkPipelineDepthStencilStateCreateInfo * pDepthStencilStateField() { return GetNativePointerField<const VkPipelineDepthStencilStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pDepthStencilState"); }
	const VkPipelineColorBlendStateCreateInfo * pColorBlendStateField() { return GetNativePointerField<const VkPipelineColorBlendStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pColorBlendState"); }
	const VkPipelineDynamicStateCreateInfo * pDynamicStateField() { return GetNativePointerField<const VkPipelineDynamicStateCreateInfo *>(this, "VkGraphicsPipelineCreateInfo.pDynamicState"); }
	struct VkPipelineLayout_T * layoutField() { return GetNativePointerField<struct VkPipelineLayout_T *>(this, "VkGraphicsPipelineCreateInfo.layout"); }
	struct VkRenderPass_T * renderPassField() { return GetNativePointerField<struct VkRenderPass_T *>(this, "VkGraphicsPipelineCreateInfo.renderPass"); }
	unsigned int& subpassField() { return *GetNativePointerField<unsigned int*>(this, "VkGraphicsPipelineCreateInfo.subpass"); }
	struct VkPipeline_T * basePipelineHandleField() { return GetNativePointerField<struct VkPipeline_T *>(this, "VkGraphicsPipelineCreateInfo.basePipelineHandle"); }
	int& basePipelineIndexField() { return *GetNativePointerField<int*>(this, "VkGraphicsPipelineCreateInfo.basePipelineIndex"); }
};

