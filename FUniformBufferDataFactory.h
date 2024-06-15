#pragma once

#include "BaseDeclarations.h"
#include "FOpenGLEUniformBufferData.h"

struct FUniformBufferDataFactory
{
	char __padding[0x50L];

	// Functions

	TRefCountPtr<FOpenGLEUniformBufferData> * Create(TRefCountPtr<FOpenGLEUniformBufferData> * result, unsigned int Size, unsigned int * OutResource) { return NativeCall<TRefCountPtr<FOpenGLEUniformBufferData> *, TRefCountPtr<FOpenGLEUniformBufferData> *, unsigned int, unsigned int *>(this, "FUniformBufferDataFactory.Create", result, Size, OutResource); }
	TRefCountPtr<FOpenGLEUniformBufferData> * Get(TRefCountPtr<FOpenGLEUniformBufferData> * result, unsigned int Resource) { return NativeCall<TRefCountPtr<FOpenGLEUniformBufferData> *, TRefCountPtr<FOpenGLEUniformBufferData> *, unsigned int>(this, "FUniformBufferDataFactory.Get", result, Resource); }
};

