#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPBecameNewBaby_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * parentField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBPBecameNewBaby_Parms.parent"); }
};

