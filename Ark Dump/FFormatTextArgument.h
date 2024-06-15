#pragma once

#include "BaseDeclarations.h"
struct FFormatTextArgument
{
	char __padding[0x50L];
	FText& ArgumentNameField() { return *GetNativePointerField<FText*>(this, "FFormatTextArgument.ArgumentName"); }
	FText& TextValueField() { return *GetNativePointerField<FText*>(this, "FFormatTextArgument.TextValue"); }

	// Functions

};

