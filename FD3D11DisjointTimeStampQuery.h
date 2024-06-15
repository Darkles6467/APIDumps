#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FD3D11DisjointTimeStampQuery : FRenderResource
{
	char __padding[0x10L];
	TRefCountPtr<ID3D11Query>& DisjointQueryField() { return *GetNativePointerField<TRefCountPtr<ID3D11Query>*>(this, "FD3D11DisjointTimeStampQuery.DisjointQuery"); }
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11DisjointTimeStampQuery.D3DRHI"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FD3D11DisjointTimeStampQuery.InitDynamicRHI"); }
};

