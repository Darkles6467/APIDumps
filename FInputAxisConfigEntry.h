#pragma once

#include "BaseDeclarations.h"
struct FInputAxisConfigEntry
{
	char __padding[0x18L];
	FName& AxisKeyNameField() { return *GetNativePointerField<FName*>(this, "FInputAxisConfigEntry.AxisKeyName"); }
	FInputAxisProperties& AxisPropertiesField() { return *GetNativePointerField<FInputAxisProperties*>(this, "FInputAxisConfigEntry.AxisProperties"); }

	// Functions

};

