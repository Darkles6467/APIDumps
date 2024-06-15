#pragma once

#include "BaseDeclarations.h"
struct VkRenderPassBeginInfo
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkRenderPassBeginInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkRenderPassBeginInfo.pNext"); }
	struct VkRenderPass_T * renderPassField() { return GetNativePointerField<struct VkRenderPass_T *>(this, "VkRenderPassBeginInfo.renderPass"); }
	struct VkFramebuffer_T * framebufferField() { return GetNativePointerField<struct VkFramebuffer_T *>(this, "VkRenderPassBeginInfo.framebuffer"); }
	VkRect2D& renderAreaField() { return *GetNativePointerField<VkRect2D*>(this, "VkRenderPassBeginInfo.renderArea"); }
	unsigned int& clearValueCountField() { return *GetNativePointerField<unsigned int*>(this, "VkRenderPassBeginInfo.clearValueCount"); }
	const VkClearValue * pClearValuesField() { return GetNativePointerField<const VkClearValue *>(this, "VkRenderPassBeginInfo.pClearValues"); }
};

