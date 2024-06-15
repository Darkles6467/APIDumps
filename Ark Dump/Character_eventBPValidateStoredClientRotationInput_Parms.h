#pragma once

#include "BaseDeclarations.h"
struct Character_eventBPValidateStoredClientRotationInput_Parms
{
	char __padding[0x1cL];
	float& TimeSinceLastMoveField() { return *GetNativePointerField<float*>(this, "Character_eventBPValidateStoredClientRotationInput_Parms.TimeSinceLastMove"); }
	FRotator& ClientRotationField() { return *GetNativePointerField<FRotator*>(this, "Character_eventBPValidateStoredClientRotationInput_Parms.ClientRotation"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "Character_eventBPValidateStoredClientRotationInput_Parms.ReturnValue"); }
};

