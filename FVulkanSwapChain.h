#pragma once

#include "BaseDeclarations.h"
struct FVulkanSwapChain
{
	enum EStatus
	{
		Healthy = 0x0,
		OutOfDate = 0xff,
		SurfaceLost = 0xfe,
	};

	char __padding[0x60L];
	struct VkSwapchainKHR_T * SwapChainField() { return GetNativePointerField<struct VkSwapchainKHR_T *>(this, "FVulkanSwapChain.SwapChain"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanSwapChain.Device"); }
	struct VkSurfaceKHR_T * SurfaceField() { return GetNativePointerField<struct VkSurfaceKHR_T *>(this, "FVulkanSwapChain.Surface"); }
	int& CurrentImageIndexField() { return *GetNativePointerField<int*>(this, "FVulkanSwapChain.CurrentImageIndex"); }
	int& SemaphoreIndexField() { return *GetNativePointerField<int*>(this, "FVulkanSwapChain.SemaphoreIndex"); }
	unsigned int& NumPresentCallsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSwapChain.NumPresentCalls"); }
	unsigned int& NumAcquireCallsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSwapChain.NumAcquireCalls"); }
	unsigned int& InternalWidthField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSwapChain.InternalWidth"); }
	unsigned int& InternalHeightField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSwapChain.InternalHeight"); }
	struct VkInstance_T * InstanceField() { return GetNativePointerField<struct VkInstance_T *>(this, "FVulkanSwapChain.Instance"); }
	TArray<VulkanRHI::FSemaphore *>& ImageAcquiredSemaphoreField() { return *GetNativePointerField<TArray<VulkanRHI::FSemaphore *>*>(this, "FVulkanSwapChain.ImageAcquiredSemaphore"); }
	TArray<VulkanRHI::FFence *>& ImageAcquiredFencesField() { return *GetNativePointerField<TArray<VulkanRHI::FFence *>*>(this, "FVulkanSwapChain.ImageAcquiredFences"); }
	int& LockToVsyncField() { return *GetNativePointerField<int*>(this, "FVulkanSwapChain.LockToVsync"); }
	unsigned int& PresentIDField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanSwapChain.PresentID"); }

	// Functions

	int AcquireImageIndex(VulkanRHI::FSemaphore ** OutSemaphore) { return NativeCall<int, VulkanRHI::FSemaphore **>(this, "FVulkanSwapChain.AcquireImageIndex", OutSemaphore); }
	void Destroy() { NativeCall<void>(this, "FVulkanSwapChain.Destroy"); }
	FVulkanSwapChain::EStatus Present(FVulkanQueue * GfxQueue, FVulkanQueue * PresentQueue, VulkanRHI::FSemaphore * BackBufferRenderingDoneSemaphore) { return NativeCall<FVulkanSwapChain::EStatus, FVulkanQueue *, FVulkanQueue *, VulkanRHI::FSemaphore *>(this, "FVulkanSwapChain.Present", GfxQueue, PresentQueue, BackBufferRenderingDoneSemaphore); }
	void RenderThreadPacing() { NativeCall<void>(this, "FVulkanSwapChain.RenderThreadPacing"); }
};

