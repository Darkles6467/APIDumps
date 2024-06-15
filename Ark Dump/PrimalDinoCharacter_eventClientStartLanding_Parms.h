#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventClientStartLanding_Parms
{
	char __padding[0xcL];
	FVector& landingLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventClientStartLanding_Parms.landingLoc"); }
};

