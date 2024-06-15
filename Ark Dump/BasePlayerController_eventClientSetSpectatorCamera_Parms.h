#pragma once

#include "BaseDeclarations.h"
struct BasePlayerController_eventClientSetSpectatorCamera_Parms
{
	char __padding[0x18L];
	FVector& CameraLocationField() { return *GetNativePointerField<FVector*>(this, "BasePlayerController_eventClientSetSpectatorCamera_Parms.CameraLocation"); }
	FRotator& CameraRotationField() { return *GetNativePointerField<FRotator*>(this, "BasePlayerController_eventClientSetSpectatorCamera_Parms.CameraRotation"); }
};

