#pragma once

#include "BaseDeclarations.h"
#include "FRHIIndexBuffer.h"
#include "FRHIResource.h"

struct FD3D11IndexBuffer : FRHIIndexBuffer
{
	char __padding[0x20L];
	TRefCountPtr<ID3D11Buffer>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Buffer>*>(this, "FD3D11IndexBuffer.Resource"); }

	// Functions

	unsigned int GetRefCount() { return NativeCall<unsigned int>(this, "FD3D11IndexBuffer.GetRefCount"); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FD3D11IndexBuffer.Release"); }
};

