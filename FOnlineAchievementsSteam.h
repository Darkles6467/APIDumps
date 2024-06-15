#pragma once

#include "BaseDeclarations.h"
#include "IOnlineAchievements.h"

struct FOnlineAchievementsSteam : IOnlineAchievements
{
	char __padding[0xc8L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineAchievementsSteam.SteamSubsystem"); }
	FOnlineLeaderboardsSteam * StatsIntField() { return GetNativePointerField<FOnlineLeaderboardsSteam *>(this, "FOnlineAchievementsSteam.StatsInt"); }
	TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam>& AchievementsField() { return *GetNativePointerField<TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam>*>(this, "FOnlineAchievementsSteam.Achievements"); }
	bool& bHaveConfiguredAchievementsField() { return *GetNativePointerField<bool*>(this, "FOnlineAchievementsSteam.bHaveConfiguredAchievements"); }
};

