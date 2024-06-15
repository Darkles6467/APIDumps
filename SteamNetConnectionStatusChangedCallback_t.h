#pragma once

#include "BaseDeclarations.h"
struct SteamNetConnectionStatusChangedCallback_t
{
	char __padding[0xc0L];
	unsigned int& m_hConnField() { return *GetNativePointerField<unsigned int*>(this, "SteamNetConnectionStatusChangedCallback_t.m_hConn"); }
	SteamNetConnectionInfo_t& m_infoField() { return *GetNativePointerField<SteamNetConnectionInfo_t*>(this, "SteamNetConnectionStatusChangedCallback_t.m_info"); }
	int& m_eOldStateField() { return *GetNativePointerField<int*>(this, "SteamNetConnectionStatusChangedCallback_t.m_eOldState"); }
};

