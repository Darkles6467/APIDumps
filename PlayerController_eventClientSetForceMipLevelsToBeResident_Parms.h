#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms
{
	char __padding[0x10L];
	float& ForceDurationField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientSetForceMipLevelsToBeResident_Parms.ForceDuration"); }
	int& CinematicTextureGroupsField() { return *GetNativePointerField<int*>(this, "PlayerController_eventClientSetForceMipLevelsToBeResident_Parms.CinematicTextureGroups"); }
};

