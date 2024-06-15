#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNotifyAddPassenger_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventNotifyAddPassenger_Parms.ForDino"); }
	int& SeatIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventNotifyAddPassenger_Parms.SeatIndex"); }
};

