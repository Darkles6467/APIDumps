#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideTamingDescriptionLabel_Parms
{
	char __padding[0x38L];
	FSlateColor& TextColorField() { return *GetNativePointerField<FSlateColor*>(this, "PrimalDinoCharacter_eventBPOverrideTamingDescriptionLabel_Parms.TextColor"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBPOverrideTamingDescriptionLabel_Parms.ReturnValue"); }

	// Functions

};

