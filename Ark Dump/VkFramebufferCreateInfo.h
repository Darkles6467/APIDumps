#pragma once

#include "BaseDeclarations.h"
struct VkFramebufferCreateInfo
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkFramebufferCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkFramebufferCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkFramebufferCreateInfo.flags"); }
	struct VkRenderPass_T * renderPassField() { return GetNativePointerField<struct VkRenderPass_T *>(this, "VkFramebufferCreateInfo.renderPass"); }
	unsigned int& attachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkFramebufferCreateInfo.attachmentCount"); }
	VkImageView_T *const * pAttachmentsField() { return GetNativePointerField<VkImageView_T *const *>(this, "VkFramebufferCreateInfo.pAttachments"); }
	unsigned int& widthField() { return *GetNativePointerField<unsigned int*>(this, "VkFramebufferCreateInfo.width"); }
	unsigned int& heightField() { return *GetNativePointerField<unsigned int*>(this, "VkFramebufferCreateInfo.height"); }
	unsigned int& layersField() { return *GetNativePointerField<unsigned int*>(this, "VkFramebufferCreateInfo.layers"); }
};

