#pragma once

#include "BaseDeclarations.h"
#include "FRHIUniformBuffer.h"
#include "FRHIResource.h"

struct FOpenGLUniformBuffer : FRHIUniformBuffer
{
	char __padding[0x50L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUniformBuffer.Resource"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUniformBuffer.Offset"); }
	char * PersistentlyMappedBufferField() { return GetNativePointerField<char *>(this, "FOpenGLUniformBuffer.PersistentlyMappedBuffer"); }
	const unsigned int& UniqueIDField() { return *GetNativePointerField<const unsigned int*>(this, "FOpenGLUniformBuffer.UniqueID"); }
	TArray<void *>& RawResourceTableField() { return *GetNativePointerField<TArray<void *>*>(this, "FOpenGLUniformBuffer.RawResourceTable"); }
	unsigned int& LastCachedFrameField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUniformBuffer.LastCachedFrame"); }
	TRefCountPtr<FOpenGLEUniformBufferData>& EmulatedBufferDataField() { return *GetNativePointerField<TRefCountPtr<FOpenGLEUniformBufferData>*>(this, "FOpenGLUniformBuffer.EmulatedBufferData"); }
	unsigned int& AllocatedSizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUniformBuffer.AllocatedSize"); }
	bool& bStreamDrawField() { return *GetNativePointerField<bool*>(this, "FOpenGLUniformBuffer.bStreamDraw"); }

	// Functions

	void CacheResourcesInternal() { NativeCall<void>(this, "FOpenGLUniformBuffer.CacheResourcesInternal"); }
};

