#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FVulkanBuffer : FRHIResource
{
	char __padding[0x58L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanBuffer.Device"); }
	struct VkBuffer_T * BufField() { return GetNativePointerField<struct VkBuffer_T *>(this, "FVulkanBuffer.Buf"); }
	VulkanRHI::FDeviceMemoryAllocation * AllocationField() { return GetNativePointerField<VulkanRHI::FDeviceMemoryAllocation *>(this, "FVulkanBuffer.Allocation"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanBuffer.Size"); }
	unsigned int& UsageField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanBuffer.Usage"); }
	void * BufferPtrField() { return GetNativePointerField<void *>(this, "FVulkanBuffer.BufferPtr"); }
	VkMappedMemoryRange& MappedRangeField() { return *GetNativePointerField<VkMappedMemoryRange*>(this, "FVulkanBuffer.MappedRange"); }
	bool& bAllowMultiLockField() { return *GetNativePointerField<bool*>(this, "FVulkanBuffer.bAllowMultiLock"); }
	int& LockStackField() { return *GetNativePointerField<int*>(this, "FVulkanBuffer.LockStack"); }
};

