#pragma once

#include "BaseDeclarations.h"
struct FInputAxisKeyMapping
{
	char __padding[0x28L];
	FName& AxisNameField() { return *GetNativePointerField<FName*>(this, "FInputAxisKeyMapping.AxisName"); }
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FInputAxisKeyMapping.Key"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FInputAxisKeyMapping.Scale"); }

	// Functions

};

