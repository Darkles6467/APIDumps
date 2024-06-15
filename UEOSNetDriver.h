#pragma once

#include "BaseDeclarations.h"
#include "UIpNetDriver.h"
#include "UNetDriver.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEOSNetDriver : UIpNetDriver
{

	// Functions

	bool InitBase(bool bInitAsClient, FNetworkNotify * InNotify, const FURL * URL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, bool, FNetworkNotify *, const FURL *, bool, FString *>(this, "UEOSNetDriver.InitBase", bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error); }
	bool InitConnect(FNetworkNotify * InNotify, const FURL * ConnectURL, FString * Error) { return NativeCall<bool, FNetworkNotify *, const FURL *, FString *>(this, "UEOSNetDriver.InitConnect", InNotify, ConnectURL, Error); }
	bool InitListen(FNetworkNotify * InNotify, FURL * ListenURL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, FNetworkNotify *, FURL *, bool, FString *>(this, "UEOSNetDriver.InitListen", InNotify, ListenURL, bReuseAddressAndPort, Error); }
	bool IsAvailable() { return NativeCall<bool>(this, "UEOSNetDriver.IsAvailable"); }
	bool IsNetResourceValid() { return NativeCall<bool>(this, "UEOSNetDriver.IsNetResourceValid"); }
	void PostInitProperties() { NativeCall<void>(this, "UEOSNetDriver.PostInitProperties"); }
	void Shutdown() { NativeCall<void>(this, "UEOSNetDriver.Shutdown"); }
	void TickFlush(float DeltaSeconds) { NativeCall<void, float>(this, "UEOSNetDriver.TickFlush", DeltaSeconds); }
};

