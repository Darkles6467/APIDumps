#pragma once

#include "BaseDeclarations.h"
#include "UIpNetDriver.h"
#include "UNetDriver.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USteamNetDriver : UIpNetDriver
{
	char __padding[0x18L];
	long double& ConnectionDumpIntervalField() { return *GetNativePointerField<long double*>(this, "USteamNetDriver.ConnectionDumpInterval"); }
	long double& ConnectionDumpCounterField() { return *GetNativePointerField<long double*>(this, "USteamNetDriver.ConnectionDumpCounter"); }
	bool& bIsPassthroughField() { return *GetNativePointerField<bool*>(this, "USteamNetDriver.bIsPassthrough"); }
	bool& bForceSteamSocketsField() { return *GetNativePointerField<bool*>(this, "USteamNetDriver.bForceSteamSockets"); }

	// Functions

	unsigned __int64 GetLocalSteamID() { return NativeCall<unsigned __int64>(this, "USteamNetDriver.GetLocalSteamID"); }
	bool InitBase(bool bInitAsClient, FNetworkNotify * InNotify, const FURL * URL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, bool, FNetworkNotify *, const FURL *, bool, FString *>(this, "USteamNetDriver.InitBase", bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error); }
	bool InitConnect(FNetworkNotify * InNotify, const FURL * ConnectURL, FString * Error) { return NativeCall<bool, FNetworkNotify *, const FURL *, FString *>(this, "USteamNetDriver.InitConnect", InNotify, ConnectURL, Error); }
	bool InitListen(FNetworkNotify * InNotify, FURL * ListenURL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, FNetworkNotify *, FURL *, bool, FString *>(this, "USteamNetDriver.InitListen", InNotify, ListenURL, bReuseAddressAndPort, Error); }
	bool IsAvailable() { return NativeCall<bool>(this, "USteamNetDriver.IsAvailable"); }
	bool IsNetResourceValid() { return NativeCall<bool>(this, "USteamNetDriver.IsNetResourceValid"); }
	void PostInitProperties() { NativeCall<void>(this, "USteamNetDriver.PostInitProperties"); }
	void Shutdown() { NativeCall<void>(this, "USteamNetDriver.Shutdown"); }
	void TickFlush(float DeltaSeconds) { NativeCall<void, float>(this, "USteamNetDriver.TickFlush", DeltaSeconds); }
	bool UsingSteamSockets() { return NativeCall<bool>(this, "USteamNetDriver.UsingSteamSockets"); }
};

