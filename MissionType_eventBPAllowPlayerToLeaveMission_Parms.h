#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPAllowPlayerToLeaveMission_Parms
{
	char __padding[0x10L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPAllowPlayerToLeaveMission_Parms.PlayerPawn"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPAllowPlayerToLeaveMission_Parms.ReturnValue"); }
};

