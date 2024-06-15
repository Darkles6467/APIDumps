#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIStateDinoMeleeState.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoGrabAndReleaseState : UPrimalAIStateDinoMeleeState
{
	char __padding[0x8L];

	// Functions

	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoGrabAndReleaseState.StartAnimationState", CustomEventName, Role); }
	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnBegin", InParentState); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnEnd"); }
	void OnHitActor(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "UPrimalAIStateDinoGrabAndReleaseState.OnHitActor", HitResult); }
};

