#pragma once

#include "BaseDeclarations.h"
struct SteamNetConnectionInfo_t
{
	char __padding[0xb0L];
	unsigned int& m_hListenSocketField() { return *GetNativePointerField<unsigned int*>(this, "SteamNetConnectionInfo_t.m_hListenSocket"); }
	CSteamID& m_steamIDRemoteField() { return *GetNativePointerField<CSteamID*>(this, "SteamNetConnectionInfo_t.m_steamIDRemote"); }
	__int64& m_nUserDataField() { return *GetNativePointerField<__int64*>(this, "SteamNetConnectionInfo_t.m_nUserData"); }
	unsigned int& m_unIPRemoteField() { return *GetNativePointerField<unsigned int*>(this, "SteamNetConnectionInfo_t.m_unIPRemote"); }
	unsigned __int16& m_unPortRemoteField() { return *GetNativePointerField<unsigned __int16*>(this, "SteamNetConnectionInfo_t.m_unPortRemote"); }
	unsigned __int16& m__pad1Field() { return *GetNativePointerField<unsigned __int16*>(this, "SteamNetConnectionInfo_t.m__pad1"); }
	unsigned int& m_idPOPRemoteField() { return *GetNativePointerField<unsigned int*>(this, "SteamNetConnectionInfo_t.m_idPOPRemote"); }
	unsigned int& m_idPOPRelayField() { return *GetNativePointerField<unsigned int*>(this, "SteamNetConnectionInfo_t.m_idPOPRelay"); }
	int& m_eStateField() { return *GetNativePointerField<int*>(this, "SteamNetConnectionInfo_t.m_eState"); }
	int& m_eEndReasonField() { return *GetNativePointerField<int*>(this, "SteamNetConnectionInfo_t.m_eEndReason"); }
	FieldArray<char, 128> m_szEndDebugField() { return {this, "SteamNetConnectionInfo_t.m_szEndDebug"}; }
};

