#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPModifyForwardDirectionInput_Parms
{
	char __padding[0x18L];
	FVector& directionInputField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPModifyForwardDirectionInput_Parms.directionInput"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPModifyForwardDirectionInput_Parms.ReturnValue"); }
};

