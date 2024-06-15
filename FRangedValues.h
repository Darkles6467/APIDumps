#pragma once

#include "BaseDeclarations.h"
struct FRangedValues
{
	char __padding[0x8L];
	int& RangeField() { return *GetNativePointerField<int*>(this, "FRangedValues.Range"); }
	int& ValueField() { return *GetNativePointerField<int*>(this, "FRangedValues.Value"); }

	// Functions

};

