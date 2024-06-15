#pragma once

#include "BaseDeclarations.h"
struct FOpenGLUniformBufferCopyInfo
{
	char __padding[0xaL];
	unsigned __int16& SourceOffsetInFloatsField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLUniformBufferCopyInfo.SourceOffsetInFloats"); }
	char& SourceUBIndexField() { return *GetNativePointerField<char*>(this, "FOpenGLUniformBufferCopyInfo.SourceUBIndex"); }
	char& DestUBIndexField() { return *GetNativePointerField<char*>(this, "FOpenGLUniformBufferCopyInfo.DestUBIndex"); }
	char& DestUBTypeNameField() { return *GetNativePointerField<char*>(this, "FOpenGLUniformBufferCopyInfo.DestUBTypeName"); }
	char& DestUBTypeIndexField() { return *GetNativePointerField<char*>(this, "FOpenGLUniformBufferCopyInfo.DestUBTypeIndex"); }
	unsigned __int16& DestOffsetInFloatsField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLUniformBufferCopyInfo.DestOffsetInFloats"); }
	unsigned __int16& SizeInFloatsField() { return *GetNativePointerField<unsigned __int16*>(this, "FOpenGLUniformBufferCopyInfo.SizeInFloats"); }
};

