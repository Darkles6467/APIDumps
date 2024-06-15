#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerRequestAttack_Parms
{
	char __padding[0x4L];
	int& attackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventServerRequestAttack_Parms.attackIndex"); }
};

