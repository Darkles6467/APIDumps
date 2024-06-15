#pragma once

#include "BaseDeclarations.h"
struct VkSubpassDescription
{
	char __padding[0x48L];
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDescription.flags"); }
	VkPipelineBindPoint& pipelineBindPointField() { return *GetNativePointerField<VkPipelineBindPoint*>(this, "VkSubpassDescription.pipelineBindPoint"); }
	unsigned int& inputAttachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDescription.inputAttachmentCount"); }
	const VkAttachmentReference * pInputAttachmentsField() { return GetNativePointerField<const VkAttachmentReference *>(this, "VkSubpassDescription.pInputAttachments"); }
	unsigned int& colorAttachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDescription.colorAttachmentCount"); }
	const VkAttachmentReference * pColorAttachmentsField() { return GetNativePointerField<const VkAttachmentReference *>(this, "VkSubpassDescription.pColorAttachments"); }
	const VkAttachmentReference * pResolveAttachmentsField() { return GetNativePointerField<const VkAttachmentReference *>(this, "VkSubpassDescription.pResolveAttachments"); }
	const VkAttachmentReference * pDepthStencilAttachmentField() { return GetNativePointerField<const VkAttachmentReference *>(this, "VkSubpassDescription.pDepthStencilAttachment"); }
	unsigned int& preserveAttachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDescription.preserveAttachmentCount"); }
	const unsigned int * pPreserveAttachmentsField() { return GetNativePointerField<const unsigned int *>(this, "VkSubpassDescription.pPreserveAttachments"); }
};

