#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOrderedMoveToLoc_Parms
{
	char __padding[0xcL];
	FVector& DestLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPOrderedMoveToLoc_Parms.DestLoc"); }
};

