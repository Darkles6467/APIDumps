#pragma once

#include "BaseDeclarations.h"
struct LobbyDataUpdate_t
{
	char __padding[0x18L];
	unsigned __int64& m_ulSteamIDLobbyField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyDataUpdate_t.m_ulSteamIDLobby"); }
	unsigned __int64& m_ulSteamIDMemberField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyDataUpdate_t.m_ulSteamIDMember"); }
	char& m_bSuccessField() { return *GetNativePointerField<char*>(this, "LobbyDataUpdate_t.m_bSuccess"); }
};

