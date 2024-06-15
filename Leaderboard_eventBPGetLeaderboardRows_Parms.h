#pragma once

#include "BaseDeclarations.h"
struct Leaderboard_eventBPGetLeaderboardRows_Parms
{
	char __padding[0x20L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "Leaderboard_eventBPGetLeaderboardRows_Parms.MissionTag"); }
	TArray<FLeaderboardRow>& LeaderboardRowsField() { return *GetNativePointerField<TArray<FLeaderboardRow>*>(this, "Leaderboard_eventBPGetLeaderboardRows_Parms.LeaderboardRows"); }

	// Functions

};

