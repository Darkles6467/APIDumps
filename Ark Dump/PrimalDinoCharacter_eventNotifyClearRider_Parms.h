#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNotifyClearRider_Parms
{
	char __padding[0x10L];
	AShooterCharacter * RiderClearingField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventNotifyClearRider_Parms.RiderClearing"); }
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventNotifyClearRider_Parms.ForDino"); }
};

