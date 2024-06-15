#pragma once

#include "BaseDeclarations.h"
struct FMaxItemQuantityOverride
{
	char __padding[0x8L];
	int& MaxItemQuantityField() { return *GetNativePointerField<int*>(this, "FMaxItemQuantityOverride.MaxItemQuantity"); }
	bool& bIgnoreMultiplierField() { return *GetNativePointerField<bool*>(this, "FMaxItemQuantityOverride.bIgnoreMultiplier"); }

	// Functions

};

