#pragma once

#include "BaseDeclarations.h"
#include "AOnlineBeacon.h"

struct AOnlineBeaconClient : AOnlineBeacon
{
	char __padding[0x8L];

	// Functions

	void ClientOnConnected_Implementation() { NativeCall<void>(this, "AOnlineBeaconClient.ClientOnConnected_Implementation"); }
	void DestroyBeacon() { NativeCall<void>(this, "AOnlineBeaconClient.DestroyBeacon"); }
	bool InitClient(FURL * URL) { return NativeCall<bool, FURL *>(this, "AOnlineBeaconClient.InitClient", URL); }
	void NotifyControlMessage(UNetConnection * Connection, char MessageType, FInBunch * Bunch) { NativeCall<void, UNetConnection *, char, FInBunch *>(this, "AOnlineBeaconClient.NotifyControlMessage", Connection, MessageType, Bunch); }
	void OnNetCleanup(UNetConnection * Connection) { NativeCall<void, UNetConnection *>(this, "AOnlineBeaconClient.OnNetCleanup", Connection); }
	void ClientOnConnected() { NativeCall<void>(this, "AOnlineBeaconClient.ClientOnConnected"); }
};

