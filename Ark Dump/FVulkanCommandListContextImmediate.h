#pragma once

#include "BaseDeclarations.h"
#include "FIntRect.h"
#include "FColor.h"
#include "VkImageSubresourceRange.h"
#include "VkBufferMemoryBarrier.h"
#include "VkImageMemoryBarrier.h"

struct IRHIComputeContext
{
	char __padding[0x8L];

	// Functions

	void RHIEnqueueStagedRead(FRHIStagingBuffer * StagingBuffer, FRHIGPUFence * Fence, unsigned int InOffset, unsigned int InNumBytes) { NativeCall<void, FRHIStagingBuffer *, FRHIGPUFence *, unsigned int, unsigned int>(this, "IRHIComputeContext.RHIEnqueueStagedRead", StagingBuffer, Fence, InOffset, InNumBytes); }
};

struct IRHICommandContext : IRHIComputeContext
{

	// Functions

	void RHISetGraphicsPipelineState(FRHIGraphicsPipelineState * GraphicsState) { NativeCall<void, FRHIGraphicsPipelineState *>(this, "IRHICommandContext.RHISetGraphicsPipelineState", GraphicsState); }
	void RHITransitionResources(EResourceTransitionAccess TransitionType, FRHITexture ** InTextures, int NumTextures) { NativeCall<void, EResourceTransitionAccess, FRHITexture **, int>(this, "IRHICommandContext.RHITransitionResources", TransitionType, InTextures, NumTextures); }
	void RHITransitionResources(EResourceTransitionAccess TransitionType, EResourceTransitionPipeline TransitionPipeline, FRHIUnorderedAccessView ** InUAVs, int NumUAVs, FRHIComputeFence * WriteComputeFence) { NativeCall<void, EResourceTransitionAccess, EResourceTransitionPipeline, FRHIUnorderedAccessView **, int, FRHIComputeFence *>(this, "IRHICommandContext.RHITransitionResources", TransitionType, TransitionPipeline, InUAVs, NumUAVs, WriteComputeFence); }
};

