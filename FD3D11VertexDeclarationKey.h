#pragma once

#include "BaseDeclarations.h"
struct FD3D11VertexDeclarationKey
{
	char __padding[0x210L];
	TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<16> >& VertexElementsField() { return *GetNativePointerField<TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<16> >*>(this, "FD3D11VertexDeclarationKey.VertexElements"); }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11VertexDeclarationKey.Hash"); }

	// Functions

};

