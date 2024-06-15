#pragma once

#include "BaseDeclarations.h"
struct FClassRemappingWeight
{
	char __padding[0x38L];
	TArray<float>& WeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FClassRemappingWeight.Weights"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FClassRemappingWeight.ActiveEvent"); }

	// Functions

	FClassRemappingWeight * operator=(const FClassRemappingWeight * __that) { return NativeCall<FClassRemappingWeight *, const FClassRemappingWeight *>(this, "FClassRemappingWeight.operator=", __that); }
};

