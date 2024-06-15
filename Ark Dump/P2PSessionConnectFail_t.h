#pragma once

#include "BaseDeclarations.h"
struct P2PSessionConnectFail_t
{
	char __padding[0x9L];
	CSteamID& m_steamIDRemoteField() { return *GetNativePointerField<CSteamID*>(this, "P2PSessionConnectFail_t.m_steamIDRemote"); }
	char& m_eP2PSessionErrorField() { return *GetNativePointerField<char*>(this, "P2PSessionConnectFail_t.m_eP2PSessionError"); }
};

