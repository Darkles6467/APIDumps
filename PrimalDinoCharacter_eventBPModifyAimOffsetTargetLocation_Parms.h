#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyAimOffsetTargetLocation_Parms
{
	char __padding[0x18L];
	FVector& AimTargetLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPModifyAimOffsetTargetLocation_Parms.AimTargetLocation"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPModifyAimOffsetTargetLocation_Parms.ReturnValue"); }
};

