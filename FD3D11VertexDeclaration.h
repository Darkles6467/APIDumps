#pragma once

#include "BaseDeclarations.h"
#include "FRHIVertexDeclaration.h"
#include "FRHIResource.h"

struct FD3D11VertexDeclaration : FRHIVertexDeclaration
{
	char __padding[0x208L];
	TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<16> >& VertexElementsField() { return *GetNativePointerField<TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<16> >*>(this, "FD3D11VertexDeclaration.VertexElements"); }
};

