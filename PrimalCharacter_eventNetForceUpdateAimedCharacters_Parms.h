#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetForceUpdateAimedCharacters_Parms
{
	char __padding[0x28L];
	FVector& StartLocField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventNetForceUpdateAimedCharacters_Parms.StartLoc"); }
	FVector& EndLocField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventNetForceUpdateAimedCharacters_Parms.EndLoc"); }
	bool& bForceUpdateIgnoreActorField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetForceUpdateAimedCharacters_Parms.bForceUpdateIgnoreActor"); }
	float& TraceRadiusField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventNetForceUpdateAimedCharacters_Parms.TraceRadius"); }
};

