#pragma once

#include "BaseDeclarations.h"
struct VkImageResolve
{
	char __padding[0x44L];
	VkImageSubresourceLayers& srcSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageResolve.srcSubresource"); }
	VkOffset3D& srcOffsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkImageResolve.srcOffset"); }
	VkImageSubresourceLayers& dstSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageResolve.dstSubresource"); }
	VkOffset3D& dstOffsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkImageResolve.dstOffset"); }
	VkExtent3D& extentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkImageResolve.extent"); }
};

