#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNotifyClearPassenger_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventNotifyClearPassenger_Parms.ForDino"); }
	int& SeatIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventNotifyClearPassenger_Parms.SeatIndex"); }
};

