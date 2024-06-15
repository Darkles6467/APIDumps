#pragma once

#include "BaseDeclarations.h"
struct FVulkanCommandBufferPool
{
	char __padding[0x60L];
	struct VkCommandPool_T * HandleField() { return GetNativePointerField<struct VkCommandPool_T *>(this, "FVulkanCommandBufferPool.Handle"); }
	TArray<FVulkanCmdBuffer *>& CmdBuffersField() { return *GetNativePointerField<TArray<FVulkanCmdBuffer *>*>(this, "FVulkanCommandBufferPool.CmdBuffers"); }
	TArray<FVulkanCmdBuffer *>& FreeCmdBuffersField() { return *GetNativePointerField<TArray<FVulkanCmdBuffer *>*>(this, "FVulkanCommandBufferPool.FreeCmdBuffers"); }
	FWindowsCriticalSection& _CSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanCommandBufferPool._CS"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanCommandBufferPool.Device"); }
	FVulkanCommandBufferManager * MgrField() { return GetNativePointerField<FVulkanCommandBufferManager *>(this, "FVulkanCommandBufferPool.Mgr"); }

	// Functions

	FVulkanCmdBuffer * Create(bool bIsUploadOnly) { return NativeCall<FVulkanCmdBuffer *, bool>(this, "FVulkanCommandBufferPool.Create", bIsUploadOnly); }
	void FreeUnusedCmdBuffers(FVulkanQueue * InQueue) { NativeCall<void, FVulkanQueue *>(this, "FVulkanCommandBufferPool.FreeUnusedCmdBuffers", InQueue); }
	void RefreshFenceStatus(FVulkanCmdBuffer * SkipCmdBuffer) { NativeCall<void, FVulkanCmdBuffer *>(this, "FVulkanCommandBufferPool.RefreshFenceStatus", SkipCmdBuffer); }
};

