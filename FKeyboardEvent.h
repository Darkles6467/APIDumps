#pragma once

#include "BaseDeclarations.h"
#include "FInputEvent.h"

struct FKeyboardEvent : FInputEvent
{
	char __padding[0x20L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FKeyboardEvent.Key"); }
	unsigned int& CharacterCodeField() { return *GetNativePointerField<unsigned int*>(this, "FKeyboardEvent.CharacterCode"); }
	int& ControllerIdField() { return *GetNativePointerField<int*>(this, "FKeyboardEvent.ControllerId"); }

	// Functions

	FKey * GetKey(FKey * result) { return NativeCall<FKey *, FKey *>(this, "FKeyboardEvent.GetKey", result); }
};

