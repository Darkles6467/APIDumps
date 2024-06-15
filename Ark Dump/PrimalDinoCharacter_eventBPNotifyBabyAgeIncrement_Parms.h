#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPNotifyBabyAgeIncrement_Parms
{
	char __padding[0x8L];
	float& PreviousAgeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPNotifyBabyAgeIncrement_Parms.PreviousAge"); }
	float& NewAgeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPNotifyBabyAgeIncrement_Parms.NewAge"); }
};

