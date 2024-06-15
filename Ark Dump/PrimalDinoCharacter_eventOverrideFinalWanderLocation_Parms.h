#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventOverrideFinalWanderLocation_Parms
{
	char __padding[0x10L];
	FVector& outVecField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventOverrideFinalWanderLocation_Parms.outVec"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventOverrideFinalWanderLocation_Parms.ReturnValue"); }
};

