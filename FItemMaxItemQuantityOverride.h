#pragma once

#include "BaseDeclarations.h"
struct FItemMaxItemQuantityOverride
{
	char __padding[0x10L];
	FMaxItemQuantityOverride& QuantityField() { return *GetNativePointerField<FMaxItemQuantityOverride*>(this, "FItemMaxItemQuantityOverride.Quantity"); }

	// Functions

};

