#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideFloatingHUDLocation_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPOverrideFloatingHUDLocation_Parms.ReturnValue"); }
};

