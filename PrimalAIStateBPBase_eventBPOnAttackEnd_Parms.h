#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateBPBase_eventBPOnAttackEnd_Parms
{
	char __padding[0x4L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalAIStateBPBase_eventBPOnAttackEnd_Parms.AttackIndex"); }
};

