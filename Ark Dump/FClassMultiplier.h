#pragma once

#include "BaseDeclarations.h"
struct FClassMultiplier
{
	char __padding[0x18L];
	FString& ClassNameField() { return *GetNativePointerField<FString*>(this, "FClassMultiplier.ClassName"); }
	float& MultiplierField() { return *GetNativePointerField<float*>(this, "FClassMultiplier.Multiplier"); }

	// Functions

	FClassMultiplier * operator=(const FClassMultiplier * __that) { return NativeCall<FClassMultiplier *, const FClassMultiplier *>(this, "FClassMultiplier.operator=", __that); }
};

