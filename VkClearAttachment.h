#pragma once

#include "BaseDeclarations.h"
struct VkClearAttachment
{
	char __padding[0x18L];
	unsigned int& aspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkClearAttachment.aspectMask"); }
	unsigned int& colorAttachmentField() { return *GetNativePointerField<unsigned int*>(this, "VkClearAttachment.colorAttachment"); }
	VkClearValue& clearValueField() { return *GetNativePointerField<VkClearValue*>(this, "VkClearAttachment.clearValue"); }
};

