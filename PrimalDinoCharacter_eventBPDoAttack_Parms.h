#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPDoAttack_Parms
{
	char __padding[0x4L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPDoAttack_Parms.AttackIndex"); }
};

