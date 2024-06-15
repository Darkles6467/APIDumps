#pragma once

#include "BaseDeclarations.h"
#include "UNetConnection.h"
#include "UPlayer.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UIpConnection : UNetConnection
{
	char __padding[0x20L];

	// Functions

	int GetAddrAsInt() { return NativeCall<int>(this, "UIpConnection.GetAddrAsInt"); }
	FString * GetAddrAsString(FString * result) { return NativeCall<FString *, FString *>(this, "UIpConnection.GetAddrAsString", result); }
	int GetAddrPort() { return NativeCall<int>(this, "UIpConnection.GetAddrPort"); }
	void InitBase(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, EConnectionState, int, int>(this, "UIpConnection.InitBase", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	void InitLocalConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, EConnectionState, int, int>(this, "UIpConnection.InitLocalConnection", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	void InitRemoteConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, FInternetAddr * InRemoteAddr, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, FInternetAddr *, EConnectionState, int, int>(this, "UIpConnection.InitRemoteConnection", InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead); }
	FString * LowLevelDescribe(FString * result) { return NativeCall<FString *, FString *>(this, "UIpConnection.LowLevelDescribe", result); }
	FString * LowLevelGetRemoteAddress(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "UIpConnection.LowLevelGetRemoteAddress", result, bAppendPort); }
	void LowLevelSend(void * InData, int Count) { NativeCall<void, void *, int>(this, "UIpConnection.LowLevelSend", InData, Count); }
};

struct USteamNetConnection : UIpConnection
{
	char __padding[0x8L];
	bool& bIsPassthroughField() { return *GetNativePointerField<bool*>(this, "USteamNetConnection.bIsPassthrough"); }
	bool& bForceSteamSocketsField() { return *GetNativePointerField<bool*>(this, "USteamNetConnection.bForceSteamSockets"); }

	// Functions

	int BattlEye_GetAddrAsInt() { return NativeCall<int>(this, "USteamNetConnection.BattlEye_GetAddrAsInt"); }
	void CleanUp() { NativeCall<void>(this, "USteamNetConnection.CleanUp"); }
	void DumpSteamConnection() { NativeCall<void>(this, "USteamNetConnection.DumpSteamConnection"); }
	void InitLocalConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, EConnectionState, int, int>(this, "USteamNetConnection.InitLocalConnection", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	void InitRemoteConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, FInternetAddr * InRemoteAddr, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, FInternetAddr *, EConnectionState, int, int>(this, "USteamNetConnection.InitRemoteConnection", InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead); }
};

