#pragma once

#include "BaseDeclarations.h"
struct FOpenGLVertexDeclarationKey
{
	char __padding[0x18cL];
	TArray<FOpenGLVertexElement,TFixedAllocator<16> >& VertexElementsField() { return *GetNativePointerField<TArray<FOpenGLVertexElement,TFixedAllocator<16> >*>(this, "FOpenGLVertexDeclarationKey.VertexElements"); }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLVertexDeclarationKey.Hash"); }

	// Functions

};

