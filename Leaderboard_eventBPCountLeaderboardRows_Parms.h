#pragma once

#include "BaseDeclarations.h"
struct Leaderboard_eventBPCountLeaderboardRows_Parms
{
	char __padding[0x18L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "Leaderboard_eventBPCountLeaderboardRows_Parms.MissionTag"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "Leaderboard_eventBPCountLeaderboardRows_Parms.ReturnValue"); }
};

