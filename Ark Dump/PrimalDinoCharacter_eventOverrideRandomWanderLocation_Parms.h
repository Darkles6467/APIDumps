#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventOverrideRandomWanderLocation_Parms
{
	char __padding[0x18L];
	FVector& originalDestinationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventOverrideRandomWanderLocation_Parms.originalDestination"); }
	FVector& inVecField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventOverrideRandomWanderLocation_Parms.inVec"); }
};

