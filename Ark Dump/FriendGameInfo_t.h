#pragma once

#include "BaseDeclarations.h"
struct FriendGameInfo_t
{
	char __padding[0x18L];
	CGameID& m_gameIDField() { return *GetNativePointerField<CGameID*>(this, "FriendGameInfo_t.m_gameID"); }
	unsigned int& m_unGameIPField() { return *GetNativePointerField<unsigned int*>(this, "FriendGameInfo_t.m_unGameIP"); }
	unsigned __int16& m_usGamePortField() { return *GetNativePointerField<unsigned __int16*>(this, "FriendGameInfo_t.m_usGamePort"); }
	unsigned __int16& m_usQueryPortField() { return *GetNativePointerField<unsigned __int16*>(this, "FriendGameInfo_t.m_usQueryPort"); }
	CSteamID& m_steamIDLobbyField() { return *GetNativePointerField<CSteamID*>(this, "FriendGameInfo_t.m_steamIDLobby"); }
};

