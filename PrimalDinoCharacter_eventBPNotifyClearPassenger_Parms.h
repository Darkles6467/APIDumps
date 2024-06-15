#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPNotifyClearPassenger_Parms
{
	char __padding[0x10L];
	int& SeatIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPNotifyClearPassenger_Parms.SeatIndex"); }
};

