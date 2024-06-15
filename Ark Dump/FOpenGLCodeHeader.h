#pragma once

#include "BaseDeclarations.h"
struct FOpenGLCodeHeader
{
	char __padding[0x98L];
	unsigned int& GlslMarkerField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCodeHeader.GlslMarker"); }
	unsigned __int16& FrequencyMarkerField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLCodeHeader.FrequencyMarker"); }
	FOpenGLShaderBindings& BindingsField() { return *GetNativePointerField<FOpenGLShaderBindings*>(this, "FOpenGLCodeHeader.Bindings"); }
	TArray<FOpenGLUniformBufferCopyInfo>& UniformBuffersCopyInfoField() { return *GetNativePointerField<TArray<FOpenGLUniformBufferCopyInfo>*>(this, "FOpenGLCodeHeader.UniformBuffersCopyInfo"); }
};

