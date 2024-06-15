#pragma once

#include "BaseDeclarations.h"
struct LobbyChatUpdate_t
{
	char __padding[0x20L];
	unsigned __int64& m_ulSteamIDLobbyField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyChatUpdate_t.m_ulSteamIDLobby"); }
	unsigned __int64& m_ulSteamIDUserChangedField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyChatUpdate_t.m_ulSteamIDUserChanged"); }
	unsigned __int64& m_ulSteamIDMakingChangeField() { return *GetNativePointerField<unsigned __int64*>(this, "LobbyChatUpdate_t.m_ulSteamIDMakingChange"); }
	unsigned int& m_rgfChatMemberStateChangeField() { return *GetNativePointerField<unsigned int*>(this, "LobbyChatUpdate_t.m_rgfChatMemberStateChange"); }
};

