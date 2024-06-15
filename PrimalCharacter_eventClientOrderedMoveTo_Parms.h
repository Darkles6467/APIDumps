#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventClientOrderedMoveTo_Parms
{
	char __padding[0xcL];
	FVector& MoveToLocField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventClientOrderedMoveTo_Parms.MoveToLoc"); }
};

