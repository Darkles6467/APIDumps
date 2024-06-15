#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyAimOffsetNoTarget_Parms
{
	char __padding[0x18L];
	FRotator& AimField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyAimOffsetNoTarget_Parms.Aim"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyAimOffsetNoTarget_Parms.ReturnValue"); }
};

