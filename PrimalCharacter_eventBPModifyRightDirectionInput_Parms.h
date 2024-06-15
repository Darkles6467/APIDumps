#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPModifyRightDirectionInput_Parms
{
	char __padding[0x18L];
	FVector& directionInputField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPModifyRightDirectionInput_Parms.directionInput"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPModifyRightDirectionInput_Parms.ReturnValue"); }
};

