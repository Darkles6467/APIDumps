#pragma once

#include "BaseDeclarations.h"
struct FCharacterPreset
{
	char __padding[0x20L];
	float& BodyColorSliderValueField() { return *GetNativePointerField<float*>(this, "FCharacterPreset.BodyColorSliderValue"); }
	float& HairColorSliderValueField() { return *GetNativePointerField<float*>(this, "FCharacterPreset.HairColorSliderValue"); }
	float& EyeColorSliderValueField() { return *GetNativePointerField<float*>(this, "FCharacterPreset.EyeColorSliderValue"); }
	TArray<float>& BoneModifierSliderValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FCharacterPreset.BoneModifierSliderValues"); }

	// Functions

	FCharacterPreset * operator=(const FCharacterPreset * __that) { return NativeCall<FCharacterPreset *, const FCharacterPreset *>(this, "FCharacterPreset.operator=", __that); }
};

