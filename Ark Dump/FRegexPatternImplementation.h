#pragma once

#include "BaseDeclarations.h"
struct FRegexPatternImplementation
{
	char __padding[0x10L];
	TSharedRef<icu_53::RegexPattern,0>& ICURegexPatternField() { return *GetNativePointerField<TSharedRef<icu_53::RegexPattern,0>*>(this, "FRegexPatternImplementation.ICURegexPattern"); }
};

