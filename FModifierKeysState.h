#pragma once

#include "BaseDeclarations.h"
struct FModifierKeysState
{
	char __padding[0x9L];
	bool& bIsLeftShiftDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsLeftShiftDown"); }
	bool& bIsRightShiftDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsRightShiftDown"); }
	bool& bIsLeftControlDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsLeftControlDown"); }
	bool& bIsRightControlDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsRightControlDown"); }
	bool& bIsLeftAltDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsLeftAltDown"); }
	bool& bIsRightAltDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsRightAltDown"); }
	bool& bIsLeftCommandDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsLeftCommandDown"); }
	bool& bIsRightCommandDownField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bIsRightCommandDown"); }
	bool& bAreCapsLockedField() { return *GetNativePointerField<bool*>(this, "FModifierKeysState.bAreCapsLocked"); }

	// Functions

	bool AreModifiersDown(char ModifierKeys) { return NativeCall<bool, char>(this, "FModifierKeysState.AreModifiersDown", ModifierKeys); }
};

