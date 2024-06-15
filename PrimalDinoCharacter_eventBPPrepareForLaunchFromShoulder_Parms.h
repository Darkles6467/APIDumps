#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPPrepareForLaunchFromShoulder_Parms
{
	char __padding[0x18L];
	FVector& viewLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPPrepareForLaunchFromShoulder_Parms.viewLoc"); }
	FVector& viewDirField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPPrepareForLaunchFromShoulder_Parms.viewDir"); }
};

