#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OverrideDinoName_Parms
{
	char __padding[0x28L];
	FString& CurrentDinoNameField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBP_OverrideDinoName_Parms.CurrentDinoName"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBP_OverrideDinoName_Parms.ReturnValue"); }

	// Functions

};

