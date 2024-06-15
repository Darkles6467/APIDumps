#pragma once

#include "BaseDeclarations.h"
struct FRotationTrack
{
	char __padding[0x20L];
	TArray<FQuat>& RotKeysField() { return *GetNativePointerField<TArray<FQuat>*>(this, "FRotationTrack.RotKeys"); }
	TArray<float>& TimesField() { return *GetNativePointerField<TArray<float>*>(this, "FRotationTrack.Times"); }

	// Functions

};

