#pragma once

#include "BaseDeclarations.h"
#include "FRHIUniformBuffer.h"
#include "FOpenGLUniformBufferCopyInfo.h"

struct FOpenGLShaderParameterCache
{
	char __padding[0x80L];
	FieldArray<char *, 5> PackedGlobalUniformsField() { return {this, "FOpenGLShaderParameterCache.PackedGlobalUniforms"}; }
	FieldArray<FOpenGLShaderParameterCache::FRange, 5> PackedGlobalUniformDirtyField() { return {this, "FOpenGLShaderParameterCache.PackedGlobalUniformDirty"}; }
	FieldArray<char *, 5> PackedUniformsScratchField() { return {this, "FOpenGLShaderParameterCache.PackedUniformsScratch"}; }
	int& GlobalUniformArraySizeField() { return *GetNativePointerField<int*>(this, "FOpenGLShaderParameterCache.GlobalUniformArraySize"); }

	// Functions

	void CommitPackedGlobals(const FOpenGLLinkedProgram * LinkedProgram, int Stage) { NativeCall<void, const FOpenGLLinkedProgram *, int>(this, "FOpenGLShaderParameterCache.CommitPackedGlobals", LinkedProgram, Stage); }
	void CommitPackedUniformBuffers(FOpenGLLinkedProgram * LinkedProgram, int Stage, TRefCountPtr<FRHIUniformBuffer> * RHIUniformBuffers, const TArray<FOpenGLUniformBufferCopyInfo> * UniformBuffersCopyInfo) { NativeCall<void, FOpenGLLinkedProgram *, int, TRefCountPtr<FRHIUniformBuffer> *, const TArray<FOpenGLUniformBufferCopyInfo> *>(this, "FOpenGLShaderParameterCache.CommitPackedUniformBuffers", LinkedProgram, Stage, RHIUniformBuffers, UniformBuffersCopyInfo); }
	void InitializeResources(int UniformArraySize) { NativeCall<void, int>(this, "FOpenGLShaderParameterCache.InitializeResources", UniformArraySize); }
	void Set(unsigned int BufferIndexName, unsigned int ByteOffset, unsigned int NumBytes, const void * NewValues) { NativeCall<void, unsigned int, unsigned int, unsigned int, const void *>(this, "FOpenGLShaderParameterCache.Set", BufferIndexName, ByteOffset, NumBytes, NewValues); }
};

