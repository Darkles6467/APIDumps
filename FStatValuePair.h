#pragma once

#include "BaseDeclarations.h"
struct FStatValuePair
{
	char __padding[0x8L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StatField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FStatValuePair.Stat"); }
	int& ValueField() { return *GetNativePointerField<int*>(this, "FStatValuePair.Value"); }

	// Functions

};

