#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateDinoMeleeState_eventBPGetSocketLocation_Parms
{
	char __padding[0x14L];
	FName& SocketNameField() { return *GetNativePointerField<FName*>(this, "PrimalAIStateDinoMeleeState_eventBPGetSocketLocation_Parms.SocketName"); }
	FVector& SocketLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalAIStateDinoMeleeState_eventBPGetSocketLocation_Parms.SocketLocation"); }
};

