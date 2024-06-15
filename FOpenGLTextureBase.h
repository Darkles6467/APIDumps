#pragma once

#include "BaseDeclarations.h"
struct FOpenGLTextureBase
{
	char __padding[0x28L];
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLTextureBase.OpenGLRHI"); }
	FOpenGLSamplerState * SamplerStateField() { return GetNativePointerField<FOpenGLSamplerState *>(this, "FOpenGLTextureBase.SamplerState"); }
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureBase.Resource"); }
	unsigned int& TargetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureBase.Target"); }
	unsigned int& NumMipsField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureBase.NumMips"); }
	unsigned int& AttachmentField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureBase.Attachment"); }
};

