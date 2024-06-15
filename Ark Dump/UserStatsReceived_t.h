#pragma once

#include "BaseDeclarations.h"
struct UserStatsReceived_t
{
	char __padding[0x18L];
	unsigned __int64& m_nGameIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UserStatsReceived_t.m_nGameID"); }
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "UserStatsReceived_t.m_eResult"); }
	CSteamID& m_steamIDUserField() { return *GetNativePointerField<CSteamID*>(this, "UserStatsReceived_t.m_steamIDUser"); }
};

