#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintCanRiderAttack_Parms
{
	char __padding[0x8L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBlueprintCanRiderAttack_Parms.AttackIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBlueprintCanRiderAttack_Parms.ReturnValue"); }
};

