#pragma once

#include "BaseDeclarations.h"
struct CSteamID
{
	char __padding[0x8L];
	CSteamID::SteamID_t& m_steamidField() { return *GetNativePointerField<CSteamID::SteamID_t*>(this, "CSteamID.m_steamid"); }
};

