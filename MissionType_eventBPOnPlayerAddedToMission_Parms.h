#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnPlayerAddedToMission_Parms
{
	char __padding[0x10L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnPlayerAddedToMission_Parms.Player"); }
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPOnPlayerAddedToMission_Parms.Controller"); }
};

