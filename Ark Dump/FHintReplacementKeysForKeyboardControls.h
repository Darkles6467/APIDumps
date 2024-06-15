#pragma once

#include "BaseDeclarations.h"
struct FHintReplacementKeysForKeyboardControls
{
	char __padding[0x20L];
	FString& KeyboardControlField() { return *GetNativePointerField<FString*>(this, "FHintReplacementKeysForKeyboardControls.KeyboardControl"); }
	TArray<FString>& ReplacementGamepadControlsField() { return *GetNativePointerField<TArray<FString>*>(this, "FHintReplacementKeysForKeyboardControls.ReplacementGamepadControls"); }

	// Functions

	FMultiAchievement * operator=(const FMultiAchievement * __that) { return NativeCall<FMultiAchievement *, const FMultiAchievement *>(this, "FHintReplacementKeysForKeyboardControls.operator=", __that); }
};

