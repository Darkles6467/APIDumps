#pragma once

#include "BaseDeclarations.h"
struct Leaderboard_eventBPAddLeaderboardRow_Parms
{
	char __padding[0x58L];
	FLeaderboardRow& NewRowField() { return *GetNativePointerField<FLeaderboardRow*>(this, "Leaderboard_eventBPAddLeaderboardRow_Parms.NewRow"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Leaderboard_eventBPAddLeaderboardRow_Parms.ReturnValue"); }

	// Functions

};

