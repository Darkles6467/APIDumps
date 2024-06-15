#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSharedSamplerState : FRenderResource
{
	char __padding[0x10L];
	bool& bWrapField() { return *GetNativePointerField<bool*>(this, "FSharedSamplerState.bWrap"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FSharedSamplerState.InitRHI"); }
};

