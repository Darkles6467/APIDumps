#pragma once

#include "BaseDeclarations.h"
struct FOpenGLFramebufferKey
{
	char __padding[0x90L];
	FieldArray<FOpenGLFramebufferKey::RenderTargetInfo, 8> RenderTargetsField() { return {this, "FOpenGLFramebufferKey.RenderTargets"}; }
	FOpenGLTextureBase * DepthStencilTargetField() { return GetNativePointerField<FOpenGLTextureBase *>(this, "FOpenGLFramebufferKey.DepthStencilTarget"); }
	EOpenGLCurrentContext& ContextField() { return *GetNativePointerField<EOpenGLCurrentContext*>(this, "FOpenGLFramebufferKey.Context"); }

	// Functions

};

