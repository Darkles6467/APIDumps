#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyControlRotation_Parms
{
	char __padding[0x1cL];
	FRotator& controlRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyControlRotation_Parms.controlRotation"); }
	FRotator& outControlRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyControlRotation_Parms.outControlRotation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPModifyControlRotation_Parms.ReturnValue"); }

	// Functions

};

