#pragma once

#include "BaseDeclarations.h"
struct FTransitionAndLayoutManagerData
{
	char __padding[0x118L];
	FWindowsCriticalSection& LayoutCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FTransitionAndLayoutManagerData.LayoutCS"); }

	// Functions

	void TempCopy(const FTransitionAndLayoutManagerData * In) { NativeCall<void, const FTransitionAndLayoutManagerData *>(this, "FTransitionAndLayoutManagerData.TempCopy", In); }
};

struct FTransitionAndLayoutManager : FTransitionAndLayoutManagerData
{
	char __padding[0x110L];
	FTransitionAndLayoutManager::FGenerateMipsInfo& GenerateMipsInfoField() { return *GetNativePointerField<FTransitionAndLayoutManager::FGenerateMipsInfo*>(this, "FTransitionAndLayoutManager.GenerateMipsInfo"); }
	bool& bInsideRealRenderPassField() { return *GetNativePointerField<bool*>(this, "FTransitionAndLayoutManager.bInsideRealRenderPass"); }
	FVulkanRenderPass * CurrentRenderPassField() { return GetNativePointerField<FVulkanRenderPass *>(this, "FTransitionAndLayoutManager.CurrentRenderPass"); }
	FVulkanFramebuffer * CurrentFramebufferField() { return GetNativePointerField<FVulkanFramebuffer *>(this, "FTransitionAndLayoutManager.CurrentFramebuffer"); }
	FWindowsCriticalSection& RenderPassesCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FTransitionAndLayoutManager.RenderPassesCS"); }

	// Functions

	void FGenerateMipsInfo() { NativeCall<void>(this, "FTransitionAndLayoutManager.FGenerateMipsInfo"); }
	void BeginEmulatedRenderPass(FVulkanCommandListContext * Context, FVulkanDevice * InDevice, FVulkanCmdBuffer * CmdBuffer, const FRHISetRenderTargetsInfo * RenderTargetsInfo, const FVulkanRenderTargetLayout * RTLayout, FVulkanRenderPass * RenderPass, FVulkanFramebuffer * Framebuffer) { NativeCall<void, FVulkanCommandListContext *, FVulkanDevice *, FVulkanCmdBuffer *, const FRHISetRenderTargetsInfo *, const FVulkanRenderTargetLayout *, FVulkanRenderPass *, FVulkanFramebuffer *>(this, "FTransitionAndLayoutManager.BeginEmulatedRenderPass", Context, InDevice, CmdBuffer, RenderTargetsInfo, RTLayout, RenderPass, Framebuffer); }
	void Destroy(FVulkanDevice * InDevice, FTransitionAndLayoutManager * Immediate) { NativeCall<void, FVulkanDevice *, FTransitionAndLayoutManager *>(this, "FTransitionAndLayoutManager.Destroy", InDevice, Immediate); }
	void EndEmulatedRenderPass(FVulkanCommandListContext * Context, FVulkanCmdBuffer * CmdBuffer) { NativeCall<void, FVulkanCommandListContext *, FVulkanCmdBuffer *>(this, "FTransitionAndLayoutManager.EndEmulatedRenderPass", Context, CmdBuffer); }
	VkImageLayout FindLayoutChecked(struct VkImage_T * Image) { return NativeCall<VkImageLayout, struct VkImage_T *>(this, "FTransitionAndLayoutManager.FindLayoutChecked", Image); }
	VkImageLayout FindLayoutUnchecked(struct VkImage_T * Image) { return NativeCall<VkImageLayout, struct VkImage_T *>(this, "FTransitionAndLayoutManager.FindLayoutUnchecked", Image); }
	VkImageLayout * FindOrAddLayoutRW(struct VkImage_T * Image, VkImageLayout LayoutIfNotFound, unsigned int NumMips, unsigned int NumLayers) { return NativeCall<VkImageLayout *, struct VkImage_T *, VkImageLayout, unsigned int, unsigned int>(this, "FTransitionAndLayoutManager.FindOrAddLayoutRW", Image, LayoutIfNotFound, NumMips, NumLayers); }
	FVulkanImageLayout * GetOrAddFullLayout(const FVulkanSurface * Surface, VkImageLayout LayoutIfNotFound) { return NativeCall<FVulkanImageLayout *, const FVulkanSurface *, VkImageLayout>(this, "FTransitionAndLayoutManager.GetOrAddFullLayout", Surface, LayoutIfNotFound); }
	FVulkanFramebuffer * GetOrCreateFramebuffer(FVulkanDevice * InDevice, const FRHISetRenderTargetsInfo * RenderTargetsInfo, const FVulkanRenderTargetLayout * RTLayout, FVulkanRenderPass * RenderPass) { return NativeCall<FVulkanFramebuffer *, FVulkanDevice *, const FRHISetRenderTargetsInfo *, const FVulkanRenderTargetLayout *, FVulkanRenderPass *>(this, "FTransitionAndLayoutManager.GetOrCreateFramebuffer", InDevice, RenderTargetsInfo, RTLayout, RenderPass); }
	FVulkanRenderPass * GetOrCreateRenderPass(FVulkanDevice * InDevice, const FVulkanRenderTargetLayout * RTLayout) { return NativeCall<FVulkanRenderPass *, FVulkanDevice *, const FVulkanRenderTargetLayout *>(this, "FTransitionAndLayoutManager.GetOrCreateRenderPass", InDevice, RTLayout); }
	VkImageLayout GetSubresLayoutChecked(struct VkImage_T * Image, unsigned int Layer, unsigned int Mip) { return NativeCall<VkImageLayout, struct VkImage_T *, unsigned int, unsigned int>(this, "FTransitionAndLayoutManager.GetSubresLayoutChecked", Image, Layer, Mip); }
	void NotifyDeletedRenderTarget(FVulkanDevice * InDevice, struct VkImage_T * Image) { NativeCall<void, FVulkanDevice *, struct VkImage_T *>(this, "FTransitionAndLayoutManager.NotifyDeletedRenderTarget", InDevice, Image); }
	void FGenerateMipsInfo() { NativeCall<void>(this, "FTransitionAndLayoutManager.FGenerateMipsInfo"); }
	void TransitionResource(FVulkanCmdBuffer * CmdBuffer, FVulkanSurface * Surface, VulkanRHI::EImageLayoutBarrier DestLayout) { NativeCall<void, FVulkanCmdBuffer *, FVulkanSurface *, VulkanRHI::EImageLayoutBarrier>(this, "FTransitionAndLayoutManager.TransitionResource", CmdBuffer, Surface, DestLayout); }
	void TransitionResources(FVulkanCommandListContext * Context, const FPendingTransition * PendingTransition) { NativeCall<void, FVulkanCommandListContext *, const FPendingTransition *>(this, "FTransitionAndLayoutManager.TransitionResources", Context, PendingTransition); }
};

