#pragma once

#include "BaseDeclarations.h"
struct FInputScaleBias
{
	char __padding[0x8L];
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FInputScaleBias.Scale"); }
	float& BiasField() { return *GetNativePointerField<float*>(this, "FInputScaleBias.Bias"); }

	// Functions

	float ApplyTo(float Value) { return NativeCall<float, float>(this, "FInputScaleBias.ApplyTo", Value); }
};

