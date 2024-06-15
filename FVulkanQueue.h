#pragma once

#include "BaseDeclarations.h"
struct FVulkanQueue
{
	char __padding[0x58L];
	struct VkQueue_T * QueueField() { return GetNativePointerField<struct VkQueue_T *>(this, "FVulkanQueue.Queue"); }
	unsigned int& FamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanQueue.FamilyIndex"); }
	unsigned int& QueueIndexField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanQueue.QueueIndex"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanQueue.Device"); }
	FWindowsCriticalSection& _CSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanQueue._CS"); }
	FVulkanCmdBuffer * LastSubmittedCmdBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanQueue.LastSubmittedCmdBuffer"); }
	unsigned __int64& LastSubmittedCmdBufferFenceCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanQueue.LastSubmittedCmdBufferFenceCounter"); }
	unsigned __int64& SubmitCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanQueue.SubmitCounter"); }

	// Functions

	void GetLastSubmittedInfo(FVulkanCmdBuffer ** OutCmdBuffer, unsigned __int64 * OutFenceCounter) { NativeCall<void, FVulkanCmdBuffer **, unsigned __int64 *>(this, "FVulkanQueue.GetLastSubmittedInfo", OutCmdBuffer, OutFenceCounter); }
	void Submit(FVulkanCmdBuffer * CmdBuffer, unsigned int NumSignalSemaphores, struct VkSemaphore_T ** SignalSemaphores) { NativeCall<void, FVulkanCmdBuffer *, unsigned int, struct VkSemaphore_T **>(this, "FVulkanQueue.Submit", CmdBuffer, NumSignalSemaphores, SignalSemaphores); }
};

