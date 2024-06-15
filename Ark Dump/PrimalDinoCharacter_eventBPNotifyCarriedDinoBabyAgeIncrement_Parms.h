#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPNotifyCarriedDinoBabyAgeIncrement_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * AgingCarriedDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBPNotifyCarriedDinoBabyAgeIncrement_Parms.AgingCarriedDino"); }
	float& PreviousAgeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPNotifyCarriedDinoBabyAgeIncrement_Parms.PreviousAge"); }
	float& NewAgeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPNotifyCarriedDinoBabyAgeIncrement_Parms.NewAge"); }
};

