#pragma once

#include "BaseDeclarations.h"
struct FInputActionKeyMapping
{
	char __padding[0x28L];
	FName& ActionNameField() { return *GetNativePointerField<FName*>(this, "FInputActionKeyMapping.ActionName"); }
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FInputActionKeyMapping.Key"); }

	// Functions

};

