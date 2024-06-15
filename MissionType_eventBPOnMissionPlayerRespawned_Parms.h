#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionPlayerRespawned_Parms
{
	char __padding[0x10L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnMissionPlayerRespawned_Parms.Player"); }
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPOnMissionPlayerRespawned_Parms.Controller"); }
};

