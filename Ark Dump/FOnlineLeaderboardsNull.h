#pragma once

#include "BaseDeclarations.h"
#include "IOnlineLeaderboards.h"
#include "TestLeaderboardRead.h"

struct FOnlineLeaderboardsNull : IOnlineLeaderboards
{
	char __padding[0x58L];
	FOnlineSubsystemNull * NullSubsystemField() { return GetNativePointerField<FOnlineSubsystemNull *>(this, "FOnlineLeaderboardsNull.NullSubsystem"); }

	// Functions

	void FLeaderboardNull() { NativeCall<void>(this, "FOnlineLeaderboardsNull.FLeaderboardNull"); }
	FOnlineLeaderboardsNull::FLeaderboardNull * FindOrCreateLeaderboard(const FName * LeaderboardName, ELeaderboardSort::Type SortMethod, ELeaderboardFormat::Type DisplayFormat) { return NativeCall<FOnlineLeaderboardsNull::FLeaderboardNull *, const FName *, ELeaderboardSort::Type, ELeaderboardFormat::Type>(this, "FOnlineLeaderboardsNull.FindOrCreateLeaderboard", LeaderboardName, SortMethod, DisplayFormat); }
	bool FlushLeaderboards(const FName * SessionName) { return NativeCall<bool, const FName *>(this, "FOnlineLeaderboardsNull.FlushLeaderboards", SessionName); }
	bool ReadLeaderboards(const TArray<TSharedRef<FUniqueNetId,0>> * Players, TSharedRef<FOnlineLeaderboardRead,1> * ReadObject) { return NativeCall<bool, const TArray<TSharedRef<FUniqueNetId,0>> *, TSharedRef<FOnlineLeaderboardRead,1> *>(this, "FOnlineLeaderboardsNull.ReadLeaderboards", Players, ReadObject); }
	bool ReadLeaderboardsForFriends(int LocalUserNum, TSharedRef<FOnlineLeaderboardRead,1> * ReadObject) { return NativeCall<bool, int, TSharedRef<FOnlineLeaderboardRead,1> *>(this, "FOnlineLeaderboardsNull.ReadLeaderboardsForFriends", LocalUserNum, ReadObject); }
	bool WriteLeaderboards(const FName * SessionName, const FUniqueNetId * Player, FOnlineLeaderboardWrite * WriteObject) { return NativeCall<bool, const FName *, const FUniqueNetId *, FOnlineLeaderboardWrite *>(this, "FOnlineLeaderboardsNull.WriteLeaderboards", SessionName, Player, WriteObject); }
};

