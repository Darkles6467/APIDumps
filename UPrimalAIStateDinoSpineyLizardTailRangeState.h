#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIStateDinoRangedState.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoSpineyLizardTailRangeState : UPrimalAIStateDinoRangedState
{
	char __padding[0x8L];
	float& minPercentField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.minPercent"); }
	float& maxPercentField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.maxPercent"); }

	// Functions

	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.EndAnimationState", CustomEventName, Role); }
	void SpineyAttack(const FVector * TargetLoc, const FVector * TargetVel) { NativeCall<void, const FVector *, const FVector *>(this, "UPrimalAIStateDinoSpineyLizardTailRangeState.SpineyAttack", TargetLoc, TargetVel); }
};

