#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPModifyFOVInterpSpeed_Parms
{
	char __padding[0x8L];
	float& FOVInterpSpeedInField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyFOVInterpSpeed_Parms.FOVInterpSpeedIn"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPModifyFOVInterpSpeed_Parms.ReturnValue"); }
};

