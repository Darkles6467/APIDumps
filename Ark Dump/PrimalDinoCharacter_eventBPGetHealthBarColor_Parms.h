#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetHealthBarColor_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPGetHealthBarColor_Parms.ReturnValue"); }
};

