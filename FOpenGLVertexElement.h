#pragma once

#include "BaseDeclarations.h"
struct FOpenGLVertexElement
{
	char __padding[0x18L];
	unsigned int& TypeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexElement.Type"); }
	unsigned int& StreamIndexField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexElement.StreamIndex"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexElement.Offset"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexElement.Size"); }
	unsigned int& DivisorField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexElement.Divisor"); }
	char& bNormalizedField() { return *GetNativePointerField<char*>(this, "FOpenGLVertexElement.bNormalized"); }
	char& AttributeIndexField() { return *GetNativePointerField<char*>(this, "FOpenGLVertexElement.AttributeIndex"); }
	char& bShouldConvertToFloatField() { return *GetNativePointerField<char*>(this, "FOpenGLVertexElement.bShouldConvertToFloat"); }
};

