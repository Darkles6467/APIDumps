#pragma once

#include "BaseDeclarations.h"
#include "FRHIVertexDeclaration.h"
#include "FRHIResource.h"

struct FOpenGLVertexDeclaration : FRHIVertexDeclaration
{
	char __padding[0x188L];
	TArray<FOpenGLVertexElement,TFixedAllocator<16> >& VertexElementsField() { return *GetNativePointerField<TArray<FOpenGLVertexElement,TFixedAllocator<16> >*>(this, "FOpenGLVertexDeclaration.VertexElements"); }
};

