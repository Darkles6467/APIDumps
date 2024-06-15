#pragma once

#include "BaseDeclarations.h"
struct FInputGesture
{
	char __padding[0x20L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FInputGesture.Key"); }

	// Functions

	FText * GetInputText(FText * result) { return NativeCall<FText *, FText *>(this, "FInputGesture.GetInputText", result); }
	FText * GetKeyText(FText * result) { return NativeCall<FText *, FText *>(this, "FInputGesture.GetKeyText", result); }
};

