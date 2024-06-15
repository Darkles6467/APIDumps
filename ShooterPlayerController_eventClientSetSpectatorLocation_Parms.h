#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSetSpectatorLocation_Parms
{
	char __padding[0xcL];
	FVector& NewLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventClientSetSpectatorLocation_Parms.NewLocation"); }
};

