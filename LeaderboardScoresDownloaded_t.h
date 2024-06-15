#pragma once

#include "BaseDeclarations.h"
struct LeaderboardScoresDownloaded_t
{
	char __padding[0x18L];
	unsigned __int64& m_hSteamLeaderboardField() { return *GetNativePointerField<unsigned __int64*>(this, "LeaderboardScoresDownloaded_t.m_hSteamLeaderboard"); }
	unsigned __int64& m_hSteamLeaderboardEntriesField() { return *GetNativePointerField<unsigned __int64*>(this, "LeaderboardScoresDownloaded_t.m_hSteamLeaderboardEntries"); }
	int& m_cEntryCountField() { return *GetNativePointerField<int*>(this, "LeaderboardScoresDownloaded_t.m_cEntryCount"); }
};

