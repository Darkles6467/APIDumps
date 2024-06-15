#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputAxisKeyBinding : FInputBinding
{
	char __padding[0x3cL];
	FKey& AxisKeyField() { return *GetNativePointerField<FKey*>(this, "FInputAxisKeyBinding.AxisKey"); }
	float& AxisValueField() { return *GetNativePointerField<float*>(this, "FInputAxisKeyBinding.AxisValue"); }
};

