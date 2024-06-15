#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardsContainer
{
	char __padding[0x10L];
	TArray<FLeaderboardEntry>& LeaderboardsField() { return *GetNativePointerField<TArray<FLeaderboardEntry>*>(this, "FLeaderboardsContainer.Leaderboards"); }

	// Functions

};

