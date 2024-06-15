#pragma once

#include "BaseDeclarations.h"
struct Character_eventBPModifyRootMotionDeltaRotation_Parms
{
	char __padding[0x18L];
	FRotator& DeltaField() { return *GetNativePointerField<FRotator*>(this, "Character_eventBPModifyRootMotionDeltaRotation_Parms.Delta"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "Character_eventBPModifyRootMotionDeltaRotation_Parms.ReturnValue"); }
};

