#pragma once

#include "BaseDeclarations.h"
struct FInputAxisProperties
{
	char __padding[0x10L];
	float& DeadZoneField() { return *GetNativePointerField<float*>(this, "FInputAxisProperties.DeadZone"); }
	float& SensitivityField() { return *GetNativePointerField<float*>(this, "FInputAxisProperties.Sensitivity"); }
	float& ExponentField() { return *GetNativePointerField<float*>(this, "FInputAxisProperties.Exponent"); }

	// Functions

};

