#pragma once

#include "BaseDeclarations.h"
struct FRegexPattern
{
	char __padding[0x10L];
	TSharedRef<FRegexPatternImplementation,0>& ImplementationField() { return *GetNativePointerField<TSharedRef<FRegexPatternImplementation,0>*>(this, "FRegexPattern.Implementation"); }

	// Functions

};

