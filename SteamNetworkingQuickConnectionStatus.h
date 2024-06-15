#pragma once

#include "BaseDeclarations.h"
struct SteamNetworkingQuickConnectionStatus
{
	char __padding[0x38L];
	int& m_eStateField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_eState"); }
	int& m_nPingField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_nPing"); }
	float& m_flConnectionQualityLocalField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flConnectionQualityLocal"); }
	float& m_flConnectionQualityRemoteField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flConnectionQualityRemote"); }
	float& m_flOutPacketsPerSecField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flOutPacketsPerSec"); }
	float& m_flOutBytesPerSecField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flOutBytesPerSec"); }
	float& m_flInPacketsPerSecField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flInPacketsPerSec"); }
	float& m_flInBytesPerSecField() { return *GetNativePointerField<float*>(this, "SteamNetworkingQuickConnectionStatus.m_flInBytesPerSec"); }
	int& m_nSendRateBytesPerSecondField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_nSendRateBytesPerSecond"); }
	int& m_cbPendingUnreliableField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_cbPendingUnreliable"); }
	int& m_cbPendingReliableField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_cbPendingReliable"); }
	int& m_cbSentUnackedReliableField() { return *GetNativePointerField<int*>(this, "SteamNetworkingQuickConnectionStatus.m_cbSentUnackedReliable"); }
	__int64& m_usecQueueTimeField() { return *GetNativePointerField<__int64*>(this, "SteamNetworkingQuickConnectionStatus.m_usecQueueTime"); }
};

