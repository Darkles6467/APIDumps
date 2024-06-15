#pragma once

#include "BaseDeclarations.h"
struct LobbyEnter_t
{
	char __padding[0x18L];
	unsigned __int64& m_ulSteamIDLobbyField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyEnter_t.m_ulSteamIDLobby"); }
	unsigned int& m_rgfChatPermissionsField() { return *GetNativePointerField<unsigned int*>(this, "LobbyEnter_t.m_rgfChatPermissions"); }
	bool& m_bLockedField() { return *GetNativePointerField<bool*>(this, "LobbyEnter_t.m_bLocked"); }
	unsigned int& m_EChatRoomEnterResponseField() { return *GetNativePointerField<unsigned int*>(this, "LobbyEnter_t.m_EChatRoomEnterResponse"); }
};

