#pragma once

#include "BaseDeclarations.h"
struct VkImageCopy
{
	char __padding[0x44L];
	VkImageSubresourceLayers& srcSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageCopy.srcSubresource"); }
	VkOffset3D& srcOffsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkImageCopy.srcOffset"); }
	VkImageSubresourceLayers& dstSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageCopy.dstSubresource"); }
	VkOffset3D& dstOffsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkImageCopy.dstOffset"); }
	VkExtent3D& extentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkImageCopy.extent"); }
};

