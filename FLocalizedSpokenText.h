#pragma once

#include "BaseDeclarations.h"
struct FLocalizedSpokenText
{
	char __padding[0x18L];
	TEnumAsByte<enum ELocalizedLanguage>& LanguageCodeField() { return *GetNativePointerField<TEnumAsByte<enum ELocalizedLanguage>*>(this, "FLocalizedSpokenText.LanguageCode"); }
	FString& SpokenTextField() { return *GetNativePointerField<FString*>(this, "FLocalizedSpokenText.SpokenText"); }

	// Functions

};

