#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPModifyDesiredRotation_Parms
{
	char __padding[0x20L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPModifyDesiredRotation_Parms.DeltaTime"); }
	FRotator& InDesiredRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyDesiredRotation_Parms.InDesiredRotation"); }
	FRotator& OutDesiredRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPModifyDesiredRotation_Parms.OutDesiredRotation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPModifyDesiredRotation_Parms.ReturnValue"); }
};

