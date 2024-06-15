#pragma once

#include "BaseDeclarations.h"
struct FOpenGLTextureFormat
{
	char __padding[0x1cL];
	FieldArray<unsigned int, 2> InternalFormatField() { return {this, "FOpenGLTextureFormat.InternalFormat"}; }
	FieldArray<unsigned int, 2> SizedInternalFormatField() { return {this, "FOpenGLTextureFormat.SizedInternalFormat"}; }
	unsigned int& FormatField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureFormat.Format"); }
	unsigned int& TypeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLTextureFormat.Type"); }
	bool& bCompressedField() { return *GetNativePointerField<bool*>(this, "FOpenGLTextureFormat.bCompressed"); }
	bool& bBGRAField() { return *GetNativePointerField<bool*>(this, "FOpenGLTextureFormat.bBGRA"); }
};

