#pragma once

#include "BaseDeclarations.h"
struct FVulkanCommandBufferManager
{
	char __padding[0x90L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanCommandBufferManager.Device"); }
	FVulkanCommandBufferPool& PoolField() { return *GetNativePointerField<FVulkanCommandBufferPool*>(this, "FVulkanCommandBufferManager.Pool"); }
	FVulkanQueue * QueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanCommandBufferManager.Queue"); }
	FVulkanCmdBuffer * ActiveCmdBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanCommandBufferManager.ActiveCmdBuffer"); }
	FVulkanCmdBuffer * UploadCmdBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanCommandBufferManager.UploadCmdBuffer"); }
	TArray<FVulkanCommandBufferManager::FQueryPoolReset>& PoolResetsField() { return *GetNativePointerField<TArray<FVulkanCommandBufferManager::FQueryPoolReset>*>(this, "FVulkanCommandBufferManager.PoolResets"); }

	// Functions

	void FlushResetQueryPools() { NativeCall<void>(this, "FVulkanCommandBufferManager.FlushResetQueryPools"); }
	void FreeUnusedCmdBuffers() { NativeCall<void>(this, "FVulkanCommandBufferManager.FreeUnusedCmdBuffers"); }
	FVulkanCmdBuffer * GetActiveCmdBuffer() { return NativeCall<FVulkanCmdBuffer *>(this, "FVulkanCommandBufferManager.GetActiveCmdBuffer"); }
	FVulkanCmdBuffer * GetUploadCmdBuffer() { return NativeCall<FVulkanCmdBuffer *>(this, "FVulkanCommandBufferManager.GetUploadCmdBuffer"); }
	void PrepareForNewActiveCommandBuffer() { NativeCall<void>(this, "FVulkanCommandBufferManager.PrepareForNewActiveCommandBuffer"); }
	void SubmitActiveCmdBuffer(VulkanRHI::FSemaphore * SignalSemaphore) { NativeCall<void, VulkanRHI::FSemaphore *>(this, "FVulkanCommandBufferManager.SubmitActiveCmdBuffer", SignalSemaphore); }
	void SubmitUploadCmdBuffer(unsigned int NumSignalSemaphores, struct VkSemaphore_T ** SignalSemaphores) { NativeCall<void, unsigned int, struct VkSemaphore_T **>(this, "FVulkanCommandBufferManager.SubmitUploadCmdBuffer", NumSignalSemaphores, SignalSemaphores); }
	void WaitForCmdBuffer(FVulkanCmdBuffer * CmdBuffer, float TimeInSecondsToWait) { NativeCall<void, FVulkanCmdBuffer *, float>(this, "FVulkanCommandBufferManager.WaitForCmdBuffer", CmdBuffer, TimeInSecondsToWait); }
};

