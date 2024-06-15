#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventDinoInstigatorReceivedRider_Parms
{
	char __padding[0x8L];
	AShooterCharacter * RiderField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalBuff_eventDinoInstigatorReceivedRider_Parms.Rider"); }
};

