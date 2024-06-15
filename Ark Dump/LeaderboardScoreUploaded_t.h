#pragma once

#include "BaseDeclarations.h"
struct LeaderboardScoreUploaded_t
{
	char __padding[0x20L];
	char& m_bSuccessField() { return *GetNativePointerField<char*>(this, "LeaderboardScoreUploaded_t.m_bSuccess"); }
	unsigned __int64& m_hSteamLeaderboardField() { return *GetNativePointerField<unsigned __int64*>(this, "LeaderboardScoreUploaded_t.m_hSteamLeaderboard"); }
	int& m_nScoreField() { return *GetNativePointerField<int*>(this, "LeaderboardScoreUploaded_t.m_nScore"); }
	char& m_bScoreChangedField() { return *GetNativePointerField<char*>(this, "LeaderboardScoreUploaded_t.m_bScoreChanged"); }
	int& m_nGlobalRankNewField() { return *GetNativePointerField<int*>(this, "LeaderboardScoreUploaded_t.m_nGlobalRankNew"); }
	int& m_nGlobalRankPreviousField() { return *GetNativePointerField<int*>(this, "LeaderboardScoreUploaded_t.m_nGlobalRankPrevious"); }
};

