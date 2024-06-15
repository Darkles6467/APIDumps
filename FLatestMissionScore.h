#pragma once

#include "BaseDeclarations.h"
struct FLatestMissionScore
{
	char __padding[0xa0L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "FLatestMissionScore.MissionTag"); }
	FLeaderboardRow& LatestScoreField() { return *GetNativePointerField<FLeaderboardRow*>(this, "FLatestMissionScore.LatestScore"); }
	FLeaderboardRow& BestScoreField() { return *GetNativePointerField<FLeaderboardRow*>(this, "FLatestMissionScore.BestScore"); }
	bool& bHasValidScoreField() { return *GetNativePointerField<bool*>(this, "FLatestMissionScore.bHasValidScore"); }

	// Functions

	FLatestMissionScore * operator=(const FLatestMissionScore * __that) { return NativeCall<FLatestMissionScore *, const FLatestMissionScore *>(this, "FLatestMissionScore.operator=", __that); }
};

