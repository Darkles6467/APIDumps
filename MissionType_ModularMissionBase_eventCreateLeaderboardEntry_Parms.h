#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventCreateLeaderboardEntry_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_ModularMissionBase_eventCreateLeaderboardEntry_Parms.ForPC"); }
};

