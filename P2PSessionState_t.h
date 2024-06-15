#pragma once

#include "BaseDeclarations.h"
struct P2PSessionState_t
{
	char __padding[0x14L];
	char& m_bConnectionActiveField() { return *GetNativePointerField<char*>(this, "P2PSessionState_t.m_bConnectionActive"); }
	char& m_bConnectingField() { return *GetNativePointerField<char*>(this, "P2PSessionState_t.m_bConnecting"); }
	char& m_eP2PSessionErrorField() { return *GetNativePointerField<char*>(this, "P2PSessionState_t.m_eP2PSessionError"); }
	char& m_bUsingRelayField() { return *GetNativePointerField<char*>(this, "P2PSessionState_t.m_bUsingRelay"); }
	int& m_nBytesQueuedForSendField() { return *GetNativePointerField<int*>(this, "P2PSessionState_t.m_nBytesQueuedForSend"); }
	int& m_nPacketsQueuedForSendField() { return *GetNativePointerField<int*>(this, "P2PSessionState_t.m_nPacketsQueuedForSend"); }
	unsigned int& m_nRemoteIPField() { return *GetNativePointerField<unsigned int*>(this, "P2PSessionState_t.m_nRemoteIP"); }
	unsigned __int16& m_nRemotePortField() { return *GetNativePointerField<unsigned __int16*>(this, "P2PSessionState_t.m_nRemotePort"); }
};

