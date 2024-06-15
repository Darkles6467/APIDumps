#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIStagingBuffer : FRHIResource
{
	char __padding[0x8L];

	// Functions

};

struct FVulkanStagingBuffer : FRHIStagingBuffer
{
	char __padding[0x10L];
	VulkanRHI::FStagingBuffer * StagingBufferField() { return GetNativePointerField<VulkanRHI::FStagingBuffer *>(this, "FVulkanStagingBuffer.StagingBuffer"); }
	unsigned int& QueuedOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanStagingBuffer.QueuedOffset"); }
	unsigned int& QueuedNumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanStagingBuffer.QueuedNumBytes"); }

	// Functions

};

