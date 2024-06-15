#pragma once

#include "BaseDeclarations.h"
struct FLODBurstFired
{
	char __padding[0x10L];
	TArray<bool>& FiredField() { return *GetNativePointerField<TArray<bool>*>(this, "FLODBurstFired.Fired"); }
};

