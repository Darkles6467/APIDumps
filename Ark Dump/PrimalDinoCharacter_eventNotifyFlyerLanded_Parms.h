#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNotifyFlyerLanded_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventNotifyFlyerLanded_Parms.ForDino"); }
};

