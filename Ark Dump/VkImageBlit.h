#pragma once

#include "BaseDeclarations.h"
struct VkImageBlit
{
	char __padding[0x50L];
	VkImageSubresourceLayers& srcSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageBlit.srcSubresource"); }
	FieldArray<VkOffset3D[2], 32> srcOffsetsField() { return {this, "VkImageBlit.srcOffsets"}; }
	VkImageSubresourceLayers& dstSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkImageBlit.dstSubresource"); }
	FieldArray<VkOffset3D[2], 32> dstOffsetsField() { return {this, "VkImageBlit.dstOffsets"}; }
};

