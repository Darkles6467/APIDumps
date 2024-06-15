#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnRiderChangeWeapons_Parms
{
	char __padding[0x10L];
	AShooterCharacter * theRiderField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventBP_OnRiderChangeWeapons_Parms.theRider"); }
};

