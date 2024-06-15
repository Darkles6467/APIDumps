#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPCameraRotationFinal_Parms
{
	char __padding[0x20L];
	FRotator& InCurrentFinalRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventBPCameraRotationFinal_Parms.InCurrentFinalRot"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventBPCameraRotationFinal_Parms.ReturnValue"); }

	// Functions

};

