#pragma once

#include "BaseDeclarations.h"
struct LeaderboardEntry_t
{
	char __padding[0x20L];
	CSteamID& m_steamIDUserField() { return *GetNativePointerField<CSteamID*>(this, "LeaderboardEntry_t.m_steamIDUser"); }
	int& m_nGlobalRankField() { return *GetNativePointerField<int*>(this, "LeaderboardEntry_t.m_nGlobalRank"); }
	int& m_nScoreField() { return *GetNativePointerField<int*>(this, "LeaderboardEntry_t.m_nScore"); }
	int& m_cDetailsField() { return *GetNativePointerField<int*>(this, "LeaderboardEntry_t.m_cDetails"); }
	unsigned __int64& m_hUGCField() { return *GetNativePointerField<unsigned __int64*>(this, "LeaderboardEntry_t.m_hUGC"); }
};

