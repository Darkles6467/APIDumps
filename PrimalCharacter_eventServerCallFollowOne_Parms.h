#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerCallFollowOne_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventServerCallFollowOne_Parms.ForDinoChar"); }
};

