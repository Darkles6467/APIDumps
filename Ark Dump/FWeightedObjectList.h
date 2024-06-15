#pragma once

#include "BaseDeclarations.h"
struct FWeightedObjectList
{
	char __padding[0x20L];
	TArray<float>& WeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FWeightedObjectList.Weights"); }

	// Functions

	FWeightedObjectList * operator=(const FWeightedObjectList * __that) { return NativeCall<FWeightedObjectList *, const FWeightedObjectList *>(this, "FWeightedObjectList.operator=", __that); }
};

