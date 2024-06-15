#pragma once

#include "BaseDeclarations.h"
struct LobbyCreated_t
{
	char __padding[0x10L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "LobbyCreated_t.m_eResult"); }
	unsigned __int64& m_ulSteamIDLobbyField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyCreated_t.m_ulSteamIDLobby"); }
};

