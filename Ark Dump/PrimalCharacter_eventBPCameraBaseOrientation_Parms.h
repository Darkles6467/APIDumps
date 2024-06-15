#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPCameraBaseOrientation_Parms
{
	char __padding[0x18L];
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventBPCameraBaseOrientation_Parms.ReturnValue"); }
};

