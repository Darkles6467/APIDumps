#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerCallLandFlyerOne_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventServerCallLandFlyerOne_Parms.ForDinoChar"); }
};

