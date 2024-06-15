#pragma once

#include "BaseDeclarations.h"
struct VkBufferImageCopy
{
	char __padding[0x38L];
	unsigned __int64& bufferOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferImageCopy.bufferOffset"); }
	unsigned int& bufferRowLengthField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferImageCopy.bufferRowLength"); }
	unsigned int& bufferImageHeightField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferImageCopy.bufferImageHeight"); }
	VkImageSubresourceLayers& imageSubresourceField() { return *GetNativePointerField<VkImageSubresourceLayers*>(this, "VkBufferImageCopy.imageSubresource"); }
	VkOffset3D& imageOffsetField() { return *GetNativePointerField<VkOffset3D*>(this, "VkBufferImageCopy.imageOffset"); }
	VkExtent3D& imageExtentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkBufferImageCopy.imageExtent"); }
};

