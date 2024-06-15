#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FD3D11DynamicBuffer : FRenderResource
{
	char __padding[0x60L];
	TArray<unsigned int,TFixedAllocator<4> >& BufferSizesField() { return *GetNativePointerField<TArray<unsigned int,TFixedAllocator<4> >*>(this, "FD3D11DynamicBuffer.BufferSizes"); }
	TArray<TRefCountPtr<ID3D11Buffer>,TFixedAllocator<4> >& BuffersField() { return *GetNativePointerField<TArray<TRefCountPtr<ID3D11Buffer>,TFixedAllocator<4> >*>(this, "FD3D11DynamicBuffer.Buffers"); }
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11DynamicBuffer.D3DRHI"); }
	D3D11_BIND_FLAG& BindFlagsField() { return *GetNativePointerField<D3D11_BIND_FLAG*>(this, "FD3D11DynamicBuffer.BindFlags"); }
	int& LockedBufferIndexField() { return *GetNativePointerField<int*>(this, "FD3D11DynamicBuffer.LockedBufferIndex"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FD3D11DynamicBuffer.InitRHI"); }
	void * Lock(unsigned int Size) { return NativeCall<void *, unsigned int>(this, "FD3D11DynamicBuffer.Lock", Size); }
	void ReleaseRHI() { NativeCall<void>(this, "FD3D11DynamicBuffer.ReleaseRHI"); }
};

