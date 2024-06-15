#pragma once

#include "BaseDeclarations.h"
struct FOverlapResult
{
	char __padding[0x18L];
	int& ItemIndexField() { return *GetNativePointerField<int*>(this, "FOverlapResult.ItemIndex"); }

	// Functions

	FOverlapResult * operator=(const FOverlapResult * __that) { return NativeCall<FOverlapResult *, const FOverlapResult *>(this, "FOverlapResult.operator=", __that); }
};

