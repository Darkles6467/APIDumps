#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FD3D11EventQuery : FRenderResource
{
	char __padding[0x10L];
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11EventQuery.D3DRHI"); }
	TRefCountPtr<ID3D11Query>& QueryField() { return *GetNativePointerField<TRefCountPtr<ID3D11Query>*>(this, "FD3D11EventQuery.Query"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FD3D11EventQuery.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FD3D11EventQuery.ReleaseDynamicRHI"); }
	void WaitForCompletion() { NativeCall<void>(this, "FD3D11EventQuery.WaitForCompletion"); }
};

