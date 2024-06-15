#pragma once

#include "BaseDeclarations.h"
struct FPrimalTextStyle
{
	char __padding[0x120L];
	FName& StyleNameField() { return *GetNativePointerField<FName*>(this, "FPrimalTextStyle.StyleName"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "FPrimalTextStyle.TextStyle"); }

	// Functions

};

