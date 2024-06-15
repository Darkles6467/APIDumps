#pragma once

#include "BaseDeclarations.h"
#include "FRHIViewport.h"
#include "FRHIResource.h"

struct FVulkanViewport : FRHIViewport
{
	char __padding[0xf8L];
	FieldArray<struct VkImage_T *, 3> BackBufferImagesField() { return {this, "FVulkanViewport.BackBufferImages"}; }
	FieldArray<VulkanRHI::FSemaphore *, 3> RenderingDoneSemaphoresField() { return {this, "FVulkanViewport.RenderingDoneSemaphores"}; }
	FieldArray<FVulkanTextureView, 3> TextureViewsField() { return {this, "FVulkanViewport.TextureViews"}; }
	TRefCountPtr<FVulkanBackBuffer>& RenderingBackBufferField() { return *GetNativePointerField<TRefCountPtr<FVulkanBackBuffer>*>(this, "FVulkanViewport.RenderingBackBuffer"); }
	TRefCountPtr<FVulkanBackBuffer>& RHIBackBufferField() { return *GetNativePointerField<TRefCountPtr<FVulkanBackBuffer>*>(this, "FVulkanViewport.RHIBackBuffer"); }
	FWindowsCriticalSection& RecreatingSwapchainField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanViewport.RecreatingSwapchain"); }
	FVulkanDynamicRHI * RHIField() { return GetNativePointerField<FVulkanDynamicRHI *>(this, "FVulkanViewport.RHI"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanViewport.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanViewport.SizeY"); }
	bool& bIsFullscreenField() { return *GetNativePointerField<bool*>(this, "FVulkanViewport.bIsFullscreen"); }
	EPixelFormat& PixelFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FVulkanViewport.PixelFormat"); }
	int& AcquiredImageIndexField() { return *GetNativePointerField<int*>(this, "FVulkanViewport.AcquiredImageIndex"); }
	FVulkanSwapChain * SwapChainField() { return GetNativePointerField<FVulkanSwapChain *>(this, "FVulkanViewport.SwapChain"); }
	void * WindowHandleField() { return GetNativePointerField<void *>(this, "FVulkanViewport.WindowHandle"); }
	unsigned int& PresentCountField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanViewport.PresentCount"); }
	int& LockToVsyncField() { return *GetNativePointerField<int*>(this, "FVulkanViewport.LockToVsync"); }
	VulkanRHI::FSemaphore * AcquiredSemaphoreField() { return GetNativePointerField<VulkanRHI::FSemaphore *>(this, "FVulkanViewport.AcquiredSemaphore"); }
	TRefCountPtr<FRHICustomPresent>& CustomPresentField() { return *GetNativePointerField<TRefCountPtr<FRHICustomPresent>*>(this, "FVulkanViewport.CustomPresent"); }
	FVulkanCmdBuffer * LastFrameCommandBufferField() { return GetNativePointerField<FVulkanCmdBuffer *>(this, "FVulkanViewport.LastFrameCommandBuffer"); }
	unsigned __int64& LastFrameFenceCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanViewport.LastFrameFenceCounter"); }

	// Functions

	void AcquireBackBuffer(FRHICommandListBase * CmdList, FVulkanBackBuffer * NewBackBuffer) { NativeCall<void, FRHICommandListBase *, FVulkanBackBuffer *>(this, "FVulkanViewport.AcquireBackBuffer", CmdList, NewBackBuffer); }
	void CreateSwapchain() { NativeCall<void>(this, "FVulkanViewport.CreateSwapchain"); }
	static int DoAcquireImageIndex(FVulkanViewport * Viewport) { return NativeCall<int, FVulkanViewport *>(nullptr, "FVulkanViewport.DoAcquireImageIndex", Viewport); }
	bool Present(FVulkanCommandListContext * Context, FVulkanCmdBuffer * CmdBuffer, FVulkanQueue * Queue, FVulkanQueue * PresentQueue, bool bLockToVsync) { return NativeCall<bool, FVulkanCommandListContext *, FVulkanCmdBuffer *, FVulkanQueue *, FVulkanQueue *, bool>(this, "FVulkanViewport.Present", Context, CmdBuffer, Queue, PresentQueue, bLockToVsync); }
	void RecreateSwapchain(void * NewNativeWindow, bool bForce) { NativeCall<void, void *, bool>(this, "FVulkanViewport.RecreateSwapchain", NewNativeWindow, bForce); }
	void SetCustomPresent(FRHICustomPresent * InCustomPresent) { NativeCall<void, FRHICustomPresent *>(this, "FVulkanViewport.SetCustomPresent", InCustomPresent); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FVulkanViewport.Tick", DeltaTime); }
	bool TryAcquireImageIndex() { return NativeCall<bool>(this, "FVulkanViewport.TryAcquireImageIndex"); }
	void WaitForFrameEventCompletion() { NativeCall<void>(this, "FVulkanViewport.WaitForFrameEventCompletion"); }
};

