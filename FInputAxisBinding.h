#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputAxisBinding : FInputBinding
{
	char __padding[0x2cL];
	FName& AxisNameField() { return *GetNativePointerField<FName*>(this, "FInputAxisBinding.AxisName"); }
	float& AxisValueField() { return *GetNativePointerField<float*>(this, "FInputAxisBinding.AxisValue"); }

	// Functions

};

