#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCarriedDinoBabyRescaled_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * AgingCarriedDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBPCarriedDinoBabyRescaled_Parms.AgingCarriedDino"); }
	float& NewAgeField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPCarriedDinoBabyRescaled_Parms.NewAge"); }
};

