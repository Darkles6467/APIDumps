#pragma once

#include "BaseDeclarations.h"
struct FTranslationTrack
{
	char __padding[0x20L];
	TArray<FVector>& PosKeysField() { return *GetNativePointerField<TArray<FVector>*>(this, "FTranslationTrack.PosKeys"); }
	TArray<float>& TimesField() { return *GetNativePointerField<TArray<float>*>(this, "FTranslationTrack.Times"); }

	// Functions

};

