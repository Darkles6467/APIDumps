#pragma once

#include "BaseDeclarations.h"
struct FVulkanCmdBuffer
{
	enum EState
	{
		ReadyForBegin = 0x0,
		IsInsideBegin = 0x1,
		IsInsideRenderPass = 0x2,
		HasEnded = 0x3,
		Submitted = 0x4,
		NotAllocated = 0x5,
	};

	char __padding[0x100L];
	VkViewport& CurrentViewportField() { return *GetNativePointerField<VkViewport*>(this, "FVulkanCmdBuffer.CurrentViewport"); }
	VkRect2D& CurrentScissorField() { return *GetNativePointerField<VkRect2D*>(this, "FVulkanCmdBuffer.CurrentScissor"); }
	unsigned int& CurrentStencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanCmdBuffer.CurrentStencilRef"); }
	FieldArray<_BYTE, 1> StateField() { return {this, "FVulkanCmdBuffer.State"}; }
	FVulkanDescriptorPoolSetContainer * CurrentDescriptorPoolSetContainerField() { return GetNativePointerField<FVulkanDescriptorPoolSetContainer *>(this, "FVulkanCmdBuffer.CurrentDescriptorPoolSetContainer"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanCmdBuffer.Device"); }
	struct VkCommandBuffer_T * CommandBufferHandleField() { return GetNativePointerField<struct VkCommandBuffer_T *>(this, "FVulkanCmdBuffer.CommandBufferHandle"); }
	long double& SubmittedTimeField() { return *GetNativePointerField<long double*>(this, "FVulkanCmdBuffer.SubmittedTime"); }
	TArray<unsigned int>& WaitFlagsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FVulkanCmdBuffer.WaitFlags"); }
	TArray<VulkanRHI::FSemaphore *>& WaitSemaphoresField() { return *GetNativePointerField<TArray<VulkanRHI::FSemaphore *>*>(this, "FVulkanCmdBuffer.WaitSemaphores"); }
	TArray<VulkanRHI::FSemaphore *>& SubmittedWaitSemaphoresField() { return *GetNativePointerField<TArray<VulkanRHI::FSemaphore *>*>(this, "FVulkanCmdBuffer.SubmittedWaitSemaphores"); }
	VulkanRHI::FFence * FenceField() { return GetNativePointerField<VulkanRHI::FFence *>(this, "FVulkanCmdBuffer.Fence"); }
	volatile unsigned __int64& FenceSignaledCounterField() { return *GetNativePointerField<volatile unsigned __int64*>(this, "FVulkanCmdBuffer.FenceSignaledCounter"); }
	volatile unsigned __int64& SubmittedFenceCounterField() { return *GetNativePointerField<volatile unsigned __int64*>(this, "FVulkanCmdBuffer.SubmittedFenceCounter"); }
	FVulkanCommandBufferPool * CommandBufferPoolField() { return GetNativePointerField<FVulkanCommandBufferPool *>(this, "FVulkanCmdBuffer.CommandBufferPool"); }
	FVulkanGPUTiming * TimingField() { return GetNativePointerField<FVulkanGPUTiming *>(this, "FVulkanCmdBuffer.Timing"); }
	unsigned __int64& LastValidTimingField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanCmdBuffer.LastValidTiming"); }

	// Functions

	bool AcquirePoolSetAndDescriptorsIfNeeded(const FVulkanDescriptorSetsLayout * Layout, bool bNeedDescriptors, VkDescriptorSet_T ** OutDescriptors) { return NativeCall<bool, const FVulkanDescriptorSetsLayout *, bool, VkDescriptorSet_T **>(this, "FVulkanCmdBuffer.AcquirePoolSetAndDescriptorsIfNeeded", Layout, bNeedDescriptors, OutDescriptors); }
	void AddWaitSemaphore(unsigned int InWaitFlags, VulkanRHI::FSemaphore * InWaitSemaphore) { NativeCall<void, unsigned int, VulkanRHI::FSemaphore *>(this, "FVulkanCmdBuffer.AddWaitSemaphore", InWaitFlags, InWaitSemaphore); }
	void AllocMemory() { NativeCall<void>(this, "FVulkanCmdBuffer.AllocMemory"); }
	void Begin() { NativeCall<void>(this, "FVulkanCmdBuffer.Begin"); }
	void End() { NativeCall<void>(this, "FVulkanCmdBuffer.End"); }
	void MarkSemaphoresAsSubmitted() { NativeCall<void>(this, "FVulkanCmdBuffer.MarkSemaphoresAsSubmitted"); }
	void RefreshFenceStatus() { NativeCall<void>(this, "FVulkanCmdBuffer.RefreshFenceStatus"); }
};

