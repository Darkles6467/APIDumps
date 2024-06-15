#pragma once

#include "BaseDeclarations.h"
struct VkCommandBufferInheritanceInfo
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCommandBufferInheritanceInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkCommandBufferInheritanceInfo.pNext"); }
	struct VkRenderPass_T * renderPassField() { return GetNativePointerField<struct VkRenderPass_T *>(this, "VkCommandBufferInheritanceInfo.renderPass"); }
	unsigned int& subpassField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferInheritanceInfo.subpass"); }
	struct VkFramebuffer_T * framebufferField() { return GetNativePointerField<struct VkFramebuffer_T *>(this, "VkCommandBufferInheritanceInfo.framebuffer"); }
	unsigned int& occlusionQueryEnableField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferInheritanceInfo.occlusionQueryEnable"); }
	unsigned int& queryFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferInheritanceInfo.queryFlags"); }
	unsigned int& pipelineStatisticsField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferInheritanceInfo.pipelineStatistics"); }
};

