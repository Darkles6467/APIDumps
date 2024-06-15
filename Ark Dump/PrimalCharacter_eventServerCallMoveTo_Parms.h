#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerCallMoveTo_Parms
{
	char __padding[0xcL];
	FVector& MoveToLocField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventServerCallMoveTo_Parms.MoveToLoc"); }
};

