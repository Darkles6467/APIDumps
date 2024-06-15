#pragma once

#include "BaseDeclarations.h"
#include "FOnlineStats.h"

struct FOnlineLeaderboardWrite : FOnlineStats
{
	char __padding[0x28L];
	ELeaderboardSort::Type& SortMethodField() { return *GetNativePointerField<ELeaderboardSort::Type*>(this, "FOnlineLeaderboardWrite.SortMethod"); }
	ELeaderboardFormat::Type& DisplayFormatField() { return *GetNativePointerField<ELeaderboardFormat::Type*>(this, "FOnlineLeaderboardWrite.DisplayFormat"); }
	ELeaderboardUpdateMethod::Type& UpdateMethodField() { return *GetNativePointerField<ELeaderboardUpdateMethod::Type*>(this, "FOnlineLeaderboardWrite.UpdateMethod"); }
	TArray<FName>& LeaderboardNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FOnlineLeaderboardWrite.LeaderboardNames"); }
	FName& RatedStatField() { return *GetNativePointerField<FName*>(this, "FOnlineLeaderboardWrite.RatedStat"); }

	// Functions

};

struct TestLeaderboardWrite : FOnlineLeaderboardWrite
{

	// Functions

};

