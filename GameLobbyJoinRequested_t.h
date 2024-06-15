#pragma once

#include "BaseDeclarations.h"
struct GameLobbyJoinRequested_t
{
	char __padding[0x10L];
	CSteamID& m_steamIDLobbyField() { return *GetNativePointerField<CSteamID*>(this, "GameLobbyJoinRequested_t.m_steamIDLobby"); }
	CSteamID& m_steamIDFriendField() { return *GetNativePointerField<CSteamID*>(this, "GameLobbyJoinRequested_t.m_steamIDFriend"); }
};

