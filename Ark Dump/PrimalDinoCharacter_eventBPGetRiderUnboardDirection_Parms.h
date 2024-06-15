#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetRiderUnboardDirection_Parms
{
	char __padding[0x18L];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPGetRiderUnboardDirection_Parms.ReturnValue"); }
};

