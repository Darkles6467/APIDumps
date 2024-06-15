#pragma once

#include "BaseDeclarations.h"
#include "IOnlineLeaderboards.h"

struct FOnlineLeaderboardsSteam : IOnlineLeaderboards
{
	char __padding[0x88L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineLeaderboardsSteam.SteamSubsystem"); }
	TArray<FLeaderboardMetadataSteam>& LeaderboardsField() { return *GetNativePointerField<TArray<FLeaderboardMetadataSteam>*>(this, "FOnlineLeaderboardsSteam.Leaderboards"); }
	FWindowsCriticalSection& LeaderboardMetadataLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineLeaderboardsSteam.LeaderboardMetadataLock"); }
	TArray<FUserStatsStateSteam>& UserStatsReceivedStateField() { return *GetNativePointerField<TArray<FUserStatsStateSteam>*>(this, "FOnlineLeaderboardsSteam.UserStatsReceivedState"); }
	FWindowsCriticalSection& UserStatsStoredLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineLeaderboardsSteam.UserStatsStoredLock"); }
	TArray<FUserStatsStateSteam>& UserStatsStoredStateField() { return *GetNativePointerField<TArray<FUserStatsStateSteam>*>(this, "FOnlineLeaderboardsSteam.UserStatsStoredState"); }

	// Functions

	void SetUserStatsState(const FUniqueNetIdSteam * UserId, EOnlineAsyncTaskState::Type NewState) { NativeCall<void, const FUniqueNetIdSteam *, EOnlineAsyncTaskState::Type>(this, "FOnlineLeaderboardsSteam.SetUserStatsState", UserId, NewState); }
	void SetUserStatsStoreState(const FUniqueNetIdSteam * UserId, EOnlineAsyncTaskState::Type NewState) { NativeCall<void, const FUniqueNetIdSteam *, EOnlineAsyncTaskState::Type>(this, "FOnlineLeaderboardsSteam.SetUserStatsStoreState", UserId, NewState); }
};

