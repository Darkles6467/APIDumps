#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPrestreamTextures_Parms
{
	char __padding[0x18L];
	float& ForceDurationField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPrestreamTextures_Parms.ForceDuration"); }
	bool& bEnableStreamingField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPrestreamTextures_Parms.bEnableStreaming"); }
	int& CinematicTextureGroupsField() { return *GetNativePointerField<int*>(this, "PlayerController_eventClientPrestreamTextures_Parms.CinematicTextureGroups"); }
};

