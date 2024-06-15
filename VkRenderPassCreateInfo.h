#pragma once

#include "BaseDeclarations.h"
struct VkRenderPassCreateInfo
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkRenderPassCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkRenderPassCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkRenderPassCreateInfo.flags"); }
	unsigned int& attachmentCountField() { return *GetNativePointerField<unsigned int*>(this, "VkRenderPassCreateInfo.attachmentCount"); }
	const VkAttachmentDescription * pAttachmentsField() { return GetNativePointerField<const VkAttachmentDescription *>(this, "VkRenderPassCreateInfo.pAttachments"); }
	unsigned int& subpassCountField() { return *GetNativePointerField<unsigned int*>(this, "VkRenderPassCreateInfo.subpassCount"); }
	const VkSubpassDescription * pSubpassesField() { return GetNativePointerField<const VkSubpassDescription *>(this, "VkRenderPassCreateInfo.pSubpasses"); }
	unsigned int& dependencyCountField() { return *GetNativePointerField<unsigned int*>(this, "VkRenderPassCreateInfo.dependencyCount"); }
	const VkSubpassDependency * pDependenciesField() { return GetNativePointerField<const VkSubpassDependency *>(this, "VkRenderPassCreateInfo.pDependencies"); }
};

