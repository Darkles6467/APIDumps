#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIGPUFence : FRHIResource
{
	char __padding[0x8L];
	FName& FenceNameField() { return *GetNativePointerField<FName*>(this, "FRHIGPUFence.FenceName"); }
};

