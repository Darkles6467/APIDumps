#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIStateDinoMeleeState.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoFlyerGrab : UPrimalAIStateDinoMeleeState
{
	char __padding[0x8L];

	// Functions

	void OnBegin(UPrimalAIState * InParentState) { NativeCall<void, UPrimalAIState *>(this, "UPrimalAIStateDinoFlyerGrab.OnBegin", InParentState); }
	void OnHitActor(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "UPrimalAIStateDinoFlyerGrab.OnHitActor", HitResult); }
};

