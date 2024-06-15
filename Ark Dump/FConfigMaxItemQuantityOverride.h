#pragma once

#include "BaseDeclarations.h"
struct FConfigMaxItemQuantityOverride
{
	char __padding[0x18L];
	FString& ItemClassStringField() { return *GetNativePointerField<FString*>(this, "FConfigMaxItemQuantityOverride.ItemClassString"); }
	FMaxItemQuantityOverride& QuantityField() { return *GetNativePointerField<FMaxItemQuantityOverride*>(this, "FConfigMaxItemQuantityOverride.Quantity"); }

	// Functions

};

