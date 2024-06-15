#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPlaySound_Parms
{
	char __padding[0x10L];
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlaySound_Parms.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlaySound_Parms.PitchMultiplier"); }
};

