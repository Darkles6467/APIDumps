#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPModifyFOV_Parms
{
	char __padding[0x8L];
	float& FOVInField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyFOV_Parms.FOVIn"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyFOV_Parms.ReturnValue"); }
};

