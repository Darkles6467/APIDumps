#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventGetPlayerSpawnLocation_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventGetPlayerSpawnLocation_Parms.ReturnValue"); }
};

