#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerPrepareMountedDinoForLaunch_Parms
{
	char __padding[0x18L];
	FVector& viewLocField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventServerPrepareMountedDinoForLaunch_Parms.viewLoc"); }
	FVector& viewDirField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventServerPrepareMountedDinoForLaunch_Parms.viewDir"); }
};

