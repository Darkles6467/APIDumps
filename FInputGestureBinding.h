#pragma once

#include "BaseDeclarations.h"
#include "FInputBinding.h"

struct FInputGestureBinding : FInputBinding
{
	char __padding[0x3cL];
	FKey& GestureKeyField() { return *GetNativePointerField<FKey*>(this, "FInputGestureBinding.GestureKey"); }
	float& GestureValueField() { return *GetNativePointerField<float*>(this, "FInputGestureBinding.GestureValue"); }
};

