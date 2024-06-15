#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPLimitPlayerRotation_Parms
{
	char __padding[0x20L];
	FRotator& InViewRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventBPLimitPlayerRotation_Parms.InViewRotation"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventBPLimitPlayerRotation_Parms.ReturnValue"); }
};

