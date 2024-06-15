#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputActionBinding : FInputBinding
{
	char __padding[0x2cL];
	FName& ActionNameField() { return *GetNativePointerField<FName*>(this, "FInputActionBinding.ActionName"); }
	TEnumAsByte<enum EInputEvent>& KeyEventField() { return *GetNativePointerField<TEnumAsByte<enum EInputEvent>*>(this, "FInputActionBinding.KeyEvent"); }

	// Functions

};

