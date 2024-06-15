#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientShowLeaderboard_Parms
{
	char __padding[0x70L];
	TSubclassOf<ULeaderboard>& LeaderboardTypeField() { return *GetNativePointerField<TSubclassOf<ULeaderboard>*>(this, "ShooterPlayerController_eventClientShowLeaderboard_Parms.LeaderboardType"); }
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventClientShowLeaderboard_Parms.MissionTag"); }
	TArray<FLeaderboardRow>& LeaderboardRowsField() { return *GetNativePointerField<TArray<FLeaderboardRow>*>(this, "ShooterPlayerController_eventClientShowLeaderboard_Parms.LeaderboardRows"); }
	bool& bPlayerHasValidLatestScoreField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientShowLeaderboard_Parms.bPlayerHasValidLatestScore"); }
	FLeaderboardRow& LatestPlayerScoreField() { return *GetNativePointerField<FLeaderboardRow*>(this, "ShooterPlayerController_eventClientShowLeaderboard_Parms.LatestPlayerScore"); }

	// Functions

};

