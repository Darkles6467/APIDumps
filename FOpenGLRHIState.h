#pragma once

#include "BaseDeclarations.h"
#include "FOpenGLCommonState.h"

struct FOpenGLRHIState : FOpenGLCommonState
{
	char __padding[0x6d0L];
	FOpenGLRasterizerStateData& RasterizerStateField() { return *GetNativePointerField<FOpenGLRasterizerStateData*>(this, "FOpenGLRHIState.RasterizerState"); }
	FOpenGLDepthStencilStateData& DepthStencilStateField() { return *GetNativePointerField<FOpenGLDepthStencilStateData*>(this, "FOpenGLRHIState.DepthStencilState"); }
	unsigned int& StencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.StencilRef"); }
	FOpenGLBlendStateData& BlendStateField() { return *GetNativePointerField<FOpenGLBlendStateData*>(this, "FOpenGLRHIState.BlendState"); }
	unsigned int& FramebufferField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.Framebuffer"); }
	bool& bScissorEnabledField() { return *GetNativePointerField<bool*>(this, "FOpenGLRHIState.bScissorEnabled"); }
	FIntRect& ScissorField() { return *GetNativePointerField<FIntRect*>(this, "FOpenGLRHIState.Scissor"); }
	FIntRect& ViewportField() { return *GetNativePointerField<FIntRect*>(this, "FOpenGLRHIState.Viewport"); }
	float& DepthMinZField() { return *GetNativePointerField<float*>(this, "FOpenGLRHIState.DepthMinZ"); }
	float& DepthMaxZField() { return *GetNativePointerField<float*>(this, "FOpenGLRHIState.DepthMaxZ"); }
	unsigned int& ZeroFilledDummyUniformBufferField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.ZeroFilledDummyUniformBuffer"); }
	unsigned int& RenderTargetWidthField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.RenderTargetWidth"); }
	unsigned int& RenderTargetHeightField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.RenderTargetHeight"); }
	unsigned int& RunningOcclusionQueryField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.RunningOcclusionQuery"); }
	int& FirstNonzeroRenderTargetField() { return *GetNativePointerField<int*>(this, "FOpenGLRHIState.FirstNonzeroRenderTarget"); }
	FieldArray<FOpenGLTextureBase *, 8> RenderTargetsField() { return {this, "FOpenGLRHIState.RenderTargets"}; }
	FieldArray<unsigned int, 8> RenderTargetMipmapLevelsField() { return {this, "FOpenGLRHIState.RenderTargetMipmapLevels"}; }
	FieldArray<unsigned int, 8> RenderTargetArrayIndexField() { return {this, "FOpenGLRHIState.RenderTargetArrayIndex"}; }
	FOpenGLTextureBase * DepthStencilField() { return GetNativePointerField<FOpenGLTextureBase *>(this, "FOpenGLRHIState.DepthStencil"); }
	bool& bFramebufferSetupInvalidField() { return *GetNativePointerField<bool*>(this, "FOpenGLRHIState.bFramebufferSetupInvalid"); }
	FOpenGLStream& DynamicVertexStreamField() { return *GetNativePointerField<FOpenGLStream*>(this, "FOpenGLRHIState.DynamicVertexStream"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.NumVertices"); }
	unsigned int& PrimitiveTypeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.PrimitiveType"); }
	unsigned int& NumPrimitivesField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.NumPrimitives"); }
	unsigned int& MinVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.MinVertexIndex"); }
	unsigned int& IndexDataStrideField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.IndexDataStride"); }
	FieldArray<FOpenGLStream, 16> StreamsField() { return {this, "FOpenGLRHIState.Streams"}; }
	FOpenGLShaderParameterCache * ShaderParametersField() { return GetNativePointerField<FOpenGLShaderParameterCache *>(this, "FOpenGLRHIState.ShaderParameters"); }
	TRefCountPtr<FOpenGLBoundShaderState>& BoundShaderStateField() { return *GetNativePointerField<TRefCountPtr<FOpenGLBoundShaderState>*>(this, "FOpenGLRHIState.BoundShaderState"); }
	FieldArray<unsigned __int16, 6> DirtyUniformBuffersField() { return {this, "FOpenGLRHIState.DirtyUniformBuffers"}; }
	unsigned int& UpVertexBufferBytesField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.UpVertexBufferBytes"); }
	unsigned int& UpIndexBufferBytesField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.UpIndexBufferBytes"); }
	unsigned int& UpStrideField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLRHIState.UpStride"); }
	void * UpVertexBufferField() { return GetNativePointerField<void *>(this, "FOpenGLRHIState.UpVertexBuffer"); }
	void * UpIndexBufferField() { return GetNativePointerField<void *>(this, "FOpenGLRHIState.UpIndexBuffer"); }

	// Functions

	void CleanupResources() { NativeCall<void>(this, "FOpenGLRHIState.CleanupResources"); }
	void InitializeResources(int NumCombinedTextures, int NumComputeUAVUnits) { NativeCall<void, int, int>(this, "FOpenGLRHIState.InitializeResources", NumCombinedTextures, NumComputeUAVUnits); }
};

