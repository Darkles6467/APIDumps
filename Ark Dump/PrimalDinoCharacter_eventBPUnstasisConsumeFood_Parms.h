#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPUnstasisConsumeFood_Parms
{
	char __padding[0x8L];
	float& FoodNeededField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPUnstasisConsumeFood_Parms.FoodNeeded"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPUnstasisConsumeFood_Parms.ReturnValue"); }
};

