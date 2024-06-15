#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPlaySoundAtLocation_Parms
{
	char __padding[0x20L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "PlayerController_eventClientPlaySoundAtLocation_Parms.Location"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlaySoundAtLocation_Parms.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlaySoundAtLocation_Parms.PitchMultiplier"); }
};

