#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerUpdateAttackTargets_Parms
{
	char __padding[0x18L];
	FVector& AttackLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventServerUpdateAttackTargets_Parms.AttackLocation"); }
};

