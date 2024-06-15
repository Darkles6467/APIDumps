#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRecieveSpectatorLocationAndRotation_Parms
{
	char __padding[0x18L];
	FVector& spectatorLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventServerRecieveSpectatorLocationAndRotation_Parms.spectatorLocation"); }
	FRotator& spectatorRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterPlayerController_eventServerRecieveSpectatorLocationAndRotation_Parms.spectatorRotation"); }
};

