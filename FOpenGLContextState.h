#pragma once

#include "BaseDeclarations.h"
#include "FOpenGLCommonState.h"

struct FOpenGLContextState : FOpenGLCommonState
{
	char __padding[0x848L];
	FOpenGLRasterizerStateData& RasterizerStateField() { return *GetNativePointerField<FOpenGLRasterizerStateData*>(this, "FOpenGLContextState.RasterizerState"); }
	FOpenGLDepthStencilStateData& DepthStencilStateField() { return *GetNativePointerField<FOpenGLDepthStencilStateData*>(this, "FOpenGLContextState.DepthStencilState"); }
	unsigned int& StencilRefField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.StencilRef"); }
	FOpenGLBlendStateData& BlendStateField() { return *GetNativePointerField<FOpenGLBlendStateData*>(this, "FOpenGLContextState.BlendState"); }
	unsigned int& FramebufferField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.Framebuffer"); }
	unsigned int& RenderTargetWidthField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.RenderTargetWidth"); }
	unsigned int& RenderTargetHeightField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.RenderTargetHeight"); }
	unsigned int& OcclusionQueryField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.OcclusionQuery"); }
	unsigned int& ProgramField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.Program"); }
	bool& bUsingTessellationField() { return *GetNativePointerField<bool*>(this, "FOpenGLContextState.bUsingTessellation"); }
	FieldArray<unsigned int, 72> UniformBuffersField() { return {this, "FOpenGLContextState.UniformBuffers"}; }
	FieldArray<unsigned int, 72> UniformBufferOffsetsField() { return {this, "FOpenGLContextState.UniformBufferOffsets"}; }
	TArray<FOpenGLSamplerState *>& CachedSamplerStatesField() { return *GetNativePointerField<TArray<FOpenGLSamplerState *>*>(this, "FOpenGLContextState.CachedSamplerStates"); }
	unsigned int& ActiveTextureField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.ActiveTexture"); }
	bool& bScissorEnabledField() { return *GetNativePointerField<bool*>(this, "FOpenGLContextState.bScissorEnabled"); }
	FIntRect& ScissorField() { return *GetNativePointerField<FIntRect*>(this, "FOpenGLContextState.Scissor"); }
	FIntRect& ViewportField() { return *GetNativePointerField<FIntRect*>(this, "FOpenGLContextState.Viewport"); }
	float& DepthMinZField() { return *GetNativePointerField<float*>(this, "FOpenGLContextState.DepthMinZ"); }
	float& DepthMaxZField() { return *GetNativePointerField<float*>(this, "FOpenGLContextState.DepthMaxZ"); }
	unsigned int& ArrayBufferBoundField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.ArrayBufferBound"); }
	unsigned int& ElementArrayBufferBoundField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.ElementArrayBufferBound"); }
	unsigned int& PixelUnpackBufferBoundField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.PixelUnpackBufferBound"); }
	unsigned int& UniformBufferBoundField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.UniformBufferBound"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "FOpenGLContextState.ClearColor"); }
	unsigned __int16& ClearStencilField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLContextState.ClearStencil"); }
	float& ClearDepthField() { return *GetNativePointerField<float*>(this, "FOpenGLContextState.ClearDepth"); }
	unsigned int& LastES2ColorRTField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.LastES2ColorRT"); }
	unsigned int& LastES2DepthRTField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.LastES2DepthRT"); }
	FieldArray<FOpenGLCachedAttr, 16> VertexAttrsField() { return {this, "FOpenGLContextState.VertexAttrs"}; }
	FieldArray<FOpenGLStream, 16> VertexStreamsField() { return {this, "FOpenGLContextState.VertexStreams"}; }
	FOpenGLVertexDeclaration * VertexDeclField() { return GetNativePointerField<FOpenGLVertexDeclaration *>(this, "FOpenGLContextState.VertexDecl"); }
	unsigned int& ActiveAttribMaskField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.ActiveAttribMask"); }
	unsigned int& MaxActiveStreamField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.MaxActiveStream"); }
	unsigned int& MaxActiveAttribField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLContextState.MaxActiveAttrib"); }

	// Functions

	void CleanupResources() { NativeCall<void>(this, "FOpenGLContextState.CleanupResources"); }
	void InitializeResources(int NumCombinedTextures, int NumComputeUAVUnits) { NativeCall<void, int, int>(this, "FOpenGLContextState.InitializeResources", NumCombinedTextures, NumComputeUAVUnits); }
};

