#pragma once

#include "BaseDeclarations.h"
struct FDebugDisplayProperty
{
	char __padding[0x20L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "FDebugDisplayProperty.PropertyName"); }

	// Functions

};

