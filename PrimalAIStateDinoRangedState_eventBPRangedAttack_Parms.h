#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateDinoRangedState_eventBPRangedAttack_Parms
{
	char __padding[0x18L];
	FVector& TargetLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalAIStateDinoRangedState_eventBPRangedAttack_Parms.TargetLocation"); }
	FVector& TargetVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalAIStateDinoRangedState_eventBPRangedAttack_Parms.TargetVelocity"); }
};

