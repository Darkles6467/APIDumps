#pragma once

#include "BaseDeclarations.h"
#include "FRHIVertexBuffer.h"
#include "FRHIResource.h"

struct FD3D11VertexBuffer : FRHIVertexBuffer
{
	char __padding[0x20L];
	TRefCountPtr<ID3D11Buffer>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Buffer>*>(this, "FD3D11VertexBuffer.Resource"); }

	// Functions

	unsigned int AddRef() { return NativeCall<unsigned int>(this, "FD3D11VertexBuffer.AddRef"); }
	unsigned int GetRefCount() { return NativeCall<unsigned int>(this, "FD3D11VertexBuffer.GetRefCount"); }
	unsigned int Release() { return NativeCall<unsigned int>(this, "FD3D11VertexBuffer.Release"); }
};

