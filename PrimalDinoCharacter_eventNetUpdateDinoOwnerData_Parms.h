#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNetUpdateDinoOwnerData_Parms
{
	char __padding[0x18L];
	FString& NewOwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventNetUpdateDinoOwnerData_Parms.NewOwningPlayerName"); }
	int& NewOwningPlayerIDField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventNetUpdateDinoOwnerData_Parms.NewOwningPlayerID"); }
};

