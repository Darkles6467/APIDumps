#pragma once

#include "BaseDeclarations.h"
struct FVulkanGfxPipelineState
{
	char __padding[0xc8L];
	TRefCountPtr<FVulkanBoundShaderState>& BSSField() { return *GetNativePointerField<TRefCountPtr<FVulkanBoundShaderState>*>(this, "FVulkanGfxPipelineState.BSS"); }
	FVulkanRenderPass * RenderPassField() { return GetNativePointerField<FVulkanRenderPass *>(this, "FVulkanGfxPipelineState.RenderPass"); }
	VkPipelineDynamicStateCreateInfo& DynamicStateField() { return *GetNativePointerField<VkPipelineDynamicStateCreateInfo*>(this, "FVulkanGfxPipelineState.DynamicState"); }
	VkPipelineInputAssemblyStateCreateInfo& InputAssemblyField() { return *GetNativePointerField<VkPipelineInputAssemblyStateCreateInfo*>(this, "FVulkanGfxPipelineState.InputAssembly"); }
	TRefCountPtr<FVulkanRasterizerState>& RasterizerStateField() { return *GetNativePointerField<TRefCountPtr<FVulkanRasterizerState>*>(this, "FVulkanGfxPipelineState.RasterizerState"); }
	TRefCountPtr<FVulkanBlendState>& BlendStateField() { return *GetNativePointerField<TRefCountPtr<FVulkanBlendState>*>(this, "FVulkanGfxPipelineState.BlendState"); }
	TRefCountPtr<FVulkanDepthStencilState>& DepthStencilStateField() { return *GetNativePointerField<TRefCountPtr<FVulkanDepthStencilState>*>(this, "FVulkanGfxPipelineState.DepthStencilState"); }
	bool& bScissorEnableField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipelineState.bScissorEnable"); }
	VkRect2D& ScissorField() { return *GetNativePointerField<VkRect2D*>(this, "FVulkanGfxPipelineState.Scissor"); }
	VkViewport& ViewportField() { return *GetNativePointerField<VkViewport*>(this, "FVulkanGfxPipelineState.Viewport"); }
	unsigned int& StencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanGfxPipelineState.StencilRef"); }
	unsigned int& PrevStencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanGfxPipelineState.PrevStencilRef"); }
	bool& bNeedsScissorUpdateField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipelineState.bNeedsScissorUpdate"); }
	bool& bNeedsViewportUpdateField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipelineState.bNeedsViewportUpdate"); }
	bool& bNeedsStencilRefUpdateField() { return *GetNativePointerField<bool*>(this, "FVulkanGfxPipelineState.bNeedsStencilRefUpdate"); }
	FieldArray<VkDynamicState, 9> DynamicStatesEnabledField() { return {this, "FVulkanGfxPipelineState.DynamicStatesEnabled"}; }

	// Functions

	void Reset() { NativeCall<void>(this, "FVulkanGfxPipelineState.Reset"); }
};

