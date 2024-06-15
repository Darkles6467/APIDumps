#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventGetPlayerSpawnRotation_Parms
{
	char __padding[0xcL];
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventGetPlayerSpawnRotation_Parms.ReturnValue"); }
};

