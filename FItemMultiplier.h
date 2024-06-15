#pragma once

#include "BaseDeclarations.h"
struct FItemMultiplier
{
	char __padding[0x10L];
	float& ItemMultiplierField() { return *GetNativePointerField<float*>(this, "FItemMultiplier.ItemMultiplier"); }

	// Functions

};

