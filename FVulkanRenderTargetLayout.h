#pragma once

#include "BaseDeclarations.h"
struct FVulkanRenderTargetLayout
{
	char __padding[0x354L];
	FieldArray<VkAttachmentReference, 8> ColorReferencesField() { return {this, "FVulkanRenderTargetLayout.ColorReferences"}; }
	VkAttachmentReference& DepthStencilReferenceField() { return *GetNativePointerField<VkAttachmentReference*>(this, "FVulkanRenderTargetLayout.DepthStencilReference"); }
	FieldArray<VkAttachmentReference, 8> ResolveReferencesField() { return {this, "FVulkanRenderTargetLayout.ResolveReferences"}; }
	FieldArray<VkAttachmentReference, 9> InputAttachmentsField() { return {this, "FVulkanRenderTargetLayout.InputAttachments"}; }
	FieldArray<VkAttachmentDescription, 17> DescField() { return {this, "FVulkanRenderTargetLayout.Desc"}; }
	char& NumAttachmentDescriptionsField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.NumAttachmentDescriptions"); }
	char& NumColorAttachmentsField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.NumColorAttachments"); }
	char& NumInputAttachmentsField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.NumInputAttachments"); }
	char& bHasDepthStencilField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.bHasDepthStencil"); }
	char& bHasResolveAttachmentsField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.bHasResolveAttachments"); }
	char& NumSamplesField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.NumSamples"); }
	char& NumUsedClearValuesField() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.NumUsedClearValues"); }
	char& Pad0Field() { return *GetNativePointerField<char*>(this, "FVulkanRenderTargetLayout.Pad0"); }
	unsigned int& RenderPassCompatibleHashField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanRenderTargetLayout.RenderPassCompatibleHash"); }
	unsigned int& RenderPassFullHashField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanRenderTargetLayout.RenderPassFullHash"); }
	FVulkanRenderTargetLayout::<unnamed_type_Extent>& ExtentField() { return *GetNativePointerField<FVulkanRenderTargetLayout::<unnamed_type_Extent>*>(this, "FVulkanRenderTargetLayout.Extent"); }
	bool& bCalculatedHashField() { return *GetNativePointerField<bool*>(this, "FVulkanRenderTargetLayout.bCalculatedHash"); }

	// Functions

};

