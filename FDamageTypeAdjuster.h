#pragma once

#include "BaseDeclarations.h"
struct FDamageTypeAdjuster
{
	char __padding[0x10L];
	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageTypeAdjuster.DamageMultiplier"); }

	// Functions

};

