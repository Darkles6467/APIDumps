#pragma once

#include "BaseDeclarations.h"
struct GameRichPresenceJoinRequested_t
{
	char __padding[0x108L];
	CSteamID& m_steamIDFriendField() { return *GetNativePointerField<CSteamID*>(this, "GameRichPresenceJoinRequested_t.m_steamIDFriend"); }
	FieldArray<char, 256> m_rgchConnectField() { return {this, "GameRichPresenceJoinRequested_t.m_rgchConnect"}; }
};

