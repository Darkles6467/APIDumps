#pragma once

#include "BaseDeclarations.h"
#include "FRHIDepthStencilState.h"
#include "FRHIResource.h"

struct FD3D11DepthStencilState : FRHIDepthStencilState
{
	char __padding[0x10L];
	TRefCountPtr<ID3D11DepthStencilState>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11DepthStencilState>*>(this, "FD3D11DepthStencilState.Resource"); }
	FExclusiveDepthStencil& AccessTypeField() { return *GetNativePointerField<FExclusiveDepthStencil*>(this, "FD3D11DepthStencilState.AccessType"); }

	// Functions

};

