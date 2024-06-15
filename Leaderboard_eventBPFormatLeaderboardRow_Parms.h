#pragma once

#include "BaseDeclarations.h"
struct Leaderboard_eventBPFormatLeaderboardRow_Parms
{
	char __padding[0x78L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "Leaderboard_eventBPFormatLeaderboardRow_Parms.MissionTag"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "Leaderboard_eventBPFormatLeaderboardRow_Parms.Index"); }
	FLeaderboardRow& DatabaseRowField() { return *GetNativePointerField<FLeaderboardRow*>(this, "Leaderboard_eventBPFormatLeaderboardRow_Parms.DatabaseRow"); }
	FLeaderboardDisplayRow& ReturnValueField() { return *GetNativePointerField<FLeaderboardDisplayRow*>(this, "Leaderboard_eventBPFormatLeaderboardRow_Parms.ReturnValue"); }

	// Functions

};

