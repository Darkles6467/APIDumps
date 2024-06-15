#pragma once

#include "BaseDeclarations.h"
#include "FRHIStructuredBuffer.h"
#include "FRHIResource.h"

struct FD3D11StructuredBuffer : FRHIStructuredBuffer
{
	char __padding[0x20L];
	TRefCountPtr<ID3D11Buffer>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Buffer>*>(this, "FD3D11StructuredBuffer.Resource"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FD3D11StructuredBuffer.AddRef"); }
};

