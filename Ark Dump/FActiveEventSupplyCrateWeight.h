#pragma once

#include "BaseDeclarations.h"
struct FActiveEventSupplyCrateWeight
{
	char __padding[0x28L];
	TArray<float>& WeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FActiveEventSupplyCrateWeight.Weights"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventSupplyCrateWeight.ActiveEvent"); }

	// Functions

	FActiveEventSupplyCrateWeight * operator=(const FActiveEventSupplyCrateWeight * __that) { return NativeCall<FActiveEventSupplyCrateWeight *, const FActiveEventSupplyCrateWeight *>(this, "FActiveEventSupplyCrateWeight.operator=", __that); }
};

