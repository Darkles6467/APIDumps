#pragma once

#include "BaseDeclarations.h"
struct FIntegralKey
{
	char __padding[0x8L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FIntegralKey.Time"); }
	int& ValueField() { return *GetNativePointerField<int*>(this, "FIntegralKey.Value"); }

	// Functions

};

