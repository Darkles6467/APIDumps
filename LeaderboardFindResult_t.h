#pragma once

#include "BaseDeclarations.h"
struct LeaderboardFindResult_t
{
	char __padding[0x10L];
	unsigned __int64& m_hSteamLeaderboardField() { return *GetNativePointerField<unsigned __int64*>(this, "LeaderboardFindResult_t.m_hSteamLeaderboard"); }
	char& m_bLeaderboardFoundField() { return *GetNativePointerField<char*>(this, "LeaderboardFindResult_t.m_bLeaderboardFound"); }
};

