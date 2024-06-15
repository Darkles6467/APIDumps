#pragma once

#include "BaseDeclarations.h"
struct FInt32Array
{
	char __padding[0x10L];
	TArray<int>& ArrayField() { return *GetNativePointerField<TArray<int>*>(this, "FInt32Array.Array"); }

	// Functions

};

