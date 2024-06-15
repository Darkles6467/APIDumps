#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintOverrideWantsToRun_Parms
{
	char __padding[0x2L];
	bool& bInputWantsToRunField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBlueprintOverrideWantsToRun_Parms.bInputWantsToRun"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBlueprintOverrideWantsToRun_Parms.ReturnValue"); }
};

