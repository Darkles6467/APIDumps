#pragma once

#include "BaseDeclarations.h"
struct FOLDVulkanPendingGfxState
{
	char __padding[0x838L];
	FVulkanRHIGraphicsPipelineState * CurrentPipelineField() { return GetNativePointerField<FVulkanRHIGraphicsPipelineState *>(this, "FOLDVulkanPendingGfxState.CurrentPipeline"); }
	FVulkanGfxPipelineState& CurrentStateField() { return *GetNativePointerField<FVulkanGfxPipelineState*>(this, "FOLDVulkanPendingGfxState.CurrentState"); }
	FVulkanGlobalUniformPool& GlobalUniformPoolField() { return *GetNativePointerField<FVulkanGlobalUniformPool*>(this, "FOLDVulkanPendingGfxState.GlobalUniformPool"); }
	FieldArray<FOLDVulkanPendingGfxState::FVertexStream, 16> PendingStreamsField() { return {this, "FOLDVulkanPendingGfxState.PendingStreams"}; }

	// Functions

	void InternalUpdateDynamicStates(FVulkanCmdBuffer * Cmd) { NativeCall<void, FVulkanCmdBuffer *>(this, "FOLDVulkanPendingGfxState.InternalUpdateDynamicStates", Cmd); }
	void PrepareDraw(FVulkanCommandListContext * CmdListContext, FVulkanCmdBuffer * Cmd, EPrimitiveType PrimitiveType) { NativeCall<void, FVulkanCommandListContext *, FVulkanCmdBuffer *, EPrimitiveType>(this, "FOLDVulkanPendingGfxState.PrepareDraw", CmdListContext, Cmd, PrimitiveType); }
	void SetBoundShaderState(TRefCountPtr<FVulkanBoundShaderState> InBoundShaderState) { NativeCall<void, TRefCountPtr<FVulkanBoundShaderState>>(this, "FOLDVulkanPendingGfxState.SetBoundShaderState", InBoundShaderState); }
	void SetDepthStencilState(FVulkanDepthStencilState * NewState, unsigned int StencilRef) { NativeCall<void, FVulkanDepthStencilState *, unsigned int>(this, "FOLDVulkanPendingGfxState.SetDepthStencilState", NewState, StencilRef); }
	void SetRasterizerState(FVulkanRasterizerState * NewState) { NativeCall<void, FVulkanRasterizerState *>(this, "FOLDVulkanPendingGfxState.SetRasterizerState", NewState); }
	void SetSRVForUBResource(char DescriptorSet, unsigned int BindingIndex, FVulkanShaderResourceView * SRV) { NativeCall<void, char, unsigned int, FVulkanShaderResourceView *>(this, "FOLDVulkanPendingGfxState.SetSRVForUBResource", DescriptorSet, BindingIndex, SRV); }
	void SetScissor(bool bEnable, unsigned int MinX, unsigned int MinY, unsigned int MaxX, unsigned int MaxY) { NativeCall<void, bool, unsigned int, unsigned int, unsigned int, unsigned int>(this, "FOLDVulkanPendingGfxState.SetScissor", bEnable, MinX, MinY, MaxX, MaxY); }
	void SetViewport(unsigned int MinX, unsigned int MinY, float MinZ, unsigned int MaxX, unsigned int MaxY, float MaxZ) { NativeCall<void, unsigned int, unsigned int, float, unsigned int, unsigned int, float>(this, "FOLDVulkanPendingGfxState.SetViewport", MinX, MinY, MinZ, MaxX, MaxY, MaxZ); }
	void UpdateInputAttachments(FVulkanFramebuffer * Framebuffer) { NativeCall<void, FVulkanFramebuffer *>(this, "FOLDVulkanPendingGfxState.UpdateInputAttachments", Framebuffer); }
};

