#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestShowLeaderboards_Parms
{
	char __padding[0x10L];
	TSubclassOf<ULeaderboard>& LeaderboardTypeField() { return *GetNativePointerField<TSubclassOf<ULeaderboard>*>(this, "ShooterPlayerController_eventServerRequestShowLeaderboards_Parms.LeaderboardType"); }
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventServerRequestShowLeaderboards_Parms.MissionTag"); }
};

