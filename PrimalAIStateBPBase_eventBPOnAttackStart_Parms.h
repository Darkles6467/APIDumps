#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateBPBase_eventBPOnAttackStart_Parms
{
	char __padding[0x4L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalAIStateBPBase_eventBPOnAttackStart_Parms.AttackIndex"); }
};

