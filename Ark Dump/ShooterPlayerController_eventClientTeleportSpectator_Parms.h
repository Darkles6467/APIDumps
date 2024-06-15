#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientTeleportSpectator_Parms
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventClientTeleportSpectator_Parms.Location"); }
	unsigned __int64& PlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventClientTeleportSpectator_Parms.PlayerID"); }
};

