#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerSetRiderMountedWeaponRotation_Parms
{
	char __padding[0xcL];
	FRotator& InValField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventServerSetRiderMountedWeaponRotation_Parms.InVal"); }
};

