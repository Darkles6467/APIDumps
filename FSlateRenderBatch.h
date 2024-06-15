#pragma once

#include "BaseDeclarations.h"
struct FSlateRenderBatch
{
	char __padding[0x50L];
	const FSlateShaderResource * TextureField() { return GetNativePointerField<const FSlateShaderResource *>(this, "FSlateRenderBatch.Texture"); }
	const char& DrawFlagsField() { return *GetNativePointerField<const char*>(this, "FSlateRenderBatch.DrawFlags"); }
	const char& ShaderTypeField() { return *GetNativePointerField<const char*>(this, "FSlateRenderBatch.ShaderType"); }
	const char& DrawPrimitiveTypeField() { return *GetNativePointerField<const char*>(this, "FSlateRenderBatch.DrawPrimitiveType"); }
	const char& DrawEffectsField() { return *GetNativePointerField<const char*>(this, "FSlateRenderBatch.DrawEffects"); }
	const TOptional<FShortRect>& ScissorRectField() { return *GetNativePointerField<const TOptional<FShortRect>*>(this, "FSlateRenderBatch.ScissorRect"); }
	const unsigned int& VertexOffsetField() { return *GetNativePointerField<const unsigned int*>(this, "FSlateRenderBatch.VertexOffset"); }
	const unsigned int& IndexOffsetField() { return *GetNativePointerField<const unsigned int*>(this, "FSlateRenderBatch.IndexOffset"); }
	const unsigned int& NumVerticesField() { return *GetNativePointerField<const unsigned int*>(this, "FSlateRenderBatch.NumVertices"); }
	const unsigned int& NumIndicesField() { return *GetNativePointerField<const unsigned int*>(this, "FSlateRenderBatch.NumIndices"); }
	const bool& bDisableInternalClippingField() { return *GetNativePointerField<const bool*>(this, "FSlateRenderBatch.bDisableInternalClipping"); }
	const bool& bEnableOutlineAndGlowField() { return *GetNativePointerField<const bool*>(this, "FSlateRenderBatch.bEnableOutlineAndGlow"); }
};

