#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPAdjustAttackIndex_Parms
{
	char __padding[0x8L];
	int& attackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPAdjustAttackIndex_Parms.attackIndex"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPAdjustAttackIndex_Parms.ReturnValue"); }
};

