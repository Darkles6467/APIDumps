#pragma once

#include "BaseDeclarations.h"
struct FOpenGLShaderBindings
{
	char __padding[0x80L];
	TArray<TArray<CrossCompiler::FPackedArrayInfo>>& PackedUniformBuffersField() { return *GetNativePointerField<TArray<TArray<CrossCompiler::FPackedArrayInfo>>*>(this, "FOpenGLShaderBindings.PackedUniformBuffers"); }
	TArray<CrossCompiler::FPackedArrayInfo>& PackedGlobalArraysField() { return *GetNativePointerField<TArray<CrossCompiler::FPackedArrayInfo>*>(this, "FOpenGLShaderBindings.PackedGlobalArrays"); }
	FOpenGLShaderResourceTable& ShaderResourceTableField() { return *GetNativePointerField<FOpenGLShaderResourceTable*>(this, "FOpenGLShaderBindings.ShaderResourceTable"); }
	unsigned __int16& InOutMaskField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLShaderBindings.InOutMask"); }
	char& NumSamplersField() { return *GetNativePointerField<char*>(this, "FOpenGLShaderBindings.NumSamplers"); }
	char& NumUniformBuffersField() { return *GetNativePointerField<char*>(this, "FOpenGLShaderBindings.NumUniformBuffers"); }
	char& NumUAVsField() { return *GetNativePointerField<char*>(this, "FOpenGLShaderBindings.NumUAVs"); }
	bool& bFlattenUBField() { return *GetNativePointerField<bool*>(this, "FOpenGLShaderBindings.bFlattenUB"); }

	// Functions

	FOpenGLShaderBindings * operator=(const FOpenGLShaderBindings * __that) { return NativeCall<FOpenGLShaderBindings *, const FOpenGLShaderBindings *>(this, "FOpenGLShaderBindings.operator=", __that); }
};

