#pragma once

#include "BaseDeclarations.h"
struct UserStatsUnloaded_t
{
	char __padding[0x8L];
	CSteamID& m_steamIDUserField() { return *GetNativePointerField<CSteamID*>(this, "UserStatsUnloaded_t.m_steamIDUser"); }
};

