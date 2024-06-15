#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGrabDebugSnapshot_Parms
{
	char __padding[0x10L];
	TArray<FBlueprintVisualLogEntry>& ReturnValueField() { return *GetNativePointerField<TArray<FBlueprintVisualLogEntry>*>(this, "PrimalCharacter_eventBPGrabDebugSnapshot_Parms.ReturnValue"); }
};

