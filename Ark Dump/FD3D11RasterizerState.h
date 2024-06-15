#pragma once

#include "BaseDeclarations.h"
#include "FRHIRasterizerState.h"
#include "FRHIResource.h"

struct FD3D11RasterizerState : FRHIRasterizerState
{
	char __padding[0x8L];
	TRefCountPtr<ID3D11RasterizerState>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11RasterizerState>*>(this, "FD3D11RasterizerState.Resource"); }

	// Functions

};

