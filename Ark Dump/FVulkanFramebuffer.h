#pragma once

#include "BaseDeclarations.h"
struct FVulkanFramebuffer
{
	char __padding[0x258L];
	TArray<VkImageView_T *>& AttachmentViewsField() { return *GetNativePointerField<TArray<VkImageView_T *>*>(this, "FVulkanFramebuffer.AttachmentViews"); }
	struct VkImageView_T * PartialDepthViewField() { return GetNativePointerField<struct VkImageView_T *>(this, "FVulkanFramebuffer.PartialDepthView"); }
	TArray<VkImageView_T *>& AttachmentViewsToDeleteField() { return *GetNativePointerField<TArray<VkImageView_T *>*>(this, "FVulkanFramebuffer.AttachmentViewsToDelete"); }
	struct VkFramebuffer_T * FramebufferField() { return GetNativePointerField<struct VkFramebuffer_T *>(this, "FVulkanFramebuffer.Framebuffer"); }
	VkExtent2D& ExtentsField() { return *GetNativePointerField<VkExtent2D*>(this, "FVulkanFramebuffer.Extents"); }
	const FRHISetRenderTargetsInfo& RTInfoField() { return *GetNativePointerField<const FRHISetRenderTargetsInfo*>(this, "FVulkanFramebuffer.RTInfo"); }
	unsigned int& NumColorAttachmentsField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanFramebuffer.NumColorAttachments"); }
	FieldArray<struct VkImage_T *, 8> ColorRenderTargetImagesField() { return {this, "FVulkanFramebuffer.ColorRenderTargetImages"}; }
	struct VkImage_T * DepthStencilRenderTargetImageField() { return GetNativePointerField<struct VkImage_T *>(this, "FVulkanFramebuffer.DepthStencilRenderTargetImage"); }
	TArray<VkImageMemoryBarrier>& WriteBarriersField() { return *GetNativePointerField<TArray<VkImageMemoryBarrier>*>(this, "FVulkanFramebuffer.WriteBarriers"); }

	// Functions

	void ApplyToPSOInit(FGraphicsPipelineStateInitializer * GraphicsPSOInit) { NativeCall<void, FGraphicsPipelineStateInitializer *>(this, "FVulkanFramebuffer.ApplyToPSOInit", GraphicsPSOInit); }
	bool ContainsRenderTarget(struct VkImage_T * Image) { return NativeCall<bool, struct VkImage_T *>(this, "FVulkanFramebuffer.ContainsRenderTarget", Image); }
	bool Matches(const FRHISetRenderTargetsInfo * InRTInfo) { return NativeCall<bool, const FRHISetRenderTargetsInfo *>(this, "FVulkanFramebuffer.Matches", InRTInfo); }
};

