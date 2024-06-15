#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPNotifyClearRider_Parms
{
	char __padding[0x8L];
	AShooterCharacter * RiderClearingField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventBPNotifyClearRider_Parms.RiderClearing"); }
};

