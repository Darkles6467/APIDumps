#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSeatingStructureAction_Parms
{
	char __padding[0x1L];
	char& ActionNumberField() { return *GetNativePointerField<char*>(this, "ShooterCharacter_eventServerSeatingStructureAction_Parms.ActionNumber"); }
};

