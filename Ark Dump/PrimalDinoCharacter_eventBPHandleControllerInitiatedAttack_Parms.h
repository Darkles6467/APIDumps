#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPHandleControllerInitiatedAttack_Parms
{
	char __padding[0x8L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPHandleControllerInitiatedAttack_Parms.AttackIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPHandleControllerInitiatedAttack_Parms.ReturnValue"); }
};

