#pragma once

#include "BaseDeclarations.h"
#include "FRHIBlendState.h"
#include "FRHIResource.h"

struct FD3D11BlendState : FRHIBlendState
{
	char __padding[0x8L];
	TRefCountPtr<ID3D11BlendState>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11BlendState>*>(this, "FD3D11BlendState.Resource"); }

	// Functions

};

