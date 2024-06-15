#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnPlayerRemovedFromMission_Parms
{
	char __padding[0x18L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnPlayerRemovedFromMission_Parms.Player"); }
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPOnPlayerRemovedFromMission_Parms.Controller"); }
	bool& bFromMissionCompleteEventField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOnPlayerRemovedFromMission_Parms.bFromMissionCompleteEvent"); }
	bool& bLastPhaseSuccessField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOnPlayerRemovedFromMission_Parms.bLastPhaseSuccess"); }
};

