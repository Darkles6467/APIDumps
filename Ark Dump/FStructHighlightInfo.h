#pragma once

#include "BaseDeclarations.h"
struct FStructHighlightInfo
{
	char __padding[0x18L];
	FLinearColor& HighlightColorField() { return *GetNativePointerField<FLinearColor*>(this, "FStructHighlightInfo.HighlightColor"); }

	// Functions

};

