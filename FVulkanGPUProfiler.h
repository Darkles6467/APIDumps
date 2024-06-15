#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfiler.h"

struct FVulkanGPUProfiler : FGPUProfiler
{
	char __padding[0x88L];
	TIndirectArray<FVulkanEventNodeFrame>& GPUHitchEventNodeFramesField() { return *GetNativePointerField<TIndirectArray<FVulkanEventNodeFrame>*>(this, "FVulkanGPUProfiler.GPUHitchEventNodeFrames"); }
	bool& bCommandlistSubmittedField() { return *GetNativePointerField<bool*>(this, "FVulkanGPUProfiler.bCommandlistSubmitted"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanGPUProfiler.Device"); }
	TArray<unsigned int>& PushPopStackField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FVulkanGPUProfiler.PushPopStack"); }

	// Functions

	void BeginFrame() { NativeCall<void>(this, "FVulkanGPUProfiler.BeginFrame"); }
	void DumpCrashMarkers(void * BufferData) { NativeCall<void, void *>(this, "FVulkanGPUProfiler.DumpCrashMarkers", BufferData); }
	void EndFrame() { NativeCall<void>(this, "FVulkanGPUProfiler.EndFrame"); }
	void PopMarkerForCrash(struct VkCommandBuffer_T * CmdBuffer, struct VkBuffer_T * DestBuffer) { NativeCall<void, struct VkCommandBuffer_T *, struct VkBuffer_T *>(this, "FVulkanGPUProfiler.PopMarkerForCrash", CmdBuffer, DestBuffer); }
	void PushMarkerForCrash(struct VkCommandBuffer_T * CmdBuffer, struct VkBuffer_T * DestBuffer, const wchar_t * Name) { NativeCall<void, struct VkCommandBuffer_T *, struct VkBuffer_T *, const wchar_t *>(this, "FVulkanGPUProfiler.PushMarkerForCrash", CmdBuffer, DestBuffer, Name); }
};

