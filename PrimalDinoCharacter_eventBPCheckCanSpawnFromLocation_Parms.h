#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCheckCanSpawnFromLocation_Parms
{
	char __padding[0x18L];
	FVector& CheckLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPCheckCanSpawnFromLocation_Parms.CheckLocation"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPCheckCanSpawnFromLocation_Parms.ReturnValue"); }
};