struct FVulkanCommandListContext : IRHICommandContext
{
	char __padding[0x4d8L];
	FVulkanDynamicRHI * RHIField() { return GetNativePointerField<FVulkanDynamicRHI *>(this, "FVulkanCommandListContext.RHI"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanCommandListContext.Device"); }
	FVulkanQueue * QueueField() { return GetNativePointerField<FVulkanQueue *>(this, "FVulkanCommandListContext.Queue"); }
	bool& bSubmitAtNextSafePointField() { return *GetNativePointerField<bool*>(this, "FVulkanCommandListContext.bSubmitAtNextSafePoint"); }
	bool& bAutomaticFlushAfterComputeShaderField() { return *GetNativePointerField<bool*>(this, "FVulkanCommandListContext.bAutomaticFlushAfterComputeShader"); }
	VulkanRHI::FTempFrameAllocationBuffer& TempFrameAllocationBufferField() { return *GetNativePointerField<VulkanRHI::FTempFrameAllocationBuffer*>(this, "FVulkanCommandListContext.TempFrameAllocationBuffer"); }
	TArray<FString>& EventStackField() { return *GetNativePointerField<TArray<FString>*>(this, "FVulkanCommandListContext.EventStack"); }
	FVulkanCommandBufferManager * CommandBufferManagerField() { return GetNativePointerField<FVulkanCommandBufferManager *>(this, "FVulkanCommandListContext.CommandBufferManager"); }
	FTransitionAndLayoutManager& TransitionAndLayoutManagerField() { return *GetNativePointerField<FTransitionAndLayoutManager*>(this, "FVulkanCommandListContext.TransitionAndLayoutManager"); }
	FVulkanOcclusionQueryPool * CurrentOcclusionQueryPoolField() { return GetNativePointerField<FVulkanOcclusionQueryPool *>(this, "FVulkanCommandListContext.CurrentOcclusionQueryPool"); }
	FOLDVulkanPendingGfxState * PendingGfxStateField() { return GetNativePointerField<FOLDVulkanPendingGfxState *>(this, "FVulkanCommandListContext.PendingGfxState"); }
	unsigned __int64& FrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FVulkanCommandListContext.FrameCounter"); }
	FVulkanGPUProfiler& GpuProfilerField() { return *GetNativePointerField<FVulkanGPUProfiler*>(this, "FVulkanCommandListContext.GpuProfiler"); }
	FVulkanGPUTiming * FrameTimingField() { return GetNativePointerField<FVulkanGPUTiming *>(this, "FVulkanCommandListContext.FrameTiming"); }

	// Functions

	void FOcclusionQueryData() { NativeCall<void>(this, "FVulkanCommandListContext.FOcclusionQueryData"); }
	void FOcclusionQueryData(FVulkanOcclusionQueryPool * Pool, int QueryIndex) { NativeCall<void, FVulkanOcclusionQueryPool *, int>(this, "FVulkanCommandListContext.FOcclusionQueryData", Pool, QueryIndex); }
	void FOcclusionQueryData() { NativeCall<void>(this, "FVulkanCommandListContext.FOcclusionQueryData"); }
	void FlushAfterComputeShader() { NativeCall<void>(this, "FVulkanCommandListContext.FlushAfterComputeShader"); }
	void InternalClearMRT(FVulkanCmdBuffer * CmdBuffer, bool bClearColor, int NumClearColors, const FLinearColor * ClearColorArray, bool bClearDepth, float Depth, bool bClearStencil, unsigned int Stencil) { NativeCall<void, FVulkanCmdBuffer *, bool, int, const FLinearColor *, bool, float, bool, unsigned int>(this, "FVulkanCommandListContext.InternalClearMRT", CmdBuffer, bClearColor, NumClearColors, ClearColorArray, bClearDepth, Depth, bClearStencil, Stencil); }
	void PrepareForCPURead() { NativeCall<void>(this, "FVulkanCommandListContext.PrepareForCPURead"); }
	void RHIAutomaticCacheFlushAfterComputeShader(bool bEnable) { NativeCall<void, bool>(this, "FVulkanCommandListContext.RHIAutomaticCacheFlushAfterComputeShader", bEnable); }
	void RHIBeginDrawIndexedPrimitiveUP(unsigned int PrimitiveType, unsigned int NumPrimitives, unsigned int NumVertices, unsigned int VertexDataStride, void ** OutVertexData, unsigned int MinVertexIndex, unsigned int NumIndices, unsigned int IndexDataStride, void ** OutIndexData) { NativeCall<void, unsigned int, unsigned int, unsigned int, unsigned int, void **, unsigned int, unsigned int, unsigned int, void **>(this, "FVulkanCommandListContext.RHIBeginDrawIndexedPrimitiveUP", PrimitiveType, NumPrimitives, NumVertices, VertexDataStride, OutVertexData, MinVertexIndex, NumIndices, IndexDataStride, OutIndexData); }
	void RHIBeginDrawPrimitiveUP(unsigned int PrimitiveType, unsigned int NumPrimitives, unsigned int NumVertices, unsigned int VertexDataStride, void ** OutVertexData) { NativeCall<void, unsigned int, unsigned int, unsigned int, unsigned int, void **>(this, "FVulkanCommandListContext.RHIBeginDrawPrimitiveUP", PrimitiveType, NumPrimitives, NumVertices, VertexDataStride, OutVertexData); }
	void RHIBeginDrawingViewport(FRHIViewport * ViewportRHI, FRHITexture * RenderTargetRHI) { NativeCall<void, FRHIViewport *, FRHITexture *>(this, "FVulkanCommandListContext.RHIBeginDrawingViewport", ViewportRHI, RenderTargetRHI); }
	void RHIBeginFrame() { NativeCall<void>(this, "FVulkanCommandListContext.RHIBeginFrame"); }
	void RHIBeginOcclusionQueryBatch() { NativeCall<void>(this, "FVulkanCommandListContext.RHIBeginOcclusionQueryBatch"); }
	void RHIBeginRenderQuery(FRHIRenderQuery * QueryRHI) { NativeCall<void, FRHIRenderQuery *>(this, "FVulkanCommandListContext.RHIBeginRenderQuery", QueryRHI); }
	void RHIClear(bool bClearColor, const FLinearColor * Color, bool bClearDepth, float Depth, bool bClearStencil, unsigned int Stencil, FIntRect ExcludeRect) { NativeCall<void, bool, const FLinearColor *, bool, float, bool, unsigned int, FIntRect>(this, "FVulkanCommandListContext.RHIClear", bClearColor, Color, bClearDepth, Depth, bClearStencil, Stencil, ExcludeRect); }
	void RHIClearMRT(bool bClearColor, int NumClearColors, const FLinearColor * ClearColorArray, bool bClearDepth, float Depth, bool bClearStencil, unsigned int Stencil) { NativeCall<void, bool, int, const FLinearColor *, bool, float, bool, unsigned int>(this, "FVulkanCommandListContext.RHIClearMRT", bClearColor, NumClearColors, ClearColorArray, bClearDepth, Depth, bClearStencil, Stencil); }
	void RHIClearMRT(bool bClearColor, int NumClearColors, const FLinearColor * ColorArray, bool bClearDepth, float Depth, bool bClearStencil, unsigned int Stencil, FIntRect ExcludeRect) { NativeCall<void, bool, int, const FLinearColor *, bool, float, bool, unsigned int, FIntRect>(this, "FVulkanCommandListContext.RHIClearMRT", bClearColor, NumClearColors, ColorArray, bClearDepth, Depth, bClearStencil, Stencil, ExcludeRect); }
	void RHIClearUAV(FRHIUnorderedAccessView * UnorderedAccessViewRHI, const unsigned int * Values) { NativeCall<void, FRHIUnorderedAccessView *, const unsigned int *>(this, "FVulkanCommandListContext.RHIClearUAV", UnorderedAccessViewRHI, Values); }
	void RHICopyToResolveTarget(FRHITexture * SourceTextureRHI, FRHITexture * DestTextureRHI, bool __formal, const FResolveParams * InResolveParams) { NativeCall<void, FRHITexture *, FRHITexture *, bool, const FResolveParams *>(this, "FVulkanCommandListContext.RHICopyToResolveTarget", SourceTextureRHI, DestTextureRHI, __formal, InResolveParams); }
	void RHIDispatchComputeShader(unsigned int ThreadGroupCountX, unsigned int ThreadGroupCountY, unsigned int ThreadGroupCountZ) { NativeCall<void, unsigned int, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHIDispatchComputeShader", ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ); }
	void RHIDispatchIndirectComputeShader(FRHIVertexBuffer * ArgumentBufferRHI, unsigned int ArgumentOffset) { NativeCall<void, FRHIVertexBuffer *, unsigned int>(this, "FVulkanCommandListContext.RHIDispatchIndirectComputeShader", ArgumentBufferRHI, ArgumentOffset); }
	void RHIDrawIndexedIndirect(FRHIIndexBuffer * IndexBufferRHI, unsigned int PrimitiveType, FRHIStructuredBuffer * ArgumentsBufferRHI, int DrawArgumentsIndex, unsigned int NumInstances) { NativeCall<void, FRHIIndexBuffer *, unsigned int, FRHIStructuredBuffer *, int, unsigned int>(this, "FVulkanCommandListContext.RHIDrawIndexedIndirect", IndexBufferRHI, PrimitiveType, ArgumentsBufferRHI, DrawArgumentsIndex, NumInstances); }
	void RHIDrawIndexedPrimitive(FRHIIndexBuffer * IndexBufferRHI, unsigned int PrimitiveType, int BaseVertexIndex, unsigned int FirstInstance, unsigned int NumVertices, unsigned int StartIndex, unsigned int NumPrimitives, unsigned int NumInstances) { NativeCall<void, FRHIIndexBuffer *, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHIDrawIndexedPrimitive", IndexBufferRHI, PrimitiveType, BaseVertexIndex, FirstInstance, NumVertices, StartIndex, NumPrimitives, NumInstances); }
	void RHIDrawIndexedPrimitiveIndirect(unsigned int PrimitiveType, FRHIIndexBuffer * IndexBufferRHI, FRHIVertexBuffer * ArgumentBufferRHI, unsigned int ArgumentOffset) { NativeCall<void, unsigned int, FRHIIndexBuffer *, FRHIVertexBuffer *, unsigned int>(this, "FVulkanCommandListContext.RHIDrawIndexedPrimitiveIndirect", PrimitiveType, IndexBufferRHI, ArgumentBufferRHI, ArgumentOffset); }
	void RHIDrawPrimitive(unsigned int PrimitiveType, unsigned int BaseVertexIndex, unsigned int NumPrimitives, unsigned int NumInstances) { NativeCall<void, unsigned int, unsigned int, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHIDrawPrimitive", PrimitiveType, BaseVertexIndex, NumPrimitives, NumInstances); }
	void RHIDrawPrimitiveIndirect(unsigned int PrimitiveType, FRHIVertexBuffer * ArgumentBufferRHI, unsigned int ArgumentOffset) { NativeCall<void, unsigned int, FRHIVertexBuffer *, unsigned int>(this, "FVulkanCommandListContext.RHIDrawPrimitiveIndirect", PrimitiveType, ArgumentBufferRHI, ArgumentOffset); }
	void RHIEnableDepthBoundsTest(bool bEnable, float MinDepth, float MaxDepth) { NativeCall<void, bool, float, float>(this, "FVulkanCommandListContext.RHIEnableDepthBoundsTest", bEnable, MinDepth, MaxDepth); }
	void RHIEndDrawIndexedPrimitiveUP() { NativeCall<void>(this, "FVulkanCommandListContext.RHIEndDrawIndexedPrimitiveUP"); }
	void RHIEndDrawPrimitiveUP() { NativeCall<void>(this, "FVulkanCommandListContext.RHIEndDrawPrimitiveUP"); }
	void RHIEndDrawingViewport(FRHIViewport * ViewportRHI, bool bPresent, bool bLockToVsync) { NativeCall<void, FRHIViewport *, bool, bool>(this, "FVulkanCommandListContext.RHIEndDrawingViewport", ViewportRHI, bPresent, bLockToVsync); }
	void RHIEndFrame() { NativeCall<void>(this, "FVulkanCommandListContext.RHIEndFrame"); }
	void RHIEndOcclusionQueryBatch() { NativeCall<void>(this, "FVulkanCommandListContext.RHIEndOcclusionQueryBatch"); }
	void RHIEndRenderQuery(FRHIRenderQuery * QueryRHI) { NativeCall<void, FRHIRenderQuery *>(this, "FVulkanCommandListContext.RHIEndRenderQuery", QueryRHI); }
	void RHIEnqueueStagedRead(FRHIStagingBuffer * StagingBufferRHI, FRHIGPUFence * FenceRHI, unsigned int Offset, unsigned int NumBytes) { NativeCall<void, FRHIStagingBuffer *, FRHIGPUFence *, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHIEnqueueStagedRead", StagingBufferRHI, FenceRHI, Offset, NumBytes); }
	void RHIFlushComputeShaderCache() { NativeCall<void>(this, "FVulkanCommandListContext.RHIFlushComputeShaderCache"); }
	void RHIPopEvent() { NativeCall<void>(this, "FVulkanCommandListContext.RHIPopEvent"); }
	void RHIPushEvent(const wchar_t * Name, FColor Color) { NativeCall<void, const wchar_t *, FColor>(this, "FVulkanCommandListContext.RHIPushEvent", Name, Color); }
	void RHISetBlendState(FRHIBlendState * NewStateRHI, const FLinearColor * BlendFactor) { NativeCall<void, FRHIBlendState *, const FLinearColor *>(this, "FVulkanCommandListContext.RHISetBlendState", NewStateRHI, BlendFactor); }
	void RHISetBoundShaderState(FRHIBoundShaderState * BoundShaderStateRHI) { NativeCall<void, FRHIBoundShaderState *>(this, "FVulkanCommandListContext.RHISetBoundShaderState", BoundShaderStateRHI); }
	void RHISetComputePipelineState(FRHIComputePipelineState * ComputePipelineState) { NativeCall<void, FRHIComputePipelineState *>(this, "FVulkanCommandListContext.RHISetComputePipelineState", ComputePipelineState); }
	void RHISetComputeShader(FRHIComputeShader * ComputeShaderRHI) { NativeCall<void, FRHIComputeShader *>(this, "FVulkanCommandListContext.RHISetComputeShader", ComputeShaderRHI); }
	void RHISetDepthBounds(float MinDepth, float MaxDepth) { NativeCall<void, float, float>(this, "FVulkanCommandListContext.RHISetDepthBounds", MinDepth, MaxDepth); }
	void RHISetDepthStencilState(FRHIDepthStencilState * NewStateRHI, unsigned int StencilRef) { NativeCall<void, FRHIDepthStencilState *, unsigned int>(this, "FVulkanCommandListContext.RHISetDepthStencilState", NewStateRHI, StencilRef); }
	void RHISetRasterizerState(FRHIRasterizerState * NewStateRHI) { NativeCall<void, FRHIRasterizerState *>(this, "FVulkanCommandListContext.RHISetRasterizerState", NewStateRHI); }
	void RHISetRenderTargets(unsigned int NumSimultaneousRenderTargets, const FRHIRenderTargetView * NewRenderTargets, const FRHIDepthRenderTargetView * NewDepthStencilTarget, unsigned int NumUAVs, FRHIUnorderedAccessView *const * UAVs) { NativeCall<void, unsigned int, const FRHIRenderTargetView *, const FRHIDepthRenderTargetView *, unsigned int, FRHIUnorderedAccessView *const *>(this, "FVulkanCommandListContext.RHISetRenderTargets", NumSimultaneousRenderTargets, NewRenderTargets, NewDepthStencilTarget, NumUAVs, UAVs); }
	void RHISetRenderTargetsAndClear(const FRHISetRenderTargetsInfo * RenderTargetsInfo) { NativeCall<void, const FRHISetRenderTargetsInfo *>(this, "FVulkanCommandListContext.RHISetRenderTargetsAndClear", RenderTargetsInfo); }
	void RHISetScissorRect(bool bEnable, unsigned int MinX, unsigned int MinY, unsigned int MaxX, unsigned int MaxY) { NativeCall<void, bool, unsigned int, unsigned int, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHISetScissorRect", bEnable, MinX, MinY, MaxX, MaxY); }
	void RHISetShaderParameter(FRHIComputeShader * ComputeShaderRHI, unsigned int BufferIndex, unsigned int BaseIndex, unsigned int NumBytes, const void * NewValue) { NativeCall<void, FRHIComputeShader *, unsigned int, unsigned int, unsigned int, const void *>(this, "FVulkanCommandListContext.RHISetShaderParameter", ComputeShaderRHI, BufferIndex, BaseIndex, NumBytes, NewValue); }
	void RHISetShaderParameter(FRHIGeometryShader * GeometryShaderRHI, unsigned int BufferIndex, unsigned int BaseIndex, unsigned int NumBytes, const void * NewValue) { NativeCall<void, FRHIGeometryShader *, unsigned int, unsigned int, unsigned int, const void *>(this, "FVulkanCommandListContext.RHISetShaderParameter", GeometryShaderRHI, BufferIndex, BaseIndex, NumBytes, NewValue); }
	void RHISetShaderParameter(FRHIPixelShader * PixelShaderRHI, unsigned int BufferIndex, unsigned int BaseIndex, unsigned int NumBytes, const void * NewValue) { NativeCall<void, FRHIPixelShader *, unsigned int, unsigned int, unsigned int, const void *>(this, "FVulkanCommandListContext.RHISetShaderParameter", PixelShaderRHI, BufferIndex, BaseIndex, NumBytes, NewValue); }
	void RHISetShaderParameter(FRHIVertexShader * VertexShaderRHI, unsigned int BufferIndex, unsigned int BaseIndex, unsigned int NumBytes, const void * NewValue) { NativeCall<void, FRHIVertexShader *, unsigned int, unsigned int, unsigned int, const void *>(this, "FVulkanCommandListContext.RHISetShaderParameter", VertexShaderRHI, BufferIndex, BaseIndex, NumBytes, NewValue); }
	void RHISetShaderResourceViewParameter(FRHIComputeShader * ComputeShaderRHI, unsigned int TextureIndex, FRHIShaderResourceView * SRVRHI) { NativeCall<void, FRHIComputeShader *, unsigned int, FRHIShaderResourceView *>(this, "FVulkanCommandListContext.RHISetShaderResourceViewParameter", ComputeShaderRHI, TextureIndex, SRVRHI); }
	void RHISetShaderResourceViewParameter(FRHIGeometryShader * GeometryShaderRHI, unsigned int TextureIndex, FRHIShaderResourceView * SRVRHI) { NativeCall<void, FRHIGeometryShader *, unsigned int, FRHIShaderResourceView *>(this, "FVulkanCommandListContext.RHISetShaderResourceViewParameter", GeometryShaderRHI, TextureIndex, SRVRHI); }
	void RHISetShaderResourceViewParameter(FRHIPixelShader * PixelShaderRHI, unsigned int TextureIndex, FRHIShaderResourceView * SRVRHI) { NativeCall<void, FRHIPixelShader *, unsigned int, FRHIShaderResourceView *>(this, "FVulkanCommandListContext.RHISetShaderResourceViewParameter", PixelShaderRHI, TextureIndex, SRVRHI); }
	void RHISetShaderResourceViewParameter(FRHIVertexShader * VertexShaderRHI, unsigned int TextureIndex, FRHIShaderResourceView * SRVRHI) { NativeCall<void, FRHIVertexShader *, unsigned int, FRHIShaderResourceView *>(this, "FVulkanCommandListContext.RHISetShaderResourceViewParameter", VertexShaderRHI, TextureIndex, SRVRHI); }
	void RHISetShaderSampler(FRHIComputeShader * ComputeShaderRHI, unsigned int SamplerIndex, FRHISamplerState * NewStateRHI) { NativeCall<void, FRHIComputeShader *, unsigned int, FRHISamplerState *>(this, "FVulkanCommandListContext.RHISetShaderSampler", ComputeShaderRHI, SamplerIndex, NewStateRHI); }
	void RHISetShaderSampler(FRHIGeometryShader * GeometryShaderRHI, unsigned int SamplerIndex, FRHISamplerState * NewStateRHI) { NativeCall<void, FRHIGeometryShader *, unsigned int, FRHISamplerState *>(this, "FVulkanCommandListContext.RHISetShaderSampler", GeometryShaderRHI, SamplerIndex, NewStateRHI); }
	void RHISetShaderSampler(FRHIPixelShader * PixelShaderRHI, unsigned int SamplerIndex, FRHISamplerState * NewStateRHI) { NativeCall<void, FRHIPixelShader *, unsigned int, FRHISamplerState *>(this, "FVulkanCommandListContext.RHISetShaderSampler", PixelShaderRHI, SamplerIndex, NewStateRHI); }
	void RHISetShaderSampler(FRHIVertexShader * VertexShaderRHI, unsigned int SamplerIndex, FRHISamplerState * NewStateRHI) { NativeCall<void, FRHIVertexShader *, unsigned int, FRHISamplerState *>(this, "FVulkanCommandListContext.RHISetShaderSampler", VertexShaderRHI, SamplerIndex, NewStateRHI); }
	void RHISetShaderTexture(FRHIComputeShader * ComputeShaderRHI, unsigned int TextureIndex, FRHITexture * NewTextureRHI) { NativeCall<void, FRHIComputeShader *, unsigned int, FRHITexture *>(this, "FVulkanCommandListContext.RHISetShaderTexture", ComputeShaderRHI, TextureIndex, NewTextureRHI); }
	void RHISetShaderTexture(FRHIGeometryShader * GeometryShaderRHI, unsigned int TextureIndex, FRHITexture * NewTextureRHI) { NativeCall<void, FRHIGeometryShader *, unsigned int, FRHITexture *>(this, "FVulkanCommandListContext.RHISetShaderTexture", GeometryShaderRHI, TextureIndex, NewTextureRHI); }
	void RHISetShaderTexture(FRHIPixelShader * PixelShaderRHI, unsigned int TextureIndex, FRHITexture * NewTextureRHI) { NativeCall<void, FRHIPixelShader *, unsigned int, FRHITexture *>(this, "FVulkanCommandListContext.RHISetShaderTexture", PixelShaderRHI, TextureIndex, NewTextureRHI); }
	void RHISetShaderTexture(FRHIVertexShader * VertexShaderRHI, unsigned int TextureIndex, FRHITexture * NewTextureRHI) { NativeCall<void, FRHIVertexShader *, unsigned int, FRHITexture *>(this, "FVulkanCommandListContext.RHISetShaderTexture", VertexShaderRHI, TextureIndex, NewTextureRHI); }
	void RHISetShaderUniformBuffer(FRHIComputeShader * ComputeShaderRHI, unsigned int BufferIndex, FRHIUniformBuffer * BufferRHI) { NativeCall<void, FRHIComputeShader *, unsigned int, FRHIUniformBuffer *>(this, "FVulkanCommandListContext.RHISetShaderUniformBuffer", ComputeShaderRHI, BufferIndex, BufferRHI); }
	void RHISetShaderUniformBuffer(FRHIGeometryShader * GeometryShaderRHI, unsigned int BufferIndex, FRHIUniformBuffer * BufferRHI) { NativeCall<void, FRHIGeometryShader *, unsigned int, FRHIUniformBuffer *>(this, "FVulkanCommandListContext.RHISetShaderUniformBuffer", GeometryShaderRHI, BufferIndex, BufferRHI); }
	void RHISetShaderUniformBuffer(FRHIPixelShader * PixelShaderRHI, unsigned int BufferIndex, FRHIUniformBuffer * BufferRHI) { NativeCall<void, FRHIPixelShader *, unsigned int, FRHIUniformBuffer *>(this, "FVulkanCommandListContext.RHISetShaderUniformBuffer", PixelShaderRHI, BufferIndex, BufferRHI); }
	void RHISetShaderUniformBuffer(FRHIVertexShader * VertexShaderRHI, unsigned int BufferIndex, FRHIUniformBuffer * BufferRHI) { NativeCall<void, FRHIVertexShader *, unsigned int, FRHIUniformBuffer *>(this, "FVulkanCommandListContext.RHISetShaderUniformBuffer", VertexShaderRHI, BufferIndex, BufferRHI); }
	void RHISetStencilRef(unsigned int StencilRef) { NativeCall<void, unsigned int>(this, "FVulkanCommandListContext.RHISetStencilRef", StencilRef); }
	void RHISetStereoViewport(unsigned int LeftMinX, unsigned int RightMinX, unsigned int MinY, float MinZ, unsigned int LeftMaxX, unsigned int RightMaxX, unsigned int MaxY, float MaxZ) { NativeCall<void, unsigned int, unsigned int, unsigned int, float, unsigned int, unsigned int, unsigned int, float>(this, "FVulkanCommandListContext.RHISetStereoViewport", LeftMinX, RightMinX, MinY, MinZ, LeftMaxX, RightMaxX, MaxY, MaxZ); }
	void RHISetStreamSource(unsigned int StreamIndex, FRHIVertexBuffer * VertexBufferRHI, unsigned int Stride, unsigned int Offset) { NativeCall<void, unsigned int, FRHIVertexBuffer *, unsigned int, unsigned int>(this, "FVulkanCommandListContext.RHISetStreamSource", StreamIndex, VertexBufferRHI, Stride, Offset); }
	void RHISetUAVParameter(FRHIComputeShader * ComputeShaderRHI, unsigned int UAVIndex, FRHIUnorderedAccessView * UAVRHI) { NativeCall<void, FRHIComputeShader *, unsigned int, FRHIUnorderedAccessView *>(this, "FVulkanCommandListContext.RHISetUAVParameter", ComputeShaderRHI, UAVIndex, UAVRHI); }
	void RHISetViewport(int MinX, int MinY, float MinZ, int MaxX, int MaxY, float MaxZ) { NativeCall<void, int, int, float, int, int, float>(this, "FVulkanCommandListContext.RHISetViewport", MinX, MinY, MinZ, MaxX, MaxY, MaxZ); }
	void RHISubmitCommandsHint() { NativeCall<void>(this, "FVulkanCommandListContext.RHISubmitCommandsHint"); }
	void RHITransitionResources(EResourceTransitionAccess TransitionType, FRHITexture ** InTextures, int NumTextures) { NativeCall<void, EResourceTransitionAccess, FRHITexture **, int>(this, "FVulkanCommandListContext.RHITransitionResources", TransitionType, InTextures, NumTextures); }
	void RHITransitionResources(EResourceTransitionAccess TransitionType, EResourceTransitionPipeline TransitionPipeline, FRHIUnorderedAccessView ** InUAVs, int NumUAVs, FRHIComputeFence * WriteComputeFenceRHI) { NativeCall<void, EResourceTransitionAccess, EResourceTransitionPipeline, FRHIUnorderedAccessView **, int, FRHIComputeFence *>(this, "FVulkanCommandListContext.RHITransitionResources", TransitionType, TransitionPipeline, InUAVs, NumUAVs, WriteComputeFenceRHI); }
	void RHIUpdateTextureReference(FRHITextureReference * TextureRef, FRHITexture * NewTexture) { NativeCall<void, FRHITextureReference *, FRHITexture *>(this, "FVulkanCommandListContext.RHIUpdateTextureReference", TextureRef, NewTexture); }
	void RHIWaitComputeFence(FRHIComputeFence * InFence) { NativeCall<void, FRHIComputeFence *>(this, "FVulkanCommandListContext.RHIWaitComputeFence", InFence); }
	void ReadAndCalculateGPUFrameTime() { NativeCall<void>(this, "FVulkanCommandListContext.ReadAndCalculateGPUFrameTime"); }
	void RequestSubmitCurrentCommands() { NativeCall<void>(this, "FVulkanCommandListContext.RequestSubmitCurrentCommands"); }
	void FOcclusionQueryData(FVulkanCmdBuffer * InCmdBuffer) { NativeCall<void, FVulkanCmdBuffer *>(this, "FVulkanCommandListContext.FOcclusionQueryData", InCmdBuffer); }
	bool SafePointSubmit() { return NativeCall<bool>(this, "FVulkanCommandListContext.SafePointSubmit"); }
	void SetShaderUniformBuffer(ShaderStage::EStage Stage, const FVulkanUniformBuffer * UniformBuffer, int BufferIndex, const FVulkanShader * Shader) { NativeCall<void, ShaderStage::EStage, const FVulkanUniformBuffer *, int, const FVulkanShader *>(this, "FVulkanCommandListContext.SetShaderUniformBuffer", Stage, UniformBuffer, BufferIndex, Shader); }
	void TransitionSurface(EResourceTransitionAccess TransitionType, FVulkanSurface * Surface, VkImageSubresourceRange Range) { NativeCall<void, EResourceTransitionAccess, FVulkanSurface *, VkImageSubresourceRange>(this, "FVulkanCommandListContext.TransitionSurface", TransitionType, Surface, Range); }
	static void TransitionUAVResourcesTransferringOwnership(FVulkanCommandListContext * GfxContext, FVulkanCommandListContext * ComputeContext, EResourceTransitionPipeline Pipeline, const TArray<VkBufferMemoryBarrier> * InBufferBarriers, const TArray<VkImageMemoryBarrier> * InImageBarriers) { NativeCall<void, FVulkanCommandListContext *, FVulkanCommandListContext *, EResourceTransitionPipeline, const TArray<VkBufferMemoryBarrier> *, const TArray<VkImageMemoryBarrier> *>(nullptr, "FVulkanCommandListContext.TransitionUAVResourcesTransferringOwnership", GfxContext, ComputeContext, Pipeline, InBufferBarriers, InImageBarriers); }
};

struct FVulkanCommandListContextImmediate : FVulkanCommandListContext
{

	// Functions

};

