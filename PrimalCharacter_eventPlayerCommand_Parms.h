#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayerCommand_Parms
{
	char __padding[0x20L];
	FString& TheCommandField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventPlayerCommand_Parms.TheCommand"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "PrimalCharacter_eventPlayerCommand_Parms.ReturnValue"); }

	// Functions

};

