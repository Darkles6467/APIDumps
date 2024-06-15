#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnPostNetReplication_Parms
{
	char __padding[0x18L];
	FVector& ReplicatedLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBP_OnPostNetReplication_Parms.ReplicatedLoc"); }
	FRotator& ReplicatedRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBP_OnPostNetReplication_Parms.ReplicatedRot"); }
};

