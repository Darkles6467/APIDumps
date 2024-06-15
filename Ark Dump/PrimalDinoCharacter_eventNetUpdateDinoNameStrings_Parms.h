#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNetUpdateDinoNameStrings_Parms
{
	char __padding[0x20L];
	FString& NewTamerStringField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventNetUpdateDinoNameStrings_Parms.NewTamerString"); }
	FString& NewTamedNameField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventNetUpdateDinoNameStrings_Parms.NewTamedName"); }

	// Functions

};

