#pragma once

#include "BaseDeclarations.h"
struct FRandomStream
{
	char __padding[0x8L];
	int& InitialSeedField() { return *GetNativePointerField<int*>(this, "FRandomStream.InitialSeed"); }
	int& SeedField() { return *GetNativePointerField<int*>(this, "FRandomStream.Seed"); }

	// Functions

	float GetFraction() { return NativeCall<float>(this, "FRandomStream.GetFraction"); }
	FVector * GetUnitVector(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FRandomStream.GetUnitVector", result); }
};

