#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventInstigatorAttack_Parms
{
	char __padding[0x8L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalBuff_eventBPPreventInstigatorAttack_Parms.AttackIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventInstigatorAttack_Parms.ReturnValue"); }
};

