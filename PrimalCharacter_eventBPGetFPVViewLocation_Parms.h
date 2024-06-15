#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetFPVViewLocation_Parms
{
	char __padding[0x18L];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPGetFPVViewLocation_Parms.ReturnValue"); }
};

