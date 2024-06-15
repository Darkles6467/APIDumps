#pragma once

#include "BaseDeclarations.h"
struct FDamageNegatingItem
{
	char __padding[0x10L];
	float& NegationFactorField() { return *GetNativePointerField<float*>(this, "FDamageNegatingItem.NegationFactor"); }

	// Functions

};

