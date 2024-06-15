#pragma once

#include "BaseDeclarations.h"
struct FScaleTrack
{
	char __padding[0x20L];
	TArray<FVector>& ScaleKeysField() { return *GetNativePointerField<TArray<FVector>*>(this, "FScaleTrack.ScaleKeys"); }
	TArray<float>& TimesField() { return *GetNativePointerField<TArray<float>*>(this, "FScaleTrack.Times"); }

	// Functions

};

