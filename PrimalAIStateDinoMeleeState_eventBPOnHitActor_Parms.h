#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateDinoMeleeState_eventBPOnHitActor_Parms
{
	char __padding[0x88L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimalAIStateDinoMeleeState_eventBPOnHitActor_Parms.HitResult"); }
};

