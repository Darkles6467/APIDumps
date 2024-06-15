#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerCallFollowDistanceCycleOne_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventServerCallFollowDistanceCycleOne_Parms.ForDinoChar"); }
};

