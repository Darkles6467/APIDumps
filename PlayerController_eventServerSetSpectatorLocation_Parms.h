#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerSetSpectatorLocation_Parms
{
	char __padding[0xcL];
	FVector& NewLocField() { return *GetNativePointerField<FVector*>(this, "PlayerController_eventServerSetSpectatorLocation_Parms.NewLoc"); }
};

