#pragma once

#include "BaseDeclarations.h"
struct VkAttachmentDescription
{
	char __padding[0x24L];
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkAttachmentDescription.flags"); }
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkAttachmentDescription.format"); }
	VkSampleCountFlagBits& samplesField() { return *GetNativePointerField<VkSampleCountFlagBits*>(this, "VkAttachmentDescription.samples"); }
	VkAttachmentLoadOp& loadOpField() { return *GetNativePointerField<VkAttachmentLoadOp*>(this, "VkAttachmentDescription.loadOp"); }
	VkAttachmentStoreOp& storeOpField() { return *GetNativePointerField<VkAttachmentStoreOp*>(this, "VkAttachmentDescription.storeOp"); }
	VkAttachmentLoadOp& stencilLoadOpField() { return *GetNativePointerField<VkAttachmentLoadOp*>(this, "VkAttachmentDescription.stencilLoadOp"); }
	VkAttachmentStoreOp& stencilStoreOpField() { return *GetNativePointerField<VkAttachmentStoreOp*>(this, "VkAttachmentDescription.stencilStoreOp"); }
	VkImageLayout& initialLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkAttachmentDescription.initialLayout"); }
	VkImageLayout& finalLayoutField() { return *GetNativePointerField<VkImageLayout*>(this, "VkAttachmentDescription.finalLayout"); }
};

