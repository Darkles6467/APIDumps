#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardMetadataSteam
{
	char __padding[0x28L];
	FName& LeaderboardNameField() { return *GetNativePointerField<FName*>(this, "FLeaderboardMetadataSteam.LeaderboardName"); }
	ELeaderboardSort::Type& SortMethodField() { return *GetNativePointerField<ELeaderboardSort::Type*>(this, "FLeaderboardMetadataSteam.SortMethod"); }
	ELeaderboardFormat::Type& DisplayFormatField() { return *GetNativePointerField<ELeaderboardFormat::Type*>(this, "FLeaderboardMetadataSteam.DisplayFormat"); }
	int& TotalLeaderboardRowsField() { return *GetNativePointerField<int*>(this, "FLeaderboardMetadataSteam.TotalLeaderboardRows"); }
	unsigned __int64& LeaderboardHandleField() { return *GetNativePointerField<unsigned __int64*>(this, "FLeaderboardMetadataSteam.LeaderboardHandle"); }
	EOnlineAsyncTaskState::Type& AsyncStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FLeaderboardMetadataSteam.AsyncState"); }
};

