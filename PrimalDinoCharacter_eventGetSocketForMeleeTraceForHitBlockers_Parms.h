#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventGetSocketForMeleeTraceForHitBlockers_Parms
{
	char __padding[0xcL];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventGetSocketForMeleeTraceForHitBlockers_Parms.AttackIndex"); }
	FName& ReturnValueField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventGetSocketForMeleeTraceForHitBlockers_Parms.ReturnValue"); }
};

