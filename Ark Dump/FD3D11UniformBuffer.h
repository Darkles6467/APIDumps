#pragma once

#include "BaseDeclarations.h"
#include "FRHIUniformBuffer.h"
#include "FRHIResource.h"

struct FD3D11UniformBuffer : FRHIUniformBuffer
{
	char __padding[0x50L];
	TRefCountPtr<ID3D11Buffer>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Buffer>*>(this, "FD3D11UniformBuffer.Resource"); }
	FRingAllocation& RingAllocationField() { return *GetNativePointerField<FRingAllocation*>(this, "FD3D11UniformBuffer.RingAllocation"); }
	TArray<FD3D11UniformBuffer::FResourcePair>& RawResourceTableField() { return *GetNativePointerField<TArray<FD3D11UniformBuffer::FResourcePair>*>(this, "FD3D11UniformBuffer.RawResourceTable"); }
	unsigned int& LastCachedFrameField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11UniformBuffer.LastCachedFrame"); }
	FD3D11DynamicRHI * D3D11RHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11UniformBuffer.D3D11RHI"); }

	// Functions

	void CacheResourcesInternal() { NativeCall<void>(this, "FD3D11UniformBuffer.CacheResourcesInternal"); }
};

