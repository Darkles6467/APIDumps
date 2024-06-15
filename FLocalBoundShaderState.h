#pragma once

#include "BaseDeclarations.h"
struct FLocalBoundShaderState
{
	char __padding[0x10L];
	FLocalBoundShaderStateWorkArea * WorkAreaField() { return GetNativePointerField<FLocalBoundShaderStateWorkArea *>(this, "FLocalBoundShaderState.WorkArea"); }
};

