#pragma once

#include "BaseDeclarations.h"
struct P2PSessionRequest_t
{
	char __padding[0x8L];
	CSteamID& m_steamIDRemoteField() { return *GetNativePointerField<CSteamID*>(this, "P2PSessionRequest_t.m_steamIDRemote"); }
};

