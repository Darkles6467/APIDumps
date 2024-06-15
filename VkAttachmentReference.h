#pragma once

#include "BaseDeclarations.h"
struct VkAttachmentReference
{
	char __padding[0x8L];
	unsigned int& attachmentField() { return *GetNativePointerField<unsigned int*>(this, "VkAttachmentReference.attachment"); }
	VkImageLayout& layoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkAttachmentReference.layout"); }
};

