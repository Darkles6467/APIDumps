#pragma once

#include "BaseDeclarations.h"
#include "FRHISamplerState.h"
#include "FRHIResource.h"

struct FD3D11SamplerState : FRHISamplerState
{
	char __padding[0x8L];
	TRefCountPtr<ID3D11SamplerState>& ResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11SamplerState>*>(this, "FD3D11SamplerState.Resource"); }

	// Functions

};

