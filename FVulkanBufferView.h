#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FVulkanBufferView : FRHIResource
{
	char __padding[0x20L];
	VkBufferView_T * ViewField() { return GetNativePointerField<VkBufferView_T *>(this, "FVulkanBufferView.View"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanBufferView.Flags"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanBufferView.Offset"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanBufferView.Size"); }

	// Functions

	void Create(VkFormat Format, FVulkanResourceMultiBuffer * Buffer, unsigned int InOffset, unsigned int InSize) { NativeCall<void, VkFormat, FVulkanResourceMultiBuffer *, unsigned int, unsigned int>(this, "FVulkanBufferView.Create", Format, Buffer, InOffset, InSize); }
};

