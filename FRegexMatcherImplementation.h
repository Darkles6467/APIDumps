#pragma once

#include "BaseDeclarations.h"
struct FRegexMatcherImplementation
{
	char __padding[0x48L];
	const icu_53::UnicodeString& ICUInputStringField() { return *GetNativePointerField<const icu_53::UnicodeString*>(this, "FRegexMatcherImplementation.ICUInputString"); }
	TSharedRef<icu_53::RegexMatcher,0>& ICURegexMatcherField() { return *GetNativePointerField<TSharedRef<icu_53::RegexMatcher,0>*>(this, "FRegexMatcherImplementation.ICURegexMatcher"); }
	FString& OriginalStringField() { return *GetNativePointerField<FString*>(this, "FRegexMatcherImplementation.OriginalString"); }

	// Functions

};

